<?php
class eurekosClient
{
    private $client_id = null;
    private $client_secret = null;
    private $endpointUrl = null;
    private $accessToken = null;
    private $expireTime = null;
    private $lastQuerytime = null;
    private $lastResponse = null;
    private $authPath = "/oauth2/token";
    private $server_url = null;
    private $lastScope = "";
    private $lastAccessResponse = null;

    public function __construct($client_id,$client_secret,$server_url)
    {
        $this->client_id = $client_id;
        $this->client_secret = $client_secret;
        $this->server_url = $server_url;
    }
    private function doRequest($resourcePath,$method,$scope,$params = array(),$headers = array())
    {
        $url = $this->server_url . $resourcePath;
        if(is_array($params))
        {
            $query = drupal_http_build_query($params);
        }
        else{
            $query = $params;
        }
        
        $options = array();

        $options['data'] = $query;
        
        
        $options['headers'] = $headers;
        $options['method'] = $method;
        if(!isset($options['headers']['Content-Type'] ))
        {
            $options['headers']['Content-Type'] = 'application/x-www-form-urlencoded';
        }
        //set the auth token for the quest.
        $token = $this->getToken($scope);
        $options['headers']['Authorization'] = "Bearer " . $token;
        
        $this->lastResponse = drupal_http_request($url,$options);
        if($this->lastResponse->code != 200 && $this->lastResponse->code != 201)
        {
            //handle request error gracefully here.
            return array();
        }
        //return the data;
        return json_decode($this->lastResponse->data);
    }
    private function getToken($scope)
    {
        if(!$this->tokenExpired() && $scope == $this->lastScope)
        {
            return $this->lastAccessResponse->access_token;
        }
        $this->lastScope = $scope;
        $options = array();
        $data = array();


        $options['headers']['Content-Type'] = 'application/x-www-form-urlencoded';
        $options["data"]['grant_type'] = 'client_credentials';
        $options["data"]['client_id'] = $this->client_id;
        $options["data"]['client_secret'] = $this->client_secret;
        $options["data"]['scope'] = $scope;

        $options['data'] = http_build_query($options["data"]);

        $options['method'] = 'POST';
        
        $response = drupal_http_request($this->server_url . $this->authPath,$options);
        if($response->code == 200)
        {
            $data = json_decode($response->data);
            if(isset($data->access_token))
            {
                $this->lastAccessResponse = $data;
                $this->expireTime = $data->expires_in;
                $this->lastScope = $scope;
                return $data->access_token;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
        

    }
    private function tokenExpired()
    {
        return true;
    }

    /*
    * User handling.
    */
    public function createUser($user)
    {
        //data={ "mail": "example@eurekos.com", "timezone": "Europe/Paris", "language": "da", "country": "dk", "phone": "454542534534", "first_name": "example", "last_name": "example"}'
        $resourcePath = "/api/v2/users";

        $wrapper = entity_metadata_wrapper('user', $account);
        $params['mail'] = $wrapper->mail;
        $params['timezone'] = "Europe/Paris";
        $params['language'] = "da";
        $params['country'] = "dk";
        $params['phone'] = $wrapper->phone;
        $params['first_name'] = $wrapper->first_name;
        $params['last_name'] = $wrapper->first_name;

        $company = $wrapper->field_library->value(); 
        $params['company'] = $company->title;

        module_load_include('module', 'cbib_oauth', 'cbib_oauth');
        $organization = cbib_oauth_map_organization_to_eurekos($company);
        if($organization == null)
        {
            //We could not map the organization ? should we do anything ? .
        }

        //Get the organization value , may need extra logic for non existing regions/organizations.
        $orgParamVal = array();
        foreach($organization as $key => $val)
        {
            if($val['eurekosId'] != null)
            {
                array_push($orgParamVal,$val['eurekosId']); 
            }
        }
        $params['organization'] = $orgParamVal;
        $result = $this->doRequest($resourcePath,'POST','users.create',$params);

        if(isset($result['uid']))
        {
            return true;
        }
        return false;
    }
    public function updateUser($email,$userData)
    {
        $user = $this->getUser($email);
        
        $resourcePath = "/api/v2/users";
        $params = array();
        $result = $this->doRequest($resourcePath,'PATCH','users.update.any',$userData);
    }
    public function deleteUser($email)
    {
        $user = $this->getUser($email);
        $resourcePath = "/api/v2/users";
        $params = array();
        $result = $this->doRequest($resourcePath,'DELETE','users.delete.any',$params);
    }
    public function getUserByMail($email)
    {
        $resourcePath = "/api/v2/users?search=".$email;
        $params = array();
        $result = $this->doRequest($resourcePath,'GET','users.read.all',$params);
        $user = reset($result->data);
        if(isset($user->uid))
        {
            return $user;
        }
        return null;
    }
    /*
    * Accepts array also for getting multiple users.
    */
    public function getUserById($id)
    {
        if(is_array($id))
        {
            $resourcePath = "/api/v2/users/".implode(', ',$id);
        }
        else{
            $resourcePath = "/api/v2/users/".$id;
        }
        
        $params = array();
        $result = $this->doRequest($resourcePath,'GET','users.read',$params);
        $user = $result->data;
        if(isset($user->uid) || is_array($user))
        {
            return $user;
        }
        return null;
    }

    /*
    * Activitys handling
    */
    public function searchActivities($searchKey)
    {
        //$user = $this->getUser('tfpet@odense.dk');
        $resourcePath = "/api/v2/activities?search=".$searchKey; 
        $params = array();
        if($searchKey != null)
        {
            $params['search'] = $searchKey;
        }
        $result = $this->doRequest($resourcePath,'GET','activities.read.any',$params);
        
        //Enrich with course information ?

        return $result;
    }
    public function getActivity($id)
    {
        if(!isset($id) || empty($id))
        {
            return null;
        }
        $resourcePath = "/api/v2/activities/".$id; 
        $params = array();

        $result = $this->doRequest($resourcePath,'GET','activities.read.any',$params);

        return $result;
    }

    /*
    * Locations
    */
    public function getLocationById($id)
    {
        $resourcePath = "/api/v2/locations/".$id;
        $params = array();
        $result = $this->doRequest($resourcePath,'GET','locations.read.any',$params);
        $location = $result->data;
        if(isset($location->id))
        {
            return $location;
        }
        return null;
    }
    /*
    * Courses
    */
    public function getCourseById($id)
    {
        if(is_array($id))
        {
            $resourcePath = "/api/v2/courses/".implode(', ',$id);
        }
        else{
            $resourcePath = "/api/v2/courses/".$id;
        }
        $params = array();
        $result = $this->doRequest($resourcePath,'GET','courses.read',$params);
        $course = $result->data;
        if(isset($course->nid))
        {
            return $course;
        }
        return null;
    }
    /*
    * activtiy sign-up
    */
    public function signUpUser($userId,$activityId)
    {   
        $author = 37531;
        $resourcePath = "/api/v2/signups/";
        $params = array('author' => $author,'activity' => $activityId,'user' => $userId);

        $result = $this->doRequest($resourcePath,'POST','signups.create',json_encode($params));
        $signup = $result->data;
        if(isset($signup->id))
        {
            return $signup;
        }
        return null;

    }
    public function getSignUp($userId,$activityId)
    {
        $resourcePath = "/api/v2/signups/";
        $params = array('activity' => $activityId,'user' => $userId);

        $result = $this->doRequest($resourcePath,'GET','signups.read.any',$params);
        $signup = is_array($result->data) ? reset($result->data) : $result->data;
        if(isset($signup->id))
        {
            return $signup;
        }
        return null;
    }
    public function delSignUp($signUpId)
    {
        $resourcePath = "/api/v2/signups/" . $signUpId;
        $params = array();

        $result = $this->doRequest($resourcePath,'DELETE','signups.delete.any',$params);
       
    }
    public function updateSignUp($signUpId,$status)
    {
        $resourcePath = "/api/v2/signups/" .$signUpId;
        $params = array("status" => $status);

        $result = $this->doRequest($resourcePath,'PATCH','signups.update.any',json_encode($params));
    }

}
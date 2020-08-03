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
        if($method == "GET")
        {
            if(sizeof($params) != null)
            {
                $url .= "?" .drupal_http_build_query($params);
            }
        }
        else{
            $options['data'] = $query;
        }
        
        
        
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

        $wrapper = entity_metadata_wrapper('user', $user);

        //check if user already exists..should never happen :)
        $user = $this->getUserByMail($wrapper->mail);
        if(!isset($user->uid))
        {
            $params['mail'] = $wrapper->mail->value();
            $params['timezone'] = "Europe/Copenhagen";
            $params['language'] = "da";
            $params['country'] = "dk";
            $params['phone'] = $wrapper->field_phone->value();
            $params['first_name'] = $wrapper->field_name_first->value();
            $params['last_name'] = $wrapper->field_name_last->value();

            $company = $wrapper->field_library->value(); 
            if(isset($company->title))
            {
                $company_tid = $this->getTermid($company->title,'workplaces');
                $params['workplace'] = array($company_tid);
            }
            else
            {
                $alternate_work_place = $wrapper->field_alternate_work->value();
                $tid = $this->getTermid($alternate_work_place,'workplaces');
                if($tid != null)
                {
                    $params['workplace'] = array($tid);
                }
                else{
                    $params['workplace'] = array($tid);
                }
                
            }

            $organization = $this->getCbReqion($company);
            $organization_tid = $this->getTermid(ucfirst($organization['title']),'departments');
            $params['department'] = array($organization_tid);

            $result = $this->doRequest($resourcePath,'POST','users.create',json_encode($params));

            if(isset($result->data->uid))
            {
                return $result->data;
            }
        }
        return false;
    }
    public function updateUser($email,$userData)
    {
        $user = $this->getUserByMail($email);
        if(isset($user->uid))
        {
            $resourcePath = "/api/v2/users/" . $user->uid;
            $params = array();
            $wrapper = entity_metadata_wrapper('user', $userData);
            $params['mail'] = $wrapper->mail->value();
            $params['timezone'] = "Europe/Copenhagen";
            $params['language'] = "da";
            $params['country'] = "dk";
            $params['phone'] = $wrapper->field_phone->value();
            $params['first_name'] = $wrapper->field_name_first->value();
            $params['last_name'] = $wrapper->field_name_last->value();

            $company = $wrapper->field_library->value(); 
            if(isset($company->title))
            {
                $company_tid = $this->getTermid($company->title,'workplaces');
                $params['workplace'] = array($company_tid);
            }
            else
            {
                $alternate_work_place = $wrapper->field_alternate_work->value();
                if($alternate_work_place != null)
                {
                    $tid = $this->getTermid($alternate_work_place,'workplaces');
                    if($tid != null)
                    {
                        $params['workplace'] = array($tid);
                    }
                    else{
                        $claims['workplace'] = null;
                    }
                }
                
            }

            $organization = $this->getCbReqion($company);
            $organization_tid = $this->getTermid(ucfirst($organization['title']),'departments');
            $params['department'] = array($organization_tid);
            
            $result = $this->doRequest($resourcePath,'PATCH','users.update.any',json_encode($params));
        }
        else
        {
            return null;
        }
    }
    private function getCbReqion($company)
    {
        if($company == null)
        {
          return null;
        }

        $wrapper = entity_metadata_wrapper('node', $company);
        $cb_region = $wrapper->field_centralbibliotek_ref->value();
        $title = "";
        if(is_array($cb_region))
        {
        $title = strtolower($cb_region[0]->title);
        }
        else{
        $title = strtolower($cb_region->title);
        }
        return ['title' => $title,'obj' => $cb_region];
    }
    public function deleteUser($email)
    {
        if(isset($user->uid))
        {
            $user = $this->getUserByMail($email);
            $resourcePath = "/api/v2/users/" . $user->uid;
            $params = array();
            $result = $this->doRequest($resourcePath,'DELETE','users.delete.any',$params);
        }
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
    public function searchActivities($searchKey,$status = null)
    {
        //$user = $this->getUser('tfpet@odense.dk');
        $resourcePath = "/api/v2/activities?search=".$searchKey;
        if($status != null)
        {
            $resourcePath .= "&status=".$status;
        } 
        $params = array();
        /*if($searchKey != null)
        {
            $params['search'] = $searchKey;
        }*/
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
            $resourcePath = "/api/v2/courses/".implode(',',$id);
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
        elseif(is_array($course) && sizeof($course) > 0)
        {
            return $course[0];
        }
        return null;
    }
    /*
    * activtiy sign-up
    */
    public function signUpUser($userId,$activityId)
    {   
        $author = 37680;
        $resourcePath = "/api/v2/signups/";
        $params = array('author' => (int)$author,'activity' => (int)$activityId,'user' => (int)$userId);

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
        $params = array('activity' => (int)$activityId,'user' => (int)$userId);

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
    /*
    * returns a single term-id.
    */
    public function getTermid($term,$taxonomy)
    {
        $resourcePath = "/api/v2/taxonomy_terms";
        $params = array("search" => $term,'machine_name' => $taxonomy);

        $result = $this->doRequest($resourcePath,'GET','taxonomy_terms.read',$params);
        $termdata = is_array($result->data) ? reset($result->data) : $result->data;
        if(isset($termdata->tid))
        {
            return $termdata->tid;
        }
        return null;
        
    }
    /*
    * Delete a termid
    */
    public function delTerm($tid)
    {
        $resourcePath = "/api/v2/taxonomy_terms/" . $tid;
        $params = array();

        $result = $this->doRequest($resourcePath,'DELETE','taxonomy_terms.delete.any',$params);
    }
    /*
    * Gets all objects for a term search.
    */
    public function getTerms($term,$taxonomy)
    {
        $resourcePath = "/api/v2/taxonomy_terms";
        $params = array("search" => $term,'machine_name' => $taxonomy);

        $result = $this->doRequest($resourcePath,'GET','taxonomy_terms.read',$params);
        $termdata = is_array($result->data) ? $result->data : $result->data;
        if(isset($termdata))
        {
            return $termdata;
        }
        return null;
    }
    /*
    * Creates a term.
    */
    public function createTerm($term,$taxonomy)
    {
        $resourcePath = "/api/v2/taxonomy_terms";
        $params = array('bundle' => $taxonomy,'name' => $term,'weight' => 0,'description' => '');

        $result = $this->doRequest($resourcePath,'POST','taxonomy_terms.create',json_encode($params));
        $signup = $result->data;
        if(isset($signup))
        {
            return $signup;
        }
        return null;
    }
    /*
    * Get all the terms for a taxonomy.
    */
    public function getAllterms($taxonomy)
    {
        $resourcePath = "/api/v2/taxonomy_terms";
        $params = array('machine_name' => $taxonomy);
        //$params = array();
        $result = $this->doRequest($resourcePath,'GET','taxonomy_terms.read',$params);
        $termdata = isset($result->data) ? $result->data : null;
        if(isset($termdata))
        {
            if($result->meta->totalPages > 1)
            {
                $count = 1; //start at page 1.
                while($count <= ($result->meta->totalPages) )
                {
                    $params['page'] = $count;

                    $return = $this->doRequest($resourcePath,'GET','taxonomy_terms.read',$params);
                    $termdata = array_merge($termdata,$return->data);
                    $count++;
                }
            }
            return $termdata;
        }
        return null;
    }

}
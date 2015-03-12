<?php

/**
 * @file
 * Home of the FeedsHTTPFetcher and related classes.
 */

/**
 * Result of FeedsCbibAPIFetcher::fetch().
 */
class FeedsCbibAPIFetcherResult extends FeedsFetcherResult {
  protected $url;
  protected $api_key;
  protected $method;
  protected $file_path;
  protected $timeout;

  public static function factory($url, $api_key, $method) {
    switch ($method) {
      case 'agreements':
        $class = 'FeedsCbibAPIFetcherResultAgreements';
        break;

      case 'members':
        $class = 'FeedsCbibAPIFetcherResultMembers';
        break;

      default:
        throw new RuntimeException(t('Unknown method: %method', array('%method' => $method)));
    }
    return new $class($url, $api_key, $method);
  }

  /**
   * Constructor.
   */
  public function __construct($url, $api_key, $method) {
    $this->url = $url;
    $this->api_key = $api_key;
    $this->method = $method;
    parent::__construct('');
  }

  protected function prepareRawFeed($url) {
    $options = array(
      'headers' => array(
        'Accept' => 'application/json',
        'x-api-key' => $this->api_key,
      ),
    );
    if ($this->timeout) {
      $options['timeout'] = $this->timeout;
    }

    return array($url, $options);
  }

  /**
   * Overrides FeedsFetcherResult::getRaw();
   */
  public function getRaw() {
    $url = rtrim($this->url, '/') . '/' . $this->method;
    $cache_key = "erms_method:" . md5($url);
    if ($cache = cache_get($cache_key)) {
      return $cache->data;
    }
    list($url, $options) = $this->prepareRawFeed($url);

    $result = drupal_http_request($url, $options);

    if (!in_array($result->code, array(200, 201, 202, 203, 204, 205, 206))) {
      throw new Exception(t('Download of @url failed with code !code.', array('@url' => $url, '!code' => $result->code)));
    }

    $this->postProcessRaw($result->data);
    $result = $this->sanitizeRaw($result->data);
    $lifetime = variable_get('erms_feed_cache_lifetime', 3600);
    if ($lifetime) {
      cache_set($cache_key, $result, 'cache', time() + $lifetime);
    }
    return $result;
  }

  public function getTimeout() {
    return $this->timeout;
  }

  public function setTimeout($timeout) {
    $this->timeout = $timeout;
  }

  public function postProcessRaw(&$raw) {}
}

/**
 * Result of FeedsCbibAPIFetcher::fetch().
 */
class FeedsCbibAPIFetcherResultAgreements extends FeedsCbibAPIFetcherResult {
  public function postProcessRaw(&$raw) {
    $raw = $this->sanitizeRaw($raw);
    $data = drupal_json_decode($raw);
    if (!$data || !isset($data['response'])) {
      throw new Exception(t('Invalid response from @url. Response: @response', array('@url' => $url, '@response' => $raw)));
    }
    $processes = array();
    foreach ($data['response'] as &$response) {
      if ($response['subscribers']) {
        $url = rtrim($this->url, '/') . '/agreement/' . $response['id'];
        list($url, $options) = $this->prepareRawFeed($url);
        $options += array('postpone' => TRUE, 'callback' => function ($result) use (&$response) {
          $subscribers = drupal_json_decode($this->sanitizeRaw($result->data));
          $response['subscribers'] = $subscribers['response']['subscribers'];
        });
        $processes[] = background_process_http_request($url, $options);
      }
    }
    background_process_http_request_process($processes, array('limit' => 10));
    $raw = drupal_json_encode($data);
  }
}

/**
 * Result of FeedsCbibAPIFetcher::fetch().
 */
class FeedsCbibAPIFetcherResultMembers extends FeedsCbibAPIFetcherResult {
  public function postProcessRaw(&$raw) {
  }
}

/**
 * Fetches data via the Cbib API.
 */
class FeedsCbibAPIFetcher extends FeedsFetcher {

  /**
   * Implements FeedsFetcher::fetch().
   */
  public function fetch(FeedsSource $source) {
    $fetcher_result = FeedsCbibAPIFetcherResult::factory($this->config['source'], $this->config['api_key'], $this->config['method']);
    // When request_timeout is empty, the global value is used.
    $fetcher_result->setTimeout($this->config['request_timeout']);
    return $fetcher_result;
  }

  /**
   * Implements FeedsFetcher::request().
   */
  public function request($feed_nid = 0) {
    feeds_dbg($_GET);
    @feeds_dbg(file_get_contents('php://input'));
    try {
      feeds_source($this->id, $feed_nid)->existing()->import();
    }
    catch (Exception $e) {
      // In case of an error, respond with a 503 Service (temporary) unavailable.
      header('HTTP/1.1 503 "Not Found"', NULL, 503);
      drupal_exit();
    }
    // Will generate the default 200 response.
    header('HTTP/1.1 200 "OK"', NULL, 200);
    drupal_exit();
  }

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'api_key' => '',
      'request_timeout' => NULL,
      'source' => '',
      'method' => 'agreements',
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['source'] = array(
      '#type' => 'textfield',
      '#title' => t('URL'),
      '#description' => t('Enter a feed URL.'),
      '#default_value' => $this->config['source'],
      '#maxlength' => NULL,
      '#required' => TRUE,
    );
    $form['method'] = array(
      '#type' => 'select',
      '#title' => t('Method'),
      '#description' => t('Method.'),
      '#options' => array(
        'agreements' => t('Agreements'),
        'members' => t('Members'),
      ),
      '#default_value' => $this->config['method'],
    );
    $form['api_key'] = array(
      '#type' => 'textfield',
      '#title' => t('API Key'),
      '#description' => t('The API key to use for the Cbib API service.'),
      '#default_value' => $this->config['api_key'],
    );
   // Per importer override of global http request timeout setting.
   $form['request_timeout'] = array(
     '#type' => 'textfield',
     '#title' => t('Request timeout'),
     '#description' => t('Timeout in seconds to wait for an HTTP get request to finish.</br>' .
                         '<b>Note:</b> this setting will override the global setting.</br>' .
                         'When left empty, the global value is used.'),
     '#default_value' => $this->config['request_timeout'],
     '#element_validate' => array('element_validate_integer_positive'),
     '#maxlength' => 3,
     '#size'=> 30,
   );
    return $form;
  }
}

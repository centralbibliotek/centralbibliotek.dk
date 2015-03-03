<?php

/**
 * @file
 * Home of the FeedsHTTPFetcher and related classes.
 */

feeds_include_library('PuSHSubscriber.inc', 'PuSHSubscriber');

/**
 * Result of FeedsHTTPFetcher::fetch().
 */
class FeedsCbibAPIFetcherResult extends FeedsFetcherResult {
  protected $url;
  protected $file_path;
  protected $timeout;

  /**
   * Constructor.
   */
  public function __construct($url = NULL, $api_key) {
    $this->url = $url;
    $this->api_key = $api_key;
    parent::__construct('');
  }

  /**
   * Overrides FeedsFetcherResult::getRaw();
   */
  public function getRaw() {
    feeds_include_library('http_request.inc', 'http_request');
    //$result = http_request_get($this->url, NULL, NULL, NULL, $this->timeout);
    $options = array(
      'headers' => array(
        'Accept' => 'application/json',
        'x-api-key' => $this->api_key,
      ),
    );
    if ($this->timeout) {
      $options['timeout'] = $this->timeout;
    }
    $result = drupal_http_request($this->url, $options);
    error_log(print_r($result, TRUE));
    if (!in_array($result->code, array(200, 201, 202, 203, 204, 205, 206))) {
      throw new Exception(t('Download of @url failed with code !code.', array('@url' => $this->url, '!code' => $result->code)));
    }
    return $this->sanitizeRaw($result->data);
  }

  public function getTimeout() {
    return $this->timeout;
  }

  public function setTimeout($timeout) {
    $this->timeout = $timeout;
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
    $source_config = $source->getConfigFor($this);

    $fetcher_result = new FeedsCbibAPIFetcherResult($source_config['source'], $this->config['api_key']);
    // When request_timeout is empty, the global value is used.
    $fetcher_result->setTimeout($this->config['request_timeout']);
    return $fetcher_result;
  }

  /**
   * Clear caches.
   */
  public function clear(FeedsSource $source) {
    $source_config = $source->getConfigFor($this);
    $url = $source_config['source'];
    feeds_include_library('http_request.inc', 'http_request');
    http_request_clear_cache($url);
  }

  /**
   * Implements FeedsFetcher::request().
   */
  public function request($feed_nid = 0) {
    feeds_dbg($_GET);
    @feeds_dbg(file_get_contents('php://input'));
    // A subscription verification has been sent, verify.
    if (isset($_GET['hub_challenge'])) {
      $this->subscriber($feed_nid)->verifyRequest();
    }
    // No subscription notification has ben sent, we are being notified.
    else {
      try {
        feeds_source($this->id, $feed_nid)->existing()->import();
      }
      catch (Exception $e) {
        // In case of an error, respond with a 503 Service (temporary) unavailable.
        header('HTTP/1.1 503 "Not Found"', NULL, 503);
        drupal_exit();
      }
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
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
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

  /**
   * Expose source form.
   */
  public function sourceForm($source_config) {
    $form = array();
    $form['source'] = array(
      '#type' => 'textfield',
      '#title' => t('URL'),
      '#description' => t('Enter a feed URL.'),
      '#default_value' => isset($source_config['source']) ? $source_config['source'] : '',
      '#maxlength' => NULL,
      '#required' => TRUE,
    );
    return $form;
  }

  /**
   * Override parent::sourceFormValidate().
   */
  public function sourceFormValidate(&$values) {
    /*
    $values['source'] = trim($values['source']);

    if (!feeds_valid_url($values['source'], TRUE)) {
      $form_key = 'feeds][' . get_class($this) . '][source';
      form_set_error($form_key, t('The URL %source is invalid.', array('%source' => $values['source'])));
    }
    elseif ($this->config['auto_detect_feeds']) {
      feeds_include_library('http_request.inc', 'http_request');
      if ($url = http_request_get_common_syndication($values['source'])) {
        $values['source'] = $url;
      }
    }
    */
  }

  /**
   * Override sourceSave() - subscribe to hub.
   */
  public function sourceSave(FeedsSource $source) {
      /*
    }
    if ($this->config['use_pubsubhubbub']) {
      // If this is a feeds node we want to delay the subscription to
      // feeds_exit() to avoid transaction race conditions.
      if ($source->feed_nid) {
        $job = array('fetcher' => $this, 'source' => $source);
        feeds_set_subscription_job($job);
      }
      else {
        $this->subscribe($source);
      }
    }
      */
  }

  /**
   * Override sourceDelete() - unsubscribe from hub.
   */
  public function sourceDelete(FeedsSource $source) {
      /*
    if ($this->config['use_pubsubhubbub']) {
      // If we're in a feed node, queue the unsubscribe,
      // else process immediately.
      if ($source->feed_nid) {
        $job = array(
          'type' => $source->id,
          'id' => $source->feed_nid,
          'period' => 0,
          'periodic' => FALSE,
        );
        JobScheduler::get('feeds_push_unsubscribe')->set($job);
      }
      else {
        $this->unsubscribe($source);
      }
    }
      */
  }
}

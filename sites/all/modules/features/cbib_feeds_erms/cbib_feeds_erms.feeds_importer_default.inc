<?php
/**
 * @file
 * cbib_feeds_erms.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cbib_feeds_erms_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'libraries';
  $feeds_importer->config = array(
    'name' => 'Biblioteker',
    'description' => 'Biblioteker',
    'fetcher' => array(
      'plugin_key' => 'FeedsCbibAPIFetcher',
      'config' => array(
        'api_key' => 'cd08c4c4316d',
        'request_timeout' => '',
        'source' => 'https://library-erms.com/api',
        'method' => 'members',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(
          'id' => array(
            'name' => 'ID',
            'value' => 'isil',
            'debug' => 0,
            'weight' => '0',
          ),
          'title' => array(
            'name' => 'Title',
            'value' => 'name',
            'debug' => 0,
            'weight' => '1',
          ),
          'isil' => array(
            'name' => 'ISIL',
            'value' => 'isil',
            'debug' => 0,
            'weight' => '2',
          ),
          'parent' => array(
            'name' => 'Parent',
            'value' => 'parent_isil',
            'debug' => 0,
            'weight' => '3',
          ),
        ),
        'context' => array(
          'value' => '$.response.*',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'isil',
            'target' => 'field_library_no',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'parent',
            'target' => 'field_centralbibliotek_ref:field:node:centralbibliotek:field_agency',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'library',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['libraries'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'licenses';
  $feeds_importer->config = array(
    'name' => 'Licenser',
    'description' => 'Licenser',
    'fetcher' => array(
      'plugin_key' => 'FeedsCbibAPIFetcher',
      'config' => array(
        'api_key' => 'cd08c4c4316d',
        'request_timeout' => '',
        'source' => 'https://library-erms.com/api',
        'method' => 'agreements',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(
          'id' => array(
            'name' => 'ID',
            'value' => 'id',
            'debug' => 0,
            'weight' => '0',
          ),
          'title' => array(
            'name' => 'Title',
            'value' => 'name',
            'debug' => 0,
            'weight' => '1',
          ),
          'start_date' => array(
            'name' => 'Start date',
            'value' => 'start_date',
            'debug' => 0,
            'weight' => '2',
          ),
          'end_date' => array(
            'name' => 'End date',
            'value' => 'end_date',
            'debug' => 0,
            'weight' => '3',
          ),
          'libraries' => array(
            'name' => 'Libraries',
            'value' => 'subscribers.*.member_isil',
            'debug' => 0,
            'weight' => '4',
          ),
        ),
        'context' => array(
          'value' => '$.response.*',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'start_date',
            'target' => 'field_license_periode:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'end_date',
            'target' => 'field_license_periode:end',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'libraries',
            'target' => 'field_library_ref',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'license',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['licenses'] = $feeds_importer;

  return $export;
}

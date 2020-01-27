<?php
/**
 * @file
 * cbib_feeds_erms.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function cbib_feeds_erms_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'libraries-id-sprintf';
  $feeds_tamper->importer = 'libraries';
  $feeds_tamper->source = 'id';
  $feeds_tamper->plugin_id = 'sprintf';
  $feeds_tamper->settings = array(
    'format' => 'ERMS-LIBRARY-%s',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'ERMS Library GUID';
  $export['libraries-id-sprintf'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'libraries-parent-find_replace';
  $feeds_tamper->importer = 'libraries';
  $feeds_tamper->source = 'parent';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'DK-',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['libraries-parent-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-databroend-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'databroend';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Convert to boolean';
  $export['licenses-databroend-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-id-sprintf';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'id';
  $feeds_tamper->plugin_id = 'sprintf';
  $feeds_tamper->settings = array(
    'format' => 'ERMS-LICENSE-%s',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'ERMS License GUID';
  $export['licenses-id-sprintf'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-libraries-sprintf';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'libraries';
  $feeds_tamper->plugin_id = 'sprintf';
  $feeds_tamper->settings = array(
    'format' => 'ERMS-LIBRARY-%s',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'ERMS Library GUID';
  $export['licenses-libraries-sprintf'] = $feeds_tamper;

  return $export;
}

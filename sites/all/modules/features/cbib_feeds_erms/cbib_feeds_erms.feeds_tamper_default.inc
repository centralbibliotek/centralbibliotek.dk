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

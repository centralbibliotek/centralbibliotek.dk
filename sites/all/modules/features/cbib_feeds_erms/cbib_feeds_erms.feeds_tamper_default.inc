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
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
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
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
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
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-license_ip-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'license_ip';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-license_metadata-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'license_metadata';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-license_password-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'license_password';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-license_print_member-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'license_print_member';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-license_print_user-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'license_print_user';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-license_remote-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'license_remote';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-license_save_member-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'license_save_member';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  
  $export[$feeds_tamper->id] = $feeds_tamper;
  
  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'licenses-license_save_user-convert_boolean';
  $feeds_tamper->importer = 'licenses';
  $feeds_tamper->source = 'license_save_user';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  
  $export[$feeds_tamper->id] = $feeds_tamper;

  return $export;
}

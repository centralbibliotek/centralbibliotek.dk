<?php
/**
 * @file
 * cbib_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cbib_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_centralbibliotek';
  $strongarm->value = '0';
  $export['language_content_type_centralbibliotek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_centralbibliotek';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_centralbibliotek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_centralbibliotek';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_centralbibliotek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_centralbibliotek';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_centralbibliotek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_centralbibliotek';
  $strongarm->value = '1';
  $export['node_preview_centralbibliotek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_centralbibliotek';
  $strongarm->value = 0;
  $export['node_submitted_centralbibliotek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'no-reply@centralbibliotek.dk';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Centralbibliotek.dk';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'watchdog_filtering_default_severity';
  $strongarm->value = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $export['watchdog_filtering_default_severity'] = $strongarm;

  return $export;
}

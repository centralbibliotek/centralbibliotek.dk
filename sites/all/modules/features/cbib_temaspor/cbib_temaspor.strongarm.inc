<?php
/**
 * @file
 * cbib_temaspor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cbib_temaspor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_temaspor';
  $strongarm->value = '0';
  $export['language_content_type_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_temaspor';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_temaspor';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_temaspor';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_temaspor';
  $strongarm->value = '1';
  $export['node_preview_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_temaspor';
  $strongarm->value = 0;
  $export['node_submitted_temaspor'] = $strongarm;

  return $export;
}

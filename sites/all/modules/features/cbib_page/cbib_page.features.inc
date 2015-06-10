<?php
/**
 * @file
 * cbib_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cbib_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_strongarm_alter().
 */
function cbib_page_strongarm_alter(&$data) {
  if (isset($data['pathauto_node_page_pattern'])) {
    $data['pathauto_node_page_pattern']->value = ''; /* WAS: 'content/[node:title]' */
  }
}

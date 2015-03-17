<?php
/**
 * @file
 * cbib_nationale_projekter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_nationale_projekter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cbib_nationale_projekter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function cbib_nationale_projekter_default_page_manager_handlers_alter(&$data) {
  if (isset($data['term_view_panelizer'])) {
    $data['term_view_panelizer']->weight = -29; /* WAS: -100 */
  }
}

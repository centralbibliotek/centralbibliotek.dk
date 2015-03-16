<?php
/**
 * @file
 * cbib_license_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_license_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function cbib_license_pages_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context'])) {
    $data['node_view_panel_context']->weight = -28; /* WAS: -98 */
  }
  if (isset($data['node_view_panelizer'])) {
    $data['node_view_panelizer']->weight = -29; /* WAS: -100 */
  }
}

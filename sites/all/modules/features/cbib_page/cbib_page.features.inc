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
 * Implements hook_panelizer_defaults_override_alter().
 */
function cbib_page_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:page:default'])) {
    $data['node:page:default']->display->title_pane = 'new-71bb3922-c9c3-4855-bce6-400ebddea84c'; /* WAS: 0 */
  }
}

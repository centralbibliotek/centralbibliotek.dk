<?php
/**
 * @file
 * cbib_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

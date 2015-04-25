<?php
/**
 * @file
 * reload_jira_update.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reload_jira_update_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

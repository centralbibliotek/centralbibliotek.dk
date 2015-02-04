<?php
/**
 * @file
 * cbib_comments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_comments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

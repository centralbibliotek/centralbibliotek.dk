<?php
/**
 * @file
 * user_export.features.inc
 */

/**
 * Implements hook_views_api().
 */
function user_export_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

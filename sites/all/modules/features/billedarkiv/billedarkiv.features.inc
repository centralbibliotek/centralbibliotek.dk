<?php
/**
 * @file
 * billedarkiv.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function billedarkiv_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function billedarkiv_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function billedarkiv_node_info() {
  $items = array(
    'billedarkiv' => array(
      'name' => t('billedarkiv'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

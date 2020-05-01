<?php
/**
 * @file
 * cbib_project_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_project_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cbib_project_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cbib_project_pages_node_info() {
  $items = array(
    'projekt_sider' => array(
      'name' => t('Projekt sider'),
      'base' => 'node_content',
      'description' => t('Indhold sider til projekt styrings værktøjet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

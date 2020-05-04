<?php
/**
 * @file
 * cbib_project_pages_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_project_pages_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
function cbib_project_pages_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cbib_project_pages_feature_node_info() {
  $items = array(
    'projekt_sider' => array(
      'name' => t('Projekt sider'),
      'base' => 'node_content',
      'description' => t('Indhold sider til projekt styrings værktøjet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'projekt_sider_under_side' => array(
      'name' => t('Projekt sider under side'),
      'base' => 'node_content',
      'description' => t('Indholds blok til projekt sider.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

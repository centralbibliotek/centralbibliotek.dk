<?php
/**
 * @file
 * cbib_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cbib_features_node_info() {
  $items = array(
    'centralbibliotek' => array(
      'name' => t('Centralbibliotek'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

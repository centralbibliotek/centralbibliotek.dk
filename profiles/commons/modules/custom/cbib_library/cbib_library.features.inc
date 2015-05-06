<?php
/**
 * @file
 * cbib_library.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_library_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cbib_library_node_info() {
  $items = array(
    'library' => array(
      'name' => t('Bibliotek'),
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

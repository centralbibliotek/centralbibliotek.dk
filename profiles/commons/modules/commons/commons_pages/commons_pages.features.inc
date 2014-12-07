<?php
/**
 * @file
 * commons_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function commons_pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Side'),
      'base' => 'node_content',
      'description' => t('Brug <em>simple sider</em> til dit statiske indhold, som f.eks. en "om os"-side.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * cbib_nationale_projekter.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cbib_nationale_projekter_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_nationale-projekter:taxonomy/term/10
  $menu_links['main-menu_nationale-projekter:taxonomy/term/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/10',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Nationale projekter',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_nationale-projekter:taxonomy/term/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Nationale projekter');


  return $menu_links;
}

<?php
/**
 * @file
 * cbib_search.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cbib_search_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_arrangementer:search_api_events
  $menu_links['main-menu_arrangementer:search_api_events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search_api_events',
    'router_path' => 'search_api_events',
    'link_title' => 'Arrangementer',
    'options' => array(
      'identifier' => 'main-menu_arrangementer:search_api_events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Arrangementer');


  return $menu_links;
}

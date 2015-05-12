<?php
/**
 * @file
 * cbib_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cbib_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_grupper:groups
  $menu_links['main-menu_grupper:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Grupper',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_grupper:groups',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: main-menu_licenser:node/127
  $menu_links['main-menu_licenser:node/127'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/127',
    'router_path' => 'node/%',
    'link_title' => 'Licenser',
    'options' => array(
      'identifier' => 'main-menu_licenser:node/127',
    ),
    'module' => 'cbib_license_pages',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
  );
  // Exported menu link: main-menu_search:search
  $menu_links['main-menu_search:search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'main-menu_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Grupper');
  t('Licenser');
  t('Search');


  return $menu_links;
}

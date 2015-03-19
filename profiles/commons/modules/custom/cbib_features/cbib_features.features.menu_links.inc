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

  // Exported menu link: main-menu_arrangementer:events
  $menu_links['main-menu_arrangementer:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Arrangementer',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_arrangementer:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
  );
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
  // Exported menu link: main-menu_home:home
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
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
  // Exported menu link: main-menu_nyheder:news
  $menu_links['main-menu_nyheder:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'Nyheder',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_nyheder:news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
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
  t('Arrangementer');
  t('Grupper');
  t('Home');
  t('Licenser');
  t('Nyheder');
  t('Search');


  return $menu_links;
}

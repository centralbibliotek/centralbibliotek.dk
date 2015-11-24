<?php
/**
 * @file
 * cbib_license_pages.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cbib_license_pages_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-license-menu.
  $menus['menu-license-menu'] = array(
    'menu_name' => 'menu-license-menu',
    'title' => 'License menu',
    'description' => 'Top menu on license frontpage',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('License menu');
  t('Top menu on license frontpage');


  return $menus;
}

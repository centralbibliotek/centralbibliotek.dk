<?php
/**
 * @file
 * cbib_license_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cbib_license_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-license-menu_alle-licenser:licens/alle
  $menu_links['menu-license-menu_alle-licenser:licens/alle'] = array(
    'menu_name' => 'menu-license-menu',
    'link_path' => 'licens/alle',
    'router_path' => 'licens/alle',
    'link_title' => 'Alle licenser',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-license-menu_alle-licenser:licens/alle',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-license-menu_formidling-og-pr:licens/formidling-og-pr
  $menu_links['menu-license-menu_formidling-og-pr:licens/formidling-og-pr'] = array(
    'menu_name' => 'menu-license-menu',
    'link_path' => 'licens/formidling-og-pr',
    'router_path' => 'licens/formidling-og-pr',
    'link_title' => 'Formidling og PR',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-license-menu_formidling-og-pr:licens/formidling-og-pr',
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
  t('Alle licenser');
  t('Formidling og PR');


  return $menu_links;
}

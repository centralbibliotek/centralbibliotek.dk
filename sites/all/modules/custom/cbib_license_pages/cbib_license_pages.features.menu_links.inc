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

  // Exported menu link: menu-license-menu_ambassadrliste:licens/ambassadoerliste
  $menu_links['menu-license-menu_ambassadrliste:licens/ambassadoerliste'] = array(
    'menu_name' => 'menu-license-menu',
    'link_path' => 'licens/ambassadoerliste',
    'router_path' => 'licens/ambassadoerliste',
    'link_title' => 'Ambassadørliste',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-license-menu_ambassadrliste:licens/ambassadoerliste',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-license-menu_biblioteker:biblioteker
  $menu_links['menu-license-menu_biblioteker:biblioteker'] = array(
    'menu_name' => 'menu-license-menu',
    'link_path' => 'biblioteker',
    'router_path' => 'biblioteker',
    'link_title' => 'Biblioteker',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-license-menu_biblioteker:biblioteker',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-license-menu_erms:https://library-erms.com
  $menu_links['menu-license-menu_erms:https://library-erms.com'] = array(
    'menu_name' => 'menu-license-menu',
    'link_path' => 'https://library-erms.com',
    'router_path' => '',
    'link_title' => 'ERMS',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-license-menu_erms:https://library-erms.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
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
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-license-menu_licensforside:node/127
  $menu_links['menu-license-menu_licensforside:node/127'] = array(
    'menu_name' => 'menu-license-menu',
    'link_path' => 'node/127',
    'router_path' => 'node/%',
    'link_title' => 'Licensforside',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-license-menu_licensforside:node/127',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ambassadørliste');
  t('Biblioteker');
  t('ERMS');
  t('Formidling og PR');
  t('Licensforside');


  return $menu_links;
}

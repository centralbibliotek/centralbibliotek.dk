<?php
/**
 * @file
 * cbib_license.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cbib_license_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'license';
  $page->task = 'page';
  $page->admin_title = 'License';
  $page->admin_description = '';
  $page->path = 'license';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Licens',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_license_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'license';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Licenser';
  $display->uuid = '87625eab-7309-4c23-8fd4-540da926671a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-84003b2a-6e12-484d-8766-2f6675460833';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '84003b2a-6e12-484d-8766-2f6675460833';
    $display->content['new-84003b2a-6e12-484d-8766-2f6675460833'] = $pane;
    $display->panels['one_main'][0] = 'new-84003b2a-6e12-484d-8766-2f6675460833';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-84003b2a-6e12-484d-8766-2f6675460833';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['license'] = $page;

  return $pages;

}

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
  $page->name = 'files_list';
  $page->task = 'page';
  $page->admin_title = 'Files list';
  $page->admin_description = '';
  $page->path = 'vidensbank';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_files_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'files_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default list',
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
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd783ad8c-63fa-4202-a74d-1ed677cda454';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-35cf31bf-ba5c-4812-a723-760a2f45257e';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'file_directory-panel_pane_1';
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
    $pane->uuid = '35cf31bf-ba5c-4812-a723-760a2f45257e';
    $display->content['new-35cf31bf-ba5c-4812-a723-760a2f45257e'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-35cf31bf-ba5c-4812-a723-760a2f45257e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-35cf31bf-ba5c-4812-a723-760a2f45257e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['files_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'license_list';
  $page->task = 'page';
  $page->admin_title = 'License list';
  $page->admin_description = '';
  $page->path = 'licenser/liste';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_license_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'license_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default list',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '940f27da-94cb-4a84-9c70-99e3b24e403b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89f527f5-ee69-4162-92ba-e40a2fdcb586';
    $pane->panel = 'two_66_33_top';
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
    $pane->uuid = '89f527f5-ee69-4162-92ba-e40a2fdcb586';
    $display->content['new-89f527f5-ee69-4162-92ba-e40a2fdcb586'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-89f527f5-ee69-4162-92ba-e40a2fdcb586';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-89f527f5-ee69-4162-92ba-e40a2fdcb586';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['license_list'] = $page;

  return $pages;

}

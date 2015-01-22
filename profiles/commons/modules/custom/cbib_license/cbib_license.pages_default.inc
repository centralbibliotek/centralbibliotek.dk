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
  $page->name = 'licence_landing_page_node';
  $page->task = 'page';
  $page->admin_title = 'Licence landing page group';
  $page->admin_description = '';
  $page->path = 'node/%node/licenses';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'centralbibliotek' => 'centralbibliotek',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Indholdselement: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_licence_landing_page_node_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'licence_landing_page_node';
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
  $display->title = 'Licenser';
  $display->uuid = 'a1382a7f-b0d0-4a0e-9b81-081bfc4ff76c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1f35de66-949f-4877-8f09-a615640f8748';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f35de66-949f-4877-8f09-a615640f8748';
    $display->content['new-1f35de66-949f-4877-8f09-a615640f8748'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-1f35de66-949f-4877-8f09-a615640f8748';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['licence_landing_page_node'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'license';
  $page->task = 'page';
  $page->admin_title = 'License';
  $page->admin_description = '';
  $page->path = 'licenses';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Licenser',
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
    'admin_paths' => FALSE,
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

<?php
/**
 * @file
 * cbib_commons_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cbib_commons_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'views_events_landing_page_node';
  $page->task = 'page';
  $page->admin_title = 'Views Events Landing Page Group';
  $page->admin_description = '';
  $page->path = 'node/%node/events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'centralbibliotek' => 'centralbibliotek',
            'group' => 'group',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Arrangementer',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
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
  $handler->name = 'page_views_events_landing_page_node_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'views_events_landing_page_node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
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
    'two_66_33_top' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'Arrangementer';
  $display->uuid = 'f084cd6c-0d66-7ca4-c971-3c5cf182d2ec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e7e1c46e-e086-447b-9c7c-1d3f880fd84c';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'commons_events_upcoming-panel_pane_4';
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
    $pane->uuid = 'e7e1c46e-e086-447b-9c7c-1d3f880fd84c';
    $display->content['new-e7e1c46e-e086-447b-9c7c-1d3f880fd84c'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-e7e1c46e-e086-447b-9c7c-1d3f880fd84c';
    $pane = new stdClass();
    $pane->pid = 'new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'commons_events_upcoming-panel_pane_6';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2ee2613-1dbe-45bd-85eb-a8ba632aab84';
    $display->content['new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84'] = $pane;
    $display->panels['two_66_33_top'][1] = 'new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['views_events_landing_page_node'] = $page;

  return $pages;

}

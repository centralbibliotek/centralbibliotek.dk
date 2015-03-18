<?php
/**
 * @file
 * cbib_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cbib_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_attendee';
  $page->task = 'page';
  $page->admin_title = 'Add attendee';
  $page->admin_description = '';
  $page->path = 'node/%node/registrations/add-attendee';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer registration',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add attendee',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'tab',
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
  $handler->name = 'page_add_attendee_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'add_attendee';
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
  $display->title = '';
  $display->uuid = 'd807a569-6663-4108-af9e-9744aec2ee73';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93f9ae89-a952-402f-b60d-3d8adcd9b600';
    $pane->panel = 'one_main';
    $pane->type = 'cbib_events_add_attendee';
    $pane->subtype = 'cbib_events_add_attendee';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '93f9ae89-a952-402f-b60d-3d8adcd9b600';
    $display->content['new-93f9ae89-a952-402f-b60d-3d8adcd9b600'] = $pane;
    $display->panels['one_main'][0] = 'new-93f9ae89-a952-402f-b60d-3d8adcd9b600';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-93f9ae89-a952-402f-b60d-3d8adcd9b600';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_attendee'] = $page;

  return $pages;

}

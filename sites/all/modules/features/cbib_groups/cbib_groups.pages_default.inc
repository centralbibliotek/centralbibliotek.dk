<?php
/**
 * @file
 * cbib_groups.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cbib_groups_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'groups_directory_node';
  $page->task = 'page';
  $page->admin_title = 'Groups Directory Node';
  $page->admin_description = 'A directory of subgroups.';
  $page->path = 'node/%node/groups';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
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
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Grupper',
    'name' => 'main-menu',
    'weight' => '-1',
    'parent' => array(
      'type' => 'tab',
      'title' => '',
      'name' => 'navigation',
      'weight' => '-1',
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
  $handler->name = 'page_groups_directory_node_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'groups_directory_node';
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Grupper';
  $display->uuid = 'b342a293-2541-cc64-1577-839054c92368';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a6c98ac8-a81f-4722-a65f-6d4b9b27bae6';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'commons_groups_directory-panel_pane_4';
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
    $pane->uuid = 'a6c98ac8-a81f-4722-a65f-6d4b9b27bae6';
    $display->content['new-a6c98ac8-a81f-4722-a65f-6d4b9b27bae6'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-a6c98ac8-a81f-4722-a65f-6d4b9b27bae6';
    $pane = new stdClass();
    $pane->pid = 'new-3db36521-fb53-58a4-c9e2-137a2dacee07';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'block';
    $pane->subtype = 'commons_groups-commons_groups_create_group';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3db36521-fb53-58a4-c9e2-137a2dacee07';
    $display->content['new-3db36521-fb53-58a4-c9e2-137a2dacee07'] = $pane;
    $display->panels['two_66_33_top'][1] = 'new-3db36521-fb53-58a4-c9e2-137a2dacee07';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['groups_directory_node'] = $page;

  return $pages;

}

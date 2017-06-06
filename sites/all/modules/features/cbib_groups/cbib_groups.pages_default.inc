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
  $display->layout = 'flexible:events_builders';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'venstre',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => '74.99460716730911',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'venstre' => array(
        'type' => 'region',
        'title' => 'Venstre',
        'width' => '25.005392832690884',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
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
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'center' => NULL,
      'venstre' => NULL,
      'one_main' => NULL,
    ),
    'center' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'Grupper';
  $display->uuid = 'b342a293-2541-cc64-1577-839054c92368';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b94fe84b-40c1-4bed-a373-7d281ef84ec3';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'search_api_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '15',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b94fe84b-40c1-4bed-a373-7d281ef84ec3';
    $display->content['new-b94fe84b-40c1-4bed-a373-7d281ef84ec3'] = $pane;
    $display->panels['center'][0] = 'new-b94fe84b-40c1-4bed-a373-7d281ef84ec3';
    $pane = new stdClass();
    $pane->pid = 'new-8fba43ec-65b0-47c7-8f70-1d3ca989d21b';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'search_api_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8fba43ec-65b0-47c7-8f70-1d3ca989d21b';
    $display->content['new-8fba43ec-65b0-47c7-8f70-1d3ca989d21b'] = $pane;
    $display->panels['center'][1] = 'new-8fba43ec-65b0-47c7-8f70-1d3ca989d21b';
    $pane = new stdClass();
    $pane->pid = 'new-09b769da-ba5c-4d6d-a2d9-3be790746feb';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-tEZOOJBdRL8BWerUz8T2fIqLMS30JE9z';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Emner',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09b769da-ba5c-4d6d-a2d9-3be790746feb';
    $display->content['new-09b769da-ba5c-4d6d-a2d9-3be790746feb'] = $pane;
    $display->panels['top'][0] = 'new-09b769da-ba5c-4d6d-a2d9-3be790746feb';
    $pane = new stdClass();
    $pane->pid = 'new-df0b9592-ca90-4de1-b613-badf280328e1';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-5tYhM2Z2ruvjtxqsDp8KgjiVmO05m39t';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Oprettelsesår',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'df0b9592-ca90-4de1-b613-badf280328e1';
    $display->content['new-df0b9592-ca90-4de1-b613-badf280328e1'] = $pane;
    $display->panels['top'][1] = 'new-df0b9592-ca90-4de1-b613-badf280328e1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['groups_directory_node'] = $page;

  return $pages;

}

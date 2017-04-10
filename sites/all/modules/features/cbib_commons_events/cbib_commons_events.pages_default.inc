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
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'cb3_top' => NULL,
      'cb3_first' => NULL,
      'cb3_second' => NULL,
      'cb3_third' => NULL,
      'cb3_bottom' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_bottom' => NULL,
      'one_main' => NULL,
    ),
    'two_66_33_top' => array(
      'style' => 'default',
    ),
    'two_66_33_second' => array(
      'style' => 'tabs',
    ),
    'two_33_66_second' => array(
      'style' => 'tabs',
    ),
    'one_main' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Arrangementer';
  $display->uuid = 'f084cd6c-0d66-7ca4-c971-3c5cf182d2ec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c7c42be-6a3c-4b21-b685-86f4f3db6db7';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-7WTgHb2zdhyHCsRZtsXnU3eogApOW342';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Afholdelsessted',
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
    $pane->uuid = '7c7c42be-6a3c-4b21-b685-86f4f3db6db7';
    $display->content['new-7c7c42be-6a3c-4b21-b685-86f4f3db6db7'] = $pane;
    $display->panels['one_main'][0] = 'new-7c7c42be-6a3c-4b21-b685-86f4f3db6db7';
    $pane = new stdClass();
    $pane->pid = 'new-6ce77767-9aa6-47c3-af88-c688d6f33c9c';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-DDx431pOxyXaTR32dMcTOJUVRZV3JVzs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Oprettelsesdato',
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
    $pane->uuid = '6ce77767-9aa6-47c3-af88-c688d6f33c9c';
    $display->content['new-6ce77767-9aa6-47c3-af88-c688d6f33c9c'] = $pane;
    $display->panels['one_main'][1] = 'new-6ce77767-9aa6-47c3-af88-c688d6f33c9c';
    $pane = new stdClass();
    $pane->pid = 'new-52163c9b-2121-470d-b21c-482b1d8b0b16';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-rJ41iuaZ0tI1G1AP2gFnVQy6bjKDQf2J';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Arrangementtype',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '52163c9b-2121-470d-b21c-482b1d8b0b16';
    $display->content['new-52163c9b-2121-470d-b21c-482b1d8b0b16'] = $pane;
    $display->panels['one_main'][2] = 'new-52163c9b-2121-470d-b21c-482b1d8b0b16';
    $pane = new stdClass();
    $pane->pid = 'new-be36b750-653a-4562-82ef-fe283051c064';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-uqTZOD0puq87yt8wqB376UrLCGM9FHvM';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Emner',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'be36b750-653a-4562-82ef-fe283051c064';
    $display->content['new-be36b750-653a-4562-82ef-fe283051c064'] = $pane;
    $display->panels['one_main'][3] = 'new-be36b750-653a-4562-82ef-fe283051c064';
    $pane = new stdClass();
    $pane->pid = 'new-51ca6526-15e9-4e76-bf08-d5ca9eda5863';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'search_api_arrangementer';
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
      'display' => 'page',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '51ca6526-15e9-4e76-bf08-d5ca9eda5863';
    $display->content['new-51ca6526-15e9-4e76-bf08-d5ca9eda5863'] = $pane;
    $display->panels['one_main'][4] = 'new-51ca6526-15e9-4e76-bf08-d5ca9eda5863';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['views_events_landing_page_node'] = $page;

  return $pages;

}

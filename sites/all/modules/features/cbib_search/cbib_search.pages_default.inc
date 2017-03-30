<?php
/**
 * @file
 * cbib_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cbib_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_api_nodes';
  $page->task = 'page';
  $page->admin_title = 'search api nodes';
  $page->admin_description = '';
  $page->path = 'search';
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
  $handler->name = 'page_search_api_nodes__panel';
  $handler->task = 'page';
  $handler->subtask = 'search_api_nodes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'search api nodes',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd9bd1bf9-96cd-4b78-a69a-05b9052ad130';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b792f757-d4a8-4e73-b7e8-f67f7223c305';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-GnTHplNqH3eGbf5J1c8INcrHEyPiAhcB';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Indholdstype',
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
    $pane->uuid = 'b792f757-d4a8-4e73-b7e8-f67f7223c305';
    $display->content['new-b792f757-d4a8-4e73-b7e8-f67f7223c305'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-b792f757-d4a8-4e73-b7e8-f67f7223c305';
    $pane = new stdClass();
    $pane->pid = 'new-213bfff8-b584-4c48-b664-6718a587f258';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Ow6C0INvBHRMKgnyvPHyJ39hkuF4yBUU';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '213bfff8-b584-4c48-b664-6718a587f258';
    $display->content['new-213bfff8-b584-4c48-b664-6718a587f258'] = $pane;
    $display->panels['two_33_66_first'][1] = 'new-213bfff8-b584-4c48-b664-6718a587f258';
    $pane = new stdClass();
    $pane->pid = 'new-019b4c20-372f-454c-9471-e2f44abfc3ec';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-68jj4061HtrNoYLXVaaaBKLFFE2vB59I';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Oprettelsesdato',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '019b4c20-372f-454c-9471-e2f44abfc3ec';
    $display->content['new-019b4c20-372f-454c-9471-e2f44abfc3ec'] = $pane;
    $display->panels['two_33_66_first'][2] = 'new-019b4c20-372f-454c-9471-e2f44abfc3ec';
    $pane = new stdClass();
    $pane->pid = 'new-ddf854aa-9f42-434a-b2d2-323461942372';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-0NzDy66Cm5YtA0b0L2Gr0YwBRtMFeRYb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Forfatter',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ddf854aa-9f42-434a-b2d2-323461942372';
    $display->content['new-ddf854aa-9f42-434a-b2d2-323461942372'] = $pane;
    $display->panels['two_33_66_first'][3] = 'new-ddf854aa-9f42-434a-b2d2-323461942372';
    $pane = new stdClass();
    $pane->pid = 'new-0f6bf6fa-69e0-4478-81c6-d08b2eaa7151';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'views';
    $pane->subtype = 'search_api_nodes';
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
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Søgeresultater',
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
    $pane->uuid = '0f6bf6fa-69e0-4478-81c6-d08b2eaa7151';
    $display->content['new-0f6bf6fa-69e0-4478-81c6-d08b2eaa7151'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-0f6bf6fa-69e0-4478-81c6-d08b2eaa7151';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_api_nodes'] = $page;

  return $pages;

}

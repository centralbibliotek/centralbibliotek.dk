<?php
/**
 * @file
 * billedarkiv.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function billedarkiv_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'billedarkiv';
  $page->task = 'page';
  $page->admin_title = 'billedarkiv';
  $page->admin_description = '';
  $page->path = 'billedarkiv';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 3,
            2 => 4,
            3 => 5,
            4 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
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
  $handler->name = 'page_billedarkiv__panel';
  $handler->task = 'page';
  $handler->subtask = 'billedarkiv';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Billedarkiv Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
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
  $display->uuid = '0a10ad5e-4b51-4554-b1ef-b4550887c3f9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67e0cd7d-8aa8-4be2-8ae4-00c6e3d0b626';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-WnDK8fyQ976NiiCH6ORdCReF1uTwMHHU';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Kategori',
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
    $pane->uuid = '67e0cd7d-8aa8-4be2-8ae4-00c6e3d0b626';
    $display->content['new-67e0cd7d-8aa8-4be2-8ae4-00c6e3d0b626'] = $pane;
    $display->panels['one_main'][0] = 'new-67e0cd7d-8aa8-4be2-8ae4-00c6e3d0b626';
    $pane = new stdClass();
    $pane->pid = 'new-94f379c7-67a5-4364-b7b7-172e9ee50176';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'billedarkiv_search_api';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = '94f379c7-67a5-4364-b7b7-172e9ee50176';
    $display->content['new-94f379c7-67a5-4364-b7b7-172e9ee50176'] = $pane;
    $display->panels['one_main'][1] = 'new-94f379c7-67a5-4364-b7b7-172e9ee50176';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['billedarkiv'] = $page;

  return $pages;

}

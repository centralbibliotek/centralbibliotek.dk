<?php
/**
 * @file
 * commons_site_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function commons_site_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'commons_home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'Site home page for anonymous and authenticated users.';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'weight' => '-10',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
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
  $handler->name = 'page_commons_home_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'commons_home';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
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
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'afa005f6-cf15-78e4-d53d-8885db3cde39';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d815f98-ed09-48f3-9d6d-e9acad03e464';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'commons_events_upcoming-panel_pane_2';
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
    $pane->uuid = '8d815f98-ed09-48f3-9d6d-e9acad03e464';
    $display->content['new-8d815f98-ed09-48f3-9d6d-e9acad03e464'] = $pane;
    $display->panels['one_main'][0] = 'new-8d815f98-ed09-48f3-9d6d-e9acad03e464';
    $pane = new stdClass();
    $pane->pid = 'new-873f520b-e349-4b0e-a23f-6fe46609b814';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '873f520b-e349-4b0e-a23f-6fe46609b814';
    $display->content['new-873f520b-e349-4b0e-a23f-6fe46609b814'] = $pane;
    $display->panels['one_main'][1] = 'new-873f520b-e349-4b0e-a23f-6fe46609b814';
    $pane = new stdClass();
    $pane->pid = 'new-32e55ffc-409b-4ed7-8b84-df9c389c6cd8';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'commons_groups_directory-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '32e55ffc-409b-4ed7-8b84-df9c389c6cd8';
    $display->content['new-32e55ffc-409b-4ed7-8b84-df9c389c6cd8'] = $pane;
    $display->panels['one_main'][2] = 'new-32e55ffc-409b-4ed7-8b84-df9c389c6cd8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['commons_home'] = $page;

  return $pages;

}

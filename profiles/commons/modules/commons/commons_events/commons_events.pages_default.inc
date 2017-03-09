<?php
/**
 * @file
 * commons_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function commons_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'views_events_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Views Events Landing Page All';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Arrangementer',
    'weight' => '2',
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
  $handler->name = 'page_views_events_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'views_events_landing_page';
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
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'one_main' => NULL,
      'two_50_bottom' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
    'one_main' => array(
      'style' => 'tabs',
    ),
    'two_50_bottom' => array(
      'style' => 'tabs',
    ),
    'two_33_66_second' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'Arrangementer';
  $display->uuid = 'f084cd6c-0d66-7ca4-c971-3c5cf182d2ec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5179066d-9ed3-4a7c-af0e-408f6deabd3e';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-rJ41iuaZ0tI1G1AP2gFnVQy6bjKDQf2J';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Filtrere efter arrangementstype:',
        'pane_collapsed' => 0,
        'pane_empty_check' => 0,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5179066d-9ed3-4a7c-af0e-408f6deabd3e';
    $display->content['new-5179066d-9ed3-4a7c-af0e-408f6deabd3e'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-5179066d-9ed3-4a7c-af0e-408f6deabd3e';
    $pane = new stdClass();
    $pane->pid = 'new-10f82839-e41b-44bb-ba5c-1d2df624d75b';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-7WTgHb2zdhyHCsRZtsXnU3eogApOW342';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Filtrere efter by:',
        'pane_collapsed' => 0,
        'pane_empty_check' => 0,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '10f82839-e41b-44bb-ba5c-1d2df624d75b';
    $display->content['new-10f82839-e41b-44bb-ba5c-1d2df624d75b'] = $pane;
    $display->panels['two_33_66_first'][1] = 'new-10f82839-e41b-44bb-ba5c-1d2df624d75b';
    $pane = new stdClass();
    $pane->pid = 'new-b5a7c2b3-61cb-44ee-aa34-47918ae046ab';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-XMu3Fw5YvJRJ8sDqHf1PjoXbrZpRq7br';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Filtrere efter dato:',
        'pane_collapsed' => 0,
        'pane_empty_check' => 0,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b5a7c2b3-61cb-44ee-aa34-47918ae046ab';
    $display->content['new-b5a7c2b3-61cb-44ee-aa34-47918ae046ab'] = $pane;
    $display->panels['two_33_66_first'][2] = 'new-b5a7c2b3-61cb-44ee-aa34-47918ae046ab';
    $pane = new stdClass();
    $pane->pid = 'new-3a5c106d-8821-47ba-937c-77b64d1480ee';
    $pane->panel = 'two_33_66_second';
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
    $pane->uuid = '3a5c106d-8821-47ba-937c-77b64d1480ee';
    $display->content['new-3a5c106d-8821-47ba-937c-77b64d1480ee'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-3a5c106d-8821-47ba-937c-77b64d1480ee';
    $pane = new stdClass();
    $pane->pid = 'new-0ec3a19a-2ae9-42a6-b039-df173f22e262';
    $pane->panel = 'two_33_66_second';
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
      'display' => 'page_1',
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
    $pane->uuid = '0ec3a19a-2ae9-42a6-b039-df173f22e262';
    $display->content['new-0ec3a19a-2ae9-42a6-b039-df173f22e262'] = $pane;
    $display->panels['two_33_66_second'][1] = 'new-0ec3a19a-2ae9-42a6-b039-df173f22e262';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['views_events_landing_page'] = $page;

  return $pages;

}

<?php
/**
 * @file
 * commons_groups_directory.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function commons_groups_directory_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'groups_directory';
  $page->task = 'page';
  $page->admin_title = 'Groups Directory';
  $page->admin_description = 'A directory of groups.';
  $page->path = 'groups';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Groups',
    'name' => 'main-menu',
    'weight' => '-1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '-1',
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
  $handler->name = 'page_groups_directory_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'groups_directory';
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
        'width' => '74.98009462408966',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'venstre' => array(
        'type' => 'region',
        'title' => 'Venstre',
        'width' => '25.019905375910344',
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
      'one_main' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'three_25_25_50_top' => NULL,
      'three_25_25_50_first' => NULL,
      'three_25_25_50_second' => NULL,
      'three_25_25_50_third' => NULL,
      'three_25_25_50_bottom' => NULL,
      'cb3_top' => NULL,
      'cb3_first' => NULL,
      'cb3_second' => NULL,
      'cb3_third' => NULL,
      'cb3_bottom' => NULL,
      'center' => NULL,
      'venstre' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Grupper';
  $display->uuid = 'b342a293-2541-cc64-1577-839054c92368';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d6ca890e-c78a-4dc3-ae8d-22eec1bc6086';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-bVMvZxfTOl8SgywzLgdochPxdfni4XFj';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Tilknytning',
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
    $pane->uuid = 'd6ca890e-c78a-4dc3-ae8d-22eec1bc6086';
    $display->content['new-d6ca890e-c78a-4dc3-ae8d-22eec1bc6086'] = $pane;
    $display->panels['one_main'][0] = 'new-d6ca890e-c78a-4dc3-ae8d-22eec1bc6086';
    $pane = new stdClass();
    $pane->pid = 'new-1c95172e-d00e-4c7a-b2f9-9358d3977afd';
    $pane->panel = 'one_main';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c95172e-d00e-4c7a-b2f9-9358d3977afd';
    $display->content['new-1c95172e-d00e-4c7a-b2f9-9358d3977afd'] = $pane;
    $display->panels['one_main'][1] = 'new-1c95172e-d00e-4c7a-b2f9-9358d3977afd';
    $pane = new stdClass();
    $pane->pid = 'new-43d91cd9-49b1-46e1-b76a-072d34bb4cb0';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-5tYhM2Z2ruvjtxqsDp8KgjiVmO05m39t';
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
    $pane->uuid = '43d91cd9-49b1-46e1-b76a-072d34bb4cb0';
    $display->content['new-43d91cd9-49b1-46e1-b76a-072d34bb4cb0'] = $pane;
    $display->panels['one_main'][2] = 'new-43d91cd9-49b1-46e1-b76a-072d34bb4cb0';
    $pane = new stdClass();
    $pane->pid = 'new-86bb266a-0ecd-4fa5-838e-22e2c580a82a';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_api_group-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '86bb266a-0ecd-4fa5-838e-22e2c580a82a';
    $display->content['new-86bb266a-0ecd-4fa5-838e-22e2c580a82a'] = $pane;
    $display->panels['one_main'][3] = 'new-86bb266a-0ecd-4fa5-838e-22e2c580a82a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['groups_directory'] = $page;

  return $pages;

}

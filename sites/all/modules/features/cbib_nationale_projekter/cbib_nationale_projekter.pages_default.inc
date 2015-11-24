<?php
/**
 * @file
 * cbib_nationale_projekter.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cbib_nationale_projekter_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Nationale projekter',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '1',
            2 => array(),
            1 => array(
              10 => '10',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
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
    ),
  );
  $display->cache = array();
  $display->title = 'Nationale projekter';
  $display->uuid = '25f06d65-4466-4f52-bf4d-7470b6694301';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0d81ebdb-f9dd-43aa-a90d-ffe78e87b1db';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
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
    $pane->uuid = '0d81ebdb-f9dd-43aa-a90d-ffe78e87b1db';
    $display->content['new-0d81ebdb-f9dd-43aa-a90d-ffe78e87b1db'] = $pane;
    $display->panels['one_main'][0] = 'new-0d81ebdb-f9dd-43aa-a90d-ffe78e87b1db';
    $pane = new stdClass();
    $pane->pid = 'new-924fb68c-11a0-45aa-85df-87453af13294';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'nationale_projekter-panel_pane_1';
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
    $pane->uuid = '924fb68c-11a0-45aa-85df-87453af13294';
    $display->content['new-924fb68c-11a0-45aa-85df-87453af13294'] = $pane;
    $display->panels['one_main'][1] = 'new-924fb68c-11a0-45aa-85df-87453af13294';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

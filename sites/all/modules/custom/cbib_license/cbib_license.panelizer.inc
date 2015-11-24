<?php
/**
 * @file
 * cbib_license.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cbib_license_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default:token';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'token';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'one_main' => NULL,
    ),
    'one_main' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '767c3981-ae86-4d4a-8e1c-eefef9327fb3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3c35b7cd-d4f4-42fc-a22e-ca45c320353d';
    $pane->panel = 'one_main';
    $pane->type = 'token';
    $pane->subtype = 'user:name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Ambassadør',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c35b7cd-d4f4-42fc-a22e-ca45c320353d';
    $display->content['new-3c35b7cd-d4f4-42fc-a22e-ca45c320353d'] = $pane;
    $display->panels['one_main'][0] = 'new-3c35b7cd-d4f4-42fc-a22e-ca45c320353d';
    $pane = new stdClass();
    $pane->pid = 'new-cd6feb3c-6074-4d76-b0a4-d8ec34692b87';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = 'cd6feb3c-6074-4d76-b0a4-d8ec34692b87';
    $display->content['new-cd6feb3c-6074-4d76-b0a4-d8ec34692b87'] = $pane;
    $display->panels['one_main'][1] = 'new-cd6feb3c-6074-4d76-b0a4-d8ec34692b87';
    $pane = new stdClass();
    $pane->pid = 'new-0161627d-bbe1-4856-b750-4c7790d0c14a';
    $pane->panel = 'one_main';
    $pane->type = 'token';
    $pane->subtype = 'user:mail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0161627d-bbe1-4856-b750-4c7790d0c14a';
    $display->content['new-0161627d-bbe1-4856-b750-4c7790d0c14a'] = $pane;
    $display->panels['one_main'][2] = 'new-0161627d-bbe1-4856-b750-4c7790d0c14a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:token'] = $panelizer;

  return $export;
}

<?php
/**
 * @file
 * cbib_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cbib_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'two_66_33';
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
  $display->title = '%node:title';
  $display->uuid = 'ebc88332-24a9-4328-b888-d7f0a61404a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8155e91f-6638-48bd-bbbe-b2caf5983786';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'full_node',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8155e91f-6638-48bd-bbbe-b2caf5983786';
    $display->content['new-8155e91f-6638-48bd-bbbe-b2caf5983786'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-8155e91f-6638-48bd-bbbe-b2caf5983786';
    $pane = new stdClass();
    $pane->pid = 'new-71bb3922-c9c3-4855-bce6-400ebddea84c';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h1',
        'title_link' => '',
        'title_class' => '',
      ),
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
    $pane->uuid = '71bb3922-c9c3-4855-bce6-400ebddea84c';
    $display->content['new-71bb3922-c9c3-4855-bce6-400ebddea84c'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-71bb3922-c9c3-4855-bce6-400ebddea84c';
    $pane = new stdClass();
    $pane->pid = 'new-9597b979-98f0-46d0-accc-9b324d3856dc';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9597b979-98f0-46d0-accc-9b324d3856dc';
    $display->content['new-9597b979-98f0-46d0-accc-9b324d3856dc'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-9597b979-98f0-46d0-accc-9b324d3856dc';
    $pane = new stdClass();
    $pane->pid = 'new-8545e04f-f16c-4121-a283-532b634f6395';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8545e04f-f16c-4121-a283-532b634f6395';
    $display->content['new-8545e04f-f16c-4121-a283-532b634f6395'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-8545e04f-f16c-4121-a283-532b634f6395';
    $pane = new stdClass();
    $pane->pid = 'new-c8bc8d21-5a88-4c06-bc3e-a4ac85520ae7';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c8bc8d21-5a88-4c06-bc3e-a4ac85520ae7';
    $display->content['new-c8bc8d21-5a88-4c06-bc3e-a4ac85520ae7'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-c8bc8d21-5a88-4c06-bc3e-a4ac85520ae7';
    $pane = new stdClass();
    $pane->pid = 'new-bd213ea0-26c7-46bd-bb1a-5d3848ce3f12';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->uuid = 'bd213ea0-26c7-46bd-bb1a-5d3848ce3f12';
    $display->content['new-bd213ea0-26c7-46bd-bb1a-5d3848ce3f12'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-bd213ea0-26c7-46bd-bb1a-5d3848ce3f12';
    $pane = new stdClass();
    $pane->pid = 'new-ffa55275-1bc6-4e75-a6f4-47114ebeec46';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'text' => 'Download [file:name]',
      ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ffa55275-1bc6-4e75-a6f4-47114ebeec46';
    $display->content['new-ffa55275-1bc6-4e75-a6f4-47114ebeec46'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-ffa55275-1bc6-4e75-a6f4-47114ebeec46';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-71bb3922-c9c3-4855-bce6-400ebddea84c';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}

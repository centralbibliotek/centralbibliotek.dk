<?php
/**
 * @file
 * cbib_library.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cbib_library_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:library:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'library';
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
      'center' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6d48113c-e0c7-46c4-bedb-868eeb4b29c0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-053c3422-92db-4178-8ae0-881888368eb2';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_license_list-library_license_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'Bibliotekets licenser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '053c3422-92db-4178-8ae0-881888368eb2';
    $display->content['new-053c3422-92db-4178-8ae0-881888368eb2'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-053c3422-92db-4178-8ae0-881888368eb2';
    $pane = new stdClass();
    $pane->pid = 'new-abdddf30-c184-44b3-adc3-1d1cfbb48e20';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_centralbibliotek_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Centralbibliotek',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'abdddf30-c184-44b3-adc3-1d1cfbb48e20';
    $display->content['new-abdddf30-c184-44b3-adc3-1d1cfbb48e20'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-abdddf30-c184-44b3-adc3-1d1cfbb48e20';
    $pane = new stdClass();
    $pane->pid = 'new-915728c5-8127-4795-bb89-13dd295c5b89';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'licens_responsibles-library_license_responsibles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'Licensansvarlig',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '915728c5-8127-4795-bb89-13dd295c5b89';
    $display->content['new-915728c5-8127-4795-bb89-13dd295c5b89'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-915728c5-8127-4795-bb89-13dd295c5b89';
    $pane = new stdClass();
    $pane->pid = 'new-2afbd4c2-ffe8-4350-aa1f-5559c8d55827';
    $pane->panel = 'two_66_33_top';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2afbd4c2-ffe8-4350-aa1f-5559c8d55827';
    $display->content['new-2afbd4c2-ffe8-4350-aa1f-5559c8d55827'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-2afbd4c2-ffe8-4350-aa1f-5559c8d55827';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-2afbd4c2-ffe8-4350-aa1f-5559c8d55827';
  $panelizer->display = $display;
  $export['node:library:default'] = $panelizer;

  return $export;
}

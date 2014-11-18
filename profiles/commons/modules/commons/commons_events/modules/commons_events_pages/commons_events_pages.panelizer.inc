<?php
/**
 * @file
 * commons_events_pages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function commons_events_pages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
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
  $display->uuid = '0d63be4d-5605-1644-fd5c-3872c8b1d8b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
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
    $pane->uuid = '5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4';
    $display->content['new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4';
    $pane = new stdClass();
    $pane->pid = 'new-35953f03-8878-47bb-800f-67c95d058508';
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
    $pane->uuid = '35953f03-8878-47bb-800f-67c95d058508';
    $display->content['new-35953f03-8878-47bb-800f-67c95d058508'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-35953f03-8878-47bb-800f-67c95d058508';
    $pane = new stdClass();
    $pane->pid = 'new-b6527fae-58a4-463e-9cc8-7200e1acc920';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'dato',
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'value',
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
    $pane->uuid = 'b6527fae-58a4-463e-9cc8-7200e1acc920';
    $display->content['new-b6527fae-58a4-463e-9cc8-7200e1acc920'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-b6527fae-58a4-463e-9cc8-7200e1acc920';
    $pane = new stdClass();
    $pane->pid = 'new-2d57af3b-2e3b-4ee9-a09c-078a500d503e';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'addressfield_components',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'components' => array(
          'locality' => 'locality',
        ),
        'separator' => ', ',
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2d57af3b-2e3b-4ee9-a09c-078a500d503e';
    $display->content['new-2d57af3b-2e3b-4ee9-a09c-078a500d503e'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-2d57af3b-2e3b-4ee9-a09c-078a500d503e';
    $pane = new stdClass();
    $pane->pid = 'new-e2773749-a522-4643-b068-3ba6c6710a17';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e2773749-a522-4643-b068-3ba6c6710a17';
    $display->content['new-e2773749-a522-4643-b068-3ba6c6710a17'] = $pane;
    $display->panels['two_66_33_first'][4] = 'new-e2773749-a522-4643-b068-3ba6c6710a17';
    $pane = new stdClass();
    $pane->pid = 'new-5adc886d-1a3a-468d-b25b-f344f7c86072';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5adc886d-1a3a-468d-b25b-f344f7c86072';
    $display->content['new-5adc886d-1a3a-468d-b25b-f344f7c86072'] = $pane;
    $display->panels['two_66_33_first'][5] = 'new-5adc886d-1a3a-468d-b25b-f344f7c86072';
    $pane = new stdClass();
    $pane->pid = 'new-3dcbfc27-8ac0-428e-9926-4d20124df9d6';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_user_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'For bibliotekerne i ...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3dcbfc27-8ac0-428e-9926-4d20124df9d6';
    $display->content['new-3dcbfc27-8ac0-428e-9926-4d20124df9d6'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-3dcbfc27-8ac0-428e-9926-4d20124df9d6';
    $pane = new stdClass();
    $pane->pid = 'new-88ab00da-745f-4432-a400-935fdac10fb8';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_audience';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Målgruppe',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '88ab00da-745f-4432-a400-935fdac10fb8';
    $display->content['new-88ab00da-745f-4432-a400-935fdac10fb8'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-88ab00da-745f-4432-a400-935fdac10fb8';
    $pane = new stdClass();
    $pane->pid = 'new-eb217e95-60ad-4363-afd5-d3f0ba1c3132';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'panels_mini';
    $pane->subtype = 'event_information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'Det praktiske',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eb217e95-60ad-4363-afd5-d3f0ba1c3132';
    $display->content['new-eb217e95-60ad-4363-afd5-d3f0ba1c3132'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-eb217e95-60ad-4363-afd5-d3f0ba1c3132';
    $pane = new stdClass();
    $pane->pid = 'new-ffd2a39f-cad3-4bec-8606-cf9a4c698131';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'panels_mini';
    $pane->subtype = 'event_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'Tilmelding',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ffd2a39f-cad3-4bec-8606-cf9a4c698131';
    $display->content['new-ffd2a39f-cad3-4bec-8606-cf9a4c698131'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-ffd2a39f-cad3-4bec-8606-cf9a4c698131';
    $pane = new stdClass();
    $pane->pid = 'new-aef85835-68a5-2494-b107-136f1cb92749';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'commons_events_event_attendee_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '25',
      'offset' => '0',
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'aef85835-68a5-2494-b107-136f1cb92749';
    $display->content['new-aef85835-68a5-2494-b107-136f1cb92749'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-aef85835-68a5-2494-b107-136f1cb92749';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-35953f03-8878-47bb-800f-67c95d058508';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  return $export;
}

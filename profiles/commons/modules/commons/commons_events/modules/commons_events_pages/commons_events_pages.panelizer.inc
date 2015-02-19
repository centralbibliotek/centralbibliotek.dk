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
    $pane->pid = 'new-9eb4aba6-f9c9-44b1-89df-7624b299f5a0';
    $pane->panel = 'two_66_33_bottom';
    $pane->type = 'panels_mini';
    $pane->subtype = 'cbib_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
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
    $pane->uuid = '9eb4aba6-f9c9-44b1-89df-7624b299f5a0';
    $display->content['new-9eb4aba6-f9c9-44b1-89df-7624b299f5a0'] = $pane;
    $display->panels['two_66_33_bottom'][0] = 'new-9eb4aba6-f9c9-44b1-89df-7624b299f5a0';
    $pane = new stdClass();
    $pane->pid = 'new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4';
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
        'file_view_mode' => 'default',
        'image_style' => 'full_node',
        'image_link' => '',
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
    $pane->pid = 'new-105a8a5c-0473-4cad-8dd8-70aed25159b9';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '105a8a5c-0473-4cad-8dd8-70aed25159b9';
    $display->content['new-105a8a5c-0473-4cad-8dd8-70aed25159b9'] = $pane;
    $display->panels['two_66_33_first'][6] = 'new-105a8a5c-0473-4cad-8dd8-70aed25159b9';
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
      'override_title_text' => 'Region',
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
    $pane = new stdClass();
    $pane->pid = 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588';
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
    $pane->uuid = 'd9b378c4-93e3-4445-b2da-c43dc1bd0588';
    $display->content['new-d9b378c4-93e3-4445-b2da-c43dc1bd0588'] = $pane;
    $display->panels['two_66_33_second'][5] = 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3dcbfc27-8ac0-428e-9926-4d20124df9d6';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2880dc3a-9be6-dc34-a563-b9748d152f92';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_user_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
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
    $pane->uuid = 'a2646c91-cad9-4bae-bbb8-8cebdf49c02f';
    $display->content['new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f'] = $pane;
    $display->panels['bottom'][0] = 'new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f';
    $pane = new stdClass();
    $pane->pid = 'new-d6f83188-1d0b-4864-ab49-7f5a2adffaa3';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->uuid = 'd6f83188-1d0b-4864-ab49-7f5a2adffaa3';
    $display->content['new-d6f83188-1d0b-4864-ab49-7f5a2adffaa3'] = $pane;
    $display->panels['bottom'][1] = 'new-d6f83188-1d0b-4864-ab49-7f5a2adffaa3';
    $pane = new stdClass();
    $pane->pid = 'new-d8e63d3e-3250-4e89-bad8-e75bedfc8732';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'teaser',
        'image_link' => 'content',
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
    $pane->uuid = 'd8e63d3e-3250-4e89-bad8-e75bedfc8732';
    $display->content['new-d8e63d3e-3250-4e89-bad8-e75bedfc8732'] = $pane;
    $display->panels['left'][0] = 'new-d8e63d3e-3250-4e89-bad8-e75bedfc8732';
    $pane = new stdClass();
    $pane->pid = 'new-bb59c3b5-c74b-4c7a-a057-52a118a0133b';
    $pane->panel = 'left';
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
        'multiple_number' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bb59c3b5-c74b-4c7a-a057-52a118a0133b';
    $display->content['new-bb59c3b5-c74b-4c7a-a057-52a118a0133b'] = $pane;
    $display->panels['left'][1] = 'new-bb59c3b5-c74b-4c7a-a057-52a118a0133b';
    $pane = new stdClass();
    $pane->pid = 'new-4155e724-f4b8-4139-b0ba-3cd73bdaed14';
    $pane->panel = 'right';
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
        'title_style' => 'h2',
        'title_link' => 'content',
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
    $pane->uuid = '4155e724-f4b8-4139-b0ba-3cd73bdaed14';
    $display->content['new-4155e724-f4b8-4139-b0ba-3cd73bdaed14'] = $pane;
    $display->panels['right'][0] = 'new-4155e724-f4b8-4139-b0ba-3cd73bdaed14';
    $pane = new stdClass();
    $pane->pid = 'new-c22911c5-3c21-75b4-c5f3-80efb733956b';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '600',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Por que no se ve?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c22911c5-3c21-75b4-c5f3-80efb733956b';
    $display->content['new-c22911c5-3c21-75b4-c5f3-80efb733956b'] = $pane;
    $display->panels['right'][1] = 'new-c22911c5-3c21-75b4-c5f3-80efb733956b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default:teaser'] = $panelizer;

  return $export;
}

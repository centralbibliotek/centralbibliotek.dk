<?php
/**
 * @file
 * cbib_features.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cbib_features_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:centralbibliotek:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'centralbibliotek';
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
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '819deb2a-c56c-2214-558d-c52460a89778';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5a43dfa0-ef2a-42c2-bfc0-424a387c8ef3';
    $pane->panel = 'one_main';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
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
    $pane->uuid = '5a43dfa0-ef2a-42c2-bfc0-424a387c8ef3';
    $display->content['new-5a43dfa0-ef2a-42c2-bfc0-424a387c8ef3'] = $pane;
    $display->panels['one_main'][0] = 'new-5a43dfa0-ef2a-42c2-bfc0-424a387c8ef3';
    $pane = new stdClass();
    $pane->pid = 'new-55153871-5118-4e5f-b169-465580bc9c37';
    $pane->panel = 'one_main';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '55153871-5118-4e5f-b169-465580bc9c37';
    $display->content['new-55153871-5118-4e5f-b169-465580bc9c37'] = $pane;
    $display->panels['one_main'][1] = 'new-55153871-5118-4e5f-b169-465580bc9c37';
    $pane = new stdClass();
    $pane->pid = 'new-92a62a1c-ab7e-4453-b777-7f6f515e1fd3';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '92a62a1c-ab7e-4453-b777-7f6f515e1fd3';
    $display->content['new-92a62a1c-ab7e-4453-b777-7f6f515e1fd3'] = $pane;
    $display->panels['one_main'][2] = 'new-92a62a1c-ab7e-4453-b777-7f6f515e1fd3';
    $pane = new stdClass();
    $pane->pid = 'new-440ab2f5-ec14-4def-b4d4-912cd02d306d';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'commons_events_upcoming-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '440ab2f5-ec14-4def-b4d4-912cd02d306d';
    $display->content['new-440ab2f5-ec14-4def-b4d4-912cd02d306d'] = $pane;
    $display->panels['one_main'][3] = 'new-440ab2f5-ec14-4def-b4d4-912cd02d306d';
    $pane = new stdClass();
    $pane->pid = 'new-93e15674-d765-4f06-9fea-2c1a4898d6f4';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'commons_groups_directory-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '93e15674-d765-4f06-9fea-2c1a4898d6f4';
    $display->content['new-93e15674-d765-4f06-9fea-2c1a4898d6f4'] = $pane;
    $display->panels['one_main'][4] = 'new-93e15674-d765-4f06-9fea-2c1a4898d6f4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:centralbibliotek:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:centralbibliotek:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'centralbibliotek';
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
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2880dc3a-9be6-dc34-a563-b9748d152f92';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-926a99b3-8e75-aa14-2542-16f2ab9e70b3';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_group_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'full_node',
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
    $pane->uuid = '926a99b3-8e75-aa14-2542-16f2ab9e70b3';
    $display->content['new-926a99b3-8e75-aa14-2542-16f2ab9e70b3'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-926a99b3-8e75-aa14-2542-16f2ab9e70b3';
    $pane = new stdClass();
    $pane->pid = 'new-c22911c5-3c21-75b4-c5f3-80efb733956b';
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
    $display->panels['two_66_33_first'][1] = 'new-c22911c5-3c21-75b4-c5f3-80efb733956b';
    $pane = new stdClass();
    $pane->pid = 'new-9f0cf2f9-2599-447b-b535-fb0db025efe1';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%node:title Centralbibliotek',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f0cf2f9-2599-447b-b535-fb0db025efe1';
    $display->content['new-9f0cf2f9-2599-447b-b535-fb0db025efe1'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-9f0cf2f9-2599-447b-b535-fb0db025efe1';
    $pane = new stdClass();
    $pane->pid = 'new-03edb05d-4eff-4de7-8d36-d24d29761ddd';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Tlf',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '03edb05d-4eff-4de7-8d36-d24d29761ddd';
    $display->content['new-03edb05d-4eff-4de7-8d36-d24d29761ddd'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-03edb05d-4eff-4de7-8d36-d24d29761ddd';
    $pane = new stdClass();
    $pane->pid = 'new-155a68cc-5c10-4eed-9bfd-42eb60e09043';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ean';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '155a68cc-5c10-4eed-9bfd-42eb60e09043';
    $display->content['new-155a68cc-5c10-4eed-9bfd-42eb60e09043'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-155a68cc-5c10-4eed-9bfd-42eb60e09043';
    $pane = new stdClass();
    $pane->pid = 'new-a2c078af-b170-4b0e-b50a-8bbb80bea0a3';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cvr';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'prefix_suffix' => 1,
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
    $pane->uuid = 'a2c078af-b170-4b0e-b50a-8bbb80bea0a3';
    $display->content['new-a2c078af-b170-4b0e-b50a-8bbb80bea0a3'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-a2c078af-b170-4b0e-b50a-8bbb80bea0a3';
    $pane = new stdClass();
    $pane->pid = 'new-a0027921-e3a1-46c9-858d-9127ac2a41b7';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_agency';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_unformatted',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'prefix_suffix' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Biblioteksnummer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a0027921-e3a1-46c9-858d-9127ac2a41b7';
    $display->content['new-a0027921-e3a1-46c9-858d-9127ac2a41b7'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-a0027921-e3a1-46c9-858d-9127ac2a41b7';
    $pane = new stdClass();
    $pane->pid = 'new-5a2c3703-f378-4d71-937d-ed17a4fb4d92';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5a2c3703-f378-4d71-937d-ed17a4fb4d92';
    $display->content['new-5a2c3703-f378-4d71-937d-ed17a4fb4d92'] = $pane;
    $display->panels['two_66_33_second'][5] = 'new-5a2c3703-f378-4d71-937d-ed17a4fb4d92';
    $pane = new stdClass();
    $pane->pid = 'new-cdfed378-957f-4e85-848a-cc7ea4d3eed4';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_e_mail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'cdfed378-957f-4e85-848a-cc7ea4d3eed4';
    $display->content['new-cdfed378-957f-4e85-848a-cc7ea4d3eed4'] = $pane;
    $display->panels['two_66_33_second'][6] = 'new-cdfed378-957f-4e85-848a-cc7ea4d3eed4';
    $pane = new stdClass();
    $pane->pid = 'new-3667aa5b-3012-4677-b63f-081c5a6ba15a';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views';
    $pane->subtype = 'cbib_sider';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '3667aa5b-3012-4677-b63f-081c5a6ba15a';
    $display->content['new-3667aa5b-3012-4677-b63f-081c5a6ba15a'] = $pane;
    $display->panels['two_66_33_second'][7] = 'new-3667aa5b-3012-4677-b63f-081c5a6ba15a';
    $pane = new stdClass();
    $pane->pid = 'new-9aa68120-2268-4422-926b-e0f9c7309744';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '9aa68120-2268-4422-926b-e0f9c7309744';
    $display->content['new-9aa68120-2268-4422-926b-e0f9c7309744'] = $pane;
    $display->panels['two_66_33_second'][8] = 'new-9aa68120-2268-4422-926b-e0f9c7309744';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:centralbibliotek:default:teaser'] = $panelizer;

  return $export;
}

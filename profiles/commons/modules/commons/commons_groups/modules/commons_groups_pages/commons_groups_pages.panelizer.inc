<?php
/**
 * @file
 * commons_groups_pages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function commons_groups_pages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:group:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'group';
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
  $display->title = '';
  $display->uuid = 'c7b76f7e-3bdf-4853-9197-e495df4f36b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ea23f7be-8a92-476e-b3a3-d339142e56e3';
    $pane->panel = 'two_66_33_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_news-panel_pane_5';
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
    $pane->uuid = 'ea23f7be-8a92-476e-b3a3-d339142e56e3';
    $display->content['new-ea23f7be-8a92-476e-b3a3-d339142e56e3'] = $pane;
    $display->panels['two_66_33_bottom'][0] = 'new-ea23f7be-8a92-476e-b3a3-d339142e56e3';
    $pane = new stdClass();
    $pane->pid = 'new-40240147-efd0-4262-881f-eb4c2fecba72';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '40240147-efd0-4262-881f-eb4c2fecba72';
    $display->content['new-40240147-efd0-4262-881f-eb4c2fecba72'] = $pane;
    $display->panels['two_66_33_bottom'][1] = 'new-40240147-efd0-4262-881f-eb4c2fecba72';
    $pane = new stdClass();
    $pane->pid = 'new-8567ca5b-9641-4b81-b9f4-079402a9464a';
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
    $pane->uuid = '8567ca5b-9641-4b81-b9f4-079402a9464a';
    $display->content['new-8567ca5b-9641-4b81-b9f4-079402a9464a'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-8567ca5b-9641-4b81-b9f4-079402a9464a';
    $pane = new stdClass();
    $pane->pid = 'new-e627add5-b6cb-4c15-8ff7-40caca347d88';
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
    $pane->uuid = 'e627add5-b6cb-4c15-8ff7-40caca347d88';
    $display->content['new-e627add5-b6cb-4c15-8ff7-40caca347d88'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-e627add5-b6cb-4c15-8ff7-40caca347d88';
    $pane = new stdClass();
    $pane->pid = 'new-55cd68c0-3a53-4a0d-af36-35da29489356';
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
    $pane->uuid = '55cd68c0-3a53-4a0d-af36-35da29489356';
    $display->content['new-55cd68c0-3a53-4a0d-af36-35da29489356'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-55cd68c0-3a53-4a0d-af36-35da29489356';
    $pane = new stdClass();
    $pane->pid = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
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
    $pane->uuid = 'bb5618ef-915c-4faa-ba77-bbb198184e22';
    $display->content['new-bb5618ef-915c-4faa-ba77-bbb198184e22'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
    $pane = new stdClass();
    $pane->pid = 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0';
    $pane->panel = 'two_66_33_first';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4217fe9c-2561-438d-847c-4a289f5b4bf0';
    $display->content['new-4217fe9c-2561-438d-847c-4a289f5b4bf0'] = $pane;
    $display->panels['two_66_33_first'][4] = 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0';
    $pane = new stdClass();
    $pane->pid = 'new-16bb1e2b-5444-464c-995a-923d2f0a31c6';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_list_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->uuid = '16bb1e2b-5444-464c-995a-923d2f0a31c6';
    $display->content['new-16bb1e2b-5444-464c-995a-923d2f0a31c6'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-16bb1e2b-5444-464c-995a-923d2f0a31c6';
    $pane = new stdClass();
    $pane->pid = 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'commons_groups_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
      ),
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
    $pane->uuid = 'bcc18207-63ae-43c3-8bb4-77518e5bccd3';
    $display->content['new-bcc18207-63ae-43c3-8bb4-77518e5bccd3'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3';
    $pane = new stdClass();
    $pane->pid = 'new-d10871fa-ea33-40f2-b568-dda6955d2571';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_roles_permissions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd10871fa-ea33-40f2-b568-dda6955d2571';
    $display->content['new-d10871fa-ea33-40f2-b568-dda6955d2571'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-d10871fa-ea33-40f2-b568-dda6955d2571';
    $pane = new stdClass();
    $pane->pid = 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_radioactivity';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'radioactivity_combo_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'energy' => 10,
        'type' => 'none',
        'accuracy' => '100',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '39374465-a69f-4fb2-a2d2-aaa4bfa7491a';
    $display->content['new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a';
    $pane = new stdClass();
    $pane->pid = 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_access';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2e7fc52a-d884-4fc9-9589-fa8f31e876d7';
    $display->content['new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7';
    $pane = new stdClass();
    $pane->pid = 'new-40462470-5167-4125-9316-c8812de239f6';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_og_subscribe_settings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
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
    $pane->uuid = '40462470-5167-4125-9316-c8812de239f6';
    $display->content['new-40462470-5167-4125-9316-c8812de239f6'] = $pane;
    $display->panels['two_66_33_second'][5] = 'new-40462470-5167-4125-9316-c8812de239f6';
    $pane = new stdClass();
    $pane->pid = 'new-0bb1221d-a648-4332-a630-67359e011329';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_og_access_default_value';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0bb1221d-a648-4332-a630-67359e011329';
    $display->content['new-0bb1221d-a648-4332-a630-67359e011329'] = $pane;
    $display->panels['two_66_33_second'][6] = 'new-0bb1221d-a648-4332-a630-67359e011329';
    $pane = new stdClass();
    $pane->pid = 'new-aa495b28-e361-44b1-871d-74132433a821';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'aa495b28-e361-44b1-871d-74132433a821';
    $display->content['new-aa495b28-e361-44b1-871d-74132433a821'] = $pane;
    $display->panels['two_66_33_second'][7] = 'new-aa495b28-e361-44b1-871d-74132433a821';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
  $panelizer->display = $display;
  $export['node:group:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:group:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'group';
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
    $pane->pid = 'new-61b3a571-f9d7-42cf-bf40-53fb532c6061';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
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
    $pane->uuid = '61b3a571-f9d7-42cf-bf40-53fb532c6061';
    $display->content['new-61b3a571-f9d7-42cf-bf40-53fb532c6061'] = $pane;
    $display->panels['bottom'][0] = 'new-61b3a571-f9d7-42cf-bf40-53fb532c6061';
    $pane = new stdClass();
    $pane->pid = 'new-706d940f-873f-4502-862f-89910b8d2b27';
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
    $pane->uuid = '706d940f-873f-4502-862f-89910b8d2b27';
    $display->content['new-706d940f-873f-4502-862f-89910b8d2b27'] = $pane;
    $display->panels['bottom'][1] = 'new-706d940f-873f-4502-862f-89910b8d2b27';
    $pane = new stdClass();
    $pane->pid = 'new-3cea3a1f-8a18-4c83-8350-9750f7d50ce3';
    $pane->panel = 'left';
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
    $pane->uuid = '3cea3a1f-8a18-4c83-8350-9750f7d50ce3';
    $display->content['new-3cea3a1f-8a18-4c83-8350-9750f7d50ce3'] = $pane;
    $display->panels['left'][0] = 'new-3cea3a1f-8a18-4c83-8350-9750f7d50ce3';
    $pane = new stdClass();
    $pane->pid = 'new-95412192-9126-4dbe-8db1-9ed1c954c24f';
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
    $pane->uuid = '95412192-9126-4dbe-8db1-9ed1c954c24f';
    $display->content['new-95412192-9126-4dbe-8db1-9ed1c954c24f'] = $pane;
    $display->panels['right'][0] = 'new-95412192-9126-4dbe-8db1-9ed1c954c24f';
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
        'trim_length' => '250',
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
  $export['node:group:default:teaser'] = $panelizer;

  return $export;
}

<?php
/**
 * @file
 * cbib_license_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cbib_license_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Licens: Forside',
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
          'name' => 'php',
          'settings' => array(
            'description' => 'Is Node ID equal to cbib_license_pages_front_nid?',
            'php' => 'if (isset($contexts[\'argument_entity_id:node_1\']->data->nid) && $contexts[\'argument_entity_id:node_1\']->data->nid == variable_get(\'cbib_license_pages_front_nid\')) {
  return TRUE;
}

return FALSE;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
    $pane->pid = 'new-00393ec2-6b71-4caf-b7cd-1d3a7d08b01a';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'commons_bw_group';
    $pane->subtype = 'commons_bw_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '00393ec2-6b71-4caf-b7cd-1d3a7d08b01a';
    $display->content['new-00393ec2-6b71-4caf-b7cd-1d3a7d08b01a'] = $pane;
    $display->panels['two_66_33_first'][5] = 'new-00393ec2-6b71-4caf-b7cd-1d3a7d08b01a';
    $pane = new stdClass();
    $pane->pid = 'new-139bd3d3-a5fa-4957-9bbd-c80ebce63d57';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_topics_tid' => 'all',
        'field_topics_tid_1' => '23',
      ),
      'override_title' => 1,
      'override_title_text' => 'Nyheder',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '139bd3d3-a5fa-4957-9bbd-c80ebce63d57';
    $display->content['new-139bd3d3-a5fa-4957-9bbd-c80ebce63d57'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-139bd3d3-a5fa-4957-9bbd-c80ebce63d57';
    $pane = new stdClass();
    $pane->pid = 'new-ea23f7be-8a92-476e-b3a3-d339142e56e3';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_topics_tid' => '23',
        'field_topics_tid_1' => 'all',
      ),
      'override_title' => 1,
      'override_title_text' => 'Driftsnyheder',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ea23f7be-8a92-476e-b3a3-d339142e56e3';
    $display->content['new-ea23f7be-8a92-476e-b3a3-d339142e56e3'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-ea23f7be-8a92-476e-b3a3-d339142e56e3';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '16bb1e2b-5444-464c-995a-923d2f0a31c6';
    $display->content['new-16bb1e2b-5444-464c-995a-923d2f0a31c6'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-16bb1e2b-5444-464c-995a-923d2f0a31c6';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bcc18207-63ae-43c3-8bb4-77518e5bccd3';
    $display->content['new-bcc18207-63ae-43c3-8bb4-77518e5bccd3'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd10871fa-ea33-40f2-b568-dda6955d2571';
    $display->content['new-d10871fa-ea33-40f2-b568-dda6955d2571'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-d10871fa-ea33-40f2-b568-dda6955d2571';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '39374465-a69f-4fb2-a2d2-aaa4bfa7491a';
    $display->content['new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a'] = $pane;
    $display->panels['two_66_33_second'][5] = 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '2e7fc52a-d884-4fc9-9589-fa8f31e876d7';
    $display->content['new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7'] = $pane;
    $display->panels['two_66_33_second'][6] = 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '40462470-5167-4125-9316-c8812de239f6';
    $display->content['new-40462470-5167-4125-9316-c8812de239f6'] = $pane;
    $display->panels['two_66_33_second'][7] = 'new-40462470-5167-4125-9316-c8812de239f6';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '0bb1221d-a648-4332-a630-67359e011329';
    $display->content['new-0bb1221d-a648-4332-a630-67359e011329'] = $pane;
    $display->panels['two_66_33_second'][8] = 'new-0bb1221d-a648-4332-a630-67359e011329';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'aa495b28-e361-44b1-871d-74132433a821';
    $display->content['new-aa495b28-e361-44b1-871d-74132433a821'] = $pane;
    $display->panels['two_66_33_second'][9] = 'new-aa495b28-e361-44b1-871d-74132433a821';
    $pane = new stdClass();
    $pane->pid = 'new-77381d67-6d7f-4c46-9af1-932309cca488';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '77381d67-6d7f-4c46-9af1-932309cca488';
    $display->content['new-77381d67-6d7f-4c46-9af1-932309cca488'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-77381d67-6d7f-4c46-9af1-932309cca488';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function cbib_license_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'licens_alle_licenser';
  $page->task = 'page';
  $page->admin_title = 'Licens: Alle licenser';
  $page->admin_description = '';
  $page->path = 'licens/alle';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_licens_alle_licenser_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'licens_alle_licenser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Alle sider',
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
  $display->layout = 'cb_3col_special';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cb3_top' => NULL,
      'cb3_first' => NULL,
      'cb3_second' => NULL,
      'cb3_third' => NULL,
      'cb3_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '306b40a8-935b-4989-9018-edb001ded7a1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4512c135-7653-4c08-8555-bff26340af73';
    $pane->panel = 'cb3_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->uuid = '4512c135-7653-4c08-8555-bff26340af73';
    $display->content['new-4512c135-7653-4c08-8555-bff26340af73'] = $pane;
    $display->panels['cb3_first'][0] = 'new-4512c135-7653-4c08-8555-bff26340af73';
    $pane = new stdClass();
    $pane->pid = 'new-4444e8ca-5ea5-4127-af93-b9b6832fc8f7';
    $pane->panel = 'cb3_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Alle licenser',
      'body' => '<p>Beskrivelse af hvad man kan under den enkelte licens.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4444e8ca-5ea5-4127-af93-b9b6832fc8f7';
    $display->content['new-4444e8ca-5ea5-4127-af93-b9b6832fc8f7'] = $pane;
    $display->panels['cb3_second'][0] = 'new-4444e8ca-5ea5-4127-af93-b9b6832fc8f7';
    $pane = new stdClass();
    $pane->pid = 'new-58cf3235-ab11-4a3e-8eca-6a4c2ca3d572';
    $pane->panel = 'cb3_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '58cf3235-ab11-4a3e-8eca-6a4c2ca3d572';
    $display->content['new-58cf3235-ab11-4a3e-8eca-6a4c2ca3d572'] = $pane;
    $display->panels['cb3_top'][0] = 'new-58cf3235-ab11-4a3e-8eca-6a4c2ca3d572';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4444e8ca-5ea5-4127-af93-b9b6832fc8f7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['licens_alle_licenser'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'licens_formidling_og_pr';
  $page->task = 'page';
  $page->admin_title = 'Licens: Formidling og PR';
  $page->admin_description = '';
  $page->path = 'licens/formidling-og-pr';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_licens_formidling_og_pr_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'licens_formidling_og_pr';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Formidling og PR',
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
  $display->layout = 'cb_3col_special';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cb3_top' => NULL,
      'cb3_first' => NULL,
      'cb3_second' => NULL,
      'cb3_third' => NULL,
      'cb3_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '066a4980-4a51-40d8-937d-baa2f5b1ebc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-605bb746-e142-4c61-a872-ebee25f5019f';
    $pane->panel = 'cb3_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->uuid = '605bb746-e142-4c61-a872-ebee25f5019f';
    $display->content['new-605bb746-e142-4c61-a872-ebee25f5019f'] = $pane;
    $display->panels['cb3_first'][0] = 'new-605bb746-e142-4c61-a872-ebee25f5019f';
    $pane = new stdClass();
    $pane->pid = 'new-606be5d3-2d49-49d3-98cb-adeca977f2cb';
    $pane->panel = 'cb3_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Formidling og PR',
      'body' => '<p>Beskrivelse om&nbsp;formidling og PR</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '606be5d3-2d49-49d3-98cb-adeca977f2cb';
    $display->content['new-606be5d3-2d49-49d3-98cb-adeca977f2cb'] = $pane;
    $display->panels['cb3_second'][0] = 'new-606be5d3-2d49-49d3-98cb-adeca977f2cb';
    $pane = new stdClass();
    $pane->pid = 'new-2f4c6053-bae2-4034-bd2e-828e9dd39bd9';
    $pane->panel = 'cb3_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '2f4c6053-bae2-4034-bd2e-828e9dd39bd9';
    $display->content['new-2f4c6053-bae2-4034-bd2e-828e9dd39bd9'] = $pane;
    $display->panels['cb3_top'][0] = 'new-2f4c6053-bae2-4034-bd2e-828e9dd39bd9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-606be5d3-2d49-49d3-98cb-adeca977f2cb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['licens_formidling_og_pr'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'license_ambassadors';
  $page->task = 'page';
  $page->admin_title = 'License ambassadors';
  $page->admin_description = '';
  $page->path = 'licens/ambassadoerere';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_license_ambassadors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'license_ambassadors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'cb_3col_special';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cb3_top' => NULL,
      'cb3_first' => NULL,
      'cb3_second' => NULL,
      'cb3_third' => NULL,
      'cb3_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '87d8c197-2061-4e54-b955-10fa41bcfcde';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2be5ba3a-4590-4d63-b0e3-86d9d646d15a';
    $pane->panel = 'cb3_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
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
    $pane->uuid = '2be5ba3a-4590-4d63-b0e3-86d9d646d15a';
    $display->content['new-2be5ba3a-4590-4d63-b0e3-86d9d646d15a'] = $pane;
    $display->panels['cb3_first'][0] = 'new-2be5ba3a-4590-4d63-b0e3-86d9d646d15a';
    $pane = new stdClass();
    $pane->pid = 'new-17c3963f-a00b-4ae2-98a7-de74c82cbe3b';
    $pane->panel = 'cb3_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '17c3963f-a00b-4ae2-98a7-de74c82cbe3b';
    $display->content['new-17c3963f-a00b-4ae2-98a7-de74c82cbe3b'] = $pane;
    $display->panels['cb3_top'][0] = 'new-17c3963f-a00b-4ae2-98a7-de74c82cbe3b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-17c3963f-a00b-4ae2-98a7-de74c82cbe3b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['license_ambassadors'] = $page;

  return $pages;

}

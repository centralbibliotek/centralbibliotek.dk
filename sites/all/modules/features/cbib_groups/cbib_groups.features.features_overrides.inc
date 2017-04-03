<?php
/**
 * @file
 * cbib_groups.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_groups_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:group:default.display|content|new-0bb1221d-a648-4332-a630-67359e011329"] = (object) array(
      'pid' => 'new-0bb1221d-a648-4332-a630-67359e011329',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_og_access_default_value',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'hidden',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 8,
      'locks' => array(),
      'uuid' => '0bb1221d-a648-4332-a630-67359e011329',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-10f12c5b-679e-d294-b1bd-9aac845800f5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-13120946-03a1-bfc4-2d74-f39dd758ebce"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-16bb1e2b-5444-464c-995a-923d2f0a31c6"] = (object) array(
      'pid' => 'new-16bb1e2b-5444-464c-995a-923d2f0a31c6',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:og_group_ref',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'og_list_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => 'Tilknytning',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '16bb1e2b-5444-464c-995a-923d2f0a31c6',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-1f218aab-81dc-4e02-8c86-79210bed4a0c"] = (object) array(
      'pid' => 'new-1f218aab-81dc-4e02-8c86-79210bed4a0c',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'node_followers-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => 1,
        'override_title_text' => 'Følgere',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 12,
      'locks' => array(),
      'uuid' => '1f218aab-81dc-4e02-8c86-79210bed4a0c',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-24f4b75a-80ea-447a-9f3b-a4e200746f48"] = (object) array(
      'pid' => 'new-24f4b75a-80ea-447a-9f3b-a4e200746f48',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_link',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'link_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 11,
      'locks' => array(),
      'uuid' => '24f4b75a-80ea-447a-9f3b-a4e200746f48',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7"] = (object) array(
      'pid' => 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:group_access',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'hidden',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => '2e7fc52a-d884-4fc9-9589-fa8f31e876d7',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a"] = (object) array(
      'pid' => 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_radioactivity',
      'shown' => FALSE,
      'access' => array(),
      'configuration' => array(
        'label' => 'above',
        'formatter' => 'radioactivity_combo_formatter',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'energy' => 10,
          'type' => 'none',
          'accuracy' => 100,
        ),
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '39374465-a69f-4fb2-a2d2-aaa4bfa7491a',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-40462470-5167-4125-9316-c8812de239f6"] = (object) array(
      'pid' => 'new-40462470-5167-4125-9316-c8812de239f6',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_og_subscribe_settings',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'list_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 7,
      'locks' => array(),
      'uuid' => '40462470-5167-4125-9316-c8812de239f6',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-4217fe9c-2561-438d-847c-4a289f5b4bf0"] = (object) array(
      'pid' => 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_document_file',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'extended_file_field',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'extensionfilter' => 'all',
          'extensions' => '',
          'extensionbehavior' => 'exclude',
          'columns' => array(
            'filename' => 'filename',
          ),
          'showhidden' => 'exclude',
          'sortby' => 'reverse',
          'sortorder' => 'asc',
          'usedescriptionforfilename' => 1,
          'restrictdisplay' => -1,
          'restrictbehavior' => 'exclude',
          'usefieldset' => 0,
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 10,
      'locks' => array(),
      'uuid' => '4217fe9c-2561-438d-847c-4a289f5b4bf0',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-52796f83-93dd-2cf4-41aa-33520dc31e5f"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-55cd68c0-3a53-4a0d-af36-35da29489356"] = (object) array(
      'pid' => 'new-55cd68c0-3a53-4a0d-af36-35da29489356',
      'panel' => 'two_66_33_first',
      'type' => 'entity_field',
      'subtype' => 'node:body',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'text_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '55cd68c0-3a53-4a0d-af36-35da29489356',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-6437b227-b02b-4d81-8547-46a1ee7e9ab8"] = (object) array(
      'pid' => 'new-6437b227-b02b-4d81-8547-46a1ee7e9ab8',
      'panel' => 'two_66_33_first',
      'type' => 'commons_bw_group',
      'subtype' => 'commons_bw_group',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '6437b227-b02b-4d81-8547-46a1ee7e9ab8',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-80b62348-7cee-e304-5d65-0ce1b6bbb216"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-8567ca5b-9641-4b81-b9f4-079402a9464a"] = (object) array(
      'pid' => 'new-8567ca5b-9641-4b81-b9f4-079402a9464a',
      'panel' => 'two_66_33_first',
      'type' => 'entity_field',
      'subtype' => 'node:field_group_logo',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'image',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'image_link' => '',
          'image_style' => 'full_node',
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '8567ca5b-9641-4b81-b9f4-079402a9464a',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-99cf40d4-9b5e-4f26-b6c5-e772f6cdfb74"] = (object) array(
      'pid' => 'new-99cf40d4-9b5e-4f26-b6c5-e772f6cdfb74',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'commons_events_upcoming-panel_pane_7',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '99cf40d4-9b5e-4f26-b6c5-e772f6cdfb74',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-a7009535-0e2a-2c94-edd2-4ecc953c4ca2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-aa495b28-e361-44b1-871d-74132433a821"] = (object) array(
      'pid' => 'new-aa495b28-e361-44b1-871d-74132433a821',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_topics',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'taxonomy_term_reference_link',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 9,
      'locks' => array(),
      'uuid' => 'aa495b28-e361-44b1-871d-74132433a821',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-ba735f2b-4734-7724-098d-1925c6a4bb47"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-bb5618ef-915c-4faa-ba77-bbb198184e22"] = (object) array(
      'pid' => 'new-bb5618ef-915c-4faa-ba77-bbb198184e22',
      'panel' => 'two_66_33_first',
      'type' => 'node_links',
      'subtype' => 'node_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => FALSE,
        'override_title_text' => '',
        'build_mode' => 'page_manager',
        'identifier' => '',
        'link' => TRUE,
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_class' => 'link-wrapper',
      ),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => 'bb5618ef-915c-4faa-ba77-bbb198184e22',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-bcc18207-63ae-43c3-8bb4-77518e5bccd3"] = (object) array(
      'pid' => 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:group_group',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'commons_groups_group_subscribe',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'field_name' => 0,
        ),
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => 'bcc18207-63ae-43c3-8bb4-77518e5bccd3',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-d10871fa-ea33-40f2-b568-dda6955d2571"] = (object) array(
      'pid' => 'new-d10871fa-ea33-40f2-b568-dda6955d2571',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:og_roles_permissions',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'list_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => 'd10871fa-ea33-40f2-b568-dda6955d2571',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-e627add5-b6cb-4c15-8ff7-40caca347d88"] = (object) array(
      'pid' => 'new-e627add5-b6cb-4c15-8ff7-40caca347d88',
      'panel' => 'two_66_33_first',
      'type' => 'entity_field',
      'subtype' => 'node:title_field',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'title_linked',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'title_style' => 'h1',
          'title_link' => '',
          'title_class' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'e627add5-b6cb-4c15-8ff7-40caca347d88',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-fa81955d-e048-4ba5-9b21-4a69857ddcb9"] = (object) array(
      'pid' => 'new-fa81955d-e048-4ba5-9b21-4a69857ddcb9',
      'panel' => 'two_66_33_second',
      'type' => 'block',
      'subtype' => 'print_ui-print-links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'fa81955d-e048-4ba5-9b21-4a69857ddcb9',
    );
  $overrides["panelizer_defaults.node:group:default.display|hide_title"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|bottom"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|left"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|right"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|top"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_first|0"] = 'new-8567ca5b-9641-4b81-b9f4-079402a9464a';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_first|1"] = 'new-e627add5-b6cb-4c15-8ff7-40caca347d88';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_first|2"] = 'new-55cd68c0-3a53-4a0d-af36-35da29489356';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_first|3"] = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_first|4"] = 'new-6437b227-b02b-4d81-8547-46a1ee7e9ab8';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|0"] = 'new-fa81955d-e048-4ba5-9b21-4a69857ddcb9';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|1"] = 'new-16bb1e2b-5444-464c-995a-923d2f0a31c6';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|10"] = 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|11"] = 'new-24f4b75a-80ea-447a-9f3b-a4e200746f48';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|12"] = 'new-1f218aab-81dc-4e02-8c86-79210bed4a0c';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|2"] = 'new-99cf40d4-9b5e-4f26-b6c5-e772f6cdfb74';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|3"] = 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|4"] = 'new-d10871fa-ea33-40f2-b568-dda6955d2571';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|5"] = 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|6"] = 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|7"] = 'new-40462470-5167-4125-9316-c8812de239f6';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|8"] = 'new-0bb1221d-a648-4332-a630-67359e011329';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|9"] = 'new-aa495b28-e361-44b1-871d-74132433a821';
  $overrides["panelizer_defaults.node:group:default.display|title"] = '';
  $overrides["panelizer_defaults.node:group:default.display|title_pane"] = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
  $overrides["panelizer_defaults.node:group:default.display|uuid"] = 'c7b76f7e-3bdf-4853-9197-e495df4f36b9';
  $overrides["panelizer_defaults.node:group:default.pipeline"] = 'standard';
  $overrides["panelizer_defaults.node:group:default.title"] = 'Standard';
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-026f9d2d-fd0e-d794-1971-47eb628a7f6e"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-13859111-e3fa-5e54-a93c-57f09d719e38"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-196054ef-3346-4b6e-8e02-74b161d22ff5"] = (object) array(
      'pid' => 'new-196054ef-3346-4b6e-8e02-74b161d22ff5',
      'panel' => 'bottom',
      'type' => 'entity_field',
      'subtype' => 'node:field_topics',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'taxonomy_term_reference_link',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '196054ef-3346-4b6e-8e02-74b161d22ff5',
    );
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-3c20711f-fa69-4dbe-b5ab-1650ea8b092b"] = (object) array(
      'pid' => 'new-3c20711f-fa69-4dbe-b5ab-1650ea8b092b',
      'panel' => 'right',
      'type' => 'entity_field',
      'subtype' => 'node:title_field',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'title_linked',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'title_style' => 'h2',
          'title_link' => 'content',
          'title_class' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '3c20711f-fa69-4dbe-b5ab-1650ea8b092b',
    );
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-5c57aa04-dee5-417a-bdb7-188f99645897"] = (object) array(
      'pid' => 'new-5c57aa04-dee5-417a-bdb7-188f99645897',
      'panel' => 'bottom',
      'type' => 'entity_field',
      'subtype' => 'node:og_group_ref',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'entityreference_label',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'link' => 1,
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '5c57aa04-dee5-417a-bdb7-188f99645897',
    );
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-6c3207ac-19f3-8184-11ba-e3aee789a9c8"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-926a99b3-8e75-aa14-2542-16f2ab9e70b3|configuration|formatter_settings|image_style"] = 'teaser';
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-926a99b3-8e75-aa14-2542-16f2ab9e70b3|panel"] = 'left';
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-926a99b3-8e75-aa14-2542-16f2ab9e70b3|position"] = 0;
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-c22911c5-3c21-75b4-c5f3-80efb733956b|configuration|formatter_settings|trim_length"] = 250;
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-c22911c5-3c21-75b4-c5f3-80efb733956b|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-c22911c5-3c21-75b4-c5f3-80efb733956b|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-c22911c5-3c21-75b4-c5f3-80efb733956b|panel"] = 'right';
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-c22911c5-3c21-75b4-c5f3-80efb733956b|position"] = 1;
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-cb706c02-36e8-a414-c9f5-c34bf15861ca"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default:teaser.display|content|new-f7a3719c-d7be-f024-ed91-c8c0df943df4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default:teaser.display|hide_title"] = 1;
  $overrides["panelizer_defaults.node:group:default:teaser.display|layout"] = 'twocol_stacked';
  $overrides["panelizer_defaults.node:group:default:teaser.display|panel_settings|style_settings|bottom"] = NULL;
  $overrides["panelizer_defaults.node:group:default:teaser.display|panel_settings|style_settings|left"] = NULL;
  $overrides["panelizer_defaults.node:group:default:teaser.display|panel_settings|style_settings|right"] = NULL;
  $overrides["panelizer_defaults.node:group:default:teaser.display|panel_settings|style_settings|top"] = NULL;
  $overrides["panelizer_defaults.node:group:default:teaser.display|panels|bottom"] = array(
    0 => 'new-196054ef-3346-4b6e-8e02-74b161d22ff5',
    1 => 'new-5c57aa04-dee5-417a-bdb7-188f99645897',
  );
  $overrides["panelizer_defaults.node:group:default:teaser.display|panels|left"] = array(
    0 => 'new-926a99b3-8e75-aa14-2542-16f2ab9e70b3',
  );
  $overrides["panelizer_defaults.node:group:default:teaser.display|panels|one_main"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default:teaser.display|panels|right"] = array(
    0 => 'new-3c20711f-fa69-4dbe-b5ab-1650ea8b092b',
    1 => 'new-c22911c5-3c21-75b4-c5f3-80efb733956b',
  );

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__document.value|extra_fields|form|metatags"] = array(
    'weight' => 9,
  );
  $overrides["variable.field_bundle_settings_node__document.value|extra_fields|form|path"] = array(
    'weight' => 7,
  );
  $overrides["variable.field_bundle_settings_node__document.value|extra_fields|form|redirect"] = array(
    'weight' => 8,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|print"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|rss"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|search_index"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|extra_fields|form|metatags"] = array(
    'weight' => 6,
  );
  $overrides["variable.field_bundle_settings_node__post.value|extra_fields|form|path"] = array(
    'weight' => 5,
  );
  $overrides["variable.field_bundle_settings_node__post.value|extra_fields|form|redirect"] = array(
    'weight' => 4,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|print"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|rss"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|search_index"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );

  // Exported overrides for: views_view
  $overrides["views_view.commons_bw_posts.display|default|display_options|arguments|gid|exception"] = array(
    'title' => 'Alle',
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|empty|area|content"] = 'Der er ikke nogle indlæg i denne gruppe.';
  $overrides["views_view.commons_bw_posts.display|default|display_options|exposed_form|options"] = array(
    'submit_button' => 'Udfør',
    'reset_button_label' => 'Gendan',
    'exposed_sorts_label' => 'Sortér efter',
    'sort_asc_label' => 'Stigende',
    'sort_desc_label' => 'Faldende',
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|filters|flagged"] = array(
    'id' => 'flagged',
    'table' => 'flag_content',
    'field' => 'flagged',
    'relationship' => 'flag_content_rel',
    'ui_name' => 'Following',
    'value' => 1,
    'exposed' => TRUE,
    'expose' => array(
      'operator_id' => '',
      'label' => 'Følger',
      'operator' => 'flagged_op',
      'identifier' => 'following',
    ),
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|pager|options|expose"] = array(
    'items_per_page_label' => 'Antal elementer',
    'items_per_page_options_all_label' => '- Alle -',
    'offset_label' => 'Forskydning',
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|pager|options|tags"] = array(
    'first' => '«',
    'previous' => '‹',
    'next' => '›',
    'last' => '»',
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|relationships|flag_content_rel"] = array(
    'id' => 'flag_content_rel',
    'table' => 'node',
    'field' => 'flag_content_rel',
    'ui_name' => 'Following',
    'label' => 'following',
    'required' => 0,
    'flag' => 'commons_follow_node',
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|sorts|created|expose|label"] = 'Seneste';
  $overrides["views_view.commons_bw_posts.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'exposed' => TRUE,
    'expose' => array(
      'label' => 'mest aktive',
    ),
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|use_more_text"] = 'mere';

 return $overrides;
}

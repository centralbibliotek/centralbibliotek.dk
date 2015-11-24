<?php
/**
 * @file
 * cbib_license.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_license_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:license:default.display|content|new-10f12c5b-679e-d294-b1bd-9aac845800f5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:license:default.display|content|new-13120946-03a1-bfc4-2d74-f39dd758ebce"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:license:default.display|content|new-14a730cb-6046-4df6-b8fa-bffd73e6d57a"] = (object) array(
      'pid' => 'new-14a730cb-6046-4df6-b8fa-bffd73e6d57a',
      'panel' => 'cb3_second',
      'type' => 'node_links',
      'subtype' => 'node_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
        'build_mode' => 'full',
        'identifier' => '',
        'link' => 1,
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
      'uuid' => '14a730cb-6046-4df6-b8fa-bffd73e6d57a',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-1b8dfa11-56c5-413d-b3cd-98aa21b24a3f"] = (object) array(
      'pid' => 'new-1b8dfa11-56c5-413d-b3cd-98aa21b24a3f',
      'panel' => 'cb3_second',
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
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '1b8dfa11-56c5-413d-b3cd-98aa21b24a3f',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-2e2eb541-eac3-4ad1-8e31-bb2c4e094da6"] = (object) array(
      'pid' => 'new-2e2eb541-eac3-4ad1-8e31-bb2c4e094da6',
      'panel' => 'cb3_third',
      'type' => 'entity_field',
      'subtype' => 'node:field_license_access_statistic',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
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
      'position' => 6,
      'locks' => array(),
      'uuid' => '2e2eb541-eac3-4ad1-8e31-bb2c4e094da6',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-37efc3d8-494a-4925-92b8-10fcd2b4628f"] = (object) array(
      'pid' => 'new-37efc3d8-494a-4925-92b8-10fcd2b4628f',
      'panel' => 'cb3_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_license_ambassador',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'entityreference_entity_view',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'view_mode' => 'token',
          'links' => 0,
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
      'uuid' => '37efc3d8-494a-4925-92b8-10fcd2b4628f',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-3bf1052b-9f58-4103-b013-d290b9d495f9"] = (object) array(
      'pid' => 'new-3bf1052b-9f58-4103-b013-d290b9d495f9',
      'panel' => 'cb3_third',
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
      'position' => 10,
      'locks' => array(),
      'uuid' => '3bf1052b-9f58-4103-b013-d290b9d495f9',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-52796f83-93dd-2cf4-41aa-33520dc31e5f"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:license:default.display|content|new-52bbe040-4647-473a-8f74-a81d6787fa8e"] = (object) array(
      'pid' => 'new-52bbe040-4647-473a-8f74-a81d6787fa8e',
      'panel' => 'cb3_third',
      'type' => 'panels_mini',
      'subtype' => 'license_data_access',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => 1,
        'override_title_text' => 'Licensadgange',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '52bbe040-4647-473a-8f74-a81d6787fa8e',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-5637720c-9d2f-49ed-af5f-16307dc9cbd5"] = (object) array(
      'pid' => 'new-5637720c-9d2f-49ed-af5f-16307dc9cbd5',
      'panel' => 'cb3_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_license_target',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'text_default',
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
      'position' => 2,
      'locks' => array(),
      'uuid' => '5637720c-9d2f-49ed-af5f-16307dc9cbd5',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-647d2bbf-c07e-45a9-8c18-b1aeab475b9a"] = (object) array(
      'pid' => 'new-647d2bbf-c07e-45a9-8c18-b1aeab475b9a',
      'panel' => 'cb3_third',
      'type' => 'entity_field',
      'subtype' => 'node:field_license_pid',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'text_default',
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
      'position' => 9,
      'locks' => array(),
      'uuid' => '647d2bbf-c07e-45a9-8c18-b1aeab475b9a',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-65b23e6a-899a-43de-bcde-f64793d666f7"] = (object) array(
      'pid' => 'new-65b23e6a-899a-43de-bcde-f64793d666f7',
      'panel' => 'cb3_third',
      'type' => 'entity_field',
      'subtype' => 'node:field_license_newsletter',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'link_default',
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
      'uuid' => '65b23e6a-899a-43de-bcde-f64793d666f7',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-6a82cad5-7baf-4930-9035-81f0a298eabd"] = (object) array(
      'pid' => 'new-6a82cad5-7baf-4930-9035-81f0a298eabd',
      'panel' => 'cb3_first',
      'type' => 'views_panes',
      'subtype' => 'centralbibliotek_license-panel_pane_3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'items_per_page' => 10,
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
      'uuid' => '6a82cad5-7baf-4930-9035-81f0a298eabd',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-77161b97-7dd7-46f1-9746-d9d564e83b9b"] = (object) array(
      'pid' => 'new-77161b97-7dd7-46f1-9746-d9d564e83b9b',
      'panel' => 'cb3_third',
      'type' => 'entity_field',
      'subtype' => 'node:field_image',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'image',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'image_style' => 'teaser',
          'image_link' => '',
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
      'uuid' => '77161b97-7dd7-46f1-9746-d9d564e83b9b',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-80b62348-7cee-e304-5d65-0ce1b6bbb216|panel"] = 'cb3_second';
  $overrides["panelizer_defaults.node:license:default.display|content|new-80b62348-7cee-e304-5d65-0ce1b6bbb216|position"] = 7;
  $overrides["panelizer_defaults.node:license:default.display|content|new-87fdca1e-7c00-46e5-8960-e882b12f8da2"] = (object) array(
      'pid' => 'new-87fdca1e-7c00-46e5-8960-e882b12f8da2',
      'panel' => 'cb3_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_search_facility',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'above',
        'formatter' => 'text_default',
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
      'position' => 5,
      'locks' => array(),
      'uuid' => '87fdca1e-7c00-46e5-8960-e882b12f8da2',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-88522d6d-a52f-4240-a4c8-a4f57c0015fb"] = (object) array(
      'pid' => 'new-88522d6d-a52f-4240-a4c8-a4f57c0015fb',
      'panel' => 'cb3_third',
      'type' => 'panels_mini',
      'subtype' => 'license_base_info',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '88522d6d-a52f-4240-a4c8-a4f57c0015fb',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-92ce9931-edb1-4f39-9160-e05caae665b7"] = (object) array(
      'pid' => 'new-92ce9931-edb1-4f39-9160-e05caae665b7',
      'panel' => 'cb3_third',
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
      'position' => 1,
      'locks' => array(),
      'uuid' => '92ce9931-edb1-4f39-9160-e05caae665b7',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-94941673-7960-4d4e-80b9-c49caac262c6"] = (object) array(
      'pid' => 'new-94941673-7960-4d4e-80b9-c49caac262c6',
      'panel' => 'cb3_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_license_search_example',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'above',
        'formatter' => 'text_default',
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
      'uuid' => '94941673-7960-4d4e-80b9-c49caac262c6',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-9841cf6e-0a88-494c-8a32-987d23fc3d8f"] = (object) array(
      'pid' => 'new-9841cf6e-0a88-494c-8a32-987d23fc3d8f',
      'panel' => 'cb3_third',
      'type' => 'entity_field',
      'subtype' => 'node:field_license_subscription',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
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
      'position' => 8,
      'locks' => array(),
      'uuid' => '9841cf6e-0a88-494c-8a32-987d23fc3d8f',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-a7009535-0e2a-2c94-edd2-4ecc953c4ca2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:license:default.display|content|new-b5bc4ab9-1a98-44cb-9c4a-7501ea3b8a0a"] = (object) array(
      'pid' => 'new-b5bc4ab9-1a98-44cb-9c4a-7501ea3b8a0a',
      'panel' => 'cb3_second',
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
          'title_class' => 'title no-top',
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
      'uuid' => 'b5bc4ab9-1a98-44cb-9c4a-7501ea3b8a0a',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-ba735f2b-4734-7724-098d-1925c6a4bb47"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:license:default.display|content|new-ca5da919-63ac-4440-ad91-619f469b24ba"] = (object) array(
      'pid' => 'new-ca5da919-63ac-4440-ad91-619f469b24ba',
      'panel' => 'cb3_third',
      'type' => 'views_panes',
      'subtype' => 'biblioteker-panel_pane_2',
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
      'position' => 5,
      'locks' => array(),
      'uuid' => 'ca5da919-63ac-4440-ad91-619f469b24ba',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-cf26027d-cd4c-45a1-a9f3-be078c5827d1"] = (object) array(
      'pid' => 'new-cf26027d-cd4c-45a1-a9f3-be078c5827d1',
      'panel' => 'cb3_third',
      'type' => 'entity_field',
      'subtype' => 'node:field_license_similar_ref',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
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
      'position' => 3,
      'locks' => array(),
      'uuid' => 'cf26027d-cd4c-45a1-a9f3-be078c5827d1',
    );
  $overrides["panelizer_defaults.node:license:default.display|content|new-e47ac1d8-a84a-495a-aadf-0b5a6aef7756"] = (object) array(
      'pid' => 'new-e47ac1d8-a84a-495a-aadf-0b5a6aef7756',
      'panel' => 'cb3_top',
      'type' => 'block',
      'subtype' => 'menu-menu-license-menu',
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
      'position' => 0,
      'locks' => array(),
      'uuid' => 'e47ac1d8-a84a-495a-aadf-0b5a6aef7756',
    );
  $overrides["panelizer_defaults.node:license:default.display|hide_title"] = 1;
  $overrides["panelizer_defaults.node:license:default.display|layout"] = 'cb_3col_special';
  $overrides["panelizer_defaults.node:license:default.display|panel_settings|style_settings|cb3_bottom"] = NULL;
  $overrides["panelizer_defaults.node:license:default.display|panel_settings|style_settings|cb3_first"] = NULL;
  $overrides["panelizer_defaults.node:license:default.display|panel_settings|style_settings|cb3_second"] = NULL;
  $overrides["panelizer_defaults.node:license:default.display|panel_settings|style_settings|cb3_third"] = NULL;
  $overrides["panelizer_defaults.node:license:default.display|panel_settings|style_settings|cb3_top"] = NULL;
  $overrides["panelizer_defaults.node:license:default.display|panels|cb3_first"] = array(
    0 => 'new-6a82cad5-7baf-4930-9035-81f0a298eabd',
  );
  $overrides["panelizer_defaults.node:license:default.display|panels|cb3_second"] = array(
    0 => 'new-b5bc4ab9-1a98-44cb-9c4a-7501ea3b8a0a',
    1 => 'new-37efc3d8-494a-4925-92b8-10fcd2b4628f',
    2 => 'new-5637720c-9d2f-49ed-af5f-16307dc9cbd5',
    3 => 'new-1b8dfa11-56c5-413d-b3cd-98aa21b24a3f',
    4 => 'new-94941673-7960-4d4e-80b9-c49caac262c6',
    5 => 'new-87fdca1e-7c00-46e5-8960-e882b12f8da2',
    6 => 'new-14a730cb-6046-4df6-b8fa-bffd73e6d57a',
    7 => 'new-80b62348-7cee-e304-5d65-0ce1b6bbb216',
  );
  $overrides["panelizer_defaults.node:license:default.display|panels|cb3_third"] = array(
    0 => 'new-77161b97-7dd7-46f1-9746-d9d564e83b9b',
    1 => 'new-92ce9931-edb1-4f39-9160-e05caae665b7',
    2 => 'new-88522d6d-a52f-4240-a4c8-a4f57c0015fb',
    3 => 'new-cf26027d-cd4c-45a1-a9f3-be078c5827d1',
    4 => 'new-52bbe040-4647-473a-8f74-a81d6787fa8e',
    5 => 'new-ca5da919-63ac-4440-ad91-619f469b24ba',
    6 => 'new-2e2eb541-eac3-4ad1-8e31-bb2c4e094da6',
    7 => 'new-65b23e6a-899a-43de-bcde-f64793d666f7',
    8 => 'new-9841cf6e-0a88-494c-8a32-987d23fc3d8f',
    9 => 'new-647d2bbf-c07e-45a9-8c18-b1aeab475b9a',
    10 => 'new-3bf1052b-9f58-4103-b013-d290b9d495f9',
  );
  $overrides["panelizer_defaults.node:license:default.display|panels|cb3_top"] = array(
    0 => 'new-e47ac1d8-a84a-495a-aadf-0b5a6aef7756',
  );
  $overrides["panelizer_defaults.node:license:default.display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:license:default.display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:license:default.no_blocks"] = TRUE;

 return $overrides;
}

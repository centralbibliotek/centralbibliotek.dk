<?php
/**
 * @file
 * cbib_temaspor.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_temaspor_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-10f12c5b-679e-d294-b1bd-9aac845800f5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-13120946-03a1-bfc4-2d74-f39dd758ebce"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-30f3c018-7b8b-45aa-936d-c47bd6160109"] = (object) array(
      'pid' => 'new-30f3c018-7b8b-45aa-936d-c47bd6160109',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'temaspor-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '30f3c018-7b8b-45aa-936d-c47bd6160109',
    );
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-3d102789-dadf-42ec-a948-844a249f582d"] = (object) array(
      'pid' => 'new-3d102789-dadf-42ec-a948-844a249f582d',
      'panel' => 'one_main',
      'type' => 'entity_field',
      'subtype' => 'node:field_temapor_underemne',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'above',
        'formatter' => 'entityreference_entity_view',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'view_mode' => 'default',
          'links' => 1,
        ),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '3d102789-dadf-42ec-a948-844a249f582d',
    );
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-52796f83-93dd-2cf4-41aa-33520dc31e5f"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-5eebc077-1db1-4da5-a366-26eab424272f"] = (object) array(
      'pid' => 'new-5eebc077-1db1-4da5-a366-26eab424272f',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'temaspor-panel_pane_2',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '5eebc077-1db1-4da5-a366-26eab424272f',
    );
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-80b62348-7cee-e304-5d65-0ce1b6bbb216"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-a7009535-0e2a-2c94-edd2-4ecc953c4ca2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-ba735f2b-4734-7724-098d-1925c6a4bb47"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-cd9009e7-accc-4a1f-a37e-62fa02594282"] = (object) array(
      'pid' => 'new-cd9009e7-accc-4a1f-a37e-62fa02594282',
      'panel' => 'one_main',
      'type' => 'entity_field',
      'subtype' => 'node:field_temaspor_br_dtekst',
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
        'override_title' => 1,
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
      'uuid' => 'cd9009e7-accc-4a1f-a37e-62fa02594282',
    );
  $overrides["panelizer_defaults.node:temaspor:default.display|layout"] = 'one';
  $overrides["panelizer_defaults.node:temaspor:default.display|panel_settings|style_settings|one_main"] = NULL;
  $overrides["panelizer_defaults.node:temaspor:default.display|panels|one_main"] = array(
    0 => 'new-30f3c018-7b8b-45aa-936d-c47bd6160109',
    1 => 'new-3d102789-dadf-42ec-a948-844a249f582d',
    2 => 'new-5eebc077-1db1-4da5-a366-26eab424272f',
    3 => 'new-cd9009e7-accc-4a1f-a37e-62fa02594282',
  );
  $overrides["panelizer_defaults.node:temaspor:default.display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|uuid"] = '923746ac-7f33-430a-ba86-a2323d208b2b';

  // Exported overrides for: variable

 return $overrides;
}

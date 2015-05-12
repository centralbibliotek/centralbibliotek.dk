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

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:group:default.display|content|new-0bb1221d-a648-4332-a630-67359e011329|position"] = 7;
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
      'position' => 10,
      'locks' => array(),
      'uuid' => '1f218aab-81dc-4e02-8c86-79210bed4a0c',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7|position"] = 5;
  $overrides["panelizer_defaults.node:group:default.display|content|new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a|position"] = 4;
  $overrides["panelizer_defaults.node:group:default.display|content|new-40462470-5167-4125-9316-c8812de239f6|position"] = 6;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4217fe9c-2561-438d-847c-4a289f5b4bf0|panel"] = 'two_66_33_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4217fe9c-2561-438d-847c-4a289f5b4bf0|position"] = 9;
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
      'position' => 1,
      'locks' => array(),
      'uuid' => '99cf40d4-9b5e-4f26-b6c5-e772f6cdfb74',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-aa495b28-e361-44b1-871d-74132433a821|position"] = 8;
  $overrides["panelizer_defaults.node:group:default.display|content|new-bcc18207-63ae-43c3-8bb4-77518e5bccd3|position"] = 2;
  $overrides["panelizer_defaults.node:group:default.display|content|new-d10871fa-ea33-40f2-b568-dda6955d2571|position"] = 3;
  $overrides["panelizer_defaults.node:group:default.display|content|new-ea23f7be-8a92-476e-b3a3-d339142e56e3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_bottom"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_first|4"] = 'new-6437b227-b02b-4d81-8547-46a1ee7e9ab8';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|1"] = 'new-99cf40d4-9b5e-4f26-b6c5-e772f6cdfb74';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|10"] = 'new-1f218aab-81dc-4e02-8c86-79210bed4a0c';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|2"] = 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|3"] = 'new-d10871fa-ea33-40f2-b568-dda6955d2571';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|4"] = 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|5"] = 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|6"] = 'new-40462470-5167-4125-9316-c8812de239f6';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|7"] = 'new-0bb1221d-a648-4332-a630-67359e011329';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|8"] = 'new-aa495b28-e361-44b1-871d-74132433a821';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|9"] = 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0';

 return $overrides;
}

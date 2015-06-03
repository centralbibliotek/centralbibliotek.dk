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
  $overrides["panelizer_defaults.node:group:default.display|content|new-16bb1e2b-5444-464c-995a-923d2f0a31c6|configuration|override_title_text"] = 'Tilknytning';
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
      'position' => 11,
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
      'position' => 10,
      'locks' => array(),
      'uuid' => '24f4b75a-80ea-447a-9f3b-a4e200746f48',
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
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|10"] = 'new-24f4b75a-80ea-447a-9f3b-a4e200746f48';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|11"] = 'new-1f218aab-81dc-4e02-8c86-79210bed4a0c';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|2"] = 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|3"] = 'new-d10871fa-ea33-40f2-b568-dda6955d2571';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|4"] = 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|5"] = 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|6"] = 'new-40462470-5167-4125-9316-c8812de239f6';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|7"] = 'new-0bb1221d-a648-4332-a630-67359e011329';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|8"] = 'new-aa495b28-e361-44b1-871d-74132433a821';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|9"] = 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0';
  $overrides["panelizer_defaults.node:group:default.display|title_pane"] = 0;

  // Exported overrides for: views_view
  $overrides["views_view.commons_bw_all.display|default|display_options|sorts|field_radioactivity_radioactivity_energy|expose|label"] = 'most active';
  $overrides["views_view.commons_bw_posts.display|default|display_options|sorts|field_radioactivity_radioactivity_energy|expose|label"] = 'most active';
  $overrides["views_view.commons_groups_directory.display|default|display_options|pager|options|expose"] = array(
    'items_per_page_label' => 'Antal elementer',
    'items_per_page_options_all_label' => '- Alle -',
    'offset_label' => 'Forskydning',
  );
  $overrides["views_view.commons_groups_directory.display|default|display_options|pager|options|id"] = 0;
  $overrides["views_view.commons_groups_directory.display|default|display_options|pager|options|items_per_page"] = 15;
  $overrides["views_view.commons_groups_directory.display|default|display_options|pager|options|quantity"] = 9;
  $overrides["views_view.commons_groups_directory.display|default|display_options|pager|options|tags"] = array(
    'first' => '« første',
    'previous' => '‹ forrige',
    'next' => 'næste ›',
    'last' => 'sidste »',
  );
  $overrides["views_view.commons_groups_directory.display|default|display_options|pager|type"] = 'full';
  $overrides["views_view.commons_groups_directory.display|default|display_options|sorts|created|expose"] = array(
    'label' => 'Oprettelsesdato',
  );
  $overrides["views_view.commons_groups_directory.display|default|display_options|use_more"]["DELETED"] = TRUE;
  $overrides["views_view.commons_groups_directory.display|feed|display_options|defaults|sorts"] = FALSE;
  $overrides["views_view.commons_groups_directory.display|feed|display_options|sorts"] = array(
    'created' => array(
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'order' => 'DESC',
      'expose' => array(
        'label' => 'Oprettelsesdato',
      ),
    ),
  );
  $overrides["views_view.commons_groups_directory.display|panel_pane_1|display_options|defaults|sorts"] = FALSE;
  $overrides["views_view.commons_groups_directory.display|panel_pane_1|display_options|pager|options|effects"]["DELETED"] = TRUE;
  $overrides["views_view.commons_groups_directory.display|panel_pane_1|display_options|pager|options|tags|first"] = '«';
  $overrides["views_view.commons_groups_directory.display|panel_pane_1|display_options|pager|options|tags|last"] = '»';
  $overrides["views_view.commons_groups_directory.display|panel_pane_1|display_options|pager|options|tags|next"] = '›';
  $overrides["views_view.commons_groups_directory.display|panel_pane_1|display_options|pager|options|tags|previous"] = '‹';
  $overrides["views_view.commons_groups_directory.display|panel_pane_1|display_options|pager|type"] = 'full';
  $overrides["views_view.commons_groups_directory.display|panel_pane_1|display_options|sorts"] = array(
    'created' => array(
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'Oprettelsesdato',
      ),
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'Titel',
      ),
    ),
  );
  $overrides["views_view.commons_groups_directory.display|panel_pane_2|display_options|defaults|pager"] = FALSE;
  $overrides["views_view.commons_groups_directory.display|panel_pane_2|display_options|defaults|sorts"] = FALSE;
  $overrides["views_view.commons_groups_directory.display|panel_pane_2|display_options|defaults|title"] = FALSE;
  $overrides["views_view.commons_groups_directory.display|panel_pane_2|display_options|pager"] = array(
    'type' => 'some',
    'options' => array(
      'items_per_page' => 3,
      'offset' => 0,
    ),
  );
  $overrides["views_view.commons_groups_directory.display|panel_pane_2|display_options|sorts"] = array(
    'created' => array(
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'Oprettelsesdato',
      ),
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'Titel',
      ),
    ),
  );
  $overrides["views_view.commons_groups_directory.display|panel_pane_2|display_options|title"] = '<a href="/node/!1/groups">Grupper</a>';
  $overrides["views_view.commons_groups_directory.display|panel_pane_3|display_options|defaults|title"] = FALSE;
  $overrides["views_view.commons_groups_directory.display|panel_pane_3|display_options|title"] = '<a href="/grupper">Grupper</a>';
  $overrides["views_view.commons_groups_directory.display|panel_pane_4|display_options|defaults|sorts"] = FALSE;
  $overrides["views_view.commons_groups_directory.display|panel_pane_4|display_options|pager|options|tags|first"] = '«';
  $overrides["views_view.commons_groups_directory.display|panel_pane_4|display_options|pager|options|tags|last"] = '»';
  $overrides["views_view.commons_groups_directory.display|panel_pane_4|display_options|pager|options|tags|next"] = '›';
  $overrides["views_view.commons_groups_directory.display|panel_pane_4|display_options|pager|options|tags|previous"] = '‹';
  $overrides["views_view.commons_groups_directory.display|panel_pane_4|display_options|sorts"] = array(
    'created' => array(
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'Oprettelsesdato',
      ),
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'Titel',
      ),
    ),
  );
  $overrides["views_view.commons_groups_user_groups.display|default|display_options|pager|options|effects"] = array(
    'speed' => 'slow',
  );
  $overrides["views_view.commons_groups_user_groups.display|default|display_options|pager|options|tags|first"] = '«';
  $overrides["views_view.commons_groups_user_groups.display|default|display_options|pager|options|tags|last"] = '»';
  $overrides["views_view.commons_groups_user_groups.display|default|display_options|pager|options|tags|next"] = '›';
  $overrides["views_view.commons_groups_user_groups.display|default|display_options|pager|options|tags|previous"] = '‹';
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|defaults|pager"] = FALSE;
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|defaults|use_ajax"] = FALSE;
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|defaults|use_more"] = FALSE;
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|defaults|use_more_always"] = FALSE;
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|defaults|use_more_text"] = FALSE;
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|pager"] = array(
    'type' => 'load_more',
    'options' => array(
      'items_per_page' => 5,
      'offset' => 0,
      'id' => 0,
      'quantity' => 9,
      'expose' => array(
        'items_per_page_label' => 'Antal elementer',
        'items_per_page_options_all_label' => '- Alle -',
        'offset_label' => 'Forskydning',
      ),
      'tags' => array(
        'first' => '«',
        'previous' => '‹',
        'next' => '›',
        'last' => '»',
      ),
      'effects' => array(
        'speed' => 'slow',
      ),
    ),
  );
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|use_ajax"] = TRUE;
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|use_more"] = TRUE;
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|use_more_always"] = FALSE;
  $overrides["views_view.commons_groups_user_groups.display|panel_pane_1|display_options|use_more_text"] = 'mere';

 return $overrides;
}

<?php
/**
 * @file
 * cbib_commons_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_commons_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.user-user-field_linkedin_url.settings|title_label_use_field_label"] = FALSE;

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.views_events_landing_page.admin_title"] = 'Views Events Landing Page All';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-32b27953-fb87-4007-a96a-96e394cf9f2a"] = (object) array(
      'pid' => 'new-32b27953-fb87-4007-a96a-96e394cf9f2a',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'commons_events_upcoming-panel_pane_5',
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
      'uuid' => '32b27953-fb87-4007-a96a-96e394cf9f2a',
    );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-6fc1bd46-7845-4419-88e9-224c883d8d7d"] = (object) array(
      'pid' => 'new-6fc1bd46-7845-4419-88e9-224c883d8d7d',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'commons_events_upcoming-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '6fc1bd46-7845-4419-88e9-224c883d8d7d',
    );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-80f087dc-fe84-7354-e19b-23e398080db9"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-9118fc7d-3da5-cf54-5152-5d66043812b2"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-b91ad246-669c-2e14-fd32-5728153b0ed8"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-d776b637-24a9-7e74-712c-8bc27d399c3e"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-e72884a7-369b-1954-2d1f-d69207c4d6ff"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-ef7caf29-a6a8-e654-5997-6b969eba407a"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|layout"] = 'one';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panel_settings|one_main"] = array(
    'style' => 'tabs',
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panel_settings|style_settings|one_main"] = NULL;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|one_main"] = array(
    0 => 'new-32b27953-fb87-4007-a96a-96e394cf9f2a',
    1 => 'new-6fc1bd46-7845-4419-88e9-224c883d8d7d',
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|title"] = 'Arrangementer';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|title_pane"] = 'new-6fc1bd46-7845-4419-88e9-224c883d8d7d';
  $overrides["page_manager_pages.views_events_landing_page.menu|title"] = 'Arrangementer';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:event:default.display|content|new-0b838ec5-ab01-496e-ada7-c0320534dd42"] = (object) array(
      'pid' => 'new-0b838ec5-ab01-496e-ada7-c0320534dd42',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_og_groups_ref',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'og_list_default',
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
      'position' => 2,
      'locks' => array(),
      'uuid' => '0b838ec5-ab01-496e-ada7-c0320534dd42',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-35ea1bae-7836-4e19-a8d0-a507e4537e71|access|logic"] = 'and';
  $overrides["panelizer_defaults.node:event:default.display|content|new-35ea1bae-7836-4e19-a8d0-a507e4537e71|access|plugins"] = array(
    0 => array(
      'name' => 'role',
      'settings' => array(
        'rids' => array(
          0 => 2,
        ),
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  );
  $overrides["panelizer_defaults.node:event:default.display|content|new-35ea1bae-7836-4e19-a8d0-a507e4537e71|position"] = 9;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3b2c96a8-75d7-4633-bbe4-193c5a5baaa3"] = (object) array(
      'pid' => 'new-3b2c96a8-75d7-4633-bbe4-193c5a5baaa3',
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
      'position' => 7,
      'locks' => array(),
      'uuid' => '3b2c96a8-75d7-4633-bbe4-193c5a5baaa3',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-3dcbfc27-8ac0-428e-9926-4d20124df9d6"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4c2fb65e-0095-4fe4-8137-4065111adcea"] = (object) array(
      'pid' => 'new-4c2fb65e-0095-4fe4-8137-4065111adcea',
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
        'override_title' => 1,
        'override_title_text' => 'Emner',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '4c2fb65e-0095-4fe4-8137-4065111adcea',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-632cdf26-2846-4b05-ba51-0bef3789c6c4"] = (object) array(
      'pid' => 'new-632cdf26-2846-4b05-ba51-0bef3789c6c4',
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
      'position' => 7,
      'locks' => array(),
      'uuid' => '632cdf26-2846-4b05-ba51-0bef3789c6c4',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-63433d85-f8ce-4ff5-92df-391aca0c05a0"] = (object) array(
      'pid' => 'new-63433d85-f8ce-4ff5-92df-391aca0c05a0',
      'panel' => 'two_66_33_first',
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
      'uuid' => '63433d85-f8ce-4ff5-92df-391aca0c05a0',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-88ab00da-745f-4432-a400-935fdac10fb8|position"] = 3;
  $overrides["panelizer_defaults.node:event:default.display|content|new-aef85835-68a5-2494-b107-136f1cb92749|position"] = 8;
  $overrides["panelizer_defaults.node:event:default.display|content|new-c3480894-214d-4a16-ad1d-9eafbfbb42dd"] = (object) array(
      'pid' => 'new-c3480894-214d-4a16-ad1d-9eafbfbb42dd',
      'panel' => 'two_66_33_second',
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
        'override_title' => 1,
        'override_title_text' => 'Tilknytning',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'c3480894-214d-4a16-ad1d-9eafbfbb42dd',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-d9b378c4-93e3-4445-b2da-c43dc1bd0588|position"] = 6;
  $overrides["panelizer_defaults.node:event:default.display|content|new-eb217e95-60ad-4363-afd5-d3f0ba1c3132|position"] = 4;
  $overrides["panelizer_defaults.node:event:default.display|content|new-ffd2a39f-cad3-4bec-8606-cf9a4c698131|position"] = 5;
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|6"] = 'new-63433d85-f8ce-4ff5-92df-391aca0c05a0';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|7"] = 'new-3b2c96a8-75d7-4633-bbe4-193c5a5baaa3';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|0"] = 'new-c3480894-214d-4a16-ad1d-9eafbfbb42dd';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|1"] = 'new-4c2fb65e-0095-4fe4-8137-4065111adcea';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|2"] = 'new-0b838ec5-ab01-496e-ada7-c0320534dd42';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|3"] = 'new-88ab00da-745f-4432-a400-935fdac10fb8';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|4"] = 'new-eb217e95-60ad-4363-afd5-d3f0ba1c3132';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|5"] = 'new-ffd2a39f-cad3-4bec-8606-cf9a4c698131';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|6"] = 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|7"] = 'new-632cdf26-2846-4b05-ba51-0bef3789c6c4';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|8"] = 'new-aef85835-68a5-2494-b107-136f1cb92749';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|9"] = 'new-35ea1bae-7836-4e19-a8d0-a507e4537e71';
  $overrides["panelizer_defaults.node:event:default:teaser.display|content|new-3499fc7f-c316-45e1-b841-0d16159f8296"] = (object) array(
      'pid' => 'new-3499fc7f-c316-45e1-b841-0d16159f8296',
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
      'position' => 0,
      'locks' => array(),
      'uuid' => '3499fc7f-c316-45e1-b841-0d16159f8296',
    );
  $overrides["panelizer_defaults.node:event:default:teaser.display|content|new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f|position"] = 2;
  $overrides["panelizer_defaults.node:event:default:teaser.display|content|new-bb59c3b5-c74b-4c7a-a057-52a118a0133b"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default:teaser.display|content|new-c22911c5-3c21-75b4-c5f3-80efb733956b|configuration|formatter_settings|trim_length"] = 250;
  $overrides["panelizer_defaults.node:event:default:teaser.display|content|new-e194ca35-4e2b-4d01-9c97-5bf4492ee63a"] = (object) array(
      'pid' => 'new-e194ca35-4e2b-4d01-9c97-5bf4492ee63a',
      'panel' => 'left',
      'type' => 'cbib_time_and_location',
      'subtype' => 'cbib_time_and_location',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'cbib_events_time_and_location_date_format' => 'teaser_date',
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
      'uuid' => 'e194ca35-4e2b-4d01-9c97-5bf4492ee63a',
    );
  $overrides["panelizer_defaults.node:event:default:teaser.display|panels|bottom|0"] = 'new-3499fc7f-c316-45e1-b841-0d16159f8296';
  $overrides["panelizer_defaults.node:event:default:teaser.display|panels|bottom|2"] = 'new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f';
  $overrides["panelizer_defaults.node:event:default:teaser.display|panels|left|1"] = 'new-e194ca35-4e2b-4d01-9c97-5bf4492ee63a';

  // Exported overrides for: variable
  $overrides["variable.comment_event.value"] = 2;
  $overrides["variable.field_bundle_settings_node__event.value|extra_fields|form|metatags|weight"] = 16;
  $overrides["variable.field_bundle_settings_node__event.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.panelizer_defaults_node_event.value|view modes|teaser|default"] = 1;
  $overrides["variable.panelizer_defaults_node_event.value|view modes|teaser|status"] = 1;

  // Exported overrides for: views_view
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;

 return $overrides;
}

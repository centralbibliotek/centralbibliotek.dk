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
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1"] = (object) array(
      'pid' => 'new-bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1',
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
      'uuid' => 'bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1',
    );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panel_settings|one_main"] = array(
    'style' => 'tabs',
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|one_main|1"] = 'new-bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1';
  $overrides["page_manager_pages.views_events_landing_page_node.access|plugins|0|settings|type|group"] = 'group';
  $overrides["page_manager_pages.views_events_landing_page_node.default_handlers|page_views_events_landing_page_node_panel_context|conf|display|content|new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84"] = (object) array(
      'pid' => 'new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84',
      'panel' => 'two_66_33_top',
      'type' => 'views_panes',
      'subtype' => 'commons_events_upcoming-panel_pane_6',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'argument_entity_id:node_1',
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
      'uuid' => 'a2ee2613-1dbe-45bd-85eb-a8ba632aab84',
    );
  $overrides["page_manager_pages.views_events_landing_page_node.default_handlers|page_views_events_landing_page_node_panel_context|conf|display|panel_settings|two_66_33_top"] = array(
    'style' => 'tabs',
  );
  $overrides["page_manager_pages.views_events_landing_page_node.default_handlers|page_views_events_landing_page_node_panel_context|conf|display|panels|two_66_33_top|1"] = 'new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84';

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
  $overrides["panelizer_defaults.node:event:default:teaser.display|content|new-4c9fe216-2ec6-4b45-9d9b-b5fcfeaf76c0"] = (object) array(
      'pid' => 'new-4c9fe216-2ec6-4b45-9d9b-b5fcfeaf76c0',
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
        'override_title_text' => 'Grupper:',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '4c9fe216-2ec6-4b45-9d9b-b5fcfeaf76c0',
    );
  $overrides["panelizer_defaults.node:event:default:teaser.display|content|new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f|position"] = 2;
  $overrides["panelizer_defaults.node:event:default:teaser.display|content|new-bb59c3b5-c74b-4c7a-a057-52a118a0133b"]["DELETED"] = TRUE;
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
  $overrides["panelizer_defaults.node:event:default:teaser.display|panels|bottom|0"] = 'new-4c9fe216-2ec6-4b45-9d9b-b5fcfeaf76c0';
  $overrides["panelizer_defaults.node:event:default:teaser.display|panels|bottom|2"] = 'new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f';
  $overrides["panelizer_defaults.node:event:default:teaser.display|panels|left|1"] = 'new-e194ca35-4e2b-4d01-9c97-5bf4492ee63a';

  // Exported overrides for: views_view
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|default|display_options|filters|field_date_value"] = array(
    'id' => 'field_date_value',
    'table' => 'field_data_field_date',
    'field' => 'field_date_value',
    'operator' => '>=',
    'form_type' => 'date_text',
    'default_date' => 'now',
    'year_range' => '-10:+10',
  );
  $overrides["views_view.commons_events_upcoming.display|default|display_options|query|options|distinct"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|default|display_options|relationships|og_group_ref_target_id"] = array(
    'id' => 'og_group_ref_target_id',
    'table' => 'og_membership',
    'field' => 'og_group_ref_target_id',
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|defaults|filter_groups"] = FALSE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|defaults|filters"] = FALSE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|defaults|relationships"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|filters"] = array(
    'status' => array(
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'value' => 1,
      'group' => 1,
    ),
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'value' => array(
        'event' => 'event',
      ),
      'group' => 1,
    ),
    'field_date_value' => array(
      'id' => 'field_date_value',
      'table' => 'field_data_field_date',
      'field' => 'field_date_value',
      'operator' => '>=',
      'form_type' => 'date_text',
      'default_date' => 'now',
      'year_range' => '-10:+10',
    ),
    'type_1' => array(
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'og_group_ref_target_id',
      'value' => array(
        'centralbibliotek' => 'centralbibliotek',
      ),
    ),
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|pager|options|effects"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|pager|options|more_button_text"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|pager|options|tags|first"] = '«';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|pager|options|tags|last"] = '»';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|pager|options|tags|next"] = '›';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|pager|options|tags|previous"] = '‹';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|pager|type"] = 'full';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|allow"] = array(
    'use_pager' => 0,
    'items_per_page' => 0,
    'offset' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'path_override' => 0,
    'title_override' => 'title_override',
    'exposed_form' => 0,
    'fields_override' => 0,
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|defaults|filter_groups"] = FALSE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|defaults|filters"] = FALSE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|filters"] = array(
    'status' => array(
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'value' => 1,
      'group' => 1,
    ),
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'value' => array(
        'event' => 'event',
      ),
      'group' => 1,
    ),
    'field_date_value' => array(
      'id' => 'field_date_value',
      'table' => 'field_data_field_date',
      'field' => 'field_date_value',
      'operator' => '>=',
      'form_type' => 'date_text',
      'default_date' => 'now',
      'year_range' => '-10:+10',
    ),
    'type_1' => array(
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'og_group_ref_target_id',
      'value' => array(
        'centralbibliotek' => 'centralbibliotek',
      ),
    ),
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|sorts|field_date_value|order"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_4|display_options|defaults|empty"] = FALSE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_4|display_options|empty"] = array(
    'area' => array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
      'empty' => TRUE,
      'content' => '<em>Ingen kommende arrangementer</em>',
      'format' => 'filtered_html',
    ),
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_4|display_options|pager|options|effects"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_4|display_options|pager|options|tags|first"] = '«';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_4|display_options|pager|options|tags|last"] = '»';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_4|display_options|pager|options|tags|next"] = '›';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_4|display_options|pager|options|tags|previous"] = '‹';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_4|display_options|pager|type"] = 'full';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_5"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:13:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:23:"Tidligere arrangementer";s:5:"pager";a:2:{s:4:"type";s:4:"full";s:7:"options";a:6:{s:14:"items_per_page";s:2:"15";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";s:6:"expose";a:3:{s:20:"items_per_page_label";s:15:"Antal elementer";s:32:"items_per_page_options_all_label";s:8:"- Alle -";s:12:"offset_label";s:11:"Forskydning";}s:4:"tags";a:4:{s:5:"first";s:2:"«";s:8:"previous";s:3:"‹";s:4:"next";s:3:"›";s:4:"last";s:2:"»";}}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:4:"node";s:11:"row_options";a:1:{s:5:"links";b:0;}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:38:"<em>Ingen tidligere arrangementer</em>";s:6:"format";s:13:"filtered_html";}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:11:" deltagere,";}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:24:"[comment_count] comments";}s:19:"element_label_colon";b:0;}}s:5:"sorts";a:1:{s:16:"field_date_value";a:4:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:5:"order";s:4:"DESC";}}s:7:"filters";a:3:{s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}s:5:"group";i:1;}s:16:"field_date_value";a:7:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:8:"operator";s:1:"<";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";s:10:"year_range";s:7:"-10:+10";}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_5";s:13:"display_title";s:27:"Landing page all - previous";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_events_upcoming.display|panel_pane_6"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:17:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:17:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:23:"Tidligere arrangementer";s:15:"use_more_always";b:0;s:13:"use_more_text";s:8:"Vis mere";s:12:"link_display";s:10:"custom_url";s:8:"link_url";s:9:"!1/events";s:5:"pager";a:2:{s:4:"type";s:4:"full";s:7:"options";a:6:{s:14:"items_per_page";s:2:"15";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";s:6:"expose";a:3:{s:20:"items_per_page_label";s:15:"Antal elementer";s:32:"items_per_page_options_all_label";s:8:"- Alle -";s:12:"offset_label";s:11:"Forskydning";}s:4:"tags";a:4:{s:5:"first";s:2:"«";s:8:"previous";s:3:"‹";s:4:"next";s:3:"›";s:4:"last";s:2:"»";}}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:4:"node";s:13:"relationships";a:1:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:11:" deltagere,";}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:24:"[comment_count] comments";}s:19:"element_label_colon";b:0;}}s:5:"sorts";a:1:{s:16:"field_date_value";a:4:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:5:"order";s:4:"DESC";}}s:9:"arguments";a:1:{s:3:"gid";a:9:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:7:"default";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:4:"node";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}s:5:"group";i:1;}s:16:"field_date_value";a:7:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:8:"operator";s:1:"<";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";s:10:"year_range";s:7:"-10:+10";}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_6";s:13:"display_title";s:33:"Landing page group all - previous";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_events_upcoming.display|panel_pane_7"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:18:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;}s:5:"title";s:22:"Kommende arrangementer";s:8:"use_more";b:1;s:15:"use_more_always";b:1;s:13:"use_more_text";s:30:"Se alle gruppens arrangementer";s:12:"link_display";s:10:"custom_url";s:8:"link_url";s:14:"node/!1/events";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:1:{s:13:"capacity_used";s:13:"capacity_used";}}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:37:"<em>Ingen kommende arrangementer</em>";s:6:"format";s:13:"filtered_html";}}s:13:"relationships";a:1:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}}s:6:"fields";a:3:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:10:" deltagere";}}s:9:"arguments";a:1:{s:3:"gid";a:9:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:9:"not found";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_7";s:13:"display_title";s:10:"Group pane";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');

 return $overrides;
}

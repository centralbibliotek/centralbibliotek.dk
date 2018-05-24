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
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-0293b915-d42a-46d2-9887-2f1ddf266503|configuration|nodes_per_page"] = 20;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-0293b915-d42a-46d2-9887-2f1ddf266503|configuration|panel_args"] = 1;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-caa143ab-7888-4a10-96e4-421be4706bb7|configuration|nodes_per_page"] = 20;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-caa143ab-7888-4a10-96e4-421be4706bb7|configuration|panel_args"] = 1;

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
      'position' => 3,
      'locks' => array(),
      'uuid' => '0b838ec5-ab01-496e-ada7-c0320534dd42',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-122d5069-3eb2-4659-bf00-247c14606336"] = (object) array(
      'pid' => 'new-122d5069-3eb2-4659-bf00-247c14606336',
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
      'uuid' => '122d5069-3eb2-4659-bf00-247c14606336',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-2d57af3b-2e3b-4ee9-a09c-078a500d503e"] = (object) array(
      'pid' => 'new-2d57af3b-2e3b-4ee9-a09c-078a500d503e',
      'panel' => 'two_66_33_first',
      'type' => 'entity_field',
      'subtype' => 'node:field_address',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'addressfield_components',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'components' => array(
            'locality' => 'locality',
          ),
          'separator' => ', ',
          'use_widget_handlers' => 1,
          'format_handlers' => array(
            'address' => 'address',
          ),
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
      'uuid' => '2d57af3b-2e3b-4ee9-a09c-078a500d503e',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-35953f03-8878-47bb-800f-67c95d058508"] = (object) array(
      'pid' => 'new-35953f03-8878-47bb-800f-67c95d058508',
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
      'uuid' => '35953f03-8878-47bb-800f-67c95d058508',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-35ea1bae-7836-4e19-a8d0-a507e4537e71"] = (object) array(
      'pid' => 'new-35ea1bae-7836-4e19-a8d0-a507e4537e71',
      'panel' => 'two_66_33_second',
      'type' => 'cbib_events_mailto',
      'subtype' => 'cbib_events_mailto',
      'shown' => TRUE,
      'access' => array(
        'plugins' => array(
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
        ),
        'logic' => 'and',
      ),
      'configuration' => array(
        'context' => 'panelizer',
        'override_title' => 1,
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
      'uuid' => '35ea1bae-7836-4e19-a8d0-a507e4537e71',
    );
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
      'position' => 2,
      'locks' => array(),
      'uuid' => '4c2fb65e-0095-4fe4-8137-4065111adcea',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-5adc886d-1a3a-468d-b25b-f344f7c86072"] = (object) array(
      'pid' => 'new-5adc886d-1a3a-468d-b25b-f344f7c86072',
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
      'uuid' => '5adc886d-1a3a-468d-b25b-f344f7c86072',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4"] = (object) array(
      'pid' => 'new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4',
      'panel' => 'two_66_33_first',
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
          'file_view_mode' => 'default',
          'image_style' => 'full_node',
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
      'uuid' => '5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4',
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
      'position' => 8,
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
  $overrides["panelizer_defaults.node:event:default.display|content|new-88ab00da-745f-4432-a400-935fdac10fb8"] = (object) array(
      'pid' => 'new-88ab00da-745f-4432-a400-935fdac10fb8',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_event_audience',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'text_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => 'Målgruppe',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '88ab00da-745f-4432-a400-935fdac10fb8',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-a2912068-e5e2-c804-b1ba-3260dc059c9b"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-aef85835-68a5-2494-b107-136f1cb92749|configuration|items_per_page"] = 25;
  $overrides["panelizer_defaults.node:event:default.display|content|new-aef85835-68a5-2494-b107-136f1cb92749|position"] = 9;
  $overrides["panelizer_defaults.node:event:default.display|content|new-b6527fae-58a4-463e-9cc8-7200e1acc920"] = (object) array(
      'pid' => 'new-b6527fae-58a4-463e-9cc8-7200e1acc920',
      'panel' => 'two_66_33_first',
      'type' => 'entity_field',
      'subtype' => 'node:field_date',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'date_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'format_type' => 'dato',
          'multiple_number' => 1,
          'multiple_from' => '',
          'multiple_to' => '',
          'fromto' => 'value',
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
      'position' => 2,
      'locks' => array(),
      'uuid' => 'b6527fae-58a4-463e-9cc8-7200e1acc920',
    );
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
      'position' => 1,
      'locks' => array(),
      'uuid' => 'c3480894-214d-4a16-ad1d-9eafbfbb42dd',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-d9b378c4-93e3-4445-b2da-c43dc1bd0588"] = (object) array(
      'pid' => 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588',
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
          'extensions' => 'patch,diff',
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
      'position' => 7,
      'locks' => array(),
      'uuid' => 'd9b378c4-93e3-4445-b2da-c43dc1bd0588',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-e2773749-a522-4643-b068-3ba6c6710a17"] = (object) array(
      'pid' => 'new-e2773749-a522-4643-b068-3ba6c6710a17',
      'panel' => 'two_66_33_first',
      'type' => 'entity_field',
      'subtype' => 'node:field_event_type',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'taxonomy_term_reference_link',
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
      'uuid' => 'e2773749-a522-4643-b068-3ba6c6710a17',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-eb217e95-60ad-4363-afd5-d3f0ba1c3132"] = (object) array(
      'pid' => 'new-eb217e95-60ad-4363-afd5-d3f0ba1c3132',
      'panel' => 'two_66_33_second',
      'type' => 'panels_mini',
      'subtype' => 'event_information',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => 1,
        'override_title_text' => 'Det praktiske',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => 'eb217e95-60ad-4363-afd5-d3f0ba1c3132',
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-f259289a-8ef0-6aa4-2592-c59928474958"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-ffd2a39f-cad3-4bec-8606-cf9a4c698131"] = (object) array(
      'pid' => 'new-ffd2a39f-cad3-4bec-8606-cf9a4c698131',
      'panel' => 'two_66_33_second',
      'type' => 'panels_mini',
      'subtype' => 'event_price',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => 1,
        'override_title_text' => 'Tilmelding',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => 'ffd2a39f-cad3-4bec-8606-cf9a4c698131',
    );
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|0"] = 'new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|1"] = 'new-35953f03-8878-47bb-800f-67c95d058508';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|2"] = 'new-b6527fae-58a4-463e-9cc8-7200e1acc920';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|3"] = 'new-2d57af3b-2e3b-4ee9-a09c-078a500d503e';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|4"] = 'new-e2773749-a522-4643-b068-3ba6c6710a17';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|5"] = 'new-5adc886d-1a3a-468d-b25b-f344f7c86072';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|6"] = 'new-63433d85-f8ce-4ff5-92df-391aca0c05a0';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first|7"] = 'new-3b2c96a8-75d7-4633-bbe4-193c5a5baaa3';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|0"] = 'new-122d5069-3eb2-4659-bf00-247c14606336';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|1"] = 'new-c3480894-214d-4a16-ad1d-9eafbfbb42dd';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|10"] = 'new-35ea1bae-7836-4e19-a8d0-a507e4537e71';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|2"] = 'new-4c2fb65e-0095-4fe4-8137-4065111adcea';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|3"] = 'new-0b838ec5-ab01-496e-ada7-c0320534dd42';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|4"] = 'new-88ab00da-745f-4432-a400-935fdac10fb8';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|5"] = 'new-eb217e95-60ad-4363-afd5-d3f0ba1c3132';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|6"] = 'new-ffd2a39f-cad3-4bec-8606-cf9a4c698131';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|7"] = 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|8"] = 'new-632cdf26-2846-4b05-ba51-0bef3789c6c4';
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second|9"] = 'new-aef85835-68a5-2494-b107-136f1cb92749';

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_event.value|view modes|teaser|default"] = 1;
  $overrides["variable.panelizer_defaults_node_event.value|view modes|teaser|status"] = 1;

  // Exported overrides for: views_view

 return $overrides;
}

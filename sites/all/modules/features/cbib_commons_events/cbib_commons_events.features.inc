<?php
/**
 * @file
 * cbib_commons_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_commons_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cbib_commons_events_field_default_field_instances_alter(&$data) {
  if (isset($data['user-user-field_linkedin_url'])) {
    $data['user-user-field_linkedin_url']['settings']['title_label_use_field_label'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function cbib_commons_events_default_page_manager_pages_alter(&$data) {
  if (isset($data['views_events_landing_page'])) {
    $data['views_events_landing_page']->admin_title = 'Views Events Landing Page All'; /* WAS: 'Views Events Landing Page' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-32b27953-fb87-4007-a96a-96e394cf9f2a'] = (object) array(
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
        ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-6fc1bd46-7845-4419-88e9-224c883d8d7d'] = (object) array(
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
        ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->layout = 'one'; /* WAS: 'two_66_33' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panel_settings['one_main'] = array(
      'style' => 'tabs',
    ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panel_settings['style_settings']['one_main'] = NULL; /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['one_main'] = array(
      0 => 'new-6fc1bd46-7845-4419-88e9-224c883d8d7d',
      1 => 'new-32b27953-fb87-4007-a96a-96e394cf9f2a',
    ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->title = 'Arrangementer'; /* WAS: 'Events' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->title_pane = 'new-6fc1bd46-7845-4419-88e9-224c883d8d7d'; /* WAS: 'new-9118fc7d-3da5-cf54-5152-5d66043812b2' */
    $data['views_events_landing_page']->menu['title'] = 'Arrangementer'; /* WAS: 'Events' */
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-80f087dc-fe84-7354-e19b-23e398080db9']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-9118fc7d-3da5-cf54-5152-5d66043812b2']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-b91ad246-669c-2e14-fd32-5728153b0ed8']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-d776b637-24a9-7e74-712c-8bc27d399c3e']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-e72884a7-369b-1954-2d1f-d69207c4d6ff']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-ef7caf29-a6a8-e654-5997-6b969eba407a']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['two_66_33_first']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['two_66_33_second']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function cbib_commons_events_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:event:default'])) {
    $data['node:event:default']->display->content['new-0b838ec5-ab01-496e-ada7-c0320534dd42'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-2d57af3b-2e3b-4ee9-a09c-078a500d503e'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-35953f03-8878-47bb-800f-67c95d058508'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-35ea1bae-7836-4e19-a8d0-a507e4537e71'] = (object) array(
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
          'position' => 9,
          'locks' => array(),
          'uuid' => '35ea1bae-7836-4e19-a8d0-a507e4537e71',
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-3b2c96a8-75d7-4633-bbe4-193c5a5baaa3'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-4c2fb65e-0095-4fe4-8137-4065111adcea'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-5adc886d-1a3a-468d-b25b-f344f7c86072'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-632cdf26-2846-4b05-ba51-0bef3789c6c4'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-63433d85-f8ce-4ff5-92df-391aca0c05a0'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-88ab00da-745f-4432-a400-935fdac10fb8'] = (object) array(
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
          'position' => 3,
          'locks' => array(),
          'uuid' => '88ab00da-745f-4432-a400-935fdac10fb8',
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-aef85835-68a5-2494-b107-136f1cb92749']->configuration['items_per_page'] = 25; /* WAS: 20 */
    $data['node:event:default']->display->content['new-aef85835-68a5-2494-b107-136f1cb92749']->position = 8; /* WAS: 1 */
    $data['node:event:default']->display->content['new-b6527fae-58a4-463e-9cc8-7200e1acc920'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-c3480894-214d-4a16-ad1d-9eafbfbb42dd'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-d9b378c4-93e3-4445-b2da-c43dc1bd0588'] = (object) array(
          'pid' => 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588',
          'panel' => 'two_66_33_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_document_file',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'file_default',
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
          'position' => 6,
          'locks' => array(),
          'uuid' => 'd9b378c4-93e3-4445-b2da-c43dc1bd0588',
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-e2773749-a522-4643-b068-3ba6c6710a17'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-eb217e95-60ad-4363-afd5-d3f0ba1c3132'] = (object) array(
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
          'position' => 4,
          'locks' => array(),
          'uuid' => 'eb217e95-60ad-4363-afd5-d3f0ba1c3132',
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-ffd2a39f-cad3-4bec-8606-cf9a4c698131'] = (object) array(
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
          'position' => 5,
          'locks' => array(),
          'uuid' => 'ffd2a39f-cad3-4bec-8606-cf9a4c698131',
        ); /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_first'][0] = 'new-5bd82edf-51af-450b-8d6d-8fdd9ffc0aa4'; /* WAS: 'new-f259289a-8ef0-6aa4-2592-c59928474958' */
    $data['node:event:default']->display->panels['two_66_33_first'][1] = 'new-35953f03-8878-47bb-800f-67c95d058508'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_first'][2] = 'new-b6527fae-58a4-463e-9cc8-7200e1acc920'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_first'][3] = 'new-2d57af3b-2e3b-4ee9-a09c-078a500d503e'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_first'][4] = 'new-e2773749-a522-4643-b068-3ba6c6710a17'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_first'][5] = 'new-5adc886d-1a3a-468d-b25b-f344f7c86072'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_first'][6] = 'new-63433d85-f8ce-4ff5-92df-391aca0c05a0'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_first'][7] = 'new-3b2c96a8-75d7-4633-bbe4-193c5a5baaa3'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][0] = 'new-c3480894-214d-4a16-ad1d-9eafbfbb42dd'; /* WAS: 'new-a2912068-e5e2-c804-b1ba-3260dc059c9b' */
    $data['node:event:default']->display->panels['two_66_33_second'][1] = 'new-4c2fb65e-0095-4fe4-8137-4065111adcea'; /* WAS: 'new-aef85835-68a5-2494-b107-136f1cb92749' */
    $data['node:event:default']->display->panels['two_66_33_second'][2] = 'new-0b838ec5-ab01-496e-ada7-c0320534dd42'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][3] = 'new-88ab00da-745f-4432-a400-935fdac10fb8'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][4] = 'new-eb217e95-60ad-4363-afd5-d3f0ba1c3132'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][5] = 'new-ffd2a39f-cad3-4bec-8606-cf9a4c698131'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][6] = 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][7] = 'new-632cdf26-2846-4b05-ba51-0bef3789c6c4'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][8] = 'new-aef85835-68a5-2494-b107-136f1cb92749'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][9] = 'new-35ea1bae-7836-4e19-a8d0-a507e4537e71'; /* WAS: '' */
    unset($data['node:event:default']->display->content['new-a2912068-e5e2-c804-b1ba-3260dc059c9b']);
    unset($data['node:event:default']->display->content['new-f259289a-8ef0-6aa4-2592-c59928474958']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function cbib_commons_events_strongarm_alter(&$data) {
  if (isset($data['comment_event'])) {
    $data['comment_event']->value = 2; /* WAS: 0 */
  }
  if (isset($data['field_bundle_settings_node__event'])) {
    $data['field_bundle_settings_node__event']->value['extra_fields']['form']['metatags']['weight'] = 16; /* WAS: 15 */
    $data['field_bundle_settings_node__event']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['panelizer_defaults_node_event'])) {
    $data['panelizer_defaults_node_event']->value['view modes']['teaser']['default'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_event']->value['view modes']['teaser']['status'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cbib_commons_events_views_default_views_alter(&$data) {
  if (isset($data['backlinks'])) {
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
}

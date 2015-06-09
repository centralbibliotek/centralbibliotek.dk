<?php
/**
 * @file
 * cbib_commons_events.features.inc
 */

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
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1'] = (object) array(
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
        ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panel_settings['one_main'] = array(
      'style' => 'tabs',
    ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['one_main'][1] = 'new-bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1'; /* WAS: '' */
  }
  if (isset($data['views_events_landing_page_node'])) {
    $data['views_events_landing_page_node']->access['plugins'][0]['settings']['type']['group'] = 'group'; /* WAS: '' */
    $data['views_events_landing_page_node']->default_handlers['page_views_events_landing_page_node_panel_context']->conf['display']->content['new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84'] = (object) array(
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
        ); /* WAS: '' */
    $data['views_events_landing_page_node']->default_handlers['page_views_events_landing_page_node_panel_context']->conf['display']->panel_settings['two_66_33_top'] = array(
      'style' => 'tabs',
    ); /* WAS: '' */
    $data['views_events_landing_page_node']->default_handlers['page_views_events_landing_page_node_panel_context']->conf['display']->panels['two_66_33_top'][1] = 'new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84'; /* WAS: '' */
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
    $data['node:event:default']->display->content['new-35ea1bae-7836-4e19-a8d0-a507e4537e71']->access['logic'] = 'and'; /* WAS: '' */
    $data['node:event:default']->display->content['new-35ea1bae-7836-4e19-a8d0-a507e4537e71']->access['plugins'] = array(
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
    ); /* WAS: '' */
    $data['node:event:default']->display->content['new-35ea1bae-7836-4e19-a8d0-a507e4537e71']->position = 9; /* WAS: 6 */
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
    $data['node:event:default']->display->content['new-88ab00da-745f-4432-a400-935fdac10fb8']->position = 3; /* WAS: 1 */
    $data['node:event:default']->display->content['new-aef85835-68a5-2494-b107-136f1cb92749']->position = 8; /* WAS: 4 */
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
    $data['node:event:default']->display->content['new-d9b378c4-93e3-4445-b2da-c43dc1bd0588']->position = 6; /* WAS: 5 */
    $data['node:event:default']->display->content['new-eb217e95-60ad-4363-afd5-d3f0ba1c3132']->position = 4; /* WAS: 2 */
    $data['node:event:default']->display->content['new-ffd2a39f-cad3-4bec-8606-cf9a4c698131']->position = 5; /* WAS: 3 */
    $data['node:event:default']->display->panels['two_66_33_first'][6] = 'new-63433d85-f8ce-4ff5-92df-391aca0c05a0'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_first'][7] = 'new-3b2c96a8-75d7-4633-bbe4-193c5a5baaa3'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][0] = 'new-c3480894-214d-4a16-ad1d-9eafbfbb42dd'; /* WAS: 'new-3dcbfc27-8ac0-428e-9926-4d20124df9d6' */
    $data['node:event:default']->display->panels['two_66_33_second'][1] = 'new-4c2fb65e-0095-4fe4-8137-4065111adcea'; /* WAS: 'new-88ab00da-745f-4432-a400-935fdac10fb8' */
    $data['node:event:default']->display->panels['two_66_33_second'][2] = 'new-0b838ec5-ab01-496e-ada7-c0320534dd42'; /* WAS: 'new-eb217e95-60ad-4363-afd5-d3f0ba1c3132' */
    $data['node:event:default']->display->panels['two_66_33_second'][3] = 'new-88ab00da-745f-4432-a400-935fdac10fb8'; /* WAS: 'new-ffd2a39f-cad3-4bec-8606-cf9a4c698131' */
    $data['node:event:default']->display->panels['two_66_33_second'][4] = 'new-eb217e95-60ad-4363-afd5-d3f0ba1c3132'; /* WAS: 'new-aef85835-68a5-2494-b107-136f1cb92749' */
    $data['node:event:default']->display->panels['two_66_33_second'][5] = 'new-ffd2a39f-cad3-4bec-8606-cf9a4c698131'; /* WAS: 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588' */
    $data['node:event:default']->display->panels['two_66_33_second'][6] = 'new-d9b378c4-93e3-4445-b2da-c43dc1bd0588'; /* WAS: 'new-35ea1bae-7836-4e19-a8d0-a507e4537e71' */
    $data['node:event:default']->display->panels['two_66_33_second'][7] = 'new-632cdf26-2846-4b05-ba51-0bef3789c6c4'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][8] = 'new-aef85835-68a5-2494-b107-136f1cb92749'; /* WAS: '' */
    $data['node:event:default']->display->panels['two_66_33_second'][9] = 'new-35ea1bae-7836-4e19-a8d0-a507e4537e71'; /* WAS: '' */
    unset($data['node:event:default']->display->content['new-3dcbfc27-8ac0-428e-9926-4d20124df9d6']);
  }
  if (isset($data['node:event:default:teaser'])) {
    $data['node:event:default:teaser']->display->content['new-3499fc7f-c316-45e1-b841-0d16159f8296'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default:teaser']->display->content['new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f']->position = 2; /* WAS: 0 */
    $data['node:event:default:teaser']->display->content['new-c22911c5-3c21-75b4-c5f3-80efb733956b']->configuration['formatter_settings']['trim_length'] = 250; /* WAS: 600 */
    $data['node:event:default:teaser']->display->content['new-e194ca35-4e2b-4d01-9c97-5bf4492ee63a'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:event:default:teaser']->display->panels['bottom'][0] = 'new-3499fc7f-c316-45e1-b841-0d16159f8296'; /* WAS: 'new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f' */
    $data['node:event:default:teaser']->display->panels['bottom'][2] = 'new-a2646c91-cad9-4bae-bbb8-8cebdf49c02f'; /* WAS: '' */
    $data['node:event:default:teaser']->display->panels['left'][1] = 'new-e194ca35-4e2b-4d01-9c97-5bf4492ee63a'; /* WAS: 'new-bb59c3b5-c74b-4c7a-a057-52a118a0133b' */
    unset($data['node:event:default:teaser']->display->content['new-bb59c3b5-c74b-4c7a-a057-52a118a0133b']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cbib_commons_events_views_default_views_alter(&$data) {
  if (isset($data['backlinks'])) {
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['commons_events_event_attendee_list'])) {
    $data['commons_events_event_attendee_list']->display['default']->display_options['arguments']['nid']['exception'] = array(
      'title' => 'Alle',
    ); /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['default']->display_options['exposed_form']['options'] = array(
      'submit_button' => 'Udfør',
      'reset_button_label' => 'Gendan',
      'exposed_sorts_label' => 'Sortér efter',
      'sort_asc_label' => 'Stigende',
      'sort_desc_label' => 'Faldende',
    ); /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['default']->display_options['pager']['options']['expose'] = array(
      'items_per_page_label' => 'Antal elementer',
      'items_per_page_options_all_label' => '- Alle -',
      'offset_label' => 'Forskydning',
    ); /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['default']->display_options['pager']['options']['tags'] = array(
      'first' => '«',
      'previous' => '‹',
      'next' => '›',
      'last' => '»',
    ); /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['default']->display_options['title'] = 'Deltagere'; /* WAS: 'Attendees' */
    $data['commons_events_event_attendee_list']->display['default']->display_options['use_more_text'] = 'mere'; /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['panel_pane_1']->display_options['defaults']['header'] = FALSE; /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['panel_pane_1']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['panel_pane_1']->display_options['header'] = array(
      'result' => array(
        'id' => 'result',
        'table' => 'views',
        'field' => 'result',
        'content' => '<p>I alt @total deltagere</p>',
      ),
    ); /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['panel_pane_1']->display_options['pager'] = array(
      'type' => 'mini',
      'options' => array(
        'items_per_page' => 20,
        'offset' => 0,
        'id' => 0,
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
      ),
    ); /* WAS: '' */
    $data['commons_events_event_attendee_list']->display['views_data_export_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:3:{s:6:"access";b:0;s:12:"exposed_form";b:0;s:6:"fields";b:0;}s:6:"access";a:2:{s:4:"type";s:4:"perm";s:4:"perm";s:23:"view event registration";}s:12:"exposed_form";a:2:{s:4:"type";s:5:"basic";s:7:"options";a:6:{s:13:"submit_button";s:6:"Udfør";s:18:"reset_button_label";s:6:"Gendan";s:19:"exposed_sorts_label";s:13:"Sortér efter";s:17:"expose_sort_order";b:0;s:14:"sort_asc_label";s:8:"Stigende";s:15:"sort_desc_label";s:8:"Faldende";}}s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:21:"views_data_export_csv";s:13:"style_options";a:10:{s:12:"provide_file";i:0;s:11:"parent_sort";i:0;s:9:"separator";s:1:";";s:5:"quote";i:1;s:4:"trim";i:1;s:16:"replace_newlines";i:1;s:13:"newline_token";s:1:"1";s:6:"header";i:1;s:9:"keep_html";i:0;s:8:"encoding";s:11:"utf8_decode";}s:6:"fields";a:8:{s:8:"realname";a:8:{s:2:"id";s:8:"realname";s:5:"table";s:8:"realname";s:5:"field";s:8:"realname";s:12:"relationship";s:8:"user_uid";s:5:"label";s:4:"Navn";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:12:"link_to_user";b:0;}s:4:"mail";a:5:{s:2:"id";s:4:"mail";s:5:"table";s:5:"users";s:5:"field";s:4:"mail";s:12:"relationship";s:8:"user_uid";s:12:"link_to_user";s:1:"0";}s:11:"field_phone";a:4:{s:2:"id";s:11:"field_phone";s:5:"table";s:22:"field_data_field_phone";s:5:"field";s:11:"field_phone";s:12:"relationship";s:8:"user_uid";}s:20:"field_alternate_work";a:5:{s:2:"id";s:20:"field_alternate_work";s:5:"table";s:31:"field_data_field_alternate_work";s:5:"field";s:20:"field_alternate_work";s:12:"relationship";s:8:"user_uid";s:7:"exclude";b:1;}s:13:"field_library";a:7:{s:2:"id";s:13:"field_library";s:5:"table";s:24:"field_data_field_library";s:5:"field";s:13:"field_library";s:12:"relationship";s:8:"user_uid";s:5:"label";s:25:"Arbejdsplads/Organisation";s:5:"empty";s:22:"[field_alternate_work]";s:8:"settings";a:1:{s:4:"link";i:0;}}s:23:"field_alternate_address";a:8:{s:2:"id";s:23:"field_alternate_address";s:5:"table";s:34:"field_data_field_alternate_address";s:5:"field";s:23:"field_alternate_address";s:12:"relationship";s:8:"user_uid";s:5:"label";s:7:"Adresse";s:23:"element_default_classes";b:0;s:4:"type";s:10:"text_plain";s:8:"settings";a:1:{s:11:"trim_length";i:600;}}s:9:"field_ean";a:4:{s:2:"id";s:9:"field_ean";s:5:"table";s:20:"field_data_field_ean";s:5:"field";s:9:"field_ean";s:12:"relationship";s:8:"user_uid";}s:10:"field_note";a:4:{s:2:"id";s:10:"field_note";s:5:"table";s:21:"field_data_field_note";s:5:"field";s:10:"field_note";s:5:"label";s:13:"Bemærkninger";}}s:4:"path";s:38:"node/%/registrations/DeltagerListe.csv";s:8:"displays";a:3:{s:7:"default";s:7:"default";s:33:"commons_events_full_attendee_list";s:33:"commons_events_full_attendee_list";s:12:"panel_pane_1";s:12:"panel_pane_1";}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:19:"views_data_export_1";s:13:"display_title";s:11:"Data export";s:14:"display_plugin";s:17:"views_data_export";s:8:"position";i:0;}'); /* WAS: '' */
    unset($data['commons_events_event_attendee_list']->display['panel_pane_1']->display_options['allow']['exposed_form']);
  }
  if (isset($data['commons_events_upcoming'])) {
    $data['commons_events_upcoming']->display['commons_events_upcoming_global_block']->display_options['defaults']['css_class'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['commons_events_upcoming_global_block']->display_options['title'] = 'Kommende arrangementer'; /* WAS: 'Upcoming events' */
    $data['commons_events_upcoming']->display['default']->display_options['css_class'] = 'cb-teaser-list'; /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['exposed_form']['options'] = array(
      'submit_button' => 'Udfør',
      'reset_button_label' => 'Gendan',
      'exposed_sorts_label' => 'Sortér efter',
      'sort_asc_label' => 'Stigende',
      'sort_desc_label' => 'Faldende',
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['fields']['capacity_used']['suffix'] = ' deltagere'; /* WAS: ' attendees' */
    $data['commons_events_upcoming']->display['default']->display_options['filters']['delta'] = array(
      'id' => 'delta',
      'table' => 'field_data_field_date',
      'field' => 'delta',
      'operator' => '<=',
      'value' => array(
        'value' => 0,
      ),
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['filters']['field_date_value']['year_range'] = '-10:+10'; /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['filters']['type']['group'] = 1; /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['link_display'] = 'custom_url'; /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['pager']['options']['expose'] = array(
      'items_per_page_label' => 'Antal elementer',
      'items_per_page_options_all_label' => '- Alle -',
      'offset_label' => 'Forskydning',
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['pager']['options']['tags'] = array(
      'first' => '« første',
      'previous' => '‹ forrige',
      'next' => 'næste ›',
      'last' => 'sidste »',
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['query']['options']['distinct'] = TRUE; /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['relationships'] = array(
      'registration_settings_rel' => array(
        'id' => 'registration_settings_rel',
        'table' => 'node',
        'field' => 'registration_settings_rel',
        'required' => TRUE,
      ),
      'og_group_ref_target_id' => array(
        'id' => 'og_group_ref_target_id',
        'table' => 'og_membership',
        'field' => 'og_group_ref_target_id',
      ),
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['title'] = 'Arrangementer'; /* WAS: 'Events' */
    $data['commons_events_upcoming']->display['default']->display_options['use_more_text'] = 'mere'; /* WAS: '' */
    $data['commons_events_upcoming']->display['feed']->display_options['defaults']['css_class'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['defaults']['empty'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['defaults']['filter_groups'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['defaults']['filters'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['empty'] = array(
      'area' => array(
        'id' => 'area',
        'table' => 'views',
        'field' => 'area',
        'empty' => TRUE,
        'content' => '<em>Ingen kommende arrangementer</em>',
        'format' => 'filtered_html',
      ),
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['fields']['capacity_used']['suffix'] = ' deltagere,'; /* WAS: ' attendees,' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['filters'] = array(
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
      'delta' => array(
        'id' => 'delta',
        'table' => 'field_data_field_date',
        'field' => 'delta',
        'operator' => '<=',
        'value' => array(
          'value' => 0,
        ),
      ),
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['pager']['options']['expose'] = array(
      'items_per_page_label' => 'Antal elementer',
      'items_per_page_options_all_label' => '- Alle -',
      'offset_label' => 'Forskydning',
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['pager']['options']['items_per_page'] = 15; /* WAS: 3 */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['pager']['options']['tags'] = array(
      'first' => '«',
      'previous' => '‹',
      'next' => '›',
      'last' => '»',
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['pager']['type'] = 'full'; /* WAS: 'load_more' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['row_options']['links'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['row_plugin'] = 'node'; /* WAS: 'fields' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['title'] = 'Kommende arrangementer'; /* WAS: 'Upcoming events' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_title = 'Landing page all'; /* WAS: 'Group pane' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['allow'] = array(
      'use_pager' => 0,
      'items_per_page' => 0,
      'offset' => 0,
      'link_to_view' => 0,
      'more_link' => 0,
      'path_override' => 0,
      'title_override' => 'title_override',
      'exposed_form' => 0,
      'fields_override' => 0,
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['filter_groups'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['filters'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['use_more'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['use_more_always'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['use_more_text'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['filters'] = array(
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
      'delta' => array(
        'id' => 'delta',
        'table' => 'field_data_field_date',
        'field' => 'delta',
        'operator' => '<=',
        'value' => array(
          'value' => 0,
        ),
      ),
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['link_url'] = 'events'; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['pager'] = array(
      'type' => 'some',
      'options' => array(
        'items_per_page' => 3,
        'offset' => 0,
      ),
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['pane_category'] = array(
      'name' => 'Commons',
      'weight' => 0,
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['title'] = '<a href="/arrangementer">Kommende arrangementer</a>'; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['use_more_text'] = 'Vis mere'; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_title = 'Frontpage'; /* WAS: 'Landing Page pane' */
    $data['commons_events_upcoming']->display['panel_pane_3'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:16:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:16:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:52:"<a href="/node/!1/events">Kommende arrangementer</a>";s:15:"use_more_always";b:0;s:13:"use_more_text";s:8:"Vis mere";s:12:"link_display";s:10:"custom_url";s:8:"link_url";s:14:"node/!1/events";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:4:"node";s:13:"relationships";a:1:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:11:" deltagere,";}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:24:"[comment_count] comments";}s:19:"element_label_colon";b:0;}}s:9:"arguments";a:1:{s:3:"gid";a:9:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:7:"default";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:4:"node";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:4:{s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}s:5:"group";i:1;}s:16:"field_date_value";a:7:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:8:"operator";s:2:">=";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";s:10:"year_range";s:7:"-10:+10";}s:5:"delta";a:5:{s:2:"id";s:5:"delta";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:5:"delta";s:8:"operator";s:2:"<=";s:5:"value";a:1:{s:5:"value";s:1:"0";}}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_3";s:13:"display_title";s:28:"Landing page group frontpage";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_4'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:16:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:15:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;}s:5:"title";s:22:"Kommende arrangementer";s:15:"use_more_always";b:0;s:13:"use_more_text";s:8:"Vis mere";s:12:"link_display";s:10:"custom_url";s:8:"link_url";s:9:"!1/events";s:5:"pager";a:2:{s:4:"type";s:4:"full";s:7:"options";a:6:{s:14:"items_per_page";s:2:"15";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";s:6:"expose";a:3:{s:20:"items_per_page_label";s:15:"Antal elementer";s:32:"items_per_page_options_all_label";s:8:"- Alle -";s:12:"offset_label";s:11:"Forskydning";}s:4:"tags";a:4:{s:5:"first";s:2:"«";s:8:"previous";s:3:"‹";s:4:"next";s:3:"›";s:4:"last";s:2:"»";}}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:4:"node";s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:37:"<em>Ingen kommende arrangementer</em>";s:6:"format";s:13:"filtered_html";}}s:13:"relationships";a:1:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:11:" deltagere,";}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:24:"[comment_count] comments";}s:19:"element_label_colon";b:0;}}s:9:"arguments";a:1:{s:3:"gid";a:9:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:7:"default";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:4:"node";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_4";s:13:"display_title";s:22:"Landing page group all";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_5'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:13:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:23:"Tidligere arrangementer";s:5:"pager";a:2:{s:4:"type";s:4:"full";s:7:"options";a:6:{s:14:"items_per_page";s:2:"15";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";s:6:"expose";a:3:{s:20:"items_per_page_label";s:15:"Antal elementer";s:32:"items_per_page_options_all_label";s:8:"- Alle -";s:12:"offset_label";s:11:"Forskydning";}s:4:"tags";a:4:{s:5:"first";s:2:"«";s:8:"previous";s:3:"‹";s:4:"next";s:3:"›";s:4:"last";s:2:"»";}}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:4:"node";s:11:"row_options";a:1:{s:5:"links";b:0;}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:38:"<em>Ingen tidligere arrangementer</em>";s:6:"format";s:13:"filtered_html";}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:11:" deltagere,";}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:24:"[comment_count] comments";}s:19:"element_label_colon";b:0;}}s:5:"sorts";a:1:{s:16:"field_date_value";a:4:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:5:"order";s:4:"DESC";}}s:7:"filters";a:4:{s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}s:5:"group";i:1;}s:16:"field_date_value";a:7:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:8:"operator";s:1:"<";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";s:10:"year_range";s:7:"-10:+10";}s:5:"delta";a:5:{s:2:"id";s:5:"delta";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:5:"delta";s:8:"operator";s:2:"<=";s:5:"value";a:1:{s:5:"value";s:1:"0";}}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_5";s:13:"display_title";s:27:"Landing page all - previous";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_6'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:18:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:18:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:23:"Tidligere arrangementer";s:15:"use_more_always";b:0;s:13:"use_more_text";s:8:"Vis mere";s:12:"link_display";s:10:"custom_url";s:8:"link_url";s:9:"!1/events";s:5:"pager";a:2:{s:4:"type";s:4:"full";s:7:"options";a:6:{s:14:"items_per_page";s:2:"15";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";s:6:"expose";a:3:{s:20:"items_per_page_label";s:15:"Antal elementer";s:32:"items_per_page_options_all_label";s:8:"- Alle -";s:12:"offset_label";s:11:"Forskydning";}s:4:"tags";a:4:{s:5:"first";s:2:"«";s:8:"previous";s:3:"‹";s:4:"next";s:3:"›";s:4:"last";s:2:"»";}}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:4:"node";s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:38:"<em>Ingen tidligere arrangementer</em>";s:6:"format";s:13:"filtered_html";}}s:13:"relationships";a:1:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:11:" deltagere,";}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:24:"[comment_count] comments";}s:19:"element_label_colon";b:0;}}s:5:"sorts";a:1:{s:16:"field_date_value";a:4:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:5:"order";s:4:"DESC";}}s:9:"arguments";a:1:{s:3:"gid";a:9:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:7:"default";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:4:"node";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:4:{s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}s:5:"group";i:1;}s:16:"field_date_value";a:7:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:8:"operator";s:1:"<";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";s:10:"year_range";s:7:"-10:+10";}s:5:"delta";a:5:{s:2:"id";s:5:"delta";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:5:"delta";s:8:"operator";s:2:"<=";s:5:"value";a:1:{s:5:"value";s:1:"0";}}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_6";s:13:"display_title";s:33:"Landing page group all - previous";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_7'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:18:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;}s:5:"title";s:22:"Kommende arrangementer";s:8:"use_more";b:1;s:15:"use_more_always";b:1;s:13:"use_more_text";s:30:"Se alle gruppens arrangementer";s:12:"link_display";s:10:"custom_url";s:8:"link_url";s:14:"node/!1/events";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:1:{s:13:"capacity_used";s:13:"capacity_used";}}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:37:"<em>Ingen kommende arrangementer</em>";s:6:"format";s:13:"filtered_html";}}s:13:"relationships";a:1:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}}s:6:"fields";a:3:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:10:" deltagere";}}s:9:"arguments";a:1:{s:3:"gid";a:9:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:9:"not found";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_7";s:13:"display_title";s:10:"Group pane";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    unset($data['commons_events_upcoming']->display['default']->display_options['filters']['status']['expose']);
    unset($data['commons_events_upcoming']->display['panel_pane_1']->display_options['arguments']);
    unset($data['commons_events_upcoming']->display['panel_pane_1']->display_options['defaults']['relationships']);
    unset($data['commons_events_upcoming']->display['panel_pane_1']->display_options['relationships']);
    unset($data['commons_events_upcoming']->display['panel_pane_1']->display_options['row_options']['inline']);
    unset($data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['exposed_form']);
    unset($data['commons_events_upcoming']->display['panel_pane_2']->display_options['exposed_form']);
    unset($data['commons_events_upcoming']->display['panel_pane_2']->display_options['sorts']['field_date_value']['expose']);
    unset($data['commons_events_upcoming']->display['panel_pane_2']->display_options['sorts']['field_date_value']['exposed']);
    unset($data['commons_events_upcoming']->display['panel_pane_2']->display_options['sorts']['promote']);
  }
}

<?php
/**
 * @file
 * cbib_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function cbib_groups_default_page_manager_pages_alter(&$data) {
  if (isset($data['groups_directory'])) {
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->content['new-bf6c6f1b-08a6-3874-7186-c955c763c092']->panel = 'one_main'; /* WAS: 'two_66_33_first' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->layout = 'one'; /* WAS: 'two_66_33' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panel_settings['style_settings']['one_main'] = NULL; /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panels['one_main'] = array(
      0 => 'new-bf6c6f1b-08a6-3874-7186-c955c763c092',
    ); /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->title = 'Grupper'; /* WAS: 'Groups' */
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->content['new-3db36521-fb53-58a4-c9e2-137a2dacee07']);
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panels['two_66_33_first']);
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panels['two_66_33_top']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function cbib_groups_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:group:default'])) {
    $data['node:group:default']->display->content['new-0bb1221d-a648-4332-a630-67359e011329']->position = 7; /* WAS: 6 */
    $data['node:group:default']->display->content['new-16bb1e2b-5444-464c-995a-923d2f0a31c6']->configuration['override_title_text'] = 'Tilknytning'; /* WAS: 'Region' */
    $data['node:group:default']->display->content['new-1f218aab-81dc-4e02-8c86-79210bed4a0c'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:group:default']->display->content['new-24f4b75a-80ea-447a-9f3b-a4e200746f48'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:group:default']->display->content['new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7']->position = 5; /* WAS: 4 */
    $data['node:group:default']->display->content['new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a']->position = 4; /* WAS: 3 */
    $data['node:group:default']->display->content['new-40462470-5167-4125-9316-c8812de239f6']->position = 6; /* WAS: 5 */
    $data['node:group:default']->display->content['new-4217fe9c-2561-438d-847c-4a289f5b4bf0']->panel = 'two_66_33_second'; /* WAS: 'two_66_33_first' */
    $data['node:group:default']->display->content['new-4217fe9c-2561-438d-847c-4a289f5b4bf0']->position = 9; /* WAS: 4 */
    $data['node:group:default']->display->content['new-6437b227-b02b-4d81-8547-46a1ee7e9ab8'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:group:default']->display->content['new-99cf40d4-9b5e-4f26-b6c5-e772f6cdfb74'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:group:default']->display->content['new-aa495b28-e361-44b1-871d-74132433a821']->position = 8; /* WAS: 7 */
    $data['node:group:default']->display->content['new-bcc18207-63ae-43c3-8bb4-77518e5bccd3']->position = 2; /* WAS: 1 */
    $data['node:group:default']->display->content['new-d10871fa-ea33-40f2-b568-dda6955d2571']->position = 3; /* WAS: 2 */
    $data['node:group:default']->display->panels['two_66_33_first'][4] = 'new-6437b227-b02b-4d81-8547-46a1ee7e9ab8'; /* WAS: 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0' */
    $data['node:group:default']->display->panels['two_66_33_second'][1] = 'new-99cf40d4-9b5e-4f26-b6c5-e772f6cdfb74'; /* WAS: 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3' */
    $data['node:group:default']->display->panels['two_66_33_second'][10] = 'new-24f4b75a-80ea-447a-9f3b-a4e200746f48'; /* WAS: '' */
    $data['node:group:default']->display->panels['two_66_33_second'][11] = 'new-1f218aab-81dc-4e02-8c86-79210bed4a0c'; /* WAS: '' */
    $data['node:group:default']->display->panels['two_66_33_second'][2] = 'new-bcc18207-63ae-43c3-8bb4-77518e5bccd3'; /* WAS: 'new-d10871fa-ea33-40f2-b568-dda6955d2571' */
    $data['node:group:default']->display->panels['two_66_33_second'][3] = 'new-d10871fa-ea33-40f2-b568-dda6955d2571'; /* WAS: 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a' */
    $data['node:group:default']->display->panels['two_66_33_second'][4] = 'new-39374465-a69f-4fb2-a2d2-aaa4bfa7491a'; /* WAS: 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7' */
    $data['node:group:default']->display->panels['two_66_33_second'][5] = 'new-2e7fc52a-d884-4fc9-9589-fa8f31e876d7'; /* WAS: 'new-40462470-5167-4125-9316-c8812de239f6' */
    $data['node:group:default']->display->panels['two_66_33_second'][6] = 'new-40462470-5167-4125-9316-c8812de239f6'; /* WAS: 'new-0bb1221d-a648-4332-a630-67359e011329' */
    $data['node:group:default']->display->panels['two_66_33_second'][7] = 'new-0bb1221d-a648-4332-a630-67359e011329'; /* WAS: 'new-aa495b28-e361-44b1-871d-74132433a821' */
    $data['node:group:default']->display->panels['two_66_33_second'][8] = 'new-aa495b28-e361-44b1-871d-74132433a821'; /* WAS: '' */
    $data['node:group:default']->display->panels['two_66_33_second'][9] = 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0'; /* WAS: '' */
    $data['node:group:default']->display->title_pane = 0; /* WAS: 'new-bb5618ef-915c-4faa-ba77-bbb198184e22' */
    unset($data['node:group:default']->display->content['new-ea23f7be-8a92-476e-b3a3-d339142e56e3']);
    unset($data['node:group:default']->display->panels['two_66_33_bottom']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function cbib_groups_strongarm_alter(&$data) {
  if (isset($data['comment_centralbibliotek'])) {
    $data['comment_centralbibliotek']->value = 2; /* WAS: 0 */
  }
  if (isset($data['comment_group'])) {
    $data['comment_group']->value = 2; /* WAS: 0 */
  }
  if (isset($data['comment_license'])) {
    $data['comment_license']->value = 2; /* WAS: 0 */
  }
  if (isset($data['field_bundle_settings_node__centralbibliotek'])) {
    $data['field_bundle_settings_node__centralbibliotek']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 14,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__centralbibliotek']->value['extra_fields']['form']['path'] = array(
      'weight' => 13,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__centralbibliotek']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 12,
    ); /* WAS: '' */
    unset($data['field_bundle_settings_node__centralbibliotek']->value['extra_fields']['form']['title']);
    unset($data['field_bundle_settings_node__centralbibliotek']->value['view_modes']['diff_standard']);
    unset($data['field_bundle_settings_node__centralbibliotek']->value['view_modes']['full']);
    unset($data['field_bundle_settings_node__centralbibliotek']->value['view_modes']['rss']);
    unset($data['field_bundle_settings_node__centralbibliotek']->value['view_modes']['search_index']);
    unset($data['field_bundle_settings_node__centralbibliotek']->value['view_modes']['search_result']);
    unset($data['field_bundle_settings_node__centralbibliotek']->value['view_modes']['teaser']);
    unset($data['field_bundle_settings_node__centralbibliotek']->value['view_modes']['token']);
  }
  if (isset($data['field_bundle_settings_node__document'])) {
    $data['field_bundle_settings_node__document']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 40,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['extra_fields']['form']['path'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['full'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['rss'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['search_index'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__group'])) {
    $data['field_bundle_settings_node__group']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 10,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__group']->value['extra_fields']['form']['path'] = array(
      'weight' => 9,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__group']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 8,
    ); /* WAS: '' */
    unset($data['field_bundle_settings_node__group']->value['extra_fields']['form']['title']);
    unset($data['field_bundle_settings_node__group']->value['view_modes']['diff_standard']);
    unset($data['field_bundle_settings_node__group']->value['view_modes']['full']);
    unset($data['field_bundle_settings_node__group']->value['view_modes']['rss']);
    unset($data['field_bundle_settings_node__group']->value['view_modes']['search_index']);
    unset($data['field_bundle_settings_node__group']->value['view_modes']['search_result']);
    unset($data['field_bundle_settings_node__group']->value['view_modes']['teaser']);
    unset($data['field_bundle_settings_node__group']->value['view_modes']['token']);
  }
  if (isset($data['field_bundle_settings_node__license'])) {
    $data['field_bundle_settings_node__license']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 13,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__license']->value['extra_fields']['form']['path'] = array(
      'weight' => 11,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__license']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 10,
    ); /* WAS: '' */
    unset($data['field_bundle_settings_node__license']->value['extra_fields']['form']['title']);
  }
  if (isset($data['field_bundle_settings_node__post'])) {
    $data['field_bundle_settings_node__post']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 10,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['extra_fields']['form']['path'] = array(
      'weight' => 9,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 8,
    ); /* WAS: '' */
  }
  if (isset($data['node_options_group'])) {
    $data['node_options_group']->value[0] = 'status'; /* WAS: 'revision' */
  }
  if (isset($data['node_submitted_group'])) {
    $data['node_submitted_group']->value = 1; /* WAS: 0 */
  }
  if (isset($data['og_group_manager_default_rids_node_group'])) {
    unset($data['og_group_manager_default_rids_node_group']);
  }
  if (isset($data['pathauto_node_pattern'])) {
    $data['pathauto_node_pattern']->value = 'content/[node:title]'; /* WAS: 'groups/[node:commons-groups-first-group]/[node:title]' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cbib_groups_views_default_views_alter(&$data) {
  if (isset($data['commons_bw_all'])) {
    $data['commons_bw_all']->display['default']->display_options['arguments']['gid']['exception'] = array(
      'title' => 'Alle',
    ); /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['exposed_form']['options'] = array(
      'submit_button' => 'Udfør',
      'reset_button_label' => 'Gendan',
      'exposed_sorts_label' => 'Sortér efter',
      'sort_asc_label' => 'Stigende',
      'sort_desc_label' => 'Faldende',
    ); /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['fields']['title_field']['label'] = 'Titel'; /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['filters']['flagged']['expose']['label'] = 'Følger'; /* WAS: 'Following' */
    $data['commons_bw_all']->display['default']->display_options['filters']['type']['value']['document'] = 'document'; /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['pager']['options']['expose'] = array(
      'items_per_page_label' => 'Antal elementer',
      'items_per_page_options_all_label' => '- Alle -',
      'offset_label' => 'Forskydning',
    ); /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['pager']['options']['tags'] = array(
      'first' => '«',
      'previous' => '‹',
      'next' => '›',
      'last' => '»',
    ); /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['sorts']['created']['expose']['label'] = 'seneste'; /* WAS: 'most recent' */
    $data['commons_bw_all']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy']['expose']['label'] = 'mest aktive'; /* WAS: 'most active' */
    $data['commons_bw_all']->display['default']->display_options['use_more_text'] = 'mere'; /* WAS: '' */
  }
  if (isset($data['commons_bw_posts'])) {
    $data['commons_bw_posts']->display['default']->display_options['arguments']['gid']['exception'] = array(
      'title' => 'Alle',
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['exposed_form']['options'] = array(
      'submit_button' => 'Udfør',
      'reset_button_label' => 'Gendan',
      'exposed_sorts_label' => 'Sortér efter',
      'sort_asc_label' => 'Stigende',
      'sort_desc_label' => 'Faldende',
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['filters']['flagged'] = array(
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
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['pager']['options']['expose'] = array(
      'items_per_page_label' => 'Antal elementer',
      'items_per_page_options_all_label' => '- Alle -',
      'offset_label' => 'Forskydning',
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['pager']['options']['tags'] = array(
      'first' => '«',
      'previous' => '‹',
      'next' => '›',
      'last' => '»',
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['relationships']['flag_content_rel'] = array(
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'ui_name' => 'Following',
      'label' => 'following',
      'required' => 0,
      'flag' => 'commons_follow_node',
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['sorts']['created']['expose']['label'] = 'seneste'; /* WAS: 'most recent' */
    $data['commons_bw_posts']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'mest aktive',
      ),
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['use_more_text'] = 'mere'; /* WAS: '' */
  }
  if (isset($data['commons_groups_directory'])) {
    $data['commons_groups_directory']->display['default']->display_options['css_class'] = 'cb-teaser-list'; /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['exposed_form']['options'] = array(
      'submit_button' => 'Udfør',
      'reset_button_label' => 'Gendan',
      'exposed_sorts_label' => 'Sortér efter',
      'sort_asc_label' => 'Stigende',
      'sort_desc_label' => 'Faldende',
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['filters']['type'] = array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'value' => array(
        'group' => 'group',
      ),
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['link_display'] = 'custom_url'; /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['pager']['options']['expose'] = array(
      'items_per_page_label' => 'Antal elementer',
      'items_per_page_options_all_label' => '- Alle -',
      'offset_label' => 'Forskydning',
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['pager']['options']['items_per_page'] = 15; /* WAS: 10 */
    $data['commons_groups_directory']->display['default']->display_options['pager']['options']['tags'] = array(
      'first' => '« første',
      'previous' => '‹ forrige',
      'next' => 'næste ›',
      'last' => 'sidste »',
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['pager']['type'] = 'full'; /* WAS: 'load_more' */
    $data['commons_groups_directory']->display['default']->display_options['sorts']['created']['expose'] = array(
      'label' => 'Oprettelsesdato',
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['title'] = 'Grupper'; /* WAS: 'Groups' */
    $data['commons_groups_directory']->display['default']->display_options['use_more_text'] = 'Vis mere'; /* WAS: '' */
    $data['commons_groups_directory']->display['feed']->display_options['defaults']['sorts'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['feed']->display_options['sorts'] = array(
      'created' => array(
        'id' => 'created',
        'table' => 'node',
        'field' => 'created',
        'order' => 'DESC',
        'expose' => array(
          'label' => 'Oprettelsesdato',
        ),
      ),
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['defaults']['sorts'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['defaults']['use_more'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['defaults']['use_more_always'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['defaults']['use_more_text'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['pager'] = array(
      'type' => 'full',
      'options' => array(
        'items_per_page' => 15,
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
      ),
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['sorts'] = array(
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
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['use_more_text'] = 'Vis mere'; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_title = 'Landing page all'; /* WAS: 'Content pane' */
    $data['commons_groups_directory']->display['panel_pane_2'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:9:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:5:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;}s:5:"title";s:37:"<a href="/node/!1/groups">Grupper</a>";s:8:"link_url";s:14:"node/1!/groups";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:5:"sorts";a:2:{s:7:"created";a:6:{s:2:"id";s:7:"created";s:5:"table";s:4:"node";s:5:"field";s:7:"created";s:5:"order";s:4:"DESC";s:7:"exposed";b:1;s:6:"expose";a:1:{s:5:"label";s:15:"Oprettelsesdato";}}s:5:"title";a:5:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:7:"exposed";b:1;s:6:"expose";a:1:{s:5:"label";s:5:"Titel";}}}s:9:"arguments";a:1:{s:22:"og_user_node_target_id";a:8:{s:2:"id";s:22:"og_user_node_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_user_node_target_id";s:14:"default_action";s:7:"default";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:4:"node";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_2";s:13:"display_title";s:28:"Landing page group frontpage";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_3'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:6:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:2:{s:5:"title";b:0;s:5:"pager";b:0;}s:5:"title";s:30:"<a href="/grupper">Grupper</a>";s:8:"link_url";s:6:"groups";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_3";s:13:"display_title";s:9:"Frontpage";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_4'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:11:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:8:{s:16:"hide_admin_links";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:5:"pager";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;}s:15:"use_more_always";b:0;s:13:"use_more_text";s:8:"Vis mere";s:12:"link_display";s:10:"custom_url";s:8:"link_url";s:14:"node/!1/groups";s:5:"pager";a:2:{s:4:"type";s:4:"full";s:7:"options";a:6:{s:14:"items_per_page";s:2:"10";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";s:6:"expose";a:3:{s:20:"items_per_page_label";s:15:"Antal elementer";s:32:"items_per_page_options_all_label";s:8:"- Alle -";s:12:"offset_label";s:11:"Forskydning";}s:4:"tags";a:4:{s:5:"first";s:2:"«";s:8:"previous";s:3:"‹";s:4:"next";s:3:"›";s:4:"last";s:2:"»";}}}s:5:"sorts";a:2:{s:7:"created";a:6:{s:2:"id";s:7:"created";s:5:"table";s:4:"node";s:5:"field";s:7:"created";s:5:"order";s:4:"DESC";s:7:"exposed";b:1;s:6:"expose";a:1:{s:5:"label";s:15:"Oprettelsesdato";}}s:5:"title";a:5:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:7:"exposed";b:1;s:6:"expose";a:1:{s:5:"label";s:5:"Titel";}}}s:9:"arguments";a:1:{s:22:"og_user_node_target_id";a:8:{s:2:"id";s:22:"og_user_node_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_user_node_target_id";s:14:"default_action";s:7:"default";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:4:"node";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_4";s:13:"display_title";s:22:"Landing page group all";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    unset($data['commons_groups_directory']->display['default']->display_options['filters']['keys']);
  }
  if (isset($data['commons_groups_user_groups'])) {
    $data['commons_groups_user_groups']->display['default']->display_options['arguments']['etid']['exception'] = array(
      'title' => 'Alle',
    ); /* WAS: '' */
    $data['commons_groups_user_groups']->display['default']->display_options['exposed_form']['options'] = array(
      'submit_button' => 'Udfør',
      'reset_button_label' => 'Gendan',
      'exposed_sorts_label' => 'Sortér efter',
      'sort_asc_label' => 'Stigende',
      'sort_desc_label' => 'Faldende',
    ); /* WAS: '' */
    $data['commons_groups_user_groups']->display['default']->display_options['pager']['options']['effects'] = array(
      'speed' => 'slow',
    ); /* WAS: '' */
    $data['commons_groups_user_groups']->display['default']->display_options['pager']['options']['expose'] = array(
      'items_per_page_label' => 'Antal elementer',
      'items_per_page_options_all_label' => '- Alle -',
      'offset_label' => 'Forskydning',
    ); /* WAS: '' */
    $data['commons_groups_user_groups']->display['default']->display_options['pager']['options']['tags'] = array(
      'first' => '«',
      'previous' => '‹',
      'next' => '›',
      'last' => '»',
    ); /* WAS: '' */
    $data['commons_groups_user_groups']->display['default']->display_options['use_more_text'] = 'mere'; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['defaults']['use_ajax'] = FALSE; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['defaults']['use_more'] = FALSE; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['defaults']['use_more_always'] = FALSE; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['defaults']['use_more_text'] = FALSE; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['pager'] = array(
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
    ); /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['use_ajax'] = TRUE; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['use_more'] = TRUE; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['commons_groups_user_groups']->display['panel_pane_1']->display_options['use_more_text'] = 'mere'; /* WAS: '' */
  }
}

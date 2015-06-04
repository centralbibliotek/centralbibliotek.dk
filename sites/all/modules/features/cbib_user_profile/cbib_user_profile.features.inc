<?php
/**
 * @file
 * cbib_user_profile.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cbib_user_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function cbib_user_profile_default_page_manager_handlers_alter(&$data) {
  if (isset($data['user_view_panel_context'])) {
    $data['user_view_panel_context']->conf['display']->content['new-1f277dda-f5c7-4a0e-9dc7-dd17fd081563'] = (object) array(
          'pid' => 'new-1f277dda-f5c7-4a0e-9dc7-dd17fd081563',
          'panel' => 'three_33_third',
          'type' => 'views_panes',
          'subtype' => 'commons_follow_events_a_specific_user_attends-panel_pane_1',
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
          'uuid' => '1f277dda-f5c7-4a0e-9dc7-dd17fd081563',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-20f47a2e-7cb8-a944-8944-3f15009131f7']->position = 9; /* WAS: 3 */
    $data['user_view_panel_context']->conf['display']->content['new-2183ff7a-9286-81a4-39fb-25b7d4973c3b']->position = 2; /* WAS: 0 */
    $data['user_view_panel_context']->conf['display']->content['new-33e98e1b-0f99-4cd0-aa41-dc259f21707c'] = (object) array(
          'pid' => 'new-33e98e1b-0f99-4cd0-aa41-dc259f21707c',
          'panel' => 'three_33_top',
          'type' => 'custom',
          'subtype' => 'custom',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'admin_title' => 'html mailto:',
            'title' => 'Kontakt pr. mail',
            'body' => '<p><a href="mailto:%user:mail">Skriv til %user:name</a></p>',
            'format' => 'full_html',
            'substitute' => 1,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 6,
          'locks' => array(),
          'uuid' => '33e98e1b-0f99-4cd0-aa41-dc259f21707c',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-67c3df7b-1a3b-db24-f974-a3b27f8988d9']->position = 11; /* WAS: 5 */
    $data['user_view_panel_context']->conf['display']->content['new-8e72867b-ef11-4ebf-899b-baba4881dcab'] = (object) array(
          'pid' => 'new-8e72867b-ef11-4ebf-899b-baba4881dcab',
          'panel' => 'three_33_top',
          'type' => 'user_picture',
          'subtype' => 'user_picture',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_entity_id:user_1',
            'override_title' => 1,
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
          'uuid' => '8e72867b-ef11-4ebf-899b-baba4881dcab',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-918d67a4-4642-0364-a570-10f387184ae1']->position = 7; /* WAS: 1 */
    $data['user_view_panel_context']->conf['display']->content['new-932e87fd-66a6-45df-815c-98182371c496'] = (object) array(
          'pid' => 'new-932e87fd-66a6-45df-815c-98182371c496',
          'panel' => 'three_33_top',
          'type' => 'entity_field',
          'subtype' => 'user:field_library',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'entityreference_label',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'link' => 0,
            ),
            'context' => 'argument_entity_id:user_1',
            'override_title' => 1,
            'override_title_text' => 'Tilknyttet lokalbibliotek',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => '932e87fd-66a6-45df-815c-98182371c496',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-a8f5f646-49cf-4cff-b9f4-248c62d9ad33'] = (object) array(
          'pid' => 'new-a8f5f646-49cf-4cff-b9f4-248c62d9ad33',
          'panel' => 'three_33_top',
          'type' => 'entity_field',
          'subtype' => 'user:field_centralbibliotek_ref',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'entityreference_label',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'link' => 1,
              'view_mode' => 'default',
              'links' => 1,
            ),
            'context' => 'argument_entity_id:user_1',
            'override_title' => 1,
            'override_title_text' => 'Tilknyttet centralbibliotek',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => 'a8f5f646-49cf-4cff-b9f4-248c62d9ad33',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-ac8d8150-6ff4-8654-c594-9c46cfe746d3']->position = 10; /* WAS: 4 */
    $data['user_view_panel_context']->conf['display']->content['new-b0ac54f1-a0c8-a334-a53d-47581e23257d']->position = 3; /* WAS: 1 */
    $data['user_view_panel_context']->conf['display']->content['new-b51e0fa8-7402-1104-3597-9bd7665546ae']->position = 8; /* WAS: 2 */
    $data['user_view_panel_context']->conf['display']->content['new-ba052fcb-4b04-4077-9157-4173095f1cc2'] = (object) array(
          'pid' => 'new-ba052fcb-4b04-4077-9157-4173095f1cc2',
          'panel' => 'three_33_third',
          'type' => 'views_panes',
          'subtype' => 'commons_follow_events_a_specific_user_attends-panel_pane_2',
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
          'uuid' => 'ba052fcb-4b04-4077-9157-4173095f1cc2',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-d521841c-ae4b-463c-b33a-f29e640c870f'] = (object) array(
          'pid' => 'new-d521841c-ae4b-463c-b33a-f29e640c870f',
          'panel' => 'three_33_top',
          'type' => 'entity_field',
          'subtype' => 'user:field_phone',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'title_linked',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'title_style' => '_none',
              'title_link' => '',
              'title_class' => '',
            ),
            'context' => 'argument_entity_id:user_1',
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
          'uuid' => 'd521841c-ae4b-463c-b33a-f29e640c870f',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-ea089158-53e7-47e0-96d3-31c4f30019c3'] = (object) array(
          'pid' => 'new-ea089158-53e7-47e0-96d3-31c4f30019c3',
          'panel' => 'three_33_top',
          'type' => 'entity_field',
          'subtype' => 'user:field_job_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'title_linked',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'title_style' => '_none',
              'title_link' => '',
              'title_class' => '',
            ),
            'context' => 'argument_entity_id:user_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'first-profile-item',
          ),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'ea089158-53e7-47e0-96d3-31c4f30019c3',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-ea26f822-8e2c-43e3-b256-c76202517261'] = (object) array(
          'pid' => 'new-ea26f822-8e2c-43e3-b256-c76202517261',
          'panel' => 'three_33_top',
          'type' => 'token',
          'subtype' => 'user:name',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'sanitize' => 1,
            'context' => 'argument_entity_id:user_1',
            'override_title' => 1,
            'override_title_text' => 'Brugernavn',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 5,
          'locks' => array(),
          'uuid' => 'ea26f822-8e2c-43e3-b256-c76202517261',
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_third'][0] = 'new-1f277dda-f5c7-4a0e-9dc7-dd17fd081563'; /* WAS: 'new-2183ff7a-9286-81a4-39fb-25b7d4973c3b' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_third'][1] = 'new-ba052fcb-4b04-4077-9157-4173095f1cc2'; /* WAS: 'new-b0ac54f1-a0c8-a334-a53d-47581e23257d' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_third'][2] = 'new-2183ff7a-9286-81a4-39fb-25b7d4973c3b'; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_third'][3] = 'new-b0ac54f1-a0c8-a334-a53d-47581e23257d'; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][0] = 'new-8e72867b-ef11-4ebf-899b-baba4881dcab'; /* WAS: 'new-d3fbb9db-cd0f-b8f4-1572-0e80c4a66c83' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][1] = 'new-ea089158-53e7-47e0-96d3-31c4f30019c3'; /* WAS: 'new-918d67a4-4642-0364-a570-10f387184ae1' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][10] = 'new-ac8d8150-6ff4-8654-c594-9c46cfe746d3'; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][11] = 'new-67c3df7b-1a3b-db24-f974-a3b27f8988d9'; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][2] = 'new-d521841c-ae4b-463c-b33a-f29e640c870f'; /* WAS: 'new-b51e0fa8-7402-1104-3597-9bd7665546ae' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][3] = 'new-a8f5f646-49cf-4cff-b9f4-248c62d9ad33'; /* WAS: 'new-20f47a2e-7cb8-a944-8944-3f15009131f7' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][4] = 'new-932e87fd-66a6-45df-815c-98182371c496'; /* WAS: 'new-ac8d8150-6ff4-8654-c594-9c46cfe746d3' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][5] = 'new-ea26f822-8e2c-43e3-b256-c76202517261'; /* WAS: 'new-67c3df7b-1a3b-db24-f974-a3b27f8988d9' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][6] = 'new-33e98e1b-0f99-4cd0-aa41-dc259f21707c'; /* WAS: 'new-38b23f27-878a-f264-dd90-e55305d0f70c' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][7] = 'new-918d67a4-4642-0364-a570-10f387184ae1'; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][8] = 'new-b51e0fa8-7402-1104-3597-9bd7665546ae'; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_top'][9] = 'new-20f47a2e-7cb8-a944-8944-3f15009131f7'; /* WAS: '' */
    unset($data['user_view_panel_context']->conf['display']->content['new-38b23f27-878a-f264-dd90-e55305d0f70c']);
    unset($data['user_view_panel_context']->conf['display']->content['new-d3fbb9db-cd0f-b8f4-1572-0e80c4a66c83']);
  }
}

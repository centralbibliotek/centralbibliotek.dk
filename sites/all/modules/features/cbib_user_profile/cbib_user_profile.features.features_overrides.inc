<?php
/**
 * @file
 * cbib_user_profile.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_user_profile_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-20f47a2e-7cb8-a944-8944-3f15009131f7|position"] = 9;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-2183ff7a-9286-81a4-39fb-25b7d4973c3b|position"] = 2;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-38b23f27-878a-f264-dd90-e55305d0f70c"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-40d8e294-86f0-47d6-a13c-6d427ca40792"] = (object) array(
      'pid' => 'new-40d8e294-86f0-47d6-a13c-6d427ca40792',
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
      'uuid' => '40d8e294-86f0-47d6-a13c-6d427ca40792',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-4b82a3ff-7306-4494-913e-d29df37aa533"] = (object) array(
      'pid' => 'new-4b82a3ff-7306-4494-913e-d29df37aa533',
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
      'uuid' => '4b82a3ff-7306-4494-913e-d29df37aa533',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-53010ea6-8be8-453f-9b47-13b7cedecb67"] = (object) array(
      'pid' => 'new-53010ea6-8be8-453f-9b47-13b7cedecb67',
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
      'uuid' => '53010ea6-8be8-453f-9b47-13b7cedecb67',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-67c3df7b-1a3b-db24-f974-a3b27f8988d9|position"] = 11;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-80c08fea-59e9-4160-acf7-3871a82d9e5d"] = (object) array(
      'pid' => 'new-80c08fea-59e9-4160-acf7-3871a82d9e5d',
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
      'uuid' => '80c08fea-59e9-4160-acf7-3871a82d9e5d',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-83a7d0f0-d21f-43f0-ae76-5d739f6fa5e1"] = (object) array(
      'pid' => 'new-83a7d0f0-d21f-43f0-ae76-5d739f6fa5e1',
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
      'uuid' => '83a7d0f0-d21f-43f0-ae76-5d739f6fa5e1',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-8ad3c567-a61a-4bd3-86ff-8c4caa91405c"] = (object) array(
      'pid' => 'new-8ad3c567-a61a-4bd3-86ff-8c4caa91405c',
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
      'uuid' => '8ad3c567-a61a-4bd3-86ff-8c4caa91405c',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-918d67a4-4642-0364-a570-10f387184ae1|position"] = 7;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-a0d75171-474e-4013-b45f-10aef14a6392"] = (object) array(
      'pid' => 'new-a0d75171-474e-4013-b45f-10aef14a6392',
      'panel' => 'three_33_top',
      'type' => 'custom',
      'subtype' => 'custom',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'admin_title' => 'html-mailto',
        'title' => 'Kontakt pr. mail',
        'body' => '<p><a href="mailto:%user:mail">Skriv til %user:name</a></p>
        ',
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
      'uuid' => 'a0d75171-474e-4013-b45f-10aef14a6392',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-ac8d8150-6ff4-8654-c594-9c46cfe746d3|position"] = 10;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-b0ac54f1-a0c8-a334-a53d-47581e23257d|position"] = 3;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-b51e0fa8-7402-1104-3597-9bd7665546ae|position"] = 8;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-e0137635-b8dd-46e9-bb75-3b01bf4f1cc0"] = (object) array(
      'pid' => 'new-e0137635-b8dd-46e9-bb75-3b01bf4f1cc0',
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
      'uuid' => 'e0137635-b8dd-46e9-bb75-3b01bf4f1cc0',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_third|0"] = 'new-83a7d0f0-d21f-43f0-ae76-5d739f6fa5e1';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_third|1"] = 'new-80c08fea-59e9-4160-acf7-3871a82d9e5d';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_third|2"] = 'new-2183ff7a-9286-81a4-39fb-25b7d4973c3b';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_third|3"] = 'new-b0ac54f1-a0c8-a334-a53d-47581e23257d';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|1"] = 'new-40d8e294-86f0-47d6-a13c-6d427ca40792';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|10"] = 'new-ac8d8150-6ff4-8654-c594-9c46cfe746d3';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|11"] = 'new-67c3df7b-1a3b-db24-f974-a3b27f8988d9';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|2"] = 'new-8ad3c567-a61a-4bd3-86ff-8c4caa91405c';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|3"] = 'new-e0137635-b8dd-46e9-bb75-3b01bf4f1cc0';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|4"] = 'new-4b82a3ff-7306-4494-913e-d29df37aa533';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|5"] = 'new-53010ea6-8be8-453f-9b47-13b7cedecb67';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|6"] = 'new-a0d75171-474e-4013-b45f-10aef14a6392';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|7"] = 'new-918d67a4-4642-0364-a570-10f387184ae1';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|8"] = 'new-b51e0fa8-7402-1104-3597-9bd7665546ae';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top|9"] = 'new-20f47a2e-7cb8-a944-8944-3f15009131f7';

 return $overrides;
}

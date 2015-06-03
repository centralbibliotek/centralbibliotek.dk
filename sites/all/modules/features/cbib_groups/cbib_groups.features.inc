<?php
/**
 * @file
 * cbib_groups.features.inc
 */

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
 * Implements hook_views_default_views_alter().
 */
function cbib_groups_views_default_views_alter(&$data) {
  if (isset($data['commons_bw_all'])) {
    $data['commons_bw_all']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy']['expose']['label'] = 'most active'; /* WAS: 'mest aktive' */
  }
  if (isset($data['commons_bw_posts'])) {
    $data['commons_bw_posts']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy']['expose']['label'] = 'most active'; /* WAS: 'mest aktive' */
  }
  if (isset($data['commons_groups_directory'])) {
    $data['commons_groups_directory']->display['default']->display_options['pager']['options']['expose'] = array(
      'items_per_page_label' => 'Antal elementer',
      'items_per_page_options_all_label' => '- Alle -',
      'offset_label' => 'Forskydning',
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['pager']['options']['id'] = 0; /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['pager']['options']['items_per_page'] = 15; /* WAS: 3 */
    $data['commons_groups_directory']->display['default']->display_options['pager']['options']['quantity'] = 9; /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['pager']['options']['tags'] = array(
      'first' => '« første',
      'previous' => '‹ forrige',
      'next' => 'næste ›',
      'last' => 'sidste »',
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['default']->display_options['pager']['type'] = 'full'; /* WAS: 'some' */
    $data['commons_groups_directory']->display['default']->display_options['sorts']['created']['expose'] = array(
      'label' => 'Oprettelsesdato',
    ); /* WAS: '' */
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
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['defaults']['sorts'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['pager']['options']['tags']['first'] = '«'; /* WAS: '« første' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['pager']['options']['tags']['last'] = '»'; /* WAS: 'sidste »' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['pager']['options']['tags']['next'] = '›'; /* WAS: 'næste ›' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['pager']['options']['tags']['previous'] = '‹'; /* WAS: '‹ forrige' */
    $data['commons_groups_directory']->display['panel_pane_1']->display_options['pager']['type'] = 'full'; /* WAS: 'load_more' */
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
    $data['commons_groups_directory']->display['panel_pane_2']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_2']->display_options['defaults']['sorts'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_2']->display_options['defaults']['title'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_2']->display_options['pager'] = array(
      'type' => 'some',
      'options' => array(
        'items_per_page' => 3,
        'offset' => 0,
      ),
    ); /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_2']->display_options['sorts'] = array(
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
    $data['commons_groups_directory']->display['panel_pane_2']->display_options['title'] = '<a href="/node/!1/groups">Grupper</a>'; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_3']->display_options['defaults']['title'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_3']->display_options['title'] = '<a href="/grupper">Grupper</a>'; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_4']->display_options['defaults']['sorts'] = FALSE; /* WAS: '' */
    $data['commons_groups_directory']->display['panel_pane_4']->display_options['pager']['options']['tags']['first'] = '«'; /* WAS: '« første' */
    $data['commons_groups_directory']->display['panel_pane_4']->display_options['pager']['options']['tags']['last'] = '»'; /* WAS: 'sidste »' */
    $data['commons_groups_directory']->display['panel_pane_4']->display_options['pager']['options']['tags']['next'] = '›'; /* WAS: 'næste ›' */
    $data['commons_groups_directory']->display['panel_pane_4']->display_options['pager']['options']['tags']['previous'] = '‹'; /* WAS: '‹ forrige' */
    $data['commons_groups_directory']->display['panel_pane_4']->display_options['sorts'] = array(
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
    unset($data['commons_groups_directory']->display['default']->display_options['use_more']);
    unset($data['commons_groups_directory']->display['panel_pane_1']->display_options['pager']['options']['effects']);
  }
  if (isset($data['commons_groups_user_groups'])) {
    $data['commons_groups_user_groups']->display['default']->display_options['pager']['options']['effects'] = array(
      'speed' => 'slow',
    ); /* WAS: '' */
    $data['commons_groups_user_groups']->display['default']->display_options['pager']['options']['tags']['first'] = '«'; /* WAS: '« første' */
    $data['commons_groups_user_groups']->display['default']->display_options['pager']['options']['tags']['last'] = '»'; /* WAS: 'sidste »' */
    $data['commons_groups_user_groups']->display['default']->display_options['pager']['options']['tags']['next'] = '›'; /* WAS: 'næste ›' */
    $data['commons_groups_user_groups']->display['default']->display_options['pager']['options']['tags']['previous'] = '‹'; /* WAS: '‹ forrige' */
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

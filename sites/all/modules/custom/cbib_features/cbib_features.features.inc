<?php
/**
 * @file
 * cbib_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cbib_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function cbib_features_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:centralbibliotek:default'])) {
    $data['node:centralbibliotek:default']->display->content['new-04035a6e-e80a-4153-862f-74c8d7116a66'] = (object) array(
          'pid' => 'new-04035a6e-e80a-4153-862f-74c8d7116a66',
          'panel' => 'one_main',
          'type' => 'views_panes',
          'subtype' => 'commons_events_upcoming-panel_pane_3',
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
          'position' => 3,
          'locks' => array(),
          'uuid' => '04035a6e-e80a-4153-862f-74c8d7116a66',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default']->display->content['new-1512ad54-2a3d-439f-9a31-899f837f176d'] = (object) array(
          'pid' => 'new-1512ad54-2a3d-439f-9a31-899f837f176d',
          'panel' => 'one_main',
          'type' => 'entity_view',
          'subtype' => 'node',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_mode' => 'teaser',
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
          'uuid' => '1512ad54-2a3d-439f-9a31-899f837f176d',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default']->display->content['new-1c423751-51b0-4922-91e1-2bd81bf66aff'] = (object) array(
          'pid' => 'new-1c423751-51b0-4922-91e1-2bd81bf66aff',
          'panel' => 'one_main',
          'type' => 'views_panes',
          'subtype' => 'commons_groups_directory-panel_pane_2',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => '1c423751-51b0-4922-91e1-2bd81bf66aff',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default']->display->content['new-a65c5e66-fda8-4911-bbac-bd5e7aa1c994'] = (object) array(
          'pid' => 'new-a65c5e66-fda8-4911-bbac-bd5e7aa1c994',
          'panel' => 'one_main',
          'type' => 'views_panes',
          'subtype' => 'centralbibliotek_news-panel_pane_3',
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
          'position' => 2,
          'locks' => array(),
          'uuid' => 'a65c5e66-fda8-4911-bbac-bd5e7aa1c994',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default']->display->content['new-cc7a3b75-fe68-47d8-a865-9e2fa8d34f42'] = (object) array(
          'pid' => 'new-cc7a3b75-fe68-47d8-a865-9e2fa8d34f42',
          'panel' => 'one_main',
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
          'position' => 1,
          'locks' => array(),
          'uuid' => 'cc7a3b75-fe68-47d8-a865-9e2fa8d34f42',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default']->display->hide_title = 1; /* WAS: 0 */
    $data['node:centralbibliotek:default']->display->layout = 'one'; /* WAS: 'two_66_33' */
    $data['node:centralbibliotek:default']->display->panel_settings['style_settings']['one_main'] = NULL; /* WAS: '' */
    $data['node:centralbibliotek:default']->display->panels['one_main'] = array(
      0 => 'new-1512ad54-2a3d-439f-9a31-899f837f176d',
      1 => 'new-cc7a3b75-fe68-47d8-a865-9e2fa8d34f42',
      2 => 'new-a65c5e66-fda8-4911-bbac-bd5e7aa1c994',
      3 => 'new-04035a6e-e80a-4153-862f-74c8d7116a66',
      4 => 'new-1c423751-51b0-4922-91e1-2bd81bf66aff',
    ); /* WAS: '' */
    unset($data['node:centralbibliotek:default']->display->content['new-10f12c5b-679e-d294-b1bd-9aac845800f5']);
    unset($data['node:centralbibliotek:default']->display->content['new-13120946-03a1-bfc4-2d74-f39dd758ebce']);
    unset($data['node:centralbibliotek:default']->display->content['new-52796f83-93dd-2cf4-41aa-33520dc31e5f']);
    unset($data['node:centralbibliotek:default']->display->content['new-80b62348-7cee-e304-5d65-0ce1b6bbb216']);
    unset($data['node:centralbibliotek:default']->display->content['new-a7009535-0e2a-2c94-edd2-4ecc953c4ca2']);
    unset($data['node:centralbibliotek:default']->display->content['new-ba735f2b-4734-7724-098d-1925c6a4bb47']);
    unset($data['node:centralbibliotek:default']->display->panels['two_66_33_first']);
    unset($data['node:centralbibliotek:default']->display->panels['two_66_33_second']);
  }
  if (isset($data['node:centralbibliotek:default:teaser'])) {
    $data['node:centralbibliotek:default:teaser']->display->content['new-004f0bea-aa97-4691-919b-b32b36054b3a'] = (object) array(
          'pid' => 'new-004f0bea-aa97-4691-919b-b32b36054b3a',
          'panel' => 'two_66_33_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_phone',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'title_linked',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'title_style' => '_none',
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
          'uuid' => '004f0bea-aa97-4691-919b-b32b36054b3a',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-1efcd75f-5c6b-4dea-afda-77c69b3f90a6'] = (object) array(
          'pid' => 'new-1efcd75f-5c6b-4dea-afda-77c69b3f90a6',
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
          'position' => 8,
          'locks' => array(),
          'uuid' => '1efcd75f-5c6b-4dea-afda-77c69b3f90a6',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-2032304d-ff51-4e20-82cd-90fb530a3f1b'] = (object) array(
          'pid' => 'new-2032304d-ff51-4e20-82cd-90fb530a3f1b',
          'panel' => 'two_66_33_second',
          'type' => 'views',
          'subtype' => 'cbib_sider',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_pager_settings' => 0,
            'use_pager' => 0,
            'nodes_per_page' => 0,
            'pager_id' => 0,
            'offset' => 0,
            'more_link' => 0,
            'feed_icons' => 0,
            'panel_args' => 0,
            'link_to_view' => 0,
            'args' => '',
            'url' => '',
            'display' => 'block',
            'context' => array(
              0 => '',
            ),
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
          'uuid' => '2032304d-ff51-4e20-82cd-90fb530a3f1b',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-258c2017-ddba-4967-83e4-ee85a091a6ae'] = (object) array(
          'pid' => 'new-258c2017-ddba-4967-83e4-ee85a091a6ae',
          'panel' => 'two_66_33_second',
          'type' => 'views_panes',
          'subtype' => 'library_employees-panel_pane_3',
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
          'position' => 9,
          'locks' => array(),
          'uuid' => '258c2017-ddba-4967-83e4-ee85a091a6ae',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-2bfab762-817b-4004-9786-2a71da083b5a'] = (object) array(
          'pid' => 'new-2bfab762-817b-4004-9786-2a71da083b5a',
          'panel' => 'two_66_33_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_e_mail',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'title_linked',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'title_style' => '_none',
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
          'position' => 6,
          'locks' => array(),
          'uuid' => '2bfab762-817b-4004-9786-2a71da083b5a',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-3b4f691a-868e-4158-872a-5fffa14248a1'] = (object) array(
          'pid' => 'new-3b4f691a-868e-4158-872a-5fffa14248a1',
          'panel' => 'two_66_33_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_address',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'addressfield_default',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'use_widget_handlers' => 1,
              'format_handlers' => array(
                'address' => 'address',
              ),
            ),
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '%node:title Centralbibliotek',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '3b4f691a-868e-4158-872a-5fffa14248a1',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-6b9a6759-d00c-46a1-b9c3-be5bc958d682'] = (object) array(
          'pid' => 'new-6b9a6759-d00c-46a1-b9c3-be5bc958d682',
          'panel' => 'two_66_33_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_agency',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'number_unformatted',
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
          'uuid' => '6b9a6759-d00c-46a1-b9c3-be5bc958d682',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-737818c6-2472-4650-b282-4f0320df1323'] = (object) array(
          'pid' => 'new-737818c6-2472-4650-b282-4f0320df1323',
          'panel' => 'two_66_33_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_ean',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'title_linked',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'title_style' => '_none',
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
          'position' => 2,
          'locks' => array(),
          'uuid' => '737818c6-2472-4650-b282-4f0320df1323',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-76050360-e15e-4f6a-8da5-d5c0039cac2f'] = (object) array(
          'pid' => 'new-76050360-e15e-4f6a-8da5-d5c0039cac2f',
          'panel' => 'two_66_33_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_website',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'title_linked',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'title_style' => '_none',
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
          'position' => 5,
          'locks' => array(),
          'uuid' => '76050360-e15e-4f6a-8da5-d5c0039cac2f',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-926a99b3-8e75-aa14-2542-16f2ab9e70b3']->configuration['formatter_settings']['image_style'] = 'full_node'; /* WAS: '50x50' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-926a99b3-8e75-aa14-2542-16f2ab9e70b3']->panel = 'two_66_33_first'; /* WAS: 'one_main' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-926a99b3-8e75-aa14-2542-16f2ab9e70b3']->position = 0; /* WAS: 3 */
    $data['node:centralbibliotek:default:teaser']->display->content['new-b5618767-6a4d-4d21-9f8c-5145527c23c8'] = (object) array(
          'pid' => 'new-b5618767-6a4d-4d21-9f8c-5145527c23c8',
          'panel' => 'two_66_33_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_cvr',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'number_integer',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'thousand_separator' => ' ',
              'prefix_suffix' => 1,
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
          'uuid' => 'b5618767-6a4d-4d21-9f8c-5145527c23c8',
        ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-c22911c5-3c21-75b4-c5f3-80efb733956b']->configuration['formatter'] = 'text_default'; /* WAS: 'text_summary_or_trimmed' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-c22911c5-3c21-75b4-c5f3-80efb733956b']->panel = 'two_66_33_first'; /* WAS: 'one_main' */
    $data['node:centralbibliotek:default:teaser']->display->content['new-c22911c5-3c21-75b4-c5f3-80efb733956b']->position = 1; /* WAS: 4 */
    $data['node:centralbibliotek:default:teaser']->display->hide_title = 1; /* WAS: 0 */
    $data['node:centralbibliotek:default:teaser']->display->layout = 'two_66_33'; /* WAS: 'one' */
    $data['node:centralbibliotek:default:teaser']->display->panel_settings['style_settings']['two_66_33_bottom'] = NULL; /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->panel_settings['style_settings']['two_66_33_first'] = NULL; /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->panel_settings['style_settings']['two_66_33_second'] = NULL; /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->panel_settings['style_settings']['two_66_33_top'] = NULL; /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->panels['two_66_33_first'] = array(
      0 => 'new-926a99b3-8e75-aa14-2542-16f2ab9e70b3',
      1 => 'new-c22911c5-3c21-75b4-c5f3-80efb733956b',
    ); /* WAS: '' */
    $data['node:centralbibliotek:default:teaser']->display->panels['two_66_33_second'] = array(
      0 => 'new-3b4f691a-868e-4158-872a-5fffa14248a1',
      1 => 'new-004f0bea-aa97-4691-919b-b32b36054b3a',
      2 => 'new-737818c6-2472-4650-b282-4f0320df1323',
      3 => 'new-b5618767-6a4d-4d21-9f8c-5145527c23c8',
      4 => 'new-6b9a6759-d00c-46a1-b9c3-be5bc958d682',
      5 => 'new-76050360-e15e-4f6a-8da5-d5c0039cac2f',
      6 => 'new-2bfab762-817b-4004-9786-2a71da083b5a',
      7 => 'new-2032304d-ff51-4e20-82cd-90fb530a3f1b',
      8 => 'new-1efcd75f-5c6b-4dea-afda-77c69b3f90a6',
      9 => 'new-258c2017-ddba-4967-83e4-ee85a091a6ae',
    ); /* WAS: '' */
    unset($data['node:centralbibliotek:default:teaser']->display->content['new-026f9d2d-fd0e-d794-1971-47eb628a7f6e']);
    unset($data['node:centralbibliotek:default:teaser']->display->content['new-13859111-e3fa-5e54-a93c-57f09d719e38']);
    unset($data['node:centralbibliotek:default:teaser']->display->content['new-6c3207ac-19f3-8184-11ba-e3aee789a9c8']);
    unset($data['node:centralbibliotek:default:teaser']->display->content['new-cb706c02-36e8-a414-c9f5-c34bf15861ca']);
    unset($data['node:centralbibliotek:default:teaser']->display->content['new-f7a3719c-d7be-f024-ed91-c8c0df943df4']);
    unset($data['node:centralbibliotek:default:teaser']->display->panels['one_main']);
  }
}

/**
 * Implements hook_image_default_styles().
 */
function cbib_features_image_default_styles() {
  $styles = array();

  // Exported image style: full_node.
  $styles['full_node'] = array(
    'name' => 'full_node',
    'label' => 'Full Node (630x340)',
    'effects' => array(
      2 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 630,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser.
  $styles['teaser'] = array(
    'name' => 'teaser',
    'label' => 'Teaser (330x170)',
    'effects' => array(
      1 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cbib_features_node_info() {
  $items = array(
    'centralbibliotek' => array(
      'name' => t('Centralbibliotek'),
      'base' => 'node_content',
      'description' => t('Beskrivelse, info, m.m. om centralbiblioteker.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

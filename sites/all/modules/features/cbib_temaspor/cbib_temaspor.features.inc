<?php
/**
 * @file
 * cbib_temaspor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_temaspor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cbib_temaspor_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cbib_temaspor_field_default_field_instances_alter(&$data) {
  if (isset($data['node-temaspor-title_field'])) {
    unset($data['node-temaspor-title_field']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function cbib_temaspor_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:temaspor:default'])) {
    $data['node:temaspor:default']->display->content['new-b39e6900-480d-46f6-8fb7-010cd3bb7f2f'] = (object) array(
          'pid' => 'new-b39e6900-480d-46f6-8fb7-010cd3bb7f2f',
          'panel' => 'one_main',
          'type' => 'node_content',
          'subtype' => 'node_content',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'links' => 1,
            'no_extras' => 0,
            'override_title' => 1,
            'override_title_text' => '',
            'identifier' => '',
            'link' => 0,
            'leave_node_title' => 0,
            'build_mode' => 'full',
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'b39e6900-480d-46f6-8fb7-010cd3bb7f2f',
        ); /* WAS: '' */
    $data['node:temaspor:default']->display->layout = 'one'; /* WAS: 'two_66_33' */
    $data['node:temaspor:default']->display->panels['one_main'] = array(
      0 => 'new-b39e6900-480d-46f6-8fb7-010cd3bb7f2f',
    ); /* WAS: '' */
    $data['node:temaspor:default']->display->uuid = 'd645308c-4ac7-4507-b81d-2ca2139ba76e'; /* WAS: '819deb2a-c56c-2214-558d-c52460a89778' */
    unset($data['node:temaspor:default']->display->content['new-10f12c5b-679e-d294-b1bd-9aac845800f5']);
    unset($data['node:temaspor:default']->display->content['new-13120946-03a1-bfc4-2d74-f39dd758ebce']);
    unset($data['node:temaspor:default']->display->content['new-52796f83-93dd-2cf4-41aa-33520dc31e5f']);
    unset($data['node:temaspor:default']->display->content['new-80b62348-7cee-e304-5d65-0ce1b6bbb216']);
    unset($data['node:temaspor:default']->display->content['new-a7009535-0e2a-2c94-edd2-4ecc953c4ca2']);
    unset($data['node:temaspor:default']->display->content['new-ba735f2b-4734-7724-098d-1925c6a4bb47']);
    unset($data['node:temaspor:default']->display->panels['two_66_33_first']);
    unset($data['node:temaspor:default']->display->panels['two_66_33_second']);
  }
  if (isset($data['node:temaspor:default:teaser'])) {
    $data['node:temaspor:default:teaser']->display->panels['one_main'][0] = 'new-254654e9-cc3a-4756-be3b-f56b9577c4ff'; /* WAS: 'new-026f9d2d-fd0e-d794-1971-47eb628a7f6e' */
    $data['node:temaspor:default:teaser']->display->panels['one_main'][2] = 'new-51c92a65-3aac-4da0-a6e9-cb9de33e60a5'; /* WAS: 'new-f7a3719c-d7be-f024-ed91-c8c0df943df4' */
    $data['node:temaspor:default:teaser']->display->panels['one_main'][3] = 'new-149287b0-46e6-45bc-9986-371e15118bf4'; /* WAS: 'new-926a99b3-8e75-aa14-2542-16f2ab9e70b3' */
    $data['node:temaspor:default:teaser']->display->panels['one_main'][4] = 'new-f61f36d2-aed6-4454-bccc-075c21970843'; /* WAS: 'new-c22911c5-3c21-75b4-c5f3-80efb733956b' */
    $data['node:temaspor:default:teaser']->display->panels['one_main'][5] = 'new-cba80b95-2951-4d1a-a797-c9bb80b82ed4'; /* WAS: 'new-cb706c02-36e8-a414-c9f5-c34bf15861ca' */
    $data['node:temaspor:default:teaser']->display->panels['one_main'][6] = 'new-76be8641-19c3-4cfa-9279-e311bafccc34'; /* WAS: 'new-6c3207ac-19f3-8184-11ba-e3aee789a9c8' */
    $data['node:temaspor:default:teaser']->display->uuid = '937ec228-6481-400a-9748-df684e01dc0b'; /* WAS: '2880dc3a-9be6-dc34-a563-b9748d152f92' */
    unset($data['node:temaspor:default:teaser']->display->content['new-026f9d2d-fd0e-d794-1971-47eb628a7f6e']);
    unset($data['node:temaspor:default:teaser']->display->content['new-6c3207ac-19f3-8184-11ba-e3aee789a9c8']);
    unset($data['node:temaspor:default:teaser']->display->content['new-926a99b3-8e75-aa14-2542-16f2ab9e70b3']);
    unset($data['node:temaspor:default:teaser']->display->content['new-c22911c5-3c21-75b4-c5f3-80efb733956b']);
    unset($data['node:temaspor:default:teaser']->display->content['new-cb706c02-36e8-a414-c9f5-c34bf15861ca']);
    unset($data['node:temaspor:default:teaser']->display->content['new-f7a3719c-d7be-f024-ed91-c8c0df943df4']);
  }
}

/**
 * Implements hook_slick_default_presets_alter().
 */
function cbib_temaspor_slick_default_presets_alter(&$data) {
  if (isset($data['default'])) {
    $data['default']->disabled = FALSE; /* WAS: TRUE */
    unset($data['default']->export_type);
    unset($data['default']->type);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function cbib_temaspor_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_temaspor'])) {
    $data['panelizer_defaults_node_temaspor']->value['view modes']['teaser']['default'] = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cbib_temaspor_views_default_views_alter(&$data) {
  if (isset($data['temaspor'])) {
    $data['temaspor']->display['default']->display_options['fields']['field_image'] = array(
      'id' => 'field_image',
      'table' => 'field_data_field_image',
      'field' => 'field_image',
      'label' => '',
      'element_label_colon' => FALSE,
      'click_sort_column' => 'fid',
      'settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'delta_offset' => 0,
    ); /* WAS: '' */
    $data['temaspor']->display['default']->display_options['row_plugin'] = 'fields'; /* WAS: 'node' */
    $data['temaspor']->display['default']->display_options['style_options'] = array(
      'slide_field_wrapper' => 0,
      'cache' => '',
      'mousewheel' => 0,
      'optionset' => 'clone_of_default',
      'override' => 0,
      'overridables' => array(
        'arrows' => 0,
        'autoplay' => 0,
        'dots' => 0,
        'draggable' => 0,
      ),
      'skin' => 'grid',
      'slide_caption' => array(
        'title' => 0,
      ),
      'slide_overlay' => '',
      'preserve_keys' => 0,
    ); /* WAS: '' */
    $data['temaspor']->display['default']->display_options['style_plugin'] = 'slick'; /* WAS: 'default' */
  }
}

/**
 * Implements hook_node_info().
 */
function cbib_temaspor_node_info() {
  $items = array(
    'temaspor' => array(
      'name' => t('Temaspor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function cbib_temaspor_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: temaspor
  $schemaorg['node']['temaspor'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  );

  return $schemaorg;
}

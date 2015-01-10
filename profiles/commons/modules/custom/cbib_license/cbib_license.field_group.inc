<?php
/**
 * @file
 * cbib_license.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cbib_license_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_etc|node|license|form';
  $field_group->group_name = 'group_etc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Diverse',
    'weight' => '8',
    'children' => array(
      0 => 'field_license_access_statistic',
      1 => 'field_license_newsletter',
      2 => 'field_license_periode',
      3 => 'field_license_subscription',
      4 => 'field_license_payment',
      5 => 'field_license_abbreviated_title',
      6 => 'field_license_proxy_start_url',
      7 => 'field_license_pid',
      8 => 'field_license_update_frequency',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_etc|node|license|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|license|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Generelt',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_faust_no',
      2 => 'field_titleliste',
      3 => 'field_title_list_links',
      4 => 'field_producer',
      5 => 'field_language',
      6 => 'field_search_facility',
      7 => 'field_library_ref',
      8 => 'field_license_ambassador',
      9 => 'field_license_target',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|node|license|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_knowledge_center|node|license|form';
  $field_group->group_name = 'group_knowledge_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vidensbank',
    'weight' => '9',
    'children' => array(
      0 => 'field_knowledge_center',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-knowledge-center field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_knowledge_center|node|license|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_license_access|node|license|form';
  $field_group->group_name = 'group_license_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Licensadgange',
    'weight' => '7',
    'children' => array(
      0 => 'field_license_access_ip',
      1 => 'field_license_access_password',
      2 => 'field_license_access_remote_user',
      3 => 'field_license_access_print_user',
      4 => 'field_license_access_print_lib',
      5 => 'field_license_access_copy_user',
      6 => 'field_license_access_copy_lib',
      7 => 'field_license_metadata',
      8 => 'field_license_access_note',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-license-access field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_license_access|node|license|form'] = $field_group;

  return $export;
}

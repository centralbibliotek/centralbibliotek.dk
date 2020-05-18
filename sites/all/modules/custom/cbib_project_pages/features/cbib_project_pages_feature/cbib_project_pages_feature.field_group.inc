<?php
/**
 * @file
 * cbib_project_pages_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cbib_project_pages_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|node|projekt_sider_under_side|form';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'projekt_sider_under_side';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filer',
    'weight' => '5',
    'children' => array(
      0 => 'field_dokumenter',
      1 => 'field_links',
      2 => 'field_ekstern_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Filer',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-files field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_files|node|projekt_sider_under_side|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Filer');

  return $field_groups;
}

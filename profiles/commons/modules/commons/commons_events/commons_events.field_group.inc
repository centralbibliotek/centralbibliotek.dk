<?php
/**
 * @file
 * commons_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function commons_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration|node|event|form';
  $field_group->group_name = 'group_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indstillinger for tilmelding',
    'weight' => '8',
    'children' => array(
      0 => 'field_number_of_attendees',
      1 => 'field_organizers',
      2 => 'field_registration',
      3 => 'field_registration_type',
      4 => 'field_registration_date',
      5 => 'field_reminder_date',
      6 => 'field_send_reminder',
      7 => 'field_reminder_text',
      8 => 'field_status',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Indstillinger for tilmelding',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_registration|node|event|form'] = $field_group;

  return $export;
}

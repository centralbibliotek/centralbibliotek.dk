<?php
/**
 * @file
 * cbib_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1|display_options|defaults|exposed_form"] = FALSE;
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1|display_options|exposed_form"] = array(
    'type' => 'basic',
    'options' => array(
      'submit_button' => 'Udfør',
      'reset_button_label' => 'Gendan',
      'exposed_sorts_label' => 'Sortér efter',
      'expose_sort_order' => FALSE,
      'sort_asc_label' => 'Stigende',
      'sort_desc_label' => 'Faldende',
    ),
  );
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1|display_options|fields|field_address"] = array(
    'id' => 'field_address',
    'table' => 'field_data_field_address',
    'field' => 'field_address',
    'relationship' => 'user_uid',
    'label' => 'Adresse',
    'element_default_classes' => FALSE,
    'hide_alter_empty' => FALSE,
    'click_sort_column' => 'country',
    'type' => 'addressfield_linear',
    'settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        'address' => 'address',
      ),
    ),
  );
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1|display_options|fields|field_ean|relationship"] = 'user_uid';
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1|display_options|fields|field_library"] = array(
    'id' => 'field_library',
    'table' => 'field_data_field_library',
    'field' => 'field_library',
    'relationship' => 'user_uid',
    'label' => 'Arbejdsplads/Organisation',
    'settings' => array(
      'link' => 0,
    ),
  );
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1|display_options|fields|field_note"] = array(
    'id' => 'field_note',
    'table' => 'field_data_field_note',
    'field' => 'field_note',
    'label' => 'Bemærkninger',
  );
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1|display_options|path"] = 'node/%/registrations/DeltagerListe.csv';
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1|display_options|segment_size"] = 100;

 return $overrides;
}

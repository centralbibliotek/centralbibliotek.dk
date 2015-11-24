<?php

/**
 * @file
 * Content_type plugin for getting the time and location of an event.
 */

$plugin = array(
  'title' => t('Time and location'),
  'description' => t('Time and location of event.'),
  'category' => t('Centralbibliotek'),
  'defaults' => array(
    'cbib_events_time_and_location_date_format' => '',
  ),
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Edit callback for the content type.
 */
function cbib_events_cbib_time_and_location_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['cbib_events_time_and_location_date_format'] = array(
    '#type' => 'select',
    '#title' => t('Date format to use'),
    '#options' => date_format_type_options(),
    '#description' => t('Display event date in this format.'),
    '#default_value' => !empty($conf['cbib_events_time_and_location_date_format']) ? $conf['cbib_events_time_and_location_date_format'] : '',
  );

  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function cbib_events_cbib_time_and_location_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Put the output for your content type in the pane object's content.
 */
function cbib_events_cbib_time_and_location_content_type_render($subtype, $conf, $args, $context) {
  $pane = new stdClass();

  // Add overwrite title if needed.
  if ($conf['override_title']) {
    $pane->title = $conf['override_title_text'];
  }

  if (empty($conf['cbib_events_time_and_location_date_format'])) {
    $date_format = 'medium';
  }
  else {
    $date_format = $conf['cbib_events_time_and_location_date_format'];
  }

  // Only add stuff if the node is an event.
  if ($context->data->type == 'event') {
    $output = array();

    if (!empty($context->data->field_address[LANGUAGE_NONE][0]['locality'])) {
      $output[] = $context->data->field_address[LANGUAGE_NONE][0]['locality'];
    }

    if (!empty($context->data->field_date[LANGUAGE_NONE][0])) {
      $date = new DateObject($context->data->field_date[LANGUAGE_NONE][0]['value'], $context->data->field_date[LANGUAGE_NONE][0]['timezone_db'], date_type_format($context->data->field_date[LANGUAGE_NONE][0]['date_type']));
      $output[] = format_date($date->format('U'), $date_format);
    }

    $pane->content = implode(', ', $output);
  }

  return $pane;
}

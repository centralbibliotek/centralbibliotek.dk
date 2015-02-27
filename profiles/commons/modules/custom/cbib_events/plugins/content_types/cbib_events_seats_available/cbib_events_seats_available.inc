<?php

/**
 * @file
 * Content_type plugin for getting the number of available seats.
 */

$plugin = array(
  'title' => t('Seats available'),
  'description' => t('Number of available seats.'),
  'content_types' => array('cbib_events_seats_available'),
  'defaults' => array('cbib_events_no_seats_available_text' => ''),
  'icon' => 'icon-events.png',
  'category' => t('Centralbibliotek'),
  'single' => TRUE,
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Edit callback for the content type.
 */
function cbib_events_cbib_events_seats_available_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['cbib_events_no_seats_available_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Full'),
    '#description' => t('Text to display when there are no seats available.'),
    '#default_value' => !empty($conf['cbib_events_no_seats_available_text']) ? $conf['cbib_events_no_seats_available_text'] : '',
  );
  $form['cbib_events_unlimited_seats_available_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Full'),
    '#description' => t('Text to display when there are unlimited seats available.'),
    '#default_value' => !empty($conf['cbib_events_unlimited_seats_available_text']) ? $conf['cbib_events_unlimited_seats_available_text'] : '',
  );
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function cbib_events_cbib_events_seats_available_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Put the output for your content type in the pane object's content.
 */
function cbib_events_cbib_events_seats_available_content_type_render($subtype, $conf, $args, $context) {
  $pane = new stdClass();

  // Add overwrite title if needed.
  if ($conf['override_title']) {
    $pane->title = $conf['override_title_text'];
  }
  else {
    $pane->title = t('Seats available');
  }

  // Only add stuff if the node is an event.
  if ($context->data->type == 'event') {
    $attendee = commons_events_get_raw_attendee_count($context->data);
    $max = $context->data->field_number_of_attendees[LANGUAGE_NONE][0]['value'];

    if ($max - $attendee > 0) {
      $pane->content = $max - $attendee;
    }
    elseif ($max > 0) {
      $pane->content = $conf['cbib_events_no_seats_available_text'];
    }
    else {
      // Unlimited and therefore no text.
      $pane->title = '';
      $pane->content = '';
    }
  }
  return $pane;
}

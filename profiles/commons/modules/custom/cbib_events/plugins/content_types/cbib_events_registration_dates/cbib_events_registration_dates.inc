<?php

/**
 * @file
 * Content_type plugin for showing registration open or close date.
 */

$plugin = array(
  'title' => t('Registration dates'),
  'description' => t('Opening and registration dates..'),
  'content_types' => array('cbib_events_registration_dates'),
  'defaults' => array(
    'cbib_events_registrations_dates_date_format' => '',
    'cbib_events_registrations_dates_open_or_close' => 'close',
  ),
  'icon' => 'icon-events.png',
  'category' => t('Centralbibliotek'),
  'single' => TRUE,
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Edit callback for the content type.
 */
function cbib_events_cbib_events_registration_dates_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['cbib_events_registrations_dates_open_or_close'] = array(
    '#type' => 'select',
    '#title' => t('Open or close date'),
    '#options' => array(
      'open' => t('Open'),
      'close' => t('Close'),
    ),
    '#description' => t('Show registration open or close date.'),
    '#default_value' => !empty($conf['cbib_events_registrations_dates_open_or_close']) ? $conf['cbib_events_registrations_dates_open_or_close'] : 'close',
  );

  $form['cbib_events_registrations_dates_date_format'] = array(
    '#type' => 'select',
    '#title' => t('Date format to use'),
    '#options' => date_format_type_options(),
    '#description' => t('Display registration open/close date in this format.'),
    '#default_value' => !empty($conf['cbib_events_registrations_dates_date_format']) ? $conf['cbib_events_registrations_dates_date_format'] : '',
  );

  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function cbib_events_cbib_events_registration_dates_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Put the output for your content type in the pane object's content.
 */
function cbib_events_cbib_events_registration_dates_content_type_render($subtype, $conf, $args, $context) {
  $pane = new stdClass();

  // Add overwrite title if needed.
  if ($conf['override_title']) {
    $pane->title = $conf['override_title_text'];
  }
  else {
    $pane->title = t('Registration dates');
  }

  if (empty($conf['cbib_events_registrations_dates_date_format'])) {
    $date_format = 'medium';
  }
  else {
    $date_format = $conf['cbib_events_registrations_dates_date_format'];
  }

  if (empty($conf['cbib_events_registrations_dates_open_or_close'])) {
    $open_or_close = 'close';
  }
  else {
    $open_or_close = $conf['cbib_events_registrations_dates_open_or_close'];
  }

  // Only add stuff if the node is an event.
  if ($context->data->type == 'event') {
    $registration_settings = registration_entity_settings('node', $context->data->nid);

    if (!empty($registration_settings[$open_or_close])) {
      if ($open_or_close == 'open' && strtotime($registration_settings[$open_or_close]) < time()) {
        // Hide this date if the registration is already open.
        $pane->content = '';
      }
      else {
        $pane->content = date_format_date(new DateObject($registration_settings[$open_or_close]), $date_format);
      }
    }
  }

  return $pane;
}

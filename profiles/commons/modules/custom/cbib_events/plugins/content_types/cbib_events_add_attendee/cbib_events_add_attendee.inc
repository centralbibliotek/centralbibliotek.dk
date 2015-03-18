<?php

/**
 * @file
 * Content_type plugin for getting the number of available seats.
 */

$plugin = array(
  'title' => t('Add attendee'),
  'description' => t('Add attendee.'),
  'icon' => 'icon-events.png',
  'category' => t('Centralbibliotek'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Edit callback for the content type.
 */
function cbib_events_cbib_events_add_attendee_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Put the output for your content type in the pane object's content.
 */
function cbib_events_cbib_events_add_attendee_content_type_render($subtype, $conf, $args, $context) {
  $pane = new stdClass();

  // Add overwrite title if needed.
  if ($conf['override_title']) {
    $pane->title = $conf['override_title_text'];
  }
  else {
    $pane->title = t('Add attendee');
  }

  // Only add stuff if the node is an event.
  if ($context->data->type == 'event') {
    $pane->content = drupal_get_form('cbib_events_add_attendee_form', $context->data->nid);
  }
  return $pane;
}

function cbib_events_add_attendee_form($form, &$form_state) {
  $form['user']['name'] = array(
    '#type' => 'textfield',
    '#title' => t('User name'),
    '#autocomplete_path' => 'user/autocomplete',
    '#required' => TRUE,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Attend'),
  );

  // Ensure our form and handlers work every time.
  form_load_include($form_state, 'inc', 'cbib_events', 'plugins/content_types/cbib_events_add_attendee/cbib_events_add_attendee');
  $form_state['cache'] = TRUE;
  return $form;
}

function cbib_events_add_attendee_form_validate($form, &$form_state) {
  $user = user_load_by_name($form_state['values']['name']);
  if (!$user) {
    form_set_error('name', t('User %user not found', array('%user' => $form_state['values']['name'])));
    return;
  }
}

function cbib_events_add_attendee_form_submit($form, &$form_state) {
  $event_user = user_load_by_name($form_state['values']['name']);
  global $user;

  $nid = $form_state['build_info']['args'][0];
  $event_node = node_load($nid);

  $registration_type = registration_get_entity_registration_type('node', $event_node);
  $registration = entity_get_controller('registration')->create(array(
      'entity_type' => 'node',
      'entity_id' => $event_node->nid,
      'type' => $registration_type,
    ));
  $registration->user_uid = $event_user->uid;
  $registration->author_uid = $user->uid;
  $registration->state = NULL;
  $registration->count = 1;
  if (registration_save($registration)) {
    drupal_set_message(t('Your registration was saved.'));

    // Have the user automatically follow the event if Commons Follow (Node) is
    // enabled.
    if (module_exists('commons_follow_node')) {
      commons_follow_node_follow_node($event_node->nid, 'event', $event_user->uid);
    }
  }
  else {
    drupal_set_message(t('There was an error saving your registration.'));
  }
}
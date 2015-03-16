<?php

/**
 * @file
 * Content_type plugin for getting the number of available seats.
 */

$plugin = array(
  'title' => t('Mail to attendees'),
  'description' => t('Mail to attendees.'),
  'icon' => 'icon-events.png',
  'category' => t('Centralbibliotek'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Edit callback for the content type.
 */
function cbib_events_cbib_events_mailto_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Put the output for your content type in the pane object's content.
 */
function cbib_events_cbib_events_mailto_content_type_render($subtype, $conf, $args, $context) {
  $pane = new stdClass();

  // Add overwrite title if needed.
  if ($conf['override_title']) {
    $pane->title = $conf['override_title_text'];
  }
  else {
    $pane->title = t('Mail to');
  }

  // Only add stuff if the node is an event.
  if ($context->data->type == 'event') {
    $nid = $context->data->nid;
    // $pane->content = 'TEST: ' . $nid;
    $mails = db_query("SELECT mail FROM {users} u JOIN {registration} r ON u.uid = r.user_uid WHERE r.entity_id = :nid", array(':nid' => $nid))->fetchCol();
    if ($mails) {
      $pane->content = '<a href="mailto:' . join(',', $mails) . '">' . t('Mail attendees') . '</a>';
    }

  }
  return $pane;
}

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
      // Add some css to show which line is output by which script.
      drupal_add_js('jQuery(document).ready(function(){
        jQuery(".js-textareacopybtn").click(function(){
            var text = jQuery(".js-copytextarea").get(0)
            var selection = window.getSelection();
            var range = document.createRange();
            range.selectNodeContents(text);
            selection.removeAllRanges();
            selection.addRange(range);
            //add to clipboard.
            document.execCommand("copy");
        })
    });',
        array(
        'type' => 'inline',
        'scope' => 'footer',
        'weight' => 999,
      ));
      $pane->content = '<span  class="js-copytextarea" style="position:absolute;left:-1000px;top:-1000px;">' . implode(';', $mails) . '</span><button class="js-textareacopybtn" >' . t('Mail attendees') . '</button>';
    }

  }
  return $pane;
}

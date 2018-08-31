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
  /*
   * A fix to make multiple date fields work properly.
   * requires the unique identifier to be enabled on the date field so the data
   * is shown.
   */
  $delta = 0;
  global $cbib_time_and_date_duplicate_processed;
  $context->data->view = views_get_view('search_api_arrangementer');
  $context->data->view->set_display('page');
  $context->data->view->preview = TRUE;
  $context->data->view->execute($display_name);
  $result = array(); // need this to handle day 1 later.
  if (isset($context->data->view) && $context->data->view->name == "search_api_arrangementer") {
    /*
     * We are currently operating on the desired view..keep the tmp array going.
     */
    $processed_duplicates = isset($cbib_time_and_date_duplicate_processed) ? $cbib_time_and_date_duplicate_processed : array();

    $result = db_query('SELECT delta FROM field_data_field_date WHERE entity_id = :entity_id', array(':entity_id' => $context->data->nid))->fetchAll();

    foreach ($result as $record) {
      foreach ($context->data->view->result as $entity) {
        if ($entity->entity == $context->data->nid && !isset($processed_duplicates[$context->data->nid . ':' . $record->delta])) {
          $delta = $record->delta;
          $path_parts = explode('?', request_uri());
          /* Removed delta from past events */
          if (strpos($path_parts[1], 'field_date_value=past') !== false) {
            $processed_duplicates[$context->data->nid . ':' . $delta] = 0;
            break 2;
          }
          if (strtotime($context->data->field_date[LANGUAGE_NONE][$delta]['value']) >= strtotime("-1 day")) {
            $processed_duplicates[$context->data->nid . ':' . $delta] = 1;
            break 2;
        }
        }
      }
}
    $cbib_time_and_date_duplicate_processed = $processed_duplicates;
  }

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

    if (!empty($context->data->field_date[LANGUAGE_NONE][$delta])) {
        $date = new DateObject($context->data->field_date[LANGUAGE_NONE][$delta]['value'], $context->data->field_date[LANGUAGE_NONE][$delta]['timezone_db'], date_type_format($context->data->field_date[LANGUAGE_NONE][$delta]['date_type']));
        $output[] = format_date($date->format('U'), $date_format);
      }
    /*
     * If delta != 0 then it is a follow up day on an event.
     * and we add the day count to the event.
     */
    if($delta != 0)
    {
        array_unshift($output , "Dag " . ($delta+1));
    }
    elseif($delta == 0 && sizeof($result) > 1)
    {
        array_unshift($output , "Dag " . ($delta+1));
    }
    
    $pane->content = implode(', ', $output);
  }

  return $pane;
}

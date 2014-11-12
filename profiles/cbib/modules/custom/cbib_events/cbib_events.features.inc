<?php
/**
 * @file
 * cbib_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cbib_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function cbib_events_default_message_type() {
  $items = array();
  $items['cbib_events_event_node_created'] = entity_import('message_type', '{
    "name" : "cbib_events_event_node_created",
    "description" : "The notification sent when a user creates an event",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "New Event on [site:name]: [message:field-target-nodes:0:title_field]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENew Event on [site:name]: [message:field-target-nodes:0:title_field]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hi [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] created the event \\u201c[message:field-target-nodes:0:title_field]\\u201d on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:\\r\\n\\r\\nWhat: [message:field-target-nodes:0:title_field]\\r\\nWhen: [message:field-target-nodes:0:field_date]\\r\\nWhere (If applicable): [message:field-target-nodes:0:field_address]\\r\\n\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nChange email notifications at [site:url]user\\/[message:user:uid]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHi [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] created the event \\u201c[message:field-target-nodes:0:title_field]\\u201d on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003EWhat: [message:field-target-nodes:0:title_field]\\u003Cbr \\/\\u003E\\nWhen: [message:field-target-nodes:0:field_date]\\u003Cbr \\/\\u003E\\nWhere (If applicable): [message:field-target-nodes:0:field_address]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EChange email notifications at [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function cbib_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Begivenhed'),
      'base' => 'node_content',
      'description' => t('Post information about planned activities or meetings.'),
      'has_title' => '1',
      'title_label' => t('Event title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function cbib_events_default_registration_type() {
  $items = array();
  $items['event'] = entity_import('registration_type', '{
    "name" : "event",
    "label" : "Event",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
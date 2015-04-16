<?php
/**
 * @file
 * cbib_commons_events.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cbib_commons_events_default_rules_configuration() {
  $items = array();
  $items['rules_notify_attendee_by_mail'] = entity_import('rules_config', '{ "rules_notify_attendee_by_mail" : {
      "LABEL" : "Notify attendee by mail",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Centralbibliotek" ],
      "REQUIRES" : [ "rules", "registration" ],
      "ON" : { "registration_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "[registration:mail]",
            "subject" : "Tilmeldt: [registration:entity:title]",
            "message" : "Tak for din tilmelding til \\u0022[registration:entity:title]\\u0022.\\r\\n\\r\\nDu kan altid l\\u00e6se mere om arrangementet p\\u00e5 [registration:entity:url].\\r\\n\\r\\nMed venlig hilsen\\r\\n\\r\\n[site:name]",
            "from" : "\\u0022[site:name]\\u0022 \\u003C[site:mail]\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}

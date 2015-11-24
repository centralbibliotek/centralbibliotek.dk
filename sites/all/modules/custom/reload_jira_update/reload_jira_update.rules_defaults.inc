<?php
/**
 * @file
 * reload_jira_update.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function reload_jira_update_default_rules_configuration() {
  $items = array();
  $items['rules_reload_jira_update_create_issue'] = entity_import('rules_config', '{ "rules_reload_jira_update_create_issue" : {
      "LABEL" : "Create Jira issue for important project updates",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "jira_rest_rules", "rules", "update_rules" ],
      "ON" : { "update_rules_after_checking_exclude_current" : [] },
      "IF" : [
        { "jira_rest_rules_credentials_exists" : [] },
        { "data_is" : {
            "data" : [ "status" ],
            "op" : "IN",
            "value" : { "value" : { "1" : "1", "2" : "2", "3" : "3" } }
          }
        },
        { "list_contains" : { "list" : [ "release-type" ], "item" : "Security update" } },
        { "NOT update_rules_already_processed" : {
            "group_identifier" : "1",
            "project_name" : "[project-name:value]",
            "recommended_release" : "[recommended-release:value]"
          }
        }
      ],
      "DO" : [
        { "component_rules_reload_jira_update_status_label" : {
            "USING" : { "status" : [ "status" ] },
            "PROVIDE" : { "status_label" : { "status_label" : "Status label" } }
          }
        },
        { "jira_rest_rules_create_issue" : {
            "USING" : {
              "project" : "OUT",
              "issuetype" : "Security",
              "summary" : "[project-name:value] ([recommended-release:value])",
              "description" : "Drupal project: [project-title:value] ([project-name:value])\\r\\nDrupal project status: [status-label:value]\\r\\n\\r\\nCurrent release: [current-release:value]\\r\\nRecommended release: [recommended-release:value]\\r\\nRelease link: [release-link:value]\\r\\n\\r\\nHost: [site:url]"
            },
            "PROVIDE" : {
              "jira_instanceurl" : { "jira_instanceurl" : "Jira instance URL" },
              "jira_issue_id" : { "jira_issue_id" : "Jira issue ID" },
              "jira_issue_key" : { "jira_issue_key" : "Jira issue key" },
              "jira_issue_self" : { "jira_issue_self" : "Jira issue REST API endpoint" }
            }
          }
        },
        { "mail" : {
            "to" : "security.team+security+[project-name:value]+[jira-issue-key:value]@reload.flowdock.com",
            "subject" : "[site:name]: [project-name:value] ([recommended-release:value])",
            "message" : "Drupal project: [project-title:value] ([project-name:value])\\r\\nDrupal project status: [status-label:value]\\r\\n\\r\\nCurrent release: [current-release:value]\\r\\nRecommended release: [recommended-release:value]\\r\\nRelease link: [release-link:value]\\r\\n\\r\\nSite: [site:url]\\r\\n\\r\\nJira Issue: [jira-instanceurl:value]\\/browse\\/[jira-issue-key:value]\\r\\n",
            "language" : [ "" ]
          }
        },
        { "update_rules_process_once" : {
            "group_identifier" : "1",
            "project_name" : "[project-name:value]",
            "recommended_release" : "[recommended-release:value]"
          }
        }
      ]
    }
  }');
  $items['rules_reload_jira_update_status_label'] = entity_import('rules_config', '{ "rules_reload_jira_update_status_label" : {
      "LABEL" : "Convert update status to human readable form",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "status" : { "label" : "Status", "type" : "integer" },
        "status_label" : { "label" : "Status label", "type" : "text", "parameter" : false }
      },
      "RULES" : [
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "1" } } ],
            "DO" : [
              { "data_set" : { "data" : [ "status-label" ], "value" : "Not secure" } }
            ],
            "LABEL" : "UPDATE_NOT_SECURE"
          }
        },
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "2" } } ],
            "DO" : [ { "data_set" : { "data" : [ "status-label" ], "value" : "Revoked" } } ],
            "LABEL" : "UPDATE_REVOKED"
          }
        },
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "3" } } ],
            "DO" : [
              { "data_set" : { "data" : [ "status-label" ], "value" : "Not supported" } }
            ],
            "LABEL" : "UPDATE_NOT_SUPPORTED"
          }
        },
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "4" } } ],
            "DO" : [
              { "data_set" : { "data" : [ "status-label" ], "value" : "Not current" } }
            ],
            "LABEL" : "UPDATE_NOT_CURRENT"
          }
        },
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "5" } } ],
            "DO" : [ { "data_set" : { "data" : [ "status-label" ], "value" : "Current" } } ],
            "LABEL" : "UPDATE_CURRENT"
          }
        },
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "-1" } } ],
            "DO" : [
              { "data_set" : { "data" : [ "status-label" ], "value" : "Not checked" } }
            ],
            "LABEL" : "UPDATE_NOT_CHECKED"
          }
        },
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "-2" } } ],
            "DO" : [ { "data_set" : { "data" : [ "status-label" ], "value" : "Unknown" } } ],
            "LABEL" : "UPDATE_UNKNOWN"
          }
        },
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "-3" } } ],
            "DO" : [
              { "data_set" : { "data" : [ "status-label" ], "value" : "Not fetched" } }
            ],
            "LABEL" : "UPDATE_NOT_FETCHED"
          }
        },
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "status" ], "value" : "-4" } } ],
            "DO" : [
              { "data_set" : { "data" : [ "status-label" ], "value" : "Fetch pending" } }
            ],
            "LABEL" : "UPDATE_FETCH_PENDING"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "status_label" ]
    }
  }');
  return $items;
}

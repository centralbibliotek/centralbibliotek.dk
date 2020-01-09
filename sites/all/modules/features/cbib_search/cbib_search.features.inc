<?php
/**
 * @file
 * cbib_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cbib_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function cbib_search_default_search_api_index() {
  $items = array();
  $items['arrangement_index'] = entity_import('search_api_index', '{
    "name" : "Arrangement Index",
    "machine_name" : "arrangement_index",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "event" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_address:locality" : { "type" : "list\\u003Cstring\\u003E" },
        "field_address:organisation_name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_centralbibliotek_ref" : { "type" : "integer", "entity_type" : "node" },
        "field_date:value" : { "type" : "list\\u003Cdate\\u003E" },
        "field_event_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_library_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_location" : { "type" : "string" },
        "field_number_of_attendees" : { "type" : "integer" },
        "field_price" : { "type" : "integer" },
        "field_registration_type" : { "type" : "string" },
        "field_tilmeldings_frist" : { "type" : "date" },
        "field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_topics:name" : { "type" : "list\\u003Ctext\\u003E" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_combined_1" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_combined" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_combined_1" : {
                "name" : "COMBINE_DATO",
                "multivalue" : "0",
                "type" : "date",
                "imitate" : "",
                "fields" : [ "field_date:value" ],
                "description" : "A @type combined of the following fields: Arrangementsdato \\u00bb Startdato."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "filter_arrangement_dato",
                "type" : "list",
                "fields" : [ "field_date:value" ],
                "description" : "A Vis aggregation of the following fields: Arrangementsdato \\u00bb Startdato."
              }
            }
          }
        },
        "search_api_alter_add_multi_aggregation" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_multi_aggregation_1" : {
                "name" : "Startdato",
                "fields" : [ "field_date:value" ],
                "description" : "A text aggregation of the following fields: Arrangementsdato \\u00bb Startdato."
              }
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "field_event_audience" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_event_audience" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_event_audience" : true, "body:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027-,\\u0026]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_event_audience" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['global_search'] = entity_import('search_api_index', '{
    "name" : "global search",
    "machine_name" : "global_search",
    "description" : null,
    "server" : "database_server",
    "item_type" : "multiple",
    "options" : {
      "datasource" : { "types" : [ "comment", "node", "user", "file" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "file" : { "type" : "integer", "entity_type" : "file" },
        "file:name" : { "type" : "text", "boost" : "2.0" },
        "file:type" : { "type" : "string" },
        "item_bundle" : { "type" : "string" },
        "item_type" : { "type" : "string" },
        "node:author" : { "type" : "integer", "entity_type" : "user" },
        "node:body:value" : { "type" : "text", "boost" : "5.0" },
        "node:created" : { "type" : "date" },
        "node:field_address:locality" : { "type" : "list\\u003Cstring\\u003E" },
        "node:field_date:value" : { "type" : "list\\u003Cdate\\u003E" },
        "node:field_e_mail" : { "type" : "text" },
        "node:field_event_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "node:field_library_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "node:field_location" : { "type" : "string" },
        "node:field_og_subscribe_settings" : { "type" : "string" },
        "node:field_phone" : { "type" : "text", "boost" : "13.0" },
        "node:field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:field_topics:name" : { "type" : "list\\u003Ctext\\u003E" },
        "node:og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "node:status" : { "type" : "integer" },
        "node:title_field" : { "type" : "text", "boost" : "21.0" },
        "node:type" : { "type" : "string" },
        "search_api_combined_1" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "user:field_job_title" : { "type" : "text" },
        "user:field_library" : { "type" : "integer", "entity_type" : "node" },
        "user:field_name_first" : { "type" : "text", "boost" : "3.0" },
        "user:field_name_last" : { "type" : "text", "boost" : "5.0" },
        "user:field_phone" : { "type" : "text" },
        "user:mail" : { "type" : "text", "boost" : "21.0" },
        "user:name" : { "type" : "text", "boost" : "13.0" },
        "user:status" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "1",
            "bundles" : {
              "comment:comment_node_document" : "comment:comment_node_document",
              "comment:comment_node_post" : "comment:comment_node_post"
            }
          }
        },
        "search_api_alter_add_combined" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_combined_1" : {
                "name" : "Combo startdato",
                "multivalue" : "0",
                "type" : "string",
                "imitate" : "",
                "fields" : [ "node:field_date:value" ],
                "description" : "A @type combined of the following fields: Indholdselement \\u00bb Arrangementsdato \\u00bb Startdato."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_multi_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "item_type" : true,
              "item_bundle" : true,
              "file" : true,
              "node:type" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "node:title_field" : true,
              "node:field_e_mail" : true,
              "node:field_phone" : true,
              "node:field_event_audience" : true,
              "user:name" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027-,\\u0026]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['group_index'] = entity_import('search_api_index', '{
    "name" : "group index",
    "machine_name" : "group_index",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "group" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_gruppetype" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_last_comment_date" : { "type" : "integer" },
        "field_radioactivity" : { "type" : "decimal" },
        "field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_topics:name" : { "type" : "list\\u003Ctext\\u003E" },
        "group_group" : { "type" : "boolean" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "2.0" },
        "title_field" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_combined" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_multi_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027-,\\u0026]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['nyhed_index'] = entity_import('search_api_index', '{
    "name" : "Nyhed index",
    "machine_name" : "nyhed_index",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "news" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_document_file:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_link:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_combined" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_multi_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true, "field_link:title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "field_link:title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027-,\\u0026]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "field_link:title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function cbib_search_default_search_api_server() {
  $items = array();
  $items['database_server'] = entity_import('search_api_server', '{
    "name" : "database server",
    "machine_name" : "database_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : {
        "arrangement_index" : {
          "title" : {
            "table" : "search_api_db_arrangement_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "og_group_ref" : {
            "table" : "search_api_db_arrangement_index_og_group_ref",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_location" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "field_location",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_number_of_attendees" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "field_number_of_attendees",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_registration_type" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "field_registration_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_event_type" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "field_event_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_price" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "field_price",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_tilmeldings_frist" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "field_tilmeldings_frist",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_centralbibliotek_ref" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "field_centralbibliotek_ref",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_library_ref" : {
            "table" : "search_api_db_arrangement_index_field_library_ref",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_address:organisation_name" : {
            "table" : "search_api_db_arrangement_index_field_address_organisation_nam",
            "column" : "field_address_organisation_name",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_address:locality" : {
            "table" : "search_api_db_arrangement_index_field_address_locality",
            "column" : "field_address_locality",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_date:value" : {
            "table" : "search_api_db_arrangement_index_field_date_value",
            "column" : "field_date_value",
            "type" : "list\\u003Cdate\\u003E",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_arrangement_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_topics" : {
            "table" : "search_api_db_arrangement_index_field_topics",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_combined_1" : {
            "table" : "search_api_db_arrangement_index",
            "column" : "search_api_combined_1",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_topics:name" : {
            "table" : "search_api_db_arrangement_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        },
        "global_search" : {
          "item_type" : {
            "table" : "search_api_db_global_search",
            "column" : "item_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "item_bundle" : {
            "table" : "search_api_db_global_search",
            "column" : "item_bundle",
            "type" : "string",
            "boost" : "1.0"
          },
          "file" : {
            "table" : "search_api_db_global_search",
            "column" : "file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_global_search",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "node:type" : {
            "table" : "search_api_db_global_search",
            "column" : "node_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "node:author" : {
            "table" : "search_api_db_global_search",
            "column" : "node_author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "node:title_field" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "21.0"
          },
          "node:field_event_type" : {
            "table" : "search_api_db_global_search",
            "column" : "node_field_event_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "node:field_e_mail" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "node:field_phone" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "13.0"
          },
          "node:field_library_ref" : {
            "table" : "search_api_db_global_search_node_field_library_ref",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "file:name" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "2.0"
          },
          "file:type" : {
            "table" : "search_api_db_global_search",
            "column" : "file_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "user:name" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "13.0"
          },
          "user:mail" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "21.0"
          },
          "user:field_name_first" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "3.0"
          },
          "user:field_name_last" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "user:field_phone" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "node:body:value" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "node:created" : {
            "table" : "search_api_db_global_search",
            "column" : "node_created",
            "type" : "date",
            "boost" : "1.0"
          },
          "node:status" : {
            "table" : "search_api_db_global_search",
            "column" : "node_status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "node:field_topics" : {
            "table" : "search_api_db_global_search_node_field_topics",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "user:field_job_title" : {
            "table" : "search_api_db_global_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "user:field_library" : {
            "table" : "search_api_db_global_search",
            "column" : "user_field_library",
            "type" : "integer",
            "boost" : "1.0"
          },
          "node:field_date:value" : {
            "table" : "search_api_db_global_search_node_field_date_value",
            "column" : "value",
            "type" : "list\\u003Cdate\\u003E",
            "boost" : "1.0"
          },
          "search_api_combined_1" : {
            "table" : "search_api_db_global_search",
            "column" : "search_api_combined_1",
            "type" : "date",
            "boost" : "1.0"
          },
          "node:field_location" : {
            "table" : "search_api_db_global_search",
            "column" : "node_field_location",
            "type" : "string",
            "boost" : "1.0"
          },
          "node:og_group_ref" : {
            "table" : "search_api_db_global_search_node_og_group_ref",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "node:field_address:locality" : {
            "table" : "search_api_db_global_search_node_field_address_locality",
            "column" : "node_field_address_locality",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "node:field_topics:name" : {
            "table" : "search_api_db_global_search_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "node:field_og_subscribe_settings" : {
            "table" : "search_api_db_global_search",
            "column" : "node_field_og_subscribe_settings",
            "type" : "string",
            "boost" : "1.0"
          },
          "user:status" : {
            "table" : "search_api_db_global_search",
            "column" : "user_status",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "group_index" : {
          "title" : {
            "table" : "search_api_db_group_index_text",
            "type" : "text",
            "boost" : "2.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_group_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_group_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_group_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_topics" : {
            "table" : "search_api_db_group_index_field_topics",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "og_group_ref" : {
            "table" : "search_api_db_group_index_og_group_ref",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "group_group" : {
            "table" : "search_api_db_group_index",
            "column" : "group_group",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_group_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_radioactivity" : {
            "table" : "search_api_db_group_index",
            "column" : "field_radioactivity",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "title_field" : {
            "table" : "search_api_db_group_index",
            "column" : "title_field",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_last_comment_date" : {
            "table" : "search_api_db_group_index",
            "column" : "field_last_comment_date",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_gruppetype" : {
            "table" : "search_api_db_group_index",
            "column" : "field_gruppetype",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_topics:name" : {
            "table" : "search_api_db_group_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        },
        "nyhed_index" : {
          "title" : {
            "table" : "search_api_db_nyhed_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_nyhed_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_nyhed_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_topics" : {
            "table" : "search_api_db_nyhed_index_field_topics",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "og_group_ref" : {
            "table" : "search_api_db_nyhed_index_og_group_ref",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_nyhed_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_nyhed_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_document_file:file" : {
            "table" : "search_api_db_nyhed_index_field_document_file_file",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_link:title" : {
            "table" : "search_api_db_nyhed_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function cbib_search_default_search_api_sort() {
  $items = array();
  $items['arrangement_index__search_api_combined_1'] = entity_import('search_api_sort', '{
    "index_id" : "arrangement_index",
    "field" : "search_api_combined_1",
    "name" : "Dato",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "arrangement_index__search_api_combined_1",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "asc",
    "options" : { "field_name" : "COMBINE_DATO" },
    "rdf_mapping" : []
  }');
  $items['group_index__created'] = entity_import('search_api_sort', '{
    "index_id" : "group_index",
    "field" : "created",
    "name" : "Dato oprettet",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "group_index__created",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Dato oprettet" },
    "rdf_mapping" : []
  }');
  $items['group_index__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "group_index",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "1",
    "weight" : "-99",
    "identifier" : "group_index__search_api_relevance",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" },
    "rdf_mapping" : []
  }');
  $items['nyhed_index__created'] = entity_import('search_api_sort', '{
    "index_id" : "nyhed_index",
    "field" : "created",
    "name" : "Dato oprettet",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "nyhed_index__created",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Dato oprettet" },
    "rdf_mapping" : []
  }');
  return $items;
}

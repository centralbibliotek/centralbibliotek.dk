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
    "server" : "db_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "event" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_address:locality" : { "type" : "string" },
        "field_address:organisation_name" : { "type" : "string" },
        "field_centralbibliotek_ref" : { "type" : "integer", "entity_type" : "node" },
        "field_date:value" : { "type" : "list\\u003Cdate\\u003E" },
        "field_event_audience" : { "type" : "text" },
        "field_event_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_library_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_location" : { "type" : "string" },
        "field_number_of_attendees" : { "type" : "integer" },
        "field_price" : { "type" : "integer" },
        "field_registration_type" : { "type" : "string" },
        "field_tilmeldings_frist" : { "type" : "date" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_aggregation_1" : { "type" : "list\\u003Cdate\\u003E" },
        "search_api_combined_1" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
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
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
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
        "search_api_alter_add_multi_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
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
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_event_audience" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
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
  $items['general_search'] = entity_import('search_api_index', '{
    "name" : "Search Index",
    "machine_name" : "general_search",
    "description" : null,
    "server" : "db_server",
    "item_type" : "multiple",
    "options" : {
      "datasource" : { "types" : [ "node", "user" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "node:author" : { "type" : "integer", "entity_type" : "user" },
        "node:body:value" : { "type" : "text" },
        "node:changed" : { "type" : "date" },
        "node:created" : { "type" : "date" },
        "node:field_event_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "node:field_image:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "node:field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "node:status" : { "type" : "integer" },
        "node:title" : { "type" : "text" },
        "node:type" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "list\\u003Cinteger\\u003E" },
        "search_api_aggregation_1_asc" : { "type" : "integer" },
        "search_api_aggregation_1_desc" : { "type" : "integer" },
        "search_api_combined_1" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "user:field_job_title" : { "type" : "text" },
        "user:field_library" : { "type" : "integer", "entity_type" : "node" },
        "user:field_name_first" : { "type" : "text" },
        "user:field_name_last" : { "type" : "text" },
        "user:name" : { "type" : "text" },
        "user:og_user_node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "user:url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "fields" : { "search_api_aggregation_1" : "search_api_aggregation_1" } }
        },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : [] }
        },
        "search_api_alter_add_combined" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_combined_1" : {
                "name" : "Fornavn_Efternavn",
                "multivalue" : "0",
                "type" : "string",
                "imitate" : "user:name",
                "fields" : [ "user:field_name_first", "user:field_name_last" ],
                "description" : "A @type combined of the following fields: Bruger \\u00bb Fornavn, Bruger \\u00bb Efternavn."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Oprettet",
                "type" : "list",
                "fields" : [ "node:created" ],
                "description" : "A Vis aggregation of the following fields: Indholdselement \\u00bb Dato oprettet."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_multi_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "node:title" : true,
              "user:name" : true,
              "user:field_name_first" : true,
              "user:field_name_last" : true,
              "user:field_job_title" : true,
              "node:body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "node:body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "node:title" : true,
              "user:name" : true,
              "user:field_name_first" : true,
              "user:field_name_last" : true,
              "user:field_job_title" : true,
              "node:body:value" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "node:title" : true,
              "user:name" : true,
              "user:field_name_first" : true,
              "user:field_name_last" : true,
              "user:field_job_title" : true,
              "node:body:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
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
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "Solr",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/drupal",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 1,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0
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
    "weight" : "0",
    "identifier" : "arrangement_index__search_api_combined_1",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "COMBINE_DATO" },
    "rdf_mapping" : []
  }');
  $items['general_search__node:created'] = entity_import('search_api_sort', '{
    "index_id" : "general_search",
    "field" : "node:created",
    "name" : "Indholdselement \\u00bb Dato oprettet",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "general_search__node:created",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Indholdselement \\u00bb Dato oprettet" },
    "rdf_mapping" : []
  }');
  $items['general_search__node:type'] = entity_import('search_api_sort', '{
    "index_id" : "general_search",
    "field" : "node:type",
    "name" : "Indholdselement \\u00bb Indholdstype",
    "enabled" : "0",
    "weight" : "0",
    "identifier" : "general_search__node:type",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Indholdselement \\u00bb Indholdstype" },
    "rdf_mapping" : []
  }');
  $items['general_search__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "general_search",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "general_search__search_api_relevance",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" },
    "rdf_mapping" : []
  }');
  return $items;
}
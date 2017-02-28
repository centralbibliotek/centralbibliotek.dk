<?php
/**
 * @file
 * cbib_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cbib_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_DAY';
  $strongarm->value = 'F j, Y';
  $export['date_format_search_api_facetapi_DAY'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_HOUR';
  $strongarm->value = 'H:__';
  $export['date_format_search_api_facetapi_HOUR'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_MINUTE';
  $strongarm->value = 'H:i';
  $export['date_format_search_api_facetapi_MINUTE'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_MONTH';
  $strongarm->value = 'F Y';
  $export['date_format_search_api_facetapi_MONTH'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_SECOND';
  $strongarm->value = 'H:i:S';
  $export['date_format_search_api_facetapi_SECOND'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_YEAR';
  $strongarm->value = 'Y';
  $export['date_format_search_api_facetapi_YEAR'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'default_node_index' => array(
      'search_api_views:search:page' => 'search_api_views:search:page',
    ),
    'general_search' => array(
      'search_api_views:seach:block_1' => 'search_api_views:seach:block_1',
      'search_api_views:seach:page' => 'search_api_views:seach:page',
      'search_api_views:seach:page_1' => 'search_api_views:seach:page_1',
      'search_api_views:seach:page_2' => 'search_api_views:seach:page_2',
      'search_api_views:seach:panel_pane_1' => 'search_api_views:seach:panel_pane_1',
    ),
    'arrangement_index' => array(
      'search_api_views:search_api_arrangementer:default' => 'search_api_views:search_api_arrangementer:default',
      'search_api_views:search_api_arrangementer:page' => 'search_api_views:search_api_arrangementer:page',
      'search_api_views:search_api_arrangementer:page_1' => 'search_api_views:search_api_arrangementer:page_1',
    ),
    'global_search' => array(
      'search_api_views:search_api_nodes:default' => 'search_api_views:search_api_nodes:default',
      'search_api_views:search_api_nodes:page' => 'search_api_views:search_api_nodes:page',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_site_hash';
  $strongarm->value = '8tgjd2';
  $export['search_api_solr_site_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_views_empty_query_allowed_ids';
  $strongarm->value = '/';
  $export['search_api_views_empty_query_allowed_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_views_empty_query_message_format';
  $strongarm->value = 'filtered_html';
  $export['search_api_views_empty_query_message_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_views_empty_query_message_text';
  $strongarm->value = '';
  $export['search_api_views_empty_query_message_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_views_empty_query_use_custom_message';
  $strongarm->value = 0;
  $export['search_api_views_empty_query_use_custom_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '500';
  $export['search_cron_limit'] = $strongarm;

  return $export;
}

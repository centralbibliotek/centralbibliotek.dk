<?php
/**
 * @file
 * cbib_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cbib_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_api_arrangementer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_arrangement_index';
  $view->human_name = 'Search API Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tidligere arrangementer';
  $handler->display->display_options['css_class'] = 'cb-teaser-list';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ryd';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Overskrift: Global: Resumé af resultat */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = ' <strong>Søgning gav desværre ingen resultater!</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Indexed Indholdselement: Groups */
  $handler->display->display_options['relationships']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['relationships']['og_group_ref']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['relationships']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['relationships']['og_group_ref']['label'] = 'Grupper';
  /* Felt: Indexed Indholdselement: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sorteringskriterie: Handler mangler eller er i stykker */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Kontekstuelt filter: Indexed Indholdselement: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  /* Filterkriterie: Søg: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'title' => 'title',
  );

  /* Display: Events - all */
  $handler = $view->new_display('page', 'Events - all', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kommende arrangementer';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Resumé af resultat */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = 'Viser @start - @end af @total';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indexed Indholdselement: COMBINE_DATO */
  $handler->display->display_options['sorts']['search_api_combined_1']['id'] = 'search_api_combined_1';
  $handler->display->display_options['sorts']['search_api_combined_1']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['sorts']['search_api_combined_1']['field'] = 'search_api_combined_1';
  $handler->display->display_options['sorts']['search_api_combined_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_combined_1']['expose']['label'] = 'COMBINE_DATO';
  $handler->display->display_options['path'] = 'search_api_events';
  $handler->display->display_options['menu']['title'] = 'Arrangementer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Events - mini */
  $handler = $view->new_display('page', 'Events - mini', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Arrangementer mini visning';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Resumé af resultat */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = 'Viser @start - @end af @total';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Adresse: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['text'] = '[field_address_locality],';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_locality']['link_to_entity'] = 0;
  /* Felt: Arrangementsdato: Startdato (indexed) */
  $handler->display->display_options['fields']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['fields']['field_date_value']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['fields']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['fields']['field_date_value']['label'] = '';
  $handler->display->display_options['fields']['field_date_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_value']['alter']['text'] = '[field_address_locality] [field_date_value]';
  $handler->display->display_options['fields']['field_date_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_value']['date_format'] = 'event_datetime';
  $handler->display->display_options['fields']['field_date_value']['second_date_format'] = 'html5_tools_iso8601';
  $handler->display->display_options['fields']['field_date_value']['link_to_entity'] = 0;
  /* Felt: Indexed Indholdselement: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Felt: Indexed Indholdselement: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Felt: Indexed Indholdselement: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indexed Indholdselement: COMBINE_DATO */
  $handler->display->display_options['sorts']['search_api_combined_1']['id'] = 'search_api_combined_1';
  $handler->display->display_options['sorts']['search_api_combined_1']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['sorts']['search_api_combined_1']['field'] = 'search_api_combined_1';
  $handler->display->display_options['path'] = 'search_api_events';
  $handler->display->display_options['menu']['title'] = 'Arrangementer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['search_api_arrangementer'] = array(
    t('Master'),
    t('Tidligere arrangementer'),
    t('mere'),
    t('Udfør'),
    t('Ryd'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('«'),
    t('‹'),
    t('›'),
    t('»'),
    t('Displaying @start - @end of @total'),
    t(' <strong>Søgning gav desværre ingen resultater!</strong>'),
    t('Grupper'),
    t('Alle'),
    t('Events - all'),
    t('Kommende arrangementer'),
    t('Viser @start - @end af @total'),
    t('COMBINE_DATO'),
    t('Events - mini'),
    t('Arrangementer mini visning'),
    t('[field_address_locality],'),
    t('[field_address_locality] [field_date_value]'),
  );
  $export['search_api_arrangementer'] = $view;

  $view = new view();
  $view->name = 'search_api_group';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_group_index';
  $view->human_name = 'search api group';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'search api group';
  $handler->display->display_options['css_class'] = 'cb-teaser-list';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Overskrift: Global: Resumé af resultat */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = 'Viser @start - @end af @total';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Din søgning gav desværre ingen resultater!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Indexed Indholdselement: Groups */
  $handler->display->display_options['relationships']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['relationships']['og_group_ref']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['relationships']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['relationships']['og_group_ref']['label'] = 'Grupper';
  /* Felt: Indexed Indholdselement: Indholdselement ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sorteringskriterie: Indexed Indholdselement: Radioactivity */
  $handler->display->display_options['sorts']['field_radioactivity']['id'] = 'field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['sorts']['field_radioactivity']['field'] = 'field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_radioactivity']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_radioactivity']['expose']['label'] = 'Aktivitet';
  /* Sorteringskriterie: Indexed Indholdselement: Dato oprettet */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Oprettelsesdato';
  /* Sorteringskriterie: Indexed Indholdselement: Title */
  $handler->display->display_options['sorts']['title_field']['id'] = 'title_field';
  $handler->display->display_options['sorts']['title_field']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['sorts']['title_field']['field'] = 'title_field';
  $handler->display->display_options['sorts']['title_field']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_field']['expose']['label'] = 'Titel';
  /* Sorteringskriterie: Indexed Indholdselement: last comment date */
  $handler->display->display_options['sorts']['field_last_comment_date']['id'] = 'field_last_comment_date';
  $handler->display->display_options['sorts']['field_last_comment_date']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['sorts']['field_last_comment_date']['field'] = 'field_last_comment_date';
  $handler->display->display_options['sorts']['field_last_comment_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_last_comment_date']['expose']['label'] = 'Nyeste indlæg';
  /* Kontekstuelt filter: Indexed Indholdselement: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  /* Filterkriterie: Søg: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'title' => 'title',
  );

  /* Display: search api group */
  $handler = $view->new_display('page', 'search api group', 'page_1');
  $handler->display->display_options['path'] = 'grupper';

  /* Display: search api group mini */
  $handler = $view->new_display('page', 'search api group mini', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'search api group mini';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indexed Indholdselement: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Felt: Indexed Indholdselement: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Felt: Indexed Indholdselement: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_group_index';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'search_api_group';
  $translatables['search_api_group'] = array(
    t('Master'),
    t('search api group'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('«'),
    t('‹'),
    t('›'),
    t('»'),
    t('Viser @start - @end af @total'),
    t('Din søgning gav desværre ingen resultater!'),
    t('Grupper'),
    t('Indholdselement ID'),
    t('.'),
    t(','),
    t('Aktivitet'),
    t('Oprettelsesdato'),
    t('Titel'),
    t('Nyeste indlæg'),
    t('Alle'),
    t('search api group mini'),
  );
  $export['search_api_group'] = $view;

  $view = new view();
  $view->name = 'search_api_nodes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_global_search';
  $view->human_name = 'search api nodes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'search api nodes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Resumé af resultat */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = 'Viser @start - @end of @total';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = ' <strong>Søgning gav desværre ingen resultater!</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Indholdselement: Groups (indexed) */
  $handler->display->display_options['relationships']['node_og_group_ref']['id'] = 'node_og_group_ref';
  $handler->display->display_options['relationships']['node_og_group_ref']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['relationships']['node_og_group_ref']['field'] = 'node_og_group_ref';
  $handler->display->display_options['relationships']['node_og_group_ref']['label'] = 'Grupper';
  /* Felt: Indexed Multiple types: Bundle */
  $handler->display->display_options['fields']['item_bundle']['id'] = 'item_bundle';
  $handler->display->display_options['fields']['item_bundle']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['item_bundle']['field'] = 'item_bundle';
  $handler->display->display_options['fields']['item_bundle']['label'] = '';
  $handler->display->display_options['fields']['item_bundle']['element_type'] = 'strong';
  $handler->display->display_options['fields']['item_bundle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_bundle']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['item_bundle']['format_name'] = 1;
  /* Felt: Indholdselement: Title (indexed) */
  $handler->display->display_options['fields']['node_title_field']['id'] = 'node_title_field';
  $handler->display->display_options['fields']['node_title_field']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['node_title_field']['field'] = 'node_title_field';
  $handler->display->display_options['fields']['node_title_field']['label'] = '';
  $handler->display->display_options['fields']['node_title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_title_field']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['node_title_field']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Felt: Indholdselement » Adresse: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['node_field_address_locality']['id'] = 'node_field_address_locality';
  $handler->display->display_options['fields']['node_field_address_locality']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['node_field_address_locality']['field'] = 'node_field_address_locality';
  $handler->display->display_options['fields']['node_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['node_field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_address_locality']['alter']['text'] = '[node_field_address_locality],';
  $handler->display->display_options['fields']['node_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_address_locality']['link_to_entity'] = 0;
  /* Felt: Indholdselement » Arrangementsdato: Startdato (indexed) */
  $handler->display->display_options['fields']['node_field_date_value']['id'] = 'node_field_date_value';
  $handler->display->display_options['fields']['node_field_date_value']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['node_field_date_value']['field'] = 'node_field_date_value';
  $handler->display->display_options['fields']['node_field_date_value']['label'] = '';
  $handler->display->display_options['fields']['node_field_date_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['node_field_date_value']['alter']['text'] = '[node_field_address_locality] [node_field_date_value]';
  $handler->display->display_options['fields']['node_field_date_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_date_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_date_value']['date_format'] = 'custom';
  $handler->display->display_options['fields']['node_field_date_value']['custom_date_format'] = 'D. d. M. Y \\k\\l. H:i';
  $handler->display->display_options['fields']['node_field_date_value']['second_date_format'] = 'html5_tools_iso8601';
  $handler->display->display_options['fields']['node_field_date_value']['link_to_entity'] = 0;
  /* Felt: Fil: Filnavn (indexed) */
  $handler->display->display_options['fields']['file_name']['id'] = 'file_name';
  $handler->display->display_options['fields']['file_name']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['file_name']['field'] = 'file_name';
  $handler->display->display_options['fields']['file_name']['label'] = 'Filnavn';
  $handler->display->display_options['fields']['file_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['file_name']['link_to_entity'] = 1;
  /* Felt: Indholdselement: Telefon (indexed) */
  $handler->display->display_options['fields']['node_field_phone']['id'] = 'node_field_phone';
  $handler->display->display_options['fields']['node_field_phone']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['node_field_phone']['field'] = 'node_field_phone';
  $handler->display->display_options['fields']['node_field_phone']['label'] = 'Telefon';
  $handler->display->display_options['fields']['node_field_phone']['hide_empty'] = TRUE;
  /* Felt: Indholdselement » The main body text: Tekst (indexed) */
  $handler->display->display_options['fields']['node_body_value']['id'] = 'node_body_value';
  $handler->display->display_options['fields']['node_body_value']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['node_body_value']['field'] = 'node_body_value';
  $handler->display->display_options['fields']['node_body_value']['label'] = '';
  $handler->display->display_options['fields']['node_body_value']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['node_body_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_body_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['link_to_entity'] = 0;
  /* Felt: Indholdselement: Emner (indexed) */
  $handler->display->display_options['fields']['node_field_topics']['id'] = 'node_field_topics';
  $handler->display->display_options['fields']['node_field_topics']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['node_field_topics']['field'] = 'node_field_topics';
  $handler->display->display_options['fields']['node_field_topics']['label'] = 'Emner';
  $handler->display->display_options['fields']['node_field_topics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_topics']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_field_topics']['view_mode'] = 'full';
  $handler->display->display_options['fields']['node_field_topics']['bypass_access'] = 0;
  /* Felt: Indholdselement: Groups (indexed) */
  $handler->display->display_options['fields']['node_og_group_ref']['id'] = 'node_og_group_ref';
  $handler->display->display_options['fields']['node_og_group_ref']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['node_og_group_ref']['field'] = 'node_og_group_ref';
  $handler->display->display_options['fields']['node_og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['node_og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['node_og_group_ref']['bypass_access'] = 0;
  /* Felt: Indexed Multiple types: Bruger */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['user']['view_mode'] = 'full';
  $handler->display->display_options['fields']['user']['bypass_access'] = 0;
  /* Felt: Bruger: Stilling (indexed) */
  $handler->display->display_options['fields']['user_field_job_title']['id'] = 'user_field_job_title';
  $handler->display->display_options['fields']['user_field_job_title']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['user_field_job_title']['field'] = 'user_field_job_title';
  $handler->display->display_options['fields']['user_field_job_title']['label'] = 'Stilling';
  $handler->display->display_options['fields']['user_field_job_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_field_job_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['user_field_job_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Felt: Bruger: Telefon (indexed) */
  $handler->display->display_options['fields']['user_field_phone']['id'] = 'user_field_phone';
  $handler->display->display_options['fields']['user_field_phone']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['user_field_phone']['field'] = 'user_field_phone';
  $handler->display->display_options['fields']['user_field_phone']['label'] = 'Telefon';
  $handler->display->display_options['fields']['user_field_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_field_phone']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  /* Felt: Bruger: E-mail (indexed) */
  $handler->display->display_options['fields']['user_mail']['id'] = 'user_mail';
  $handler->display->display_options['fields']['user_mail']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['user_mail']['field'] = 'user_mail';
  $handler->display->display_options['fields']['user_mail']['label'] = 'E-mail';
  $handler->display->display_options['fields']['user_mail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_mail']['link_to_entity'] = 0;
  /* Felt: Bruger: Bibliotek (indexed) */
  $handler->display->display_options['fields']['user_field_library']['id'] = 'user_field_library';
  $handler->display->display_options['fields']['user_field_library']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['fields']['user_field_library']['field'] = 'user_field_library';
  $handler->display->display_options['fields']['user_field_library']['label'] = 'Bibliotek';
  $handler->display->display_options['fields']['user_field_library']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_field_library']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['user_field_library']['view_mode'] = 'full';
  $handler->display->display_options['fields']['user_field_library']['bypass_access'] = 0;
  /* Sorteringskriterie: Søg: Relevans */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sorteringskriterie: Indholdselement: Dato oprettet (indexed) */
  $handler->display->display_options['sorts']['node_created']['id'] = 'node_created';
  $handler->display->display_options['sorts']['node_created']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['sorts']['node_created']['field'] = 'node_created';
  $handler->display->display_options['sorts']['node_created']['order'] = 'DESC';
  /* Filterkriterie: Søg: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_global_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-api-nodes';
  $translatables['search_api_nodes'] = array(
    t('Master'),
    t('search api nodes'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('«'),
    t('‹'),
    t('›'),
    t('»'),
    t('Viser @start - @end of @total'),
    t(' <strong>Søgning gav desværre ingen resultater!</strong>'),
    t('Grupper'),
    t('[node_field_address_locality],'),
    t('[node_field_address_locality] [node_field_date_value]'),
    t('Filnavn'),
    t('Telefon'),
    t('Emner'),
    t('Bruger'),
    t('Stilling'),
    t('E-mail'),
    t('Bibliotek'),
    t('Page'),
  );
  $export['search_api_nodes'] = $view;

  return $export;
}

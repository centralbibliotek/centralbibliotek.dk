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
  $view->name = 'seach';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_general_search';
  $view->human_name = 'Search API Global';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 25, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'user_field_name_first' => 'user_field_name_first',
    'user_field_name_last' => 'user_field_name_last',
  );
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Container';
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Overskrift';
  /* Felt: Indholdselement: Indholdstype (indexed) */
  $handler->display->display_options['fields']['node_type']['id'] = 'node_type';
  $handler->display->display_options['fields']['node_type']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['node_type']['field'] = 'node_type';
  $handler->display->display_options['fields']['node_type']['label'] = '';
  $handler->display->display_options['fields']['node_type']['element_type'] = 'h2';
  $handler->display->display_options['fields']['node_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['node_type']['format_name'] = 1;
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['fieldset_5']['id'] = 'fieldset_5';
  $handler->display->display_options['fields']['fieldset_5']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_5']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_5']['label'] = 'Centreret';
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Venstre';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  /* Felt: Indholdselement » Billede: The image file. (indexed) */
  $handler->display->display_options['fields']['node_field_image_file']['id'] = 'node_field_image_file';
  $handler->display->display_options['fields']['node_field_image_file']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['node_field_image_file']['field'] = 'node_field_image_file';
  $handler->display->display_options['fields']['node_field_image_file']['label'] = '';
  $handler->display->display_options['fields']['node_field_image_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_image_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['node_field_image_file']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['node_field_image_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_field_image_file']['display'] = 'view';
  $handler->display->display_options['fields']['node_field_image_file']['view_mode'] = 'search_index';
  $handler->display->display_options['fields']['node_field_image_file']['bypass_access'] = 0;
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Højre';
  /* Felt: Indholdselement: Dato oprettet (indexed) */
  $handler->display->display_options['fields']['node_created']['id'] = 'node_created';
  $handler->display->display_options['fields']['node_created']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['node_created']['field'] = 'node_created';
  $handler->display->display_options['fields']['node_created']['label'] = '';
  $handler->display->display_options['fields']['node_created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_created']['date_format'] = 'teaser_date';
  $handler->display->display_options['fields']['node_created']['second_date_format'] = 'html5_tools_iso8601';
  $handler->display->display_options['fields']['node_created']['link_to_entity'] = 0;
  /* Felt: Bruger: URL (indexed) */
  $handler->display->display_options['fields']['user_url']['id'] = 'user_url';
  $handler->display->display_options['fields']['user_url']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['user_url']['field'] = 'user_url';
  $handler->display->display_options['fields']['user_url']['label'] = '';
  $handler->display->display_options['fields']['user_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user_url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['user_url']['link_to_entity'] = 0;
  /* Felt: Bruger: Fornavn (indexed) */
  $handler->display->display_options['fields']['user_field_name_first']['id'] = 'user_field_name_first';
  $handler->display->display_options['fields']['user_field_name_first']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['user_field_name_first']['field'] = 'user_field_name_first';
  $handler->display->display_options['fields']['user_field_name_first']['label'] = '';
  $handler->display->display_options['fields']['user_field_name_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_field_name_first']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Efternavn (indexed) */
  $handler->display->display_options['fields']['user_field_name_last']['id'] = 'user_field_name_last';
  $handler->display->display_options['fields']['user_field_name_last']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['user_field_name_last']['field'] = 'user_field_name_last';
  $handler->display->display_options['fields']['user_field_name_last']['label'] = '';
  $handler->display->display_options['fields']['user_field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_field_name_last']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[user_url]">[user_field_name_first] [user_field_name_last]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h2';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Bibliotek (indexed) */
  $handler->display->display_options['fields']['user_field_library']['id'] = 'user_field_library';
  $handler->display->display_options['fields']['user_field_library']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['user_field_library']['field'] = 'user_field_library';
  $handler->display->display_options['fields']['user_field_library']['label'] = 'Bibliotek';
  $handler->display->display_options['fields']['user_field_library']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_field_library']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['user_field_library']['view_mode'] = 'full';
  $handler->display->display_options['fields']['user_field_library']['bypass_access'] = 0;
  /* Felt: Bruger: Gruppe medlemsskab (indexed) */
  $handler->display->display_options['fields']['user_og_user_node']['id'] = 'user_og_user_node';
  $handler->display->display_options['fields']['user_og_user_node']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['user_og_user_node']['field'] = 'user_og_user_node';
  $handler->display->display_options['fields']['user_og_user_node']['label'] = 'Gruppe medlemsskab';
  $handler->display->display_options['fields']['user_og_user_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_og_user_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['user_og_user_node']['view_mode'] = 'full';
  $handler->display->display_options['fields']['user_og_user_node']['bypass_access'] = 0;
  /* Felt: Bruger: Stilling (indexed) */
  $handler->display->display_options['fields']['user_field_job_title']['id'] = 'user_field_job_title';
  $handler->display->display_options['fields']['user_field_job_title']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['user_field_job_title']['field'] = 'user_field_job_title';
  $handler->display->display_options['fields']['user_field_job_title']['label'] = 'Stilling';
  $handler->display->display_options['fields']['user_field_job_title']['hide_empty'] = TRUE;
  /* Felt: Indholdselement: Titel (indexed) */
  $handler->display->display_options['fields']['node_title']['id'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['node_title']['field'] = 'node_title';
  $handler->display->display_options['fields']['node_title']['label'] = '';
  $handler->display->display_options['fields']['node_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['node_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['node_title']['link_to_entity'] = 1;
  /* Felt: Indholdselement: Forfatter (indexed) */
  $handler->display->display_options['fields']['node_author']['id'] = 'node_author';
  $handler->display->display_options['fields']['node_author']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['node_author']['field'] = 'node_author';
  $handler->display->display_options['fields']['node_author']['label'] = '';
  $handler->display->display_options['fields']['node_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['node_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_author']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['node_author']['bypass_access'] = 0;
  /* Felt: Indholdselement » The main body text: Tekst (indexed) */
  $handler->display->display_options['fields']['node_body_value']['id'] = 'node_body_value';
  $handler->display->display_options['fields']['node_body_value']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['node_body_value']['field'] = 'node_body_value';
  $handler->display->display_options['fields']['node_body_value']['label'] = '';
  $handler->display->display_options['fields']['node_body_value']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['node_body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['node_body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_body_value']['link_to_entity'] = 0;
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'Sidefod';
  /* Felt: Indholdselement: Emner (indexed) */
  $handler->display->display_options['fields']['node_field_topics']['id'] = 'node_field_topics';
  $handler->display->display_options['fields']['node_field_topics']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['fields']['node_field_topics']['field'] = 'node_field_topics';
  $handler->display->display_options['fields']['node_field_topics']['label'] = '';
  $handler->display->display_options['fields']['node_field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node_field_topics']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['node_field_topics']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node_field_topics']['view_mode'] = 'full';
  $handler->display->display_options['fields']['node_field_topics']['bypass_access'] = 0;
  /* Sorteringskriterie: Søg: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevans';
  /* Sorteringskriterie: Indholdselement: Dato oprettet (indexed) */
  $handler->display->display_options['sorts']['node_created']['id'] = 'node_created';
  $handler->display->display_options['sorts']['node_created']['table'] = 'search_api_index_general_search';
  $handler->display->display_options['sorts']['node_created']['field'] = 'node_created';
  $handler->display->display_options['sorts']['node_created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['node_created']['expose']['label'] = 'Dato oprettet (indexed)';
  /* Filterkriterie: Søg: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_general_search';
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

  /* Display: Global */
  $handler = $view->new_display('page', 'Global', 'page');
  $handler->display->display_options['path'] = 'search_api_global';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Search';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['seach'] = array(
    t('Master'),
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
    t('Container'),
    t('Overskrift'),
    t('Centreret'),
    t('Venstre'),
    t('Højre'),
    t('<a href="[user_url]">[user_field_name_first] [user_field_name_last]</a>'),
    t('Bibliotek'),
    t('Gruppe medlemsskab'),
    t('Stilling'),
    t('Sidefod'),
    t('Relevans'),
    t('Dato oprettet (indexed)'),
    t('Global'),
  );
  $export['seach'] = $view;

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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
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
  /* Forbindelse: Indexed Indholdselement: Tilknytning */
  $handler->display->display_options['relationships']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['relationships']['og_group_ref']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['relationships']['og_group_ref']['field'] = 'og_group_ref';
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
  /* Kontekstuelt filter: Indexed Indholdselement: Tilknytning */
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
  /* Filterkriterie: Indexed Indholdselement: filter_arrangement_dato */
  $handler->display->display_options['filters']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['filters']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['operator'] = '>=';
  $handler->display->display_options['filters']['search_api_aggregation_1']['value'] = 'now';
  $handler->display->display_options['filters']['search_api_aggregation_1']['year_range'] = '-10:+10';

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

  /* Display: Events - previous */
  $handler = $view->new_display('page', 'Events - previous', 'page_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indexed Indholdselement: COMBINE_DATO */
  $handler->display->display_options['sorts']['search_api_combined_1']['id'] = 'search_api_combined_1';
  $handler->display->display_options['sorts']['search_api_combined_1']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['sorts']['search_api_combined_1']['field'] = 'search_api_combined_1';
  $handler->display->display_options['sorts']['search_api_combined_1']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Søg: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_arrangement_index';
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
  /* Filterkriterie: Indexed Indholdselement: filter_arrangement_dato */
  $handler->display->display_options['filters']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['table'] = 'search_api_index_arrangement_index';
  $handler->display->display_options['filters']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['operator'] = '<';
  $handler->display->display_options['filters']['search_api_aggregation_1']['value'] = 'now';
  $handler->display->display_options['filters']['search_api_aggregation_1']['year_range'] = '-10:+10';
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
    t('Displaying @start - @end of @total'),
    t('Tilknytning'),
    t('Alle'),
    t('Events - all'),
    t('Kommende arrangementer'),
    t('Events - previous'),
  );
  $export['search_api_arrangementer'] = $view;

  return $export;
}

<?php
/**
 * @file
 * user_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'user';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_library_target_id']['id'] = 'field_library_target_id';
  $handler->display->display_options['relationships']['field_library_target_id']['table'] = 'field_data_field_library';
  $handler->display->display_options['relationships']['field_library_target_id']['field'] = 'field_library_target_id';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Felt: Bruger: Anden arbejdsplads */
  $handler->display->display_options['fields']['field_alternate_work']['id'] = 'field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work']['table'] = 'field_data_field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work']['field'] = 'field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work']['label'] = 'Selskab';
  $handler->display->display_options['fields']['field_alternate_work']['exclude'] = TRUE;
  /* Felt: Bruger: Efternavn */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['label'] = '';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Fornavn */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['label'] = '';
  $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Felt: Bruger: Bibliotek */
  $handler->display->display_options['fields']['field_library']['id'] = 'field_library';
  $handler->display->display_options['fields']['field_library']['table'] = 'field_data_field_library';
  $handler->display->display_options['fields']['field_library']['field'] = 'field_library';
  $handler->display->display_options['fields']['field_library']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_library']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Bruger: Anden arbejdsplads */
  $handler->display->display_options['fields']['field_alternate_work_1']['id'] = 'field_alternate_work_1';
  $handler->display->display_options['fields']['field_alternate_work_1']['table'] = 'field_data_field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work_1']['field'] = 'field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work_1']['label'] = 'Evt. anden arbejdsplads (påføres kun, hvis du ikke har valgt et bibliotek)';
  $handler->display->display_options['fields']['field_alternate_work_1']['exclude'] = TRUE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Fornavn';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_name_first]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = 'Fornavn';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Efternavn';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_name_last]';
  $handler->display->display_options['fields']['nothing_1']['empty'] = 'Efternavn';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'E-mail';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[mail]';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Rolle';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Studerende';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Jobfunktion';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Selskab';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '[field_library]
[field_alternate_work]';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'Gade';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['label'] = 'Vejnr.';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_9']['id'] = 'nothing_9';
  $handler->display->display_options['fields']['nothing_9']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_9']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_9']['label'] = 'Af';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['label'] = 'Postnr';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_10']['id'] = 'nothing_10';
  $handler->display->display_options['fields']['nothing_10']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_10']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_10']['label'] = 'Land';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_11']['id'] = 'nothing_11';
  $handler->display->display_options['fields']['nothing_11']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_11']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_11']['label'] = 'Sprog';
  $handler->display->display_options['fields']['nothing_11']['alter']['text'] = 'da';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_13']['id'] = 'nothing_13';
  $handler->display->display_options['fields']['nothing_13']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_13']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_13']['label'] = 'Aktivitet';
  $handler->display->display_options['fields']['nothing_13']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_12']['id'] = 'nothing_12';
  $handler->display->display_options['fields']['nothing_12']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_12']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_12']['label'] = 'Organization';
  $handler->display->display_options['fields']['nothing_12']['exclude'] = TRUE;
  /* Felt: Felt: Vælg dit centralbibliotek */
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['id'] = 'field_centralbibliotek_ref';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['table'] = 'field_data_field_centralbibliotek_ref';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['field'] = 'field_centralbibliotek_ref';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['relationship'] = 'field_library_target_id';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['delta_offset'] = '0';
  /* Sorteringskriterie: Bruger: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Seneste login */
  $handler->display->display_options['filters']['login']['id'] = 'login';
  $handler->display->display_options['filters']['login']['table'] = 'users';
  $handler->display->display_options['filters']['login']['field'] = 'login';
  $handler->display->display_options['filters']['login']['operator'] = '>=';
  $handler->display->display_options['filters']['login']['value']['value'] = '-2 years';
  $handler->display->display_options['filters']['login']['value']['type'] = 'offset';
  /* Filterkriterie: Ikke tfpet */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['ui_name'] = 'Ikke tfpet';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '69391';
  /* Filterkriterie: ikke karen */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['ui_name'] = 'ikke karen';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_1']['value']['value'] = '68345';
  /* Filterkriterie: ikke bo */
  $handler->display->display_options['filters']['uid_raw_2']['id'] = 'uid_raw_2';
  $handler->display->display_options['filters']['uid_raw_2']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_2']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_2']['ui_name'] = 'ikke bo';
  $handler->display->display_options['filters']['uid_raw_2']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_2']['value']['value'] = '67210';
  /* Filterkriterie: ikke dennis */
  $handler->display->display_options['filters']['uid_raw_3']['id'] = 'uid_raw_3';
  $handler->display->display_options['filters']['uid_raw_3']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_3']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_3']['ui_name'] = 'ikke dennis';
  $handler->display->display_options['filters']['uid_raw_3']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_3']['value']['value'] = '65864';
  /* Filterkriterie: ikke yusuf */
  $handler->display->display_options['filters']['uid_raw_4']['id'] = 'uid_raw_4';
  $handler->display->display_options['filters']['uid_raw_4']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_4']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_4']['ui_name'] = 'ikke yusuf';
  $handler->display->display_options['filters']['uid_raw_4']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_4']['value']['value'] = '70381';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_5']['id'] = 'uid_raw_5';
  $handler->display->display_options['filters']['uid_raw_5']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_5']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_5']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_5']['value']['value'] = '74245';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_6']['id'] = 'uid_raw_6';
  $handler->display->display_options['filters']['uid_raw_6']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_6']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_6']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_6']['value']['value'] = '71397';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_7']['id'] = 'uid_raw_7';
  $handler->display->display_options['filters']['uid_raw_7']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_7']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_7']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_7']['value']['value'] = '64415';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_8']['id'] = 'uid_raw_8';
  $handler->display->display_options['filters']['uid_raw_8']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_8']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_8']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_8']['value']['value'] = '64470';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_9']['id'] = 'uid_raw_9';
  $handler->display->display_options['filters']['uid_raw_9']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_9']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_9']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_9']['value']['value'] = '69016';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_10']['id'] = 'uid_raw_10';
  $handler->display->display_options['filters']['uid_raw_10']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_10']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_10']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_10']['value']['value'] = '64633';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_11']['id'] = 'uid_raw_11';
  $handler->display->display_options['filters']['uid_raw_11']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_11']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_11']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_11']['value']['value'] = '66041';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_12']['id'] = 'uid_raw_12';
  $handler->display->display_options['filters']['uid_raw_12']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_12']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_12']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_12']['value']['value'] = '69117';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_13']['id'] = 'uid_raw_13';
  $handler->display->display_options['filters']['uid_raw_13']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_13']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_13']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_13']['value']['value'] = '70236';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_14']['id'] = 'uid_raw_14';
  $handler->display->display_options['filters']['uid_raw_14']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_14']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_14']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_14']['value']['value'] = '70918';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_15']['id'] = 'uid_raw_15';
  $handler->display->display_options['filters']['uid_raw_15']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_15']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_15']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_15']['value']['value'] = '67989';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_16']['id'] = 'uid_raw_16';
  $handler->display->display_options['filters']['uid_raw_16']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_16']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_16']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_16']['value']['value'] = '74173';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_17']['id'] = 'uid_raw_17';
  $handler->display->display_options['filters']['uid_raw_17']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_17']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_17']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_17']['value']['value'] = '66475';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_18']['id'] = 'uid_raw_18';
  $handler->display->display_options['filters']['uid_raw_18']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_18']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_18']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_18']['value']['value'] = '70448';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_19']['id'] = 'uid_raw_19';
  $handler->display->display_options['filters']['uid_raw_19']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_19']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_19']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_19']['value']['value'] = '67447';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_20']['id'] = 'uid_raw_20';
  $handler->display->display_options['filters']['uid_raw_20']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_20']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_20']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_20']['value']['value'] = '69786';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_21']['id'] = 'uid_raw_21';
  $handler->display->display_options['filters']['uid_raw_21']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_21']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_21']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_21']['value']['value'] = '67953';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_22']['id'] = 'uid_raw_22';
  $handler->display->display_options['filters']['uid_raw_22']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_22']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_22']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_22']['value']['value'] = '64457';
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw_23']['id'] = 'uid_raw_23';
  $handler->display->display_options['filters']['uid_raw_23']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_23']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_23']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_23']['value']['value'] = '69147';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/user-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Felt: Bruger: Anden arbejdsplads */
  $handler->display->display_options['fields']['field_alternate_work']['id'] = 'field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work']['table'] = 'field_data_field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work']['field'] = 'field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work']['label'] = 'Selskab';
  $handler->display->display_options['fields']['field_alternate_work']['exclude'] = TRUE;
  /* Felt: Bruger: Efternavn */
  $handler->display->display_options['fields']['field_name_last']['id'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['table'] = 'field_data_field_name_last';
  $handler->display->display_options['fields']['field_name_last']['field'] = 'field_name_last';
  $handler->display->display_options['fields']['field_name_last']['label'] = '';
  $handler->display->display_options['fields']['field_name_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_last']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Fornavn */
  $handler->display->display_options['fields']['field_name_first']['id'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['table'] = 'field_data_field_name_first';
  $handler->display->display_options['fields']['field_name_first']['field'] = 'field_name_first';
  $handler->display->display_options['fields']['field_name_first']['label'] = '';
  $handler->display->display_options['fields']['field_name_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_first']['element_label_colon'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Felt: Bruger: Bibliotek */
  $handler->display->display_options['fields']['field_library']['id'] = 'field_library';
  $handler->display->display_options['fields']['field_library']['table'] = 'field_data_field_library';
  $handler->display->display_options['fields']['field_library']['field'] = 'field_library';
  $handler->display->display_options['fields']['field_library']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_library']['settings'] = array(
    'link' => 0,
  );
  /* Felt: Bruger: Anden arbejdsplads */
  $handler->display->display_options['fields']['field_alternate_work_1']['id'] = 'field_alternate_work_1';
  $handler->display->display_options['fields']['field_alternate_work_1']['table'] = 'field_data_field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work_1']['field'] = 'field_alternate_work';
  $handler->display->display_options['fields']['field_alternate_work_1']['label'] = 'Evt. anden arbejdsplads (påføres kun, hvis du ikke har valgt et bibliotek)';
  $handler->display->display_options['fields']['field_alternate_work_1']['exclude'] = TRUE;
  /* Felt: Felt: Vælg dit centralbibliotek */
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['id'] = 'field_centralbibliotek_ref';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['table'] = 'field_data_field_centralbibliotek_ref';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['field'] = 'field_centralbibliotek_ref';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['relationship'] = 'field_library_target_id';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_centralbibliotek_ref']['delta_offset'] = '0';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Fornavn';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_name_first]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = 'Fornavn';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Efternavn';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_name_last]';
  $handler->display->display_options['fields']['nothing_1']['empty'] = 'Efternavn';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'E-mail';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[mail]';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Rolle';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Studerende';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Jobfunktion';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Selskab';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '[field_library]
[field_alternate_work]';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_14']['id'] = 'nothing_14';
  $handler->display->display_options['fields']['nothing_14']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_14']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_14']['label'] = 'Department';
  $handler->display->display_options['fields']['nothing_14']['alter']['text'] = '[field_centralbibliotek_ref]';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_15']['id'] = 'nothing_15';
  $handler->display->display_options['fields']['nothing_15']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_15']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_15']['label'] = 'Workplace';
  $handler->display->display_options['fields']['nothing_15']['alter']['text'] = '[field_library]
[field_alternate_work]';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'Gade';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['label'] = 'Vejnr.';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_9']['id'] = 'nothing_9';
  $handler->display->display_options['fields']['nothing_9']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_9']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_9']['label'] = 'Af';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['label'] = 'Postnr';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_10']['id'] = 'nothing_10';
  $handler->display->display_options['fields']['nothing_10']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_10']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_10']['label'] = 'Land';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_11']['id'] = 'nothing_11';
  $handler->display->display_options['fields']['nothing_11']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_11']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_11']['label'] = 'Sprog';
  $handler->display->display_options['fields']['nothing_11']['alter']['text'] = 'da';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_13']['id'] = 'nothing_13';
  $handler->display->display_options['fields']['nothing_13']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_13']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_13']['label'] = 'Aktivitet';
  $handler->display->display_options['fields']['nothing_13']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_12']['id'] = 'nothing_12';
  $handler->display->display_options['fields']['nothing_12']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_12']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_12']['label'] = 'Organization';
  $handler->display->display_options['fields']['nothing_12']['alter']['text'] = '[field_centralbibliotek_ref]';
  $handler->display->display_options['path'] = 'admin/lms-students-export';
  $translatables['user_export'] = array(
    t('Master'),
    t('User export'),
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
    t('Indhold entity refereret fra field_library'),
    t('Selskab'),
    t('Bibliotek'),
    t('Evt. anden arbejdsplads (påføres kun, hvis du ikke har valgt et bibliotek)'),
    t('Fornavn'),
    t('[field_name_first]'),
    t('Efternavn'),
    t('[field_name_last]'),
    t('E-mail'),
    t('[mail]'),
    t('Rolle'),
    t('Studerende'),
    t('Jobfunktion'),
    t('[field_library]
[field_alternate_work]'),
    t('Gade'),
    t('Vejnr.'),
    t('Af'),
    t('Postnr'),
    t('Land'),
    t('Sprog'),
    t('da'),
    t('Aktivitet'),
    t('Organization'),
    t('Page'),
    t('Data export'),
    t('Department'),
    t('[field_centralbibliotek_ref]'),
    t('Workplace'),
  );
  $export['user_export'] = $view;

  return $export;
}

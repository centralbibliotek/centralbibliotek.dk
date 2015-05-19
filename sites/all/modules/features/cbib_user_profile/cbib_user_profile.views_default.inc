<?php
/**
 * @file
 * cbib_user_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cbib_user_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'commons_follow_events_a_specific_user_attends';
  $view->description = 'viser alle events som en bruger er tilmeldt til';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Commons Follow - Events a specific user attends to';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tilmeldte arrangementer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'vis flere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Ufiltreret tekst */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'No results summary';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Denne person er ikke tilmeldt nogle arrangementer';
  /* Forbindelse: Tilmelding: Indholdselement to Registration */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  /* Forbindelse: Tilmelding: Bruger */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['relationship'] = 'registration_rel';
  $handler->display->display_options['relationships']['user_uid']['required'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Arrangementsdato -  startdato (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Bruger: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'user_uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Arrangementsdato - slutdato (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value2']['year_range'] = '-0:+3';

  /* Display: upcoming events */
  $handler = $view->new_display('panel_pane', 'upcoming events', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'show all events a specific user is registered for';

  /* Display: previous attended events */
  $handler = $view->new_display('panel_pane', 'previous attended events', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tidligere arrangementer';
  $handler->display->display_options['display_description'] = 'show all events a specific user has attended';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Ufiltreret tekst */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'No results summary';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Denne person har ikke deltaget i nogle arrangementer endnu';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Arrangementsdato - slutdato (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value2']['year_range'] = '-0:+3';
  $translatables['commons_follow_events_a_specific_user_attends'] = array(
    t('Master'),
    t('Tilmeldte arrangementer'),
    t('vis flere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('No results summary'),
    t('Denne person er ikke tilmeldt nogle arrangementer'),
    t('node being the Registration'),
    t('Bruger'),
    t('Alle'),
    t('upcoming events'),
    t('show all events a specific user is registered for'),
    t('mere'),
    t('View panes'),
    t('previous attended events'),
    t('Tidligere arrangementer'),
    t('show all events a specific user has attended'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('«'),
    t('‹'),
    t('›'),
    t('»'),
    t('Load more'),
    t('Denne person har ikke deltaget i nogle arrangementer endnu'),
  );
  $export['commons_follow_events_a_specific_user_attends'] = $view;

  return $export;
}

<?php
/**
 * @file
 * cb_licens_user_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cb_licens_user_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cb_user_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cb user list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hvor mange der følger det enkelte licens';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'realname' => 'realname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Resumé af resultat */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Ialt @total';
  /* Forbindelse: Flag: commons_follow_node */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'commons_follow_node';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Forbindelse: Flag: Bruger */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flag_content';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  /* Felt: Realname: Rigtigt navn */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: User Follow */
  $handler->display->display_options['filters']['cf_user_follow']['id'] = 'cf_user_follow';
  $handler->display->display_options['filters']['cf_user_follow']['table'] = 'node';
  $handler->display->display_options['filters']['cf_user_follow']['field'] = 'cf_user_follow';
  $handler->display->display_options['filters']['cf_user_follow']['value'] = '1';
  /* Filterkriterie: Indhold: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['nid']['group_info']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['group_info']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Aalborg',
      'operator' => '=',
      'value' => array(
        'value' => '44326',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Odense',
      'operator' => '=',
      'value' => array(
        'value' => '44323',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Herning',
      'operator' => '=',
      'value' => array(
        'value' => '44325',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Gentofte',
      'operator' => '=',
      'value' => array(
        'value' => '44324',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => 'Vejle',
      'operator' => '=',
      'value' => array(
        'value' => '44327',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => 'Roskilde',
      'operator' => '=',
      'value' => array(
        'value' => '44322',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hvor mange der følger det enkelte CB';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: User Follow */
  $handler->display->display_options['filters']['cf_user_follow']['id'] = 'cf_user_follow';
  $handler->display->display_options['filters']['cf_user_follow']['table'] = 'node';
  $handler->display->display_options['filters']['cf_user_follow']['field'] = 'cf_user_follow';
  $handler->display->display_options['filters']['cf_user_follow']['value'] = '1';
  /* Filterkriterie: Indhold: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['nid']['group_info']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['group_info']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Aalborg',
      'operator' => '=',
      'value' => array(
        'value' => '44326',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Odense',
      'operator' => '=',
      'value' => array(
        'value' => '44323',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Herning',
      'operator' => '=',
      'value' => array(
        'value' => '44325',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Gentofte',
      'operator' => '=',
      'value' => array(
        'value' => '44324',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => 'Vejle',
      'operator' => '=',
      'value' => array(
        'value' => '44327',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => 'Roskilde',
      'operator' => '=',
      'value' => array(
        'value' => '44322',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'centralbibliotek' => 'centralbibliotek',
  );
  $handler->display->display_options['path'] = 'cb-user-list';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: User Follow */
  $handler->display->display_options['filters']['cf_user_follow']['id'] = 'cf_user_follow';
  $handler->display->display_options['filters']['cf_user_follow']['table'] = 'node';
  $handler->display->display_options['filters']['cf_user_follow']['field'] = 'cf_user_follow';
  $handler->display->display_options['filters']['cf_user_follow']['value'] = '1';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
    'license' => 'license',
  );
  $handler->display->display_options['path'] = 'lc-user-list';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 0;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: User Follow */
  $handler->display->display_options['filters']['cf_user_follow']['id'] = 'cf_user_follow';
  $handler->display->display_options['filters']['cf_user_follow']['table'] = 'node';
  $handler->display->display_options['filters']['cf_user_follow']['field'] = 'cf_user_follow';
  $handler->display->display_options['filters']['cf_user_follow']['value'] = '1';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'centralbibliotek' => 'centralbibliotek',
    'group' => 'group',
    'license' => 'license',
  );
  $handler->display->display_options['path'] = 'cb-licens-user-list';
  $translatables['cb_user_list'] = array(
    t('Master'),
    t('Hvor mange der følger det enkelte licens'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Ialt @total'),
    t('flag'),
    t('Sæt flag på bruger'),
    t('Alle'),
    t('Nid'),
    t('Page'),
    t('Hvor mange der følger det enkelte CB'),
    t('Side'),
    t('Data export'),
  );
  $export['cb_user_list'] = $view;

  return $export;
}

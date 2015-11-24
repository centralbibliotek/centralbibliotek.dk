<?php
/**
 * @file
 * cbib_dbc_license_feeds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cbib_dbc_license_feeds_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'license_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'License Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Faustnummer */
  $handler->display->display_options['fields']['field_faust_no']['id'] = 'field_faust_no';
  $handler->display->display_options['fields']['field_faust_no']['table'] = 'field_data_field_faust_no';
  $handler->display->display_options['fields']['field_faust_no']['field'] = 'field_faust_no';
  $handler->display->display_options['fields']['field_faust_no']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faust_no']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: IP-adgang */
  $handler->display->display_options['fields']['field_license_access_ip']['id'] = 'field_license_access_ip';
  $handler->display->display_options['fields']['field_license_access_ip']['table'] = 'field_data_field_license_access_ip';
  $handler->display->display_options['fields']['field_license_access_ip']['field'] = 'field_license_access_ip';
  $handler->display->display_options['fields']['field_license_access_ip']['label'] = 'IP adgang';
  $handler->display->display_options['fields']['field_license_access_ip']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_access_ip']['type'] = 'cbib_dbc_license_feeds_format';
  /* Field: Content: Password-adgang */
  $handler->display->display_options['fields']['field_license_access_password']['id'] = 'field_license_access_password';
  $handler->display->display_options['fields']['field_license_access_password']['table'] = 'field_data_field_license_access_password';
  $handler->display->display_options['fields']['field_license_access_password']['field'] = 'field_license_access_password';
  $handler->display->display_options['fields']['field_license_access_password']['label'] = 'Password adgang';
  $handler->display->display_options['fields']['field_license_access_password']['type'] = 'cbib_dbc_license_feeds_format';
  /* Field: Content: Fjernbrugeradgang */
  $handler->display->display_options['fields']['field_license_access_remote_user']['id'] = 'field_license_access_remote_user';
  $handler->display->display_options['fields']['field_license_access_remote_user']['table'] = 'field_data_field_license_access_remote_user';
  $handler->display->display_options['fields']['field_license_access_remote_user']['field'] = 'field_license_access_remote_user';
  $handler->display->display_options['fields']['field_license_access_remote_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_access_remote_user']['type'] = 'cbib_dbc_license_feeds_format';
  /* Field: Content: Print til brugere */
  $handler->display->display_options['fields']['field_license_access_print_user']['id'] = 'field_license_access_print_user';
  $handler->display->display_options['fields']['field_license_access_print_user']['table'] = 'field_data_field_license_access_print_user';
  $handler->display->display_options['fields']['field_license_access_print_user']['field'] = 'field_license_access_print_user';
  $handler->display->display_options['fields']['field_license_access_print_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_access_print_user']['type'] = 'cbib_dbc_license_feeds_format';
  /* Field: Content: Print til andre biblioteker */
  $handler->display->display_options['fields']['field_license_access_print_lib']['id'] = 'field_license_access_print_lib';
  $handler->display->display_options['fields']['field_license_access_print_lib']['table'] = 'field_data_field_license_access_print_lib';
  $handler->display->display_options['fields']['field_license_access_print_lib']['field'] = 'field_license_access_print_lib';
  $handler->display->display_options['fields']['field_license_access_print_lib']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_access_print_lib']['type'] = 'cbib_dbc_license_feeds_format';
  /* Field: Content: Eletronisk kopi til brugere */
  $handler->display->display_options['fields']['field_license_access_copy_user']['id'] = 'field_license_access_copy_user';
  $handler->display->display_options['fields']['field_license_access_copy_user']['table'] = 'field_data_field_license_access_copy_user';
  $handler->display->display_options['fields']['field_license_access_copy_user']['field'] = 'field_license_access_copy_user';
  $handler->display->display_options['fields']['field_license_access_copy_user']['label'] = 'Elektronisk kopi til brugere';
  $handler->display->display_options['fields']['field_license_access_copy_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_access_copy_user']['type'] = 'cbib_dbc_license_feeds_format';
  /* Field: Content: Eletronisk kopi til andre biblioteker */
  $handler->display->display_options['fields']['field_license_access_copy_lib']['id'] = 'field_license_access_copy_lib';
  $handler->display->display_options['fields']['field_license_access_copy_lib']['table'] = 'field_data_field_license_access_copy_lib';
  $handler->display->display_options['fields']['field_license_access_copy_lib']['field'] = 'field_license_access_copy_lib';
  $handler->display->display_options['fields']['field_license_access_copy_lib']['label'] = 'Elektronisk kopi til andre biblioteker';
  $handler->display->display_options['fields']['field_license_access_copy_lib']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_access_copy_lib']['type'] = 'cbib_dbc_license_feeds_format';
  /* Field: Content: Metadata? */
  $handler->display->display_options['fields']['field_license_metadata']['id'] = 'field_license_metadata';
  $handler->display->display_options['fields']['field_license_metadata']['table'] = 'field_data_field_license_metadata';
  $handler->display->display_options['fields']['field_license_metadata']['field'] = 'field_license_metadata';
  $handler->display->display_options['fields']['field_license_metadata']['label'] = 'Metadata';
  $handler->display->display_options['fields']['field_license_metadata']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_metadata']['type'] = 'cbib_dbc_license_feeds_format';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = 'Webadresse';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link']['delta_offset'] = '0';
  /* Field: Content: Abbreviated title */
  $handler->display->display_options['fields']['field_license_abbreviated_title']['id'] = 'field_license_abbreviated_title';
  $handler->display->display_options['fields']['field_license_abbreviated_title']['table'] = 'field_data_field_license_abbreviated_title';
  $handler->display->display_options['fields']['field_license_abbreviated_title']['field'] = 'field_license_abbreviated_title';
  $handler->display->display_options['fields']['field_license_abbreviated_title']['label'] = 'AbbreviatedTitle';
  $handler->display->display_options['fields']['field_license_abbreviated_title']['element_label_colon'] = FALSE;
  /* Field: Content: Proxy start url */
  $handler->display->display_options['fields']['field_license_proxy_start_url']['id'] = 'field_license_proxy_start_url';
  $handler->display->display_options['fields']['field_license_proxy_start_url']['table'] = 'field_data_field_license_proxy_start_url';
  $handler->display->display_options['fields']['field_license_proxy_start_url']['field'] = 'field_license_proxy_start_url';
  $handler->display->display_options['fields']['field_license_proxy_start_url']['label'] = 'ProxyStartUrl';
  $handler->display->display_options['fields']['field_license_proxy_start_url']['element_label_colon'] = FALSE;
  /* Field: Content: PID */
  $handler->display->display_options['fields']['field_license_pid']['id'] = 'field_license_pid';
  $handler->display->display_options['fields']['field_license_pid']['table'] = 'field_data_field_license_pid';
  $handler->display->display_options['fields']['field_license_pid']['field'] = 'field_license_pid';
  $handler->display->display_options['fields']['field_license_pid']['label'] = 'Pid';
  $handler->display->display_options['fields']['field_license_pid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'license' => 'license',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'cbib_dbc_license_feeds_license_info');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/content/licence_info/download';
  $translatables['license_info'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Titel'),
    t('Faustnummer'),
    t('IP adgang'),
    t('Password adgang'),
    t('Fjernbrugeradgang'),
    t('Print til brugere'),
    t('Print til andre biblioteker'),
    t('Elektronisk kopi til brugere'),
    t('Elektronisk kopi til andre biblioteker'),
    t('Metadata'),
    t('Webadresse'),
    t('AbbreviatedTitle'),
    t('ProxyStartUrl'),
    t('Pid'),
    t('Data export'),
  );
  $export['license_info'] = $view;

  $view = new view();
  $view->name = 'license_library_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'License Library Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_library_ref_node']['id'] = 'reverse_field_library_ref_node';
  $handler->display->display_options['relationships']['reverse_field_library_ref_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_library_ref_node']['field'] = 'reverse_field_library_ref_node';
  $handler->display->display_options['relationships']['reverse_field_library_ref_node']['label'] = 'Indhold refererer til Indhold fra field_library_ref';
  $handler->display->display_options['relationships']['reverse_field_library_ref_node']['required'] = TRUE;
  /* Field: Content: Biblioteksnummer */
  $handler->display->display_options['fields']['field_library_no']['id'] = 'field_library_no';
  $handler->display->display_options['fields']['field_library_no']['table'] = 'field_data_field_library_no';
  $handler->display->display_options['fields']['field_library_no']['field'] = 'field_library_no';
  $handler->display->display_options['fields']['field_library_no']['label'] = 'Bibliotek';
  $handler->display->display_options['fields']['field_library_no']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_no']['type'] = 'cbib_dbc_license_feeds_library_number_format';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_library_ref_node';
  $handler->display->display_options['fields']['title']['label'] = 'Produkt';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Abonnementsperiode */
  $handler->display->display_options['fields']['field_license_periode']['id'] = 'field_license_periode';
  $handler->display->display_options['fields']['field_license_periode']['table'] = 'field_data_field_license_periode';
  $handler->display->display_options['fields']['field_license_periode']['field'] = 'field_license_periode';
  $handler->display->display_options['fields']['field_license_periode']['relationship'] = 'reverse_field_library_ref_node';
  $handler->display->display_options['fields']['field_license_periode']['label'] = 'Periode - Fra';
  $handler->display->display_options['fields']['field_license_periode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_periode']['type'] = 'cbib_dbc_license_feeds_start_date';
  $handler->display->display_options['fields']['field_license_periode']['settings'] = array(
    'format_type' => 'cbib_dbc_feed_format',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Abonnementsperiode */
  $handler->display->display_options['fields']['field_license_periode_1']['id'] = 'field_license_periode_1';
  $handler->display->display_options['fields']['field_license_periode_1']['table'] = 'field_data_field_license_periode';
  $handler->display->display_options['fields']['field_license_periode_1']['field'] = 'field_license_periode';
  $handler->display->display_options['fields']['field_license_periode_1']['relationship'] = 'reverse_field_library_ref_node';
  $handler->display->display_options['fields']['field_license_periode_1']['label'] = 'Periode - Til';
  $handler->display->display_options['fields']['field_license_periode_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license_periode_1']['type'] = 'cbib_dbc_license_feeds_end_date';
  $handler->display->display_options['fields']['field_license_periode_1']['settings'] = array(
    'format_type' => 'cbib_dbc_feed_format',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'ProvidersLibraryId';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_library_ref_node';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library' => 'library',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['field_language'] = 'da';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/content/licence_library_info/download';
  $translatables['license_library_info'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Indhold refererer til Indhold fra field_library_ref'),
    t('Bibliotek'),
    t('Produkt'),
    t('Periode - Fra'),
    t('Periode - Til'),
    t('ProvidersLibraryId'),
    t('Data export'),
  );
  $export['license_library_info'] = $view;

  return $export;
}

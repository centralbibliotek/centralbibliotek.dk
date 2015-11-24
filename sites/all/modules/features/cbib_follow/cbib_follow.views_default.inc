<?php
/**
 * @file
 * cbib_follow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cbib_follow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'node_followers';
  $view->description = 'Users that follow a node';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Node followers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Followers';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Flag: Brugerens flagede indhold */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'commons_follow_node';
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '50x50';
  /* Felt: Realname: Rigtigt navn */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Kontekstuelt filter: Flag: Indholds-ID */
  $handler->display->display_options['arguments']['content_id']['id'] = 'content_id';
  $handler->display->display_options['arguments']['content_id']['table'] = 'flag_content';
  $handler->display->display_options['arguments']['content_id']['field'] = 'content_id';
  $handler->display->display_options['arguments']['content_id']['relationship'] = 'flag_user_content_rel';
  $handler->display->display_options['arguments']['content_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['content_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['content_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['content_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['content_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['content_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['content_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['content_id']['validate']['type'] = 'flag_flaggable_node';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Centralbibliotek';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'content_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Flag: Indholds-ID',
    ),
  );
  $translatables['node_followers'] = array(
    t('Master'),
    t('Followers'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('bruger flaget indhold'),
    t('Alle'),
    t('Content pane'),
    t('Centralbibliotek'),
  );
  $export['node_followers'] = $view;

  return $export;
}

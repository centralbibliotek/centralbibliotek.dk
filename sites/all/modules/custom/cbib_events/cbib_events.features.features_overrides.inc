<?php
/**
 * @file
 * cbib_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|arguments|nid|exception"] = array(
    'title' => 'Alle',
  );
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|exposed_form|options"] = array(
    'submit_button' => 'Udfør',
    'reset_button_label' => 'Gendan',
    'exposed_sorts_label' => 'Sortér efter',
    'sort_asc_label' => 'Stigende',
    'sort_desc_label' => 'Faldende',
  );
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|fields|name"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|fields|realname"] = array(
    'id' => 'realname',
    'table' => 'realname',
    'field' => 'realname',
    'relationship' => 'user_uid',
    'label' => '',
    'element_label_colon' => FALSE,
  );
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|pager|options|expose"] = array(
    'items_per_page_label' => 'Antal elementer',
    'items_per_page_options_all_label' => '- Alle -',
    'offset_label' => 'Forskydning',
  );
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|pager|options|tags"] = array(
    'first' => '«',
    'previous' => '‹',
    'next' => '›',
    'last' => '»',
  );
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|title"] = 'Deltagere';
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|use_more_text"] = 'mere';
  $overrides["views_view.commons_events_event_attendee_list.display|panel_pane_1|display_options|allow|exposed_form"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_event_attendee_list.display|panel_pane_1|display_options|defaults|header"] = FALSE;
  $overrides["views_view.commons_events_event_attendee_list.display|panel_pane_1|display_options|defaults|pager"] = FALSE;
  $overrides["views_view.commons_events_event_attendee_list.display|panel_pane_1|display_options|header"] = array(
    'result' => array(
      'id' => 'result',
      'table' => 'views',
      'field' => 'result',
      'content' => '<p>I alt @total deltagere</p>',
    ),
  );
  $overrides["views_view.commons_events_event_attendee_list.display|panel_pane_1|display_options|pager"] = array(
    'type' => 'mini',
    'options' => array(
      'items_per_page' => 20,
      'offset' => 0,
      'id' => 0,
      'expose' => array(
        'items_per_page_label' => 'Antal elementer',
        'items_per_page_options_all_label' => '- Alle -',
        'offset_label' => 'Forskydning',
      ),
      'tags' => array(
        'first' => '«',
        'previous' => '‹',
        'next' => '›',
        'last' => '»',
      ),
    ),
  );
  $overrides["views_view.commons_events_event_attendee_list.display|views_data_export_1"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:3:{s:6:"access";b:0;s:12:"exposed_form";b:0;s:6:"fields";b:0;}s:6:"access";a:2:{s:4:"type";s:4:"perm";s:4:"perm";s:23:"view event registration";}s:12:"exposed_form";a:2:{s:4:"type";s:5:"basic";s:7:"options";a:6:{s:13:"submit_button";s:6:"Udfør";s:18:"reset_button_label";s:6:"Gendan";s:19:"exposed_sorts_label";s:13:"Sortér efter";s:17:"expose_sort_order";b:0;s:14:"sort_asc_label";s:8:"Stigende";s:15:"sort_desc_label";s:8:"Faldende";}}s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:21:"views_data_export_csv";s:13:"style_options";a:10:{s:12:"provide_file";i:0;s:11:"parent_sort";i:0;s:9:"separator";s:1:";";s:5:"quote";i:1;s:4:"trim";i:1;s:16:"replace_newlines";i:1;s:13:"newline_token";s:1:"1";s:6:"header";i:1;s:9:"keep_html";i:0;s:8:"encoding";s:11:"utf8_decode";}s:6:"fields";a:8:{s:8:"realname";a:8:{s:2:"id";s:8:"realname";s:5:"table";s:8:"realname";s:5:"field";s:8:"realname";s:12:"relationship";s:8:"user_uid";s:5:"label";s:4:"Navn";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:12:"link_to_user";b:0;}s:4:"mail";a:5:{s:2:"id";s:4:"mail";s:5:"table";s:5:"users";s:5:"field";s:4:"mail";s:12:"relationship";s:8:"user_uid";s:12:"link_to_user";s:1:"0";}s:11:"field_phone";a:4:{s:2:"id";s:11:"field_phone";s:5:"table";s:22:"field_data_field_phone";s:5:"field";s:11:"field_phone";s:12:"relationship";s:8:"user_uid";}s:20:"field_alternate_work";a:5:{s:2:"id";s:20:"field_alternate_work";s:5:"table";s:31:"field_data_field_alternate_work";s:5:"field";s:20:"field_alternate_work";s:12:"relationship";s:8:"user_uid";s:7:"exclude";b:1;}s:13:"field_library";a:7:{s:2:"id";s:13:"field_library";s:5:"table";s:24:"field_data_field_library";s:5:"field";s:13:"field_library";s:12:"relationship";s:8:"user_uid";s:5:"label";s:25:"Arbejdsplads/Organisation";s:5:"empty";s:22:"[field_alternate_work]";s:8:"settings";a:1:{s:4:"link";i:0;}}s:23:"field_alternate_address";a:8:{s:2:"id";s:23:"field_alternate_address";s:5:"table";s:34:"field_data_field_alternate_address";s:5:"field";s:23:"field_alternate_address";s:12:"relationship";s:8:"user_uid";s:5:"label";s:7:"Adresse";s:23:"element_default_classes";b:0;s:4:"type";s:10:"text_plain";s:8:"settings";a:1:{s:11:"trim_length";i:600;}}s:9:"field_ean";a:4:{s:2:"id";s:9:"field_ean";s:5:"table";s:20:"field_data_field_ean";s:5:"field";s:9:"field_ean";s:12:"relationship";s:8:"user_uid";}s:10:"field_note";a:4:{s:2:"id";s:10:"field_note";s:5:"table";s:21:"field_data_field_note";s:5:"field";s:10:"field_note";s:5:"label";s:13:"Bemærkninger";}}s:4:"path";s:38:"node/%/registrations/DeltagerListe.csv";s:8:"displays";a:3:{s:7:"default";s:7:"default";s:33:"commons_events_full_attendee_list";s:33:"commons_events_full_attendee_list";s:12:"panel_pane_1";s:12:"panel_pane_1";}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:19:"views_data_export_1";s:13:"display_title";s:11:"Data export";s:14:"display_plugin";s:17:"views_data_export";s:8:"position";i:0;}');

 return $overrides;
}

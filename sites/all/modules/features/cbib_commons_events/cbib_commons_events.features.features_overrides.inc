<?php
/**
 * @file
 * cbib_commons_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_commons_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1"] = (object) array(
      'pid' => 'new-bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'commons_events_upcoming-panel_pane_5',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1',
    );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panel_settings|one_main"] = array(
    'style' => 'tabs',
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|one_main|1"] = 'new-bf67dca8-b5a3-4cab-b883-41e2c3dbb6b1';
  $overrides["page_manager_pages.views_events_landing_page_node.default_handlers|page_views_events_landing_page_node_panel_context|conf|display|content|new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84"] = (object) array(
      'pid' => 'new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84',
      'panel' => 'two_66_33_top',
      'type' => 'views_panes',
      'subtype' => 'commons_events_upcoming-panel_pane_6',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'argument_entity_id:node_1',
        ),
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'a2ee2613-1dbe-45bd-85eb-a8ba632aab84',
    );
  $overrides["page_manager_pages.views_events_landing_page_node.default_handlers|page_views_events_landing_page_node_panel_context|conf|display|panel_settings|two_66_33_top"] = array(
    'style' => 'tabs',
  );
  $overrides["page_manager_pages.views_events_landing_page_node.default_handlers|page_views_events_landing_page_node_panel_context|conf|display|panels|two_66_33_top|1"] = 'new-a2ee2613-1dbe-45bd-85eb-a8ba632aab84';

  // Exported overrides for: views_view
  $overrides["views_view.commons_events_upcoming.display|default|display_options|filters|field_date_value"] = array(
    'id' => 'field_date_value',
    'table' => 'field_data_field_date',
    'field' => 'field_date_value',
    'operator' => '>',
    'form_type' => 'date_text',
    'default_date' => 'now',
    'year_range' => '-10:+10',
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_5"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:12:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:13:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:23:"Tidligere arrangementer";s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:8:{s:14:"items_per_page";s:2:"15";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";s:6:"expose";a:3:{s:20:"items_per_page_label";s:15:"Antal elementer";s:32:"items_per_page_options_all_label";s:8:"- Alle -";s:12:"offset_label";s:11:"Forskydning";}s:4:"tags";a:4:{s:5:"first";s:10:"« første";s:8:"previous";s:11:"‹ forrige";s:4:"next";s:10:"næste ›";s:4:"last";s:9:"sidste »";}s:16:"more_button_text";s:8:"Vis mere";s:7:"effects";a:1:{s:5:"speed";s:4:"slow";}}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:4:"node";s:11:"row_options";a:1:{s:5:"links";b:0;}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:11:" deltagere,";}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:24:"[comment_count] comments";}s:19:"element_label_colon";b:0;}}s:5:"sorts";a:1:{s:16:"field_date_value";a:4:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:5:"order";s:4:"DESC";}}s:7:"filters";a:3:{s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}s:5:"group";i:1;}s:16:"field_date_value";a:7:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:8:"operator";s:2:"<=";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";s:10:"year_range";s:7:"-10:+10";}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_5";s:13:"display_title";s:27:"Landing page all - previous";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_events_upcoming.display|panel_pane_6"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:17:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:17:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:23:"Tidligere arrangementer";s:15:"use_more_always";b:0;s:13:"use_more_text";s:8:"Vis mere";s:12:"link_display";s:10:"custom_url";s:8:"link_url";s:9:"!1/events";s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:7:{s:14:"items_per_page";s:2:"15";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";s:6:"expose";a:3:{s:20:"items_per_page_label";s:15:"Antal elementer";s:32:"items_per_page_options_all_label";s:8:"- Alle -";s:12:"offset_label";s:11:"Forskydning";}s:4:"tags";a:4:{s:5:"first";s:10:"« første";s:8:"previous";s:11:"‹ forrige";s:4:"next";s:10:"næste ›";s:4:"last";s:9:"sidste »";}s:7:"effects";a:1:{s:5:"speed";s:4:"slow";}}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:4:"node";s:13:"relationships";a:1:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}}s:6:"fields";a:4:{s:11:"title_field";a:5:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:14:"link_to_entity";i:1;}s:10:"field_date";a:6:{s:2:"id";s:10:"field_date";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:10:"field_date";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:5:{s:11:"format_type";s:14:"event_datetime";s:6:"fromto";s:4:"both";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";}}s:13:"capacity_used";a:7:{s:2:"id";s:13:"capacity_used";s:5:"table";s:4:"node";s:5:"field";s:13:"capacity_used";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";s:6:"suffix";s:11:" deltagere,";}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:24:"[comment_count] comments";}s:19:"element_label_colon";b:0;}}s:5:"sorts";a:1:{s:16:"field_date_value";a:4:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:5:"order";s:4:"DESC";}}s:9:"arguments";a:1:{s:3:"gid";a:9:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:7:"default";s:9:"exception";a:1:{s:5:"title";s:4:"Alle";}s:21:"default_argument_type";s:4:"node";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}s:5:"group";i:1;}s:16:"field_date_value";a:7:{s:2:"id";s:16:"field_date_value";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:16:"field_date_value";s:8:"operator";s:2:"<=";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";s:10:"year_range";s:7:"-10:+10";}}s:13:"pane_category";a:2:{s:4:"name";s:7:"Commons";s:6:"weight";s:1:"0";}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_6";s:13:"display_title";s:33:"Landing page group all - previous";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');

 return $overrides;
}

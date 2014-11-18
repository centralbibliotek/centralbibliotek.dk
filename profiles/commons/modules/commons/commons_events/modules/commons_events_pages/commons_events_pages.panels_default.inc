<?php
/**
 * @file
 * commons_events_pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function commons_events_pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'event_information';
  $mini->category = 'Centralbibliotek';
  $mini->admin_title = 'Event information';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Indholdselement',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Det praktiske';
  $display->uuid = 'c4ab9c50-8f13-4f12-bd48-b4f7646db13a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a54507b-9bb3-485b-b5c9-354832ee9a9e';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'dato',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Afholdes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a54507b-9bb3-485b-b5c9-354832ee9a9e';
    $display->content['new-2a54507b-9bb3-485b-b5c9-354832ee9a9e'] = $pane;
    $display->panels['one_main'][0] = 'new-2a54507b-9bb3-485b-b5c9-354832ee9a9e';
    $pane = new stdClass();
    $pane->pid = 'new-364ec86c-9905-4678-b228-7b9733acd0b4';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_lecturer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'double_field_unformatted_list',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'first' => array(
          'hidden' => 0,
          'format' => '_none',
          'prefix' => '',
          'suffix' => '',
        ),
        'second' => array(
          'hidden' => 0,
          'format' => '_none',
          'prefix' => '',
          'suffix' => '',
        ),
        'style' => 'inline',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Underviser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '364ec86c-9905-4678-b228-7b9733acd0b4';
    $display->content['new-364ec86c-9905-4678-b228-7b9733acd0b4'] = $pane;
    $display->panels['one_main'][1] = 'new-364ec86c-9905-4678-b228-7b9733acd0b4';
    $pane = new stdClass();
    $pane->pid = 'new-2fcfb378-35ca-4de2-811f-4b7a4c39ee0e';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'double_field_unformatted_list',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'first' => array(
          'hidden' => 0,
          'format' => '_none',
          'prefix' => '',
          'suffix' => '',
        ),
        'second' => array(
          'hidden' => 0,
          'format' => '_none',
          'prefix' => '',
          'suffix' => '',
        ),
        'style' => 'inline',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Kontaktperson',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2fcfb378-35ca-4de2-811f-4b7a4c39ee0e';
    $display->content['new-2fcfb378-35ca-4de2-811f-4b7a4c39ee0e'] = $pane;
    $display->panels['one_main'][2] = 'new-2fcfb378-35ca-4de2-811f-4b7a4c39ee0e';
    $pane = new stdClass();
    $pane->pid = 'new-87137eb0-4ada-400f-ad12-cc984d6fe78b';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
        'components' => array(
          'postal_code' => 'postal_code',
        ),
        'separator' => ', ',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Adresse',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '87137eb0-4ada-400f-ad12-cc984d6fe78b';
    $display->content['new-87137eb0-4ada-400f-ad12-cc984d6fe78b'] = $pane;
    $display->panels['one_main'][3] = 'new-87137eb0-4ada-400f-ad12-cc984d6fe78b';
    $pane = new stdClass();
    $pane->pid = 'new-4097c32d-b11e-4942-9f34-8fba531958a6';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Bemærkninger',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4097c32d-b11e-4942-9f34-8fba531958a6';
    $display->content['new-4097c32d-b11e-4942-9f34-8fba531958a6'] = $pane;
    $display->panels['one_main'][4] = 'new-4097c32d-b11e-4942-9f34-8fba531958a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['event_information'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'event_price';
  $mini->category = 'Centralbibliotek';
  $mini->admin_title = 'Event price';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Indholdselement',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b19e16d3-e99c-42a6-9412-573dfd38ef58';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-45b2cbb9-6457-4b77-8e44-d98ad2b83058';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => '.',
        'decimal_separator' => ',',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Pris',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '45b2cbb9-6457-4b77-8e44-d98ad2b83058';
    $display->content['new-45b2cbb9-6457-4b77-8e44-d98ad2b83058'] = $pane;
    $display->panels['one_main'][0] = 'new-45b2cbb9-6457-4b77-8e44-d98ad2b83058';
    $pane = new stdClass();
    $pane->pid = 'new-fbbd1ff5-a5ba-4fbe-81bc-d82700f82223';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_number_of_attendees';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => '.',
        'prefix_suffix' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Pladser i alt',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fbbd1ff5-a5ba-4fbe-81bc-d82700f82223';
    $display->content['new-fbbd1ff5-a5ba-4fbe-81bc-d82700f82223'] = $pane;
    $display->panels['one_main'][1] = 'new-fbbd1ff5-a5ba-4fbe-81bc-d82700f82223';
    $pane = new stdClass();
    $pane->pid = 'new-2ebb1727-473e-408a-a2e8-42919cd2d2aa';
    $pane->panel = 'one_main';
    $pane->type = 'cbib_events_seats_available';
    $pane->subtype = 'cbib_events_seats_available';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cbib_events_no_seats_available_text' => 'Alt optaget, desværre',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Ledige pladser',
      'cbib_events_unlimited_seats_available_text' => 'Ubegrænset antal pladser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2ebb1727-473e-408a-a2e8-42919cd2d2aa';
    $display->content['new-2ebb1727-473e-408a-a2e8-42919cd2d2aa'] = $pane;
    $display->panels['one_main'][2] = 'new-2ebb1727-473e-408a-a2e8-42919cd2d2aa';
    $pane = new stdClass();
    $pane->pid = 'new-9e077165-cc3b-428d-9a07-808775f99a17';
    $pane->panel = 'one_main';
    $pane->type = 'cbib_events_registration_dates';
    $pane->subtype = 'cbib_events_registration_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cbib_events_registrations_dates_date_format' => 'dato',
      'cbib_events_registrations_dates_open_or_close' => 'open',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tilmelding åbner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9e077165-cc3b-428d-9a07-808775f99a17';
    $display->content['new-9e077165-cc3b-428d-9a07-808775f99a17'] = $pane;
    $display->panels['one_main'][3] = 'new-9e077165-cc3b-428d-9a07-808775f99a17';
    $pane = new stdClass();
    $pane->pid = 'new-0f117d95-4b1b-4ead-8be0-dad16664a65b';
    $pane->panel = 'one_main';
    $pane->type = 'cbib_events_registration_dates';
    $pane->subtype = 'cbib_events_registration_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cbib_events_registrations_dates' => '',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tilmeldingsfrist',
      'cbib_events_registrations_dates_date_format' => 'dato',
      'cbib_events_registrations_dates_open_or_close' => 'close',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '0f117d95-4b1b-4ead-8be0-dad16664a65b';
    $display->content['new-0f117d95-4b1b-4ead-8be0-dad16664a65b'] = $pane;
    $display->panels['one_main'][4] = 'new-0f117d95-4b1b-4ead-8be0-dad16664a65b';
    $pane = new stdClass();
    $pane->pid = 'new-a8c63410-aced-453e-ad56-6d3c9578ea74';
    $pane->panel = 'one_main';
    $pane->type = 'token';
    $pane->subtype = 'node:attend-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 0,
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => 'Tilmeld',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a8c63410-aced-453e-ad56-6d3c9578ea74';
    $display->content['new-a8c63410-aced-453e-ad56-6d3c9578ea74'] = $pane;
    $display->panels['one_main'][5] = 'new-a8c63410-aced-453e-ad56-6d3c9578ea74';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['event_price'] = $mini;

  return $export;
}

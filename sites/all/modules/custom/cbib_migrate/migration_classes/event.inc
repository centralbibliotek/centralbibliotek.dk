<?php

/**
 * Migration class for migrating the event entities.
 */
class CbibEventMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    // Make fields extracted programatically appear in UI.
    $this->sourceFields['field_imagefile1:alt'] = 'Image alt extracted from data';
    $this->sourceFields['field_imagefile1:title'] = 'Image title extracted from data';

    // Make legacy person fields appear in UI.
    $this->sourceFields['field_lecturer_legacy'] = 'Combined lecturer field.';
    $this->sourceFields['field_contact_legacy'] = 'Combined contact person field.';

    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapEntityReferenceFields();

    $this->mapImageField();

    $this->mapMetaFields();

    $this->mapTopicsFields();

    $this->mapAddressField('field_address', 'field_location');

    $this->mapNumberFields();

    $this->mapLinkFields();

    $this->mapDateFields();

    $this->mapTypeField();

    $this->mapRegistrationTypeField();

    $this->mapPersonFields();
  }

  /**
   * Override prepareRow to perform conversions on data.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // If image was not selected by upload, choose the one from referenced entity.
    if (empty($row->field_imagefile1)) {
      $row->field_imagefile1 = $row->field_imagecrop_fid;
      $row->{'field_imagefile1:data'} = $row->field_imagecrop_data;
    }
    // Extract title and alt from image data.
    $img_data = unserialize($row->{'field_imagefile1:data'}[0]);
    $row->{'field_imagefile1:alt'} = isset($img_data['alt']) ? $img_data['alt'] : NULL;
    $row->{'field_imagefile1:title'} = isset($img_data['title']) ? $img_data['title'] : NULL;

    // Convert from text to number.
    $price = cbib_migrate_convert_to_price($row->field_price[0]);
    if ($price === FALSE) {
      $row->body .= '<p>' . $row->field_price[0] . '</p>';
    }
    $row->field_price = array($price === FALSE ? NULL : $price);

    // Convert type from text to term reference.
    $row->field_type = $this->convertTypeToTid($row->field_type);

    // Generate the registration settings.
    $row->registration_entity = array();

    // rsvd is the end time of the registration.
    $rsvd = $row->field_rsvd && reset($row->field_rsvd) ? reset($row->field_rsvd) : NULL;
    //$close_timestamp = $rsvd ? strtotime($rsvd) : 0;

    // Number of attendees.
    $capacity = $row->field_participants && reset($row->field_participants) ? reset($row->field_participants) : 0;

    // Generate a sane start date for registration.
    $row->registration_entity['open'] = $rsvd ? format_date($row->created, 'custom', 'Y-m-d H:i:s') : NULL;
    $row->registration_entity['close'] = $rsvd;

    // Is the registration formular removed?
    $remove = $this->convertRegistrationType($row->field_event_remove_subscription);

    // Convert registration type from old text value to 0/1.
    //$row->registration_entity['status'] = ($rsvd && ($close_timestamp > time()) && !$remove) ? '1' : '0';
    //$row->registration_entity['status'] = !$remove ? '1' : '0';
    $row->registration_entity['status'] = $rsvd && !$remove ? '1' : '0';
    $row->registration_entity['capacity'] = $capacity;

    // Convert person fields from two fields to one field with two values.
    $row->field_lecturer_legacy = $this->convertPerson($row->field_organiser, $row->field_email1);
    $row->field_contact_legacy = $this->convertPerson($row->field_contactname, $row->field_email2);

    // $row->field_registration_type = $row->field_attached_link && reset($row->field_attached_link) ? 'external' : 'onsite';

    // Notify if entity has a video. We will handle migration of video field manually.
    if (!empty($row->field_video_embed) && !empty($row->field_video_embed[0])) {
      cbib_migrate_register_message("Entity has a value in field_video_embed. Handle this manually");
    }

    //dpm($row);
    return TRUE;
  }

  /**
   * Fetch the alternate image data as well.
   *
   * return Query.
   */
  public function query() {
    $query = parent::query();

    $query->leftJoin('content_type_media', 'cm', 'cm.nid = n.nid');
    $query->fields('cm', array('field_imagecrop_fid', 'field_imagecrop_data'));

    // Join location table, which is not CCK.
    // Required for mapping address fields correctly.
    $query->leftJoin('location_instance', 'i', 'i.nid = n.nid AND i.vid = n.vid');
    $query->leftJoin('location', 'l', 'l.lid = i.lid');
    $query->fields('l', array('street', 'additional', 'city', 'province', 'postal_code', 'country'));
    // $query->condition('n.nid', 12760);
    // $query->range(0, 1);
    return $query;
  }

  /**
   * Map the fields that only exist on destination,
   * and should have a fixed value.
   *
   * @return void.
   */
  private function mapNonMigratedDestinationFields() {
    $this->addFieldMapping('group_group')
      ->defaultValue(1);
    $this->addFieldMapping('group_access')
      ->defaultValue(0);
    $this->addFieldMapping('field_og_subscribe_settings')
      ->defaultValue('anyone');
    $this->addFieldMapping('og_user_group_ref')
      ->defaultValue(array());
    $this->addFieldMapping('field_location')
      ->defaultValue('physical');
    //$this->addFieldMapping('field_registration:bundle')
      //->defaultValue('event');

    $this->addUnmigratedDestinations(array('field_radioactivity'));
  }

  /**
   * Map the fields that exist on source, but that
   * should not be migrated.
   *
   * @return void.
   */
  private function mapNonMigratedSourceFields() {
    $this->addUnmigratedSources(array(
      'field_imagecrop_fid',
      'field_imagecrop_data',
      'field_imagearchive',
      'field_video_embed',
      'field_video_embed:value',
      'field_video_embed:provider',
      'field_video_embed:data',
      'field_video_embed:status',
      'field_video_embed:version',
      'field_video_embed:title',
      'field_video_embed:description',
      'field_video_embed:duration',
    ), t('DNM'));
  }

  /**
   * Map fields that are of the same type on source
   * and destination
   *
   * @return void.
   */
  private function mapSameTypeFields() {
    $this->addFieldMapping('title_field', 'title');
    $this->addFieldMapping('field_event_audience', 'field_target_group');
    $this->addFieldMapping('field_comments', 'field_comments');
    $this->addFieldMapping('field_number_of_attendees', 'field_participants');

    $this->noLanguage(array(
      'title_field',
      'field_event_audience',
      'field_comments',
    ));
  }

  /**
   * Map migration of entity reference fields.
   *
   * @return void.
   */
  private function mapEntityReferenceFields() {
    $this->addFieldMapping('og_user_node', 'field_library')
      ->sourceMigration('central_library');
    $this->addFieldMapping('field_organizers', 'uid')
      ->sourceMigration('user_profile');
  }

  /**
   * Map the link fields from text.
   *
   * @return void.
   */
  private function mapLinkFields() {
    $this->addFieldMapping('field_offsite_url', 'field_attached_link');

    $this->addUnmigratedSources(array(
      'field_attached_link:title',
      'field_attached_link:attributes',
    ));

    $this->noLanguage(array(
      'field_offsite_url',
    ));
  }

  /**
   * Map migration of the field_image field.
   *
   * @return void.
   */
  private function mapImageField() {
    $this->addFieldMapping('field_image', 'field_imagefile1')
      ->sourceMigration('file');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_image:alt', 'field_imagefile1:alt')
      ->defaultValue('');
    $this->addFieldMapping('field_image:title', 'field_imagefile1:title')
      ->defaultValue('');

    // Hide data and list.
    $this->addUnmigratedSources(array(
      'field_imagefile1:data',
      'field_imagefile1:list',
    ), t('DNM'));
  }

  /**
   * Map the number fields that are text.
   * Conversions are done in prepareRow.
   *
   * @return void.
   */
  private function mapNumberFields() {
    $this->addFieldMapping('field_price', 'field_price');
  }

  /**
   * Map date fields.
   *
   * @return void.
   */
  private function mapDateFields() {
    $this->addFieldMapping('field_date', 'field_date');
    $this->addFieldMapping('field_date:to', 'field_date:value2');
    $this->addFieldMapping('field_date:timezone')
      ->defaultValue('Europe/Copenhagen');

    /*
    $this->addFieldMapping('field_registration_date', 'field_rsvd_calculated_start');
    $this->addFieldMapping('field_registration_date:to', 'field_rsvd');
    $this->addFieldMapping('field_registration_date:timezone')
      ->defaultValue('Europe/Copenhagen');
*/
    $this->addUnmigratedDestinations(array(
      'field_date:rrule',
    ));
  }

  /**
   * Map meta-fields.
   *
   * @return void.
   */
  private function mapMetaFields() {
    $this->mapNoMapMetaFields();
  }

  /**
   * Map the topics fields.
   *
   * @return void.
   */
  private function mapTopicsFields() {
    $this->addFieldMapping('field_topics', '2')
      ->defaultValue(array());
    $this->addFieldMapping('field_topics:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_topics:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_topics:ignore_case')
      ->defaultValue(TRUE);
  }

  /**
   * Map the type field.
   *
   * @return void.
   */
  private function mapTypeField() {
    $this->addFieldMapping('field_event_type', 'field_type');
    $this->addFieldMapping('field_event_type:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_event_type:create_term')
      ->defaultValue(FALSE);
    $this->addFieldMapping('field_event_type:ignore_case')
      ->defaultValue(FALSE);
  }

  /**
   * Map migration of registration type field.
   *
   * @return void.
   */
  private function mapRegistrationTypeField() {
    // $this->addFieldMapping('field_registration_type', 'field_event_remove_subscription');
//    $this->addFieldMapping('field_registration_type', 'field_registration_type');
//      ->defaultValue('onsite');
    // $this->addFieldMapping('field_status', 'field_status');

    $this->addFieldMapping('field_registration_type')
      ->defaultValue('onsite');
  }

  /**
   * Map the person fields.
   *
   * @return void.
   */
  private function mapPersonFields() {
    $this->addUnmigratedSources(array(
      'field_organiser',
      'field_email1',
      'field_contactname',
      'field_email2',
      'field_lecturer_legacy',
      'field_contact_legacy',
    ));
    $this->addUnmigratedDestinations(array(
      'field_lecturer',
      'field_contact',
    ));
  }

  /**
   * Convert the type text to term reference.
   *
   * @param $text
   *   The text from old site.
   * @return The term id on the new site.
   */
  private function convertTypeToTid($text) {
    $map = array(
      'kursus' => 1,
      'møde' => 2,
      'konference' => 3,
      'workshop' => 4,
      'temadag' => 5,
      'gå-hjem-møde' => 6,
      'reception' => 7,
    );

    return $map[trim(mb_strtolower($text['0']))];
  }

  /**
   * Convert the registration type from old value of text
   * to new 1/2.
   */
  private function convertRegistrationType($text) {
    return $text && ($text[0] == 'yes') ? 1 : 0;
  }

  /**
   * Convert a person from two fields to one double-field.
   *
   * @param $name
   *   The name of the person
   * @param $email
   *   The email address of the person.
   * @return array for use in double field.
   */
  private function convertPerson($name, $email) {
    $name[0] = mb_substr($name[0], 0, 255);
    return array('first' => $name, 'second' => $email);
  }

  /**
   * Try to find the user that is listed as the contact person,
   * and join them to the group.
   */
  public function complete($node, StdClass $row) {
    // The email of a contact person has been specified, try
    // to find the user, and make them join the group.
    if (!empty($row->field_email_contact)) {
      $user = user_load_by_mail(trim($row->field_email_contact));

      if ($user) {
        // Sign the user up for this group.
        $this->grantOgMembershipAndRole($node, user_load($user->uid));
      }
      else {
        // User not found.
        cbib_migrate_register_message("Contact person with mail " . $row->field_email_contact . " not found!");
      }
    }

    // Load existing registration entity settings.
    $settings = registration_entity_settings('node', $node->nid);
    // No settings yet, try to set defaults.
    if (!$settings) {
      registration_entity_set_default_settings('node', $node);
      $settings = registration_entity_settings('node', $node->nid);
    }

    // New settings + existing settings settings + sane default.
    $settings = $row->registration_entity + $settings + array('settings' => array());

    // Create/update registration entity.
    $settings['settings'] = serialize($settings['settings']);
    registration_update_entity_settings('node', $node->nid, $settings);

    // @hack Ultra-ugly hack, because I can't seem to migrate the 'event'
    // constant into field_registration:registration_type.
    $key = array(
      'entity_type' => 'node',
      'entity_id' => $node->nid,
      'deleted' => 0,
      'delta' => 0,
      'language' => LANGUAGE_NONE,
    );
    $fields = array(
      'revision_id' => $node->vid,
      'bundle' => 'event',
      'field_registration_registration_type' => 'event',
    );
    db_merge('field_data_field_registration')
      ->key($key)
      ->fields($fields)
      ->execute();

    db_merge('field_revision_field_registration')
      ->key($key)
      ->fields($fields)
      ->execute();

    // Migrate attendees.
    $users = Database::getConnection('default', $this->sourceConnection)
      ->select('centralbibliotek_signup', 's')
      ->fields('s')
      ->condition('s.nid', $row->nid)
      ->execute()
      ->fetchAll();

    foreach ($users as $user) {
      $uid = cbib_migrate_lookup_target_id('user_profile', $user->uid);
      // Register attendees
      $values = array(
        'entity_type' => 'node',
        'entity_id' => $node->nid,
        'type' => 'event',
        'created' => $user->signup_at,
      );

      $registration = entity_create('registration', $values);

      if (!registration_is_registered($registration, NULL, $uid)) {
        $registration->user_uid = $uid;
        $registration->author_uid = $uid;
        $registration->state = NULL;
        $registration->count = 1;

        registration_save($registration);
      }

      // Have the user automatically follow the event if Commons Follow (Node) is
      // enabled.
      if (module_exists('commons_follow_node')) {
        commons_follow_node_follow_node($node->nid, 'event', $user->uid);
      }
    }

    // Migrate og memberships.
    parent::complete($node, $row);
  }

  /**
   * Fix radioactivity field.
   * Double field does not support migrate, manually migrate.
   *
   * @return void.
   */
  public function prepare($node, StdClass $row) {
    $this->fixRadioactivityField($node);

    $node->field_lecturer = array(
      LANGUAGE_NONE => array(
        0 => $row->field_lecturer_legacy,
      ),
    );
    $node->field_contact = array(
      LANGUAGE_NONE => array(
        0 => $row->field_contact_legacy,
      ),
    );
  }
}

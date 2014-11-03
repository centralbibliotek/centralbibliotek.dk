<?php

class CbibUserMigration extends DrupalUser6Migration {
  public function __construct(array $arguments) {
    $this->sourceFields['field_first_name'] = 'First name as extracted from name field.';
    $this->sourceFields['field_last_name'] = 'Last name as extracted from name field.';

    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapUserImageField();

    $this->mapAddressField();

    $this->mapEntityReferenceFields();

    $this->mapLinkFields();

    $this->mapNameFields();

    $this->mapMetaFields();
  }

  /**
   * Override prepareRow to perform conversions on data.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Extract title and alt from image data.
    $img_data = unserialize($row->{'field_userimage:data'});
    $row->{'field_userimage:alt'} = isset($img_data['alt']) ? $img_data['alt'] : NULL;
    $row->{'field_userimage:title'} = isset($img_data['title']) ? $img_data['title'] : NULL;

    // Convert text to link.
    $row->field_facebook = cbib_migrate_convert_to_link($row->field_facebook);
    $row->field_linkedin = cbib_migrate_convert_to_link($row->field_linkedin);
    $row->field_lastfm   = cbib_migrate_convert_to_link($row->field_lastfm);
    $row->field_twitter  = cbib_migrate_convert_to_link($row->field_twitter);

    // Split name
    list($row->field_first_name, $row->field_last_name) = preg_split("/\s+(?=\S*+$)/",$row->title);

    return TRUE;
  }

  /**
   * Override query to add fields from location tables.
   */
  protected function query() {
    $query = parent::query();

    // Join location table, which is not CCK.
    // Required for mapping address fields correctly.
    $query->leftJoin('node', 'n', 'n.type = \'profile\' AND n.uid = u.uid');
    $query->leftJoin('location_instance', 'i', 'i.nid = n.nid AND i.vid = n.vid');
    $query->leftJoin('location', 'l', 'l.lid = i.lid');
    $query->fields('n', array(
      'title',
    ));
    $query->fields('l', array(
      'street',
      'additional',
      'city',
      'province',
      'postal_code',
      'country',
    ));
    $query->fields('u', array(
      'pass',
      'mail',
      'theme',
      'signature',
      'created',
      'access',
      'login',
      'language',
      'status',
      'init',
      'timezone',
      'data',
      'name',
      'signature_format',
      'mode',
      'threshold',
      'sort',
      'timezone_name',
    ));
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
      ->defaultValue(0);
    $this->addFieldMapping('message_subscribe_email')
      ->defaultValue(1);
    $this->addFieldMapping('group_access')
      ->defaultValue(0);
    $this->addFieldMapping('field_bio')
      ->defaultValue('');

    $this->addUnmigratedDestinations(array(
      'user_trusted_contacts',
      'og_user_user',
    ));

    $this->noLanguage(array(
      'field_bio',
    ));
  }

  /**
   * Map the fields that exist on source, but that
   * should not be migrated.
   *
   * @return void.
   */
  private function mapNonMigratedSourceFields() {
    $this->addUnmigratedSources(array(
      'field_otherworkplace',
      'field_associated_library2',
    ));
  }

  /**
   * Map fields that are of the same type on source
   * and destination
   *
   * @return void.
   */
  private function mapSameTypeFields() {
    $this->addFieldMapping('field_ean', 'field_ean_number');
    $this->addFieldMapping('field_phone', 'field_phone1');
    $this->addFieldMapping('field_job_title', 'field_job');

    $this->noLanguage(array(
      'field_ean',
      'field_phone',
      'field_job_title',
    ));
  }

  /**
   * Map migration of the field_userimage field.
   *
   * @return void.
   */
  private function mapUserImageField() {
    // Map field as file id.
    $this->removeFieldMapping('picture');
    $this->addFieldMapping('picture', 'field_userimage')
      ->sourceMigration('file');

    // We do not wish to handle those.
    $this->addUnmigratedSources(array(
      'field_userimage:list',
      'field_userimage:data',
    ));
  }

  /**
   * Map address field.
   * @see CbibMigrateDrupalNode6Migration::mapAddressField().
   */
  private function mapAddressField() {
    CbibMigrateDrupalNode6Migration::mapAddressFieldFor($this, 'field_address', 'field_address_profile');
  }

  /**
   * Map link fields. Facebook, LinkedIn etc.
   *
   * @return void.
   */
  private function mapLinkFields() {
    $this->addFieldMapping('field_facebook_url', 'field_facebook');
    $this->addFieldMapping('field_facebook_url:title')
      ->defaultValue('Facebook');
    $this->addFieldMapping('field_facebook_url:attributes')
      ->defaultValue(array());

    $this->addFieldMapping('field_linkedin_url', 'field_linkedin');
    $this->addFieldMapping('field_linkedin_url:title')
      ->defaultValue('LinkedIn');
    $this->addFieldMapping('field_linkedin_url:attributes')
      ->defaultValue(array());

    $this->addFieldMapping('field_lastfm_url',   'field_lastfm');
    $this->addFieldMapping('field_lastfm_url:title')
      ->defaultValue('LastFM');
    $this->addFieldMapping('field_lastfm_url:attributes')
      ->defaultValue(array());

    $this->addFieldMapping('field_twitter_url',  'field_twitter');
    $this->addFieldMapping('field_twitter_url:title')
      ->defaultValue('Twitter');
    $this->addFieldMapping('field_twitter_url:attributes')
      ->defaultValue(array());

    $this->noLanguage(array(
      'field_facebook_url',
      'field_linkedin_url',
      'field_lastfm_url',
      'field_twitter_url',
    ));
  }

  /**
   * Set no language for fields.
   * @see CbibMigrateDrupalNode6Migration::noLanguage().
   */
  private function noLanguage($fields) {
    CbibMigrateDrupalNode6Migration::noLanguage($this, $fields);
  }

  /**
   * Map name fields.
   *
   * @return void.
   */
  private function mapNameFields() {
    $this->addFieldMapping('field_name_first', 'field_first_name');
    $this->addFieldMapping('field_name_last', 'field_last_name');

    $this->addUnmigratedSources(array('title'));

    $this->noLanguage(array(
      'field_name_first',
      'field_name_last',
    ));
  }

  /**
   * Mark all metatag fields as not mapped.
   */
  private function mapMetaFields() {
    $this->addUnmigratedDestinations(array(
      'metatag_title',
      'metatag_description',
      'metatag_abstract',
      'metatag_keywords',
      'metatag_robots',
      'metatag_news_keywords',
      'metatag_standout',
      'metatag_generator',
      'metatag_rights',
      'metatag_image_src',
      'metatag_canonical',
      'metatag_shortlink',
      'metatag_publisher',
      'metatag_author',
      'metatag_original-source',
      'metatag_revisit-after',
      'metatag_content-language',
    ));
  }
}

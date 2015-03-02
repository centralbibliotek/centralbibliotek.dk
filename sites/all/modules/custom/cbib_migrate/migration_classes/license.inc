<?php

/**
 * Migration class for migrating the license entities.
 */
class CbibLicenseMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapTextToIntFields();

    $this->mapGroupLogoField();

    $this->mapMetaFields();
  }

  /**
   * Override prepareRow to perform conversions on data.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->field_licence_access_ip = $row->field_licence_access_ip === 'yes' ? 1 : 0;
    $row->field_licence_access_password = $row->field_licence_access_password === 'yes' ? 1 : 0;
    $row->field_licence_access_remoteuser = $row->field_licence_access_remoteuser === 'yes' ? 1 : 0;
    $row->field_licence_access_print_user = $row->field_licence_access_print_user === 'yes' ? 1 : 0;
    $row->field_licence_access_print_lib = $row->field_licence_access_print_lib === 'yes' ? 1 : 0;
    $row->field_licence_access_copy_user = $row->field_licence_access_copy_user === 'yes' ? 1 : 0;
    $row->field_licence_access_copy_lib = $row->field_licence_access_copy_lib === 'yes' ? 1 : 0;
    $row->field_licence_metadata = $row->field_licence_metadata === 'yes' ? 1 : 0;

    return TRUE;
  }

  /**
   * Override query to add fields from location tables.
   */
  protected function query() {
    $query = parent::query();
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
    $this->addFieldMapping('og_roles_permissions')
      ->defaultValue(1);
    $this->addFieldMapping('group_access')
      ->defaultValue(0);
    $this->addFieldMapping('field_og_subscribe_settings')
      ->defaultValue('anyone');
    $this->addFieldMapping('field_og_access_default_value')
      ->defaultValue(0);
    $this->addFieldMapping('og_group_ref')
      ->defaultValue(array());


    $this->addUnmigratedDestinations(array(
      'field_radioactivity',
      'field_license_target',
      'field_license_ambassador',
      'field_library_ref',
      'field_topics',
      'field_license_data',
      'field_license_update_frequency',
      'field_license_similar_ref',
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
    $this->addFieldMapping('field_link', 'field_licence_url');
    // $this->addFieldMapping('field_image', 'field_licence_logo');
    $this->addFieldMapping('field_license_status', 'field_licence_status');
    $this->addFieldMapping('field_faust_no', 'field_licence_faustno');
    // $this->addFieldMapping('body', 'field_licence_description');
    $this->addFieldMapping('field_license_search_example', 'field_licence_alt_title');
    $this->addFieldMapping('field_titleliste', 'title');
    $this->addFieldMapping('field_title_list_links', 'field_licence_alt_title_links');
    $this->addFieldMapping('field_producer', 'field_licence_producent');
    // $this->addFieldMapping('field_license_target', 'title');
    $this->addFieldMapping('field_language', 'field_licence_language');
    $this->addFieldMapping('field_search_facility', 'field_licence_searchinfo');
    //$this->addFieldMapping('field_license_ambassador', 'title');
    //$this->addFieldMapping('field_library_ref', 'title');
    //$this->addFieldMapping('field_topics', 'title');
    $this->addFieldMapping('field_license_access_ip', 'field_licence_access_ip');
    $this->addFieldMapping('field_license_access_password', 'field_licence_access_password');
    $this->addFieldMapping('field_license_access_remote_user', 'field_licence_access_remoteuser');
    $this->addFieldMapping('field_license_access_print_user', 'field_licence_access_print_user');
    $this->addFieldMapping('field_license_access_print_lib', 'field_licence_access_print_lib');
    $this->addFieldMapping('field_license_access_copy_user', 'field_licence_access_copy_user');
    $this->addFieldMapping('field_license_access_copy_lib', 'field_licence_access_copy_lib');
    $this->addFieldMapping('field_license_metadata', 'field_licence_metadata');
    //$this->addFieldMapping('field_license_data', 'field_licence_access_note');
    $this->addFieldMapping('field_license_access_note', 'field_licence_access_note');
    $this->addFieldMapping('field_license_access_statistic', 'field_licence_access_statistic');
    //$this->addFieldMapping('field_license_update_frequency', 'field_licence_searchinfo');
    $this->addFieldMapping('field_license_newsletter', 'field_licence_newsletter_link');
    $this->addFieldMapping('field_license_periode', 'field_licence_period');
    $this->addFieldMapping('field_license_subscription', 'field_licence_subscription');
    $this->addFieldMapping('field_license_payment', 'field_licence_payment');
    $this->addFieldMapping('field_license_abbreviated_title', 'field_licence_abreviated_title');
    $this->addFieldMapping('field_license_proxy_start_url', 'field_licence_proxystarturl');
    $this->addFieldMapping('field_license_pid', 'field_licence_pid');
    // $this->addFieldMapping('field_license_similar_ref', 'field_licence_searchinfo');



    $this->noLanguage(array(
      'title_field',
    ));
  }

  /**
   * Map migration of fields that are text but should
   * be converted to int. The conversion is done in prepareRow().
   *
   * @return void.
   */
  private function mapTextToIntFields() {
    $this->addFieldMapping('field_cvr', 'field_cb_cvr');
    $this->addFieldMapping('field_agency', 'field_biblioteksnummer');
  }

  /**
   * Map migration of the field_group_logo field.
   *
   * @return void.
   */
  private function mapGroupLogoField() {
    $this->addFieldMapping('field_image', 'field_licence_logo')
      ->sourceMigration('file');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_image:alt', 'field_licence_logo:alt')
      ->defaultValue('');
    $this->addFieldMapping('field_image:title', 'field_licence_logo:title')
      ->defaultValue('');

    // Hide data and list.
    $this->addUnmigratedSources(array(
    ), t('DNM'));
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
   * Override complete to handle joining the staff members
   * to the group.
   */
  public function complete($node, stdClass $row) {
    // Go through the staff of the library and add new og memberships.
    foreach ($row->field_staff as $member) {
      $uid = cbib_migrate_lookup_profile_uid($member);

      if ($uid == NULL) {
        cbib_migrate_register_message("Staff member with profile id " . $member . " not found in user mapping!");
        continue;
      }

      $this->grantOgMembershipAndRole($node, user_load($uid), FALSE);
    }

    // Migrate og memberships.
    parent::complete($node, $row);
  }
}

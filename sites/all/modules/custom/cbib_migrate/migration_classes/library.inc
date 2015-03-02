<?php

/**
 * Migration class for migrating the library entities.
 */
class CbibLibraryMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);


    $this->mapNonMigratedDestinationFields();

    $this->mapSameTypeFields();

    $this->mapTextToIntFields();

    $this->mapMetaFields();
  }

  /**
   * Override prepareRow to perform conversions on data.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Convert to int.
    $row->field_biblioteksnummer2 = cbib_migrate_convert_to_number($row->field_biblioteksnummer2);
    $row->field_associated_library = cbib_migrate_lookup_target_id('central_library', $row->field_associated_library);

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
    $this->addUnmigratedDestinations(array('field_radioactivity'));
  }

  /**
   * Map fields that are of the same type on source
   * and destination
   *
   * @return void.
   */
  private function mapSameTypeFields() {
    $this->addFieldMapping('title_field', 'title');
    $this->addFieldMapping('field_centralbibliotek_ref', 'field_associated_library')
      ->defaultValue('CbibCentralLibraryMigration');
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
    $this->addFieldMapping('field_library_no', 'field_biblioteksnummer2');
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
    /*
    // Go through the staff of the library and add new og memberships.
    foreach ($row->field_staff as $member) {
      $uid = cbib_migrate_lookup_profile_uid($member);

      if ($uid == NULL) {
        cbib_migrate_register_message("Staff member with profile id " . $member . " not found in user mapping!");
        continue;
      }

      $this->grantOgMembershipAndRole($node, user_load($uid), FALSE);
    }
*/
    // Migrate og memberships.
    parent::complete($node, $row);
  }
}

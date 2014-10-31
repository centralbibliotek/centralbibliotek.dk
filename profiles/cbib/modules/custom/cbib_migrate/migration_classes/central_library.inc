<?php

/**
 * Migration class for migrating the central library entities.
 */
class CbibCentralLibraryMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    // Make fields extracted programatically appear in UI.
    $this->sourceFields['field_image_library:alt'] = 'Image alt extracted from data';
    $this->sourceFields['field_image_library:title'] = 'Image title extracted from data';

    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapTextToIntFields();

    $this->mapGroupLogoField();

    $this->mapAddressField('field_address');
  }

  /**
   * Override prepareRow to perform conversions on data.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Convert to int.
    $row->field_cb_cvr = cbib_migrate_convert_to_number($row->field_cb_cvr);
    $row->field_biblioteksnummer = cbib_migrate_convert_to_number($row->field_biblioteksnummer);

    // Extract title and alt from image data.
    $img_data = unserialize($row->{'field_image_library:data'});
    $row->{'field_image_library:alt'} = isset($img_data['alt']) ? $img_data['alt'] : NULL;
    $row->{'field_image_library:title'} = isset($img_data['title']) ? $img_data['title'] : NULL;

    return TRUE;
  }

  /**
   * Override query to add fields from location tables.
   */
  protected function query() {
    $query = parent::query();

    // Join location table, which is not CCK.
    // Required for mapping address fields correctly.
    $query->join('location_instance', 'i', 'i.nid = n.nid AND i.vid = n.vid');
    $query->join('location', 'l', 'l.lid = i.lid');
    $query->fields('l', array('street', 'additional', 'city', 'province', 'postal_code', 'country'));
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
  }

  /**
   * Map the fields that exist on source, but that
   * should not be migrated.
   *
   * @return void.
   */
  private function mapNonMigratedSourceFields() {
    $this->addUnmigratedSources(array(
      'field_library_licence_user',
    ), t('DNM'));
  }

  /**
   * Map fields that are of the same type on source
   * and destination
   *
   * @return void.
   */
  private function mapSameTypeFields() {
    $this->addFieldMapping('field_ean', 'field_cb_ean');
    $this->addFieldMapping('field_website', 'field_homepage');
    $this->addFieldMapping('field_e_mail', 'field_email');
    $this->addFieldMapping('field_phone', 'field_phone');
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
    $this->addFieldMapping('field_group_logo', 'field_image_library')
      ->sourceMigration('file');
    $this->addFieldMapping('field_group_logo:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_group_logo:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_group_logo:alt', 'field_image_library:alt')
      ->defaultValue('');
    $this->addFieldMapping('field_group_logo:title', 'field_image_library:title')
      ->defaultValue('');

    // Files are migrated in another migration.
    // Upon rollback, do not delete files.
    // ONLY for Migrate 7.x-2.6
    //$this->addFieldMapping('field_group_logo:preserve_files')
    //  ->defaultValue(TRUE);

    // Hide data and list.
    $this->addUnmigratedSources(array(
      'field_image_library:data',
      'field_image_library:list',
    ), t('DNM'));
  }

  /**
   * Override complete to handle joining the staff members
   * to the group.
   */
  public function complete($node, stdClass $row) {
    parent::complete($node, $row);
    // TODO
  }
}

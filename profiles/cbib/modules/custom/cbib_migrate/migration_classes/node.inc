<?php

class CbibMigrateDrupalNode6Migration extends DrupalNode6Migration {

  /**
   * Map the migration of an address field.
   * REQUIRED altering the query and adding a
   * join to the relevant table, where address
   * information is stored.
   * See CbibCentralLibraryMigration::query
   *
   * @param $field_name
   *   The name of the field to map.
   * @return void.
   */
  protected function mapAddressField($field_name) {
    $address_arguments = array(
      'administrative_area' => array('source_field' => 'province'),
      'locality' => array('source_field' => 'city'),
      'thoroughfare' => array('source_field' => 'street'),
      'premise' => array('source_field' => 'additional'),
      'postal_code' => array('source_field' => 'postal_code'),
    );
    $this->addFieldMapping($field_name, 'country')
         ->arguments($address_arguments);
    // Hide these sources because they are added as arguments
    $this->addUnmigratedSources(array(
      'province',
      'city',
      'street',
      'additional',
      'postal_code',
    ), t('DNM'));
    $this->addUnmigratedDestinations(array(
      $field_name . ':administrative_area',
      $field_name . ':sub_administrative_area',
      $field_name . ':locality',
      $field_name . ':dependent_locality',
      $field_name . ':postal_code',
      $field_name . ':thoroughfare',
      $field_name . ':premise',
      $field_name . ':sub_premise',
      $field_name . ':organisation_name',
      $field_name . ':name_line',
      $field_name . ':first_name',
      $field_name . ':last_name',
      $field_name . ':data',
    ), t('DNM'));
  }
}

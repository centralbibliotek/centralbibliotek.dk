<?php

class CbibMigrateDrupalNode6Migration extends DrupalNode6Migration {

  /**
   * Map the migration of an address field.
   * REQUIRED altering the query and adding a
   * join to the relevant table, where address
   * information is stored.
   * See CbibCentralLibraryMigration::query().
   *
   * @param $dest_field_name
   *   The name of the field to map.
   * @param $source_field_name
   *   The name of the source field.
   * @return void.
   */
  protected function mapAddressField($dest_field_name, $source_field_name) {
    self::mapAddressFieldFor($this, $dest_field_name, $source_field_name);
  }

  /**
   * Set no language for fields.
   * @see CbibMigrateDrupalNode6Migration::noLanguage().
   */
  protected function noLanguage($fields) {
    CbibMigrateDrupalNode6Migration::noLanguageFor($this, $fields);
  }

  /**
   * Radioactivity field needs to be set up in a special way. Run this in prepare().
   *
   * @return void.
   */
  protected function fixRadioactivityField($node) {
    $node->field_radioactivity = array(
      LANGUAGE_NONE => array(
        0 => array(
          'radioactivity_energy' => 0,
          'radioactivity_timestamp' => '0',
        ),
      ),
    );
  }

  /**
   * Mark all metatag fields as not mapped.
   *
   * @return void.
   */
  protected function mapNoMapMetaFields() {
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

  /**
   * Actually map the address field.
   *
   * @see CbibMigrateDrupalNode6Migration::mapAddressField().
   */
  public static function mapAddressFieldFor($ctx, $dest_field_name, $source_field_name) {
    $address_arguments = array(
      'administrative_area' => array('source_field' => 'province'),
      'locality' => array('source_field' => 'city'),
      'thoroughfare' => array('source_field' => 'street'),
      'premise' => array('source_field' => 'additional'),
      'postal_code' => array('source_field' => 'postal_code'),
    );
    $ctx->addFieldMapping($dest_field_name, 'country')
         ->arguments($address_arguments);
    // Hide these sources because they are added as arguments
    $ctx->addUnmigratedSources(array(
      $source_field_name,
      'province',
      'city',
      'street',
      'additional',
      'postal_code',
    ));
    $ctx->addUnmigratedDestinations(array(
      $dest_field_name . ':administrative_area',
      $dest_field_name . ':sub_administrative_area',
      $dest_field_name . ':locality',
      $dest_field_name . ':dependent_locality',
      $dest_field_name . ':postal_code',
      $dest_field_name . ':thoroughfare',
      $dest_field_name . ':premise',
      $dest_field_name . ':sub_premise',
      $dest_field_name . ':organisation_name',
      $dest_field_name . ':name_line',
      $dest_field_name . ':first_name',
      $dest_field_name . ':last_name',
      $dest_field_name . ':data',
    ));
  }

  /**
   * Set no language on fields
   *
   * @param $ctx
   *   The context to use.
   * @param $fields
   *   Array of fields to set no language on.
   * @return void.
   */
  public static function noLanguageFor($ctx, array $fields) {
    foreach ($fields as $field) {
      $ctx->addFieldMapping($field . ':language')
        ->defaultValue(LANGUAGE_NONE);
    }
  }
}

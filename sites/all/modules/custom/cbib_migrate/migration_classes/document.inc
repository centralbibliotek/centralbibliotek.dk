<?php

/**
 * Migration class for migrating the document entities.
 */
class CbibDocumentMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapEntityReferenceFields();

    $this->mapMetaFields();

    $this->mapTopicsFields();

    $this->mapFileField();
  }

  /**
   * Override prepareRow to perform conversions on data.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    return TRUE;
  }

  /**
   * Fetch the alternate image data as well.
   *
   * return Query.
   */
  public function query() {
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
    $this->addFieldMapping('og_user_group_ref')
      ->defaultValue(array());

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

    $this->noLanguage(array(
      'title_field',
    ));
  }

  /**
   * Map migration of entity reference fields.
   *
   * @return void.
   */
  private function mapEntityReferenceFields() {
    // TODO Missing field right now.
    /*$this->addFieldMapping('og_group_ref', 'field_relation_group')
      ->sourceMigration('group');*/
    $this->addUnmigratedSources(array('field_relation_group'));
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
    $this->addFieldMapping('field_topics')
      ->defaultValue(array());
    $this->addFieldMapping('field_topics:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_topics:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_topics:ignore_case')
      ->defaultValue(TRUE);
  }

  /**
   * Map the file field.
   *
   * @return void.
   */
  private function mapFileField() {
    $this->addFieldMapping('field_document_file', 'field_file')
      ->sourceMigration('file');
    $this->addFieldMapping('field_document_file:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_document_file:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_document_file:description')
      ->defaultValue('');
    // TODO Check that this default is right.
    $this->addFieldMapping('field_document_file:display')
      ->defaultValue(0);

    // Hide data and list.
    $this->addUnmigratedSources(array(
      'field_file:data',
      'field_file:list',
    ), t('DNM'));
  }

  /**
   * Fix radioactivity field.
   *
   * @return void.
   */
  public function prepare($node, StdClass $row) {
    $this->fixRadioactivityField($node);
  }
}

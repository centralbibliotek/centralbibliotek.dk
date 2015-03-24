<?php

/**
 * Migration class for migrating the post entities.
 */
class CbibPostMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapEntityReferenceFields();

    $this->mapMetaFields();

    $this->mapTopicsFields();

    $this->mapMediaField();

    $this->mapLinkFields();
  }

  /**
   * Override prepareRow to perform conversions on data.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Notify if entity has a video. We will handle migration of video field
    // manually.
    if (!empty($row->field_video_embed) && !empty($row->field_video_embed[0])) {
      cbib_migrate_register_message("Entity has a value in field_video_embed. Handle this manually");
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
    $this->addFieldMapping('og_group_ref', 'field_group_relation3')
      ->sourceMigration('group');
    $this->addUnmigratedSources(array('field_group_relation3'));
  }

  /**
   * Map the link fields.
   *
   * @return void.
   */
  private function mapLinkFields() {
    // TODO Field missing.
    $this->addFieldMapping('field_link', 'field_attached_link');

    $this->addUnmigratedSources(array(
      'field_attached_link:title',
      'field_attached_link:attributes',
    ));

    $this->noLanguage(array(
      'field_link',
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
  private function mapMediaField() {
    $this->addFieldMapping('field_media', 'field_groupnews_img')
      ->sourceMigration('file');
    $this->addFieldMapping('field_media:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_media:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_media:description')
      ->defaultValue('');
    // TODO Check that this default is right.
    $this->addFieldMapping('field_media:display')
      ->defaultValue(0);

    $this->addUnmigratedSources(array(
      'field_groupnews_img:list',
      'field_groupnews_img:data',
    ));
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

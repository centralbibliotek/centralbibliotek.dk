<?php

/**
 * Migration class for migrating the central library entities.
 */
class CbibGroupMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    // Make fields extracted programatically appear in UI.
    $this->sourceFields['field_imagefile4:alt'] = 'Image alt extracted from data';
    $this->sourceFields['field_imagefile4:title'] = 'Image title extracted from data';
    $this->sourceFields['upload'] = 'Attached file with D6 upload module';

    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapEntityReferenceFields();

    $this->mapGroupLogoField();

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

    // Look up the upload files in the source database.
    $row->upload = Database::getConnection('default', $this->arguments['source_connection'])
      ->select('upload', 'u')
      ->fields('u')
      ->condition('u.nid', $row->nid)
      ->execute()
      ->fetchAllAssoc('fid', PDO::FETCH_ASSOC);

    // If image was not selected by upload, choose the one from referenced entity.
    if (empty($row->field_imagefile4)) {
      $row->field_imagefile4 = $row->field_imagecrop_fid;
      $row->{'field_imagefile4:data'} = $row->field_imagecrop_data;
    }
    // Extract title and alt from image data.
    $img_data = unserialize($row->{'field_imagefile4:data'});
    $row->{'field_imagefile4:alt'} = isset($img_data['alt']) ? $img_data['alt'] : NULL;
    $row->{'field_imagefile4:title'} = isset($img_data['title']) ? $img_data['title'] : NULL;

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
      'field_imagearchive4',
      '5',
      'field_contact',
      'field_email_contact',
      'field_job_position',
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
    $this->addFieldMapping('og_group_ref', 'field_relation_library')
      ->sourceMigration('central_library');
  }

  /**
   * Map migration of the field_group_logo field.
   *
   * @return void.
   */
  private function mapGroupLogoField() {
    $this->addFieldMapping('field_group_logo', 'field_imagefile4')
      ->sourceMigration('file');
    $this->addFieldMapping('field_group_logo:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_group_logo:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_group_logo:alt', 'field_imagefile4:alt')
      ->defaultValue('');
    $this->addFieldMapping('field_group_logo:title', 'field_imagefile4:title')
      ->defaultValue('');

    // Hide data and list.
    $this->addUnmigratedSources(array(
      'field_imagefile4:data',
      'field_imagefile4:list',
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
   * Map the topics fields.
   *
   * @return void.
   */
  private function mapTopicsFields() {
    $this->addFieldMapping('field_topics', '4')
      ->defaultValue(array());
    $this->addFieldMapping('field_topics:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_topics:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_topics:ignore_case')
      ->defaultValue(TRUE);
  }

  /**
   * Fix radioactivity field.
   *
   * @return void.
   */
  public function prepare($node, StdClass $row) {
    $this->fixRadioactivityField($node);
  }

  /**
   * Map the upload property.
   *
   * @see prepareRow
   *
   * @return void.
   */
  private function mapFileField() {
    $this->addFieldMapping('field_document_file', 'upload')
      ->sourceMigration('file');
    $this->addFieldMapping('field_document_file:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_document_file:preserve_files')
         ->defaultValue(TRUE);
    $this->addFieldMapping('field_document_file:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_document_file:description', 'upload')
      ->callbacks(array($this, 'getUploadDescription'))
      ->defaultValue('');
    // TODO Check that this default is right.
    $this->addFieldMapping('field_document_file:display')
      ->defaultValue(0);
  }

  /**
   * Get the descriptions for the upload files.
   */
  protected function getUploadDescription($value) {
    if (!empty($value)) {
      $descriptions = array();
      foreach ($value as $delta => $file) {
        $descriptions[] = $file['description'];
      }
      return $descriptions;
    }
    return '';
  }
}

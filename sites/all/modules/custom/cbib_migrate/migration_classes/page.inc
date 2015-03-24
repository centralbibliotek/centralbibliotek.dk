<?php

/**
 * Migration class for migrating the page entities.
 */
class CbibPageMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    // Make fields extracted programatically appear in UI.
    $this->sourceFields['field_imagefile5:alt'] = 'Image alt extracted from data';
    $this->sourceFields['field_imagefile5:title'] = 'Image title extracted from data';
    $this->sourceFields['upload'] = 'Attached file with D6 upload module';

    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapEntityReferenceFields();

    $this->mapMetaFields();

    $this->mapImageField();

    $this->mapLinkFields();

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
    if (empty($row->field_imagefile5)) {
      $row->field_imagefile5 = $row->field_imagecrop_fid;
      $row->{'field_imagefile5:data'} = $row->field_imagecrop_data;
    }
    // Extract title and alt from image data.
    $img_data = unserialize($row->{'field_imagefile5:data'}[0]);
    $row->{'field_imagefile5:alt'} = isset($img_data['alt']) ? $img_data['alt'] : NULL;
    $row->{'field_imagefile5:title'} = isset($img_data['title']) ? $img_data['title'] : NULL;

    // Notify if entity has a video. We will handle migration of video field manually.
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
      'field_attach_webform',
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
    $this->addFieldMapping('field_centralbibliotek_ref', 'field_library2')
      ->sourceMigration('central_library');
  }

  /**
   * Map the link fields.
   *
   * @return void.
   */
  private function mapLinkFields() {
    $this->addFieldMapping('field_link', 'field_attached_link');
    $this->addFieldMapping('field_link:title', 'field_attached_link:title');
    $this->addFieldMapping('field_link:attributes', 'field_attached_link:attributes');

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
   * Map the file field.
   *
   * @return void.
   */
  private function mapImageField() {
    $this->addFieldMapping('field_image', 'field_imagefile5')
      ->sourceMigration('file');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_image:alt', 'field_imagefile5:alt');
    $this->addFieldMapping('field_image:title', 'field_imagefile5:title');

    $this->addUnmigratedSources(array(
      'field_imagefile5:list',
      'field_imagefile5:data',
      'field_imagearchive5',
      'field_imagecrop_fid',
      'field_imagecrop_data',
    ));
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

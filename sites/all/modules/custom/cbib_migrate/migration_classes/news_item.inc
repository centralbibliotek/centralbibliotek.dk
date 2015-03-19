<?php

/**
 * Migration class for migrating the news item entities.
 */
class CbibNewsItemMigration extends CbibMigrateDrupalNode6Migration {
  public function __construct(array $arguments) {
    // Make fields extracted programatically appear in UI.
    $this->sourceFields['field_imagefile2:alt'] = 'Image alt extracted from data';
    $this->sourceFields['field_imagefile2:title'] = 'Image title extracted from data';

    // Make converted author field appear in UI.
    $this->sourceFields['field_author_legacy'] = 'Author field.';

    parent::__construct($arguments);

    $this->mapNonMigratedDestinationFields();
    $this->mapNonMigratedSourceFields();

    $this->mapSameTypeFields();

    $this->mapEntityReferenceFields();

    $this->mapMetaFields();

    $this->mapImageField();

    $this->mapLinkFields();

    $this->mapAuthorField();
  }

  /**
   * Override prepareRow to perform conversions on data.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // If image was not selected by upload, choose the one from referenced entity.
    if (empty($row->field_imagefile2)) {
      $row->field_imagefile2 = $row->field_imagecrop_fid;
      $row->{'field_imagefile2:data'} = $row->field_imagecrop_data;
    }
    // Extract title and alt from image data.
    $img_data = unserialize($row->{'field_imagefile2:data'}[0]);
    $row->{'field_imagefile2:alt'} = isset($img_data['alt']) ? $img_data['alt'] : NULL;
    $row->{'field_imagefile2:title'} = isset($img_data['title']) ? $img_data['title'] : NULL;

    // Notify if entity has a video. We will handle migration of video field manually.
    if (!empty($row->field_video_embed) && !empty($row->field_video_embed[0])) {
      cbib_migrate_register_message("Entity has a value in field_video_embed. Handle this manually");
    }

    // Convert old author field to new double-field.
    if ($row->field_author && ($uid = cbib_migrate_lookup_profile_uid($row->field_author))) {
      $user = user_load($uid);
      $row->field_author_legacy = array(
        'first' => $user->field_name_first[LANGUAGE_NONE][0]['value'] . " " . $user->field_name_last[LANGUAGE_NONE][0]['value'],
        'second' => $user->mail,
      );
    }
    else {
      $row->field_author_legacy = NULL;
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
      '1',
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
    $this->addFieldMapping('og_news_ref', 'field_relatedto')
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
    $this->addFieldMapping('field_image', 'field_imagefile2')
      ->sourceMigration('file');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_image:alt', 'field_imagefile2:alt');
    $this->addFieldMapping('field_image:title', 'field_imagefile2:title');

    $this->addUnmigratedSources(array(
      'field_imagefile2:list',
      'field_imagefile2:data',
      'field_imagearchive2',
      'field_imagecrop_fid',
      'field_imagecrop_data',
    ));
  }

  /**
   * Map the author field.
   *
   * @return void.
   */
  private function mapAuthorField() {
    $this->addUnmigratedSources(array(
      'field_author',
      'field_author_legacy',
    ));
    $this->addUnmigratedDestinations(array(
      'field_author',
    ));
  }

  /**
   * Double field does not support migrate. Manually migrate the fields.
   *
   * @return void.
   */
  public function prepare($node, StdClass $row) {
    $node->field_author = array(
      LANGUAGE_NONE => array(
        0 => $row->field_author_legacy,
      ),
    );
  }
}

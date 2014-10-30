<?php

/**
 * Migration class for migrating the central library entities.
 */
class CbibCentralLibraryMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // Standard fields.
    $this->addFieldMapping('title_field', 'title_value');

    // Fixed fields that are not migrated.
    $this->addFieldMapping('group_group')->defaultValue(true);
    $this->addFieldMapping('og_roles_permissions')->defaultValue(true);
    $this->addFieldMapping('group_access')->defaultValue(false);
    $this->addFieldMapping('field_og_subscribe_settings')->defaultValue('anyone');
    $this->addFieldMapping('field_og_access_default_value')->defaultValue(false);
    $this->addFieldMapping('og_group_ref')->defaultValue(array());

    // Migrated fields with same type.
    $this->addFieldMapping('field_group_logo', 'field_image_library');
    $this->addFieldMapping('field_ean', 'field_cb_ean');
    $this->addFieldMapping('field_website', 'field_homepage');
    $this->addFieldMapping('field_e_mail', 'field_email');
    $this->addFieldMapping('field_address', 'field_address');
  }
}

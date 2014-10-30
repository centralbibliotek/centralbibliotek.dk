<?php

/**
 * Migration class for migrating the central library entities.
 */
abstract class CbibCentralLibraryMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('title_field', 'title_value');
    $this->addFieldMapping('body', 'body_value');
  }
}

<?php

/**
 * @file
 * Centralbibliotek.dk specific drush configuration.
 */

/**
 * Save our "custom" files between situs builds.
 *
 * "Custom" is everything that is not part of the Drupal Commons make file.
 */
$command_specific = array(
  'situs' => array(
    'save-files' => array(
      '.git',
      '.scrutinizer.yml',
      'circle.yml',
      'sites/all/drush',
      'sites/all/modules',
      'profiles/cbib',
    ),
  ),
);

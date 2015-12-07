<?php

/**
 * @file
 * Drush aliases for centralbibliotek.dk.
 */

putenv('CBIB_DRUSH_DIR=' . __DIR__);

$aliases['prod'] = array(
  'uri' => 'centralbibliotek.dk',
  'root' => '/data/www/centralbibliotek.dk',
  'remote-host' => 'centralbib.dbc.dk',
  'remote-user' => 'reload',
  'dump-dir' => '/home/reload/backups',
  'path-aliases' => array(
    '%drush-script' => '/home/reload/bin/drush',
  ),
  'deployotron' => array(
    'branch' => 'master',
    'dump-dir' => '/home/reload/backups',
    'num-dumps' => 3,
    'restart-apache2' => TRUE,
    'restart-varnish' => FALSE,
  ),
  // Skip cache tables and the like.
  'source-command-specific' => array (
    'sql-sync' => array (
      'structure-tables-key' => 'common',
      'structure-tables' => array(
        'common' => array(
          'cache',
          'cache_*',
          'ctools_*_cache',
          'history',
          'sessions',
          'views_data_export_object_cache',
          'votingapi_cache',
          'watchdog',
        ),
      ),
    ),
  ),
);

$aliases['legacy'] = array(
  'uri' => 'centralbibliotek.dk',
  'root' => '/data/www/old-cbib',
  'remote-host' => 'centralbib.dbc.dk',
  'remote-user' => 'reload',
  'ssh-options' => '-F ' . __DIR__ . '/ssh/config -o GlobalKnownHostsFile=' . __DIR__ . '/ssh/known_hosts',
);

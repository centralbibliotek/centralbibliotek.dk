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
  'ssh-options' => '-F ' . __DIR__ . '/ssh/config -o GlobalKnownHostsFile=' . __DIR__ . '/ssh/known_hosts -o LogLevel=Error',
  'dump-dir' => '/home/reload/backups',
  'deployotron' => array(
    'branch' => 'develop',
    'dump-dir' => '/home/reload/backups',
    'num-dumps' => 3,
    'restart-apache2' => TRUE,
    'restart-varnish' => FALSE,
    'flowdock-token' => 'a7200e7e654379df303056fbf14faf74',
    'newrelic-api-key' => '120fd65c787d6de27897a44cce59495fa4002740d8e367c',
    'newrelic-app-name' => 'centralbibliotek.dk',
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

$aliases['test'] = array(
  'uri' => 'cbib.test1404.reload.dk',
  'root' => '/var/www/centralbibliotek.dk',
  'remote-host' => 'test1404.reload.dk',
  'remote-user' => 'reload',
  'path-aliases' => array(
    '%drush-script' => '/home/reload/bin/drush',
  ),
  'dump-dir' => '/home/reload/backups',
  'deployotron' => array(
    'branch' => 'develop',
    'restart-apache2' => FALSE,
    'restart-varnish' => FALSE,
    'flowdock-token' => 'a7200e7e654379df303056fbf14faf74',
  ),
);

$aliases['legacy'] = array(
  'uri' => 'centralbibliotek.dk',
  'root' => '/data/www/old-cbib',
  'remote-host' => 'centralbib.dbc.dk',
  'remote-user' => 'reload',
  'ssh-options' => '-F ' . __DIR__ . '/ssh/config -o GlobalKnownHostsFile=' . __DIR__ . '/ssh/known_hosts',
);

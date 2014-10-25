<?php

/**
 * @file
 * Drush aliases for centralbibliotek.dk.
 */

putenv('CBIB_DRUSH_DIR=' . __DIR__);

$aliases['test'] = array(
  'uri' => 'cbib.test1404.reload.dk',
  'root' => '/var/www/centralbibliotek.dk',
  'remote-host' => 'test1404.reload.dk',
  'remote-user' => 'reload',
  'path-aliases' => array(
    '%drush-script' => '/home/reload/bin/drush',
  ),
  'deployotron' => array(
    'branch' => 'develop',
    'restart-apache2' => TRUE,
    'restart-varnish' => FALSE,
  ),
);

$aliases['legacy'] = array(
  'uri' => 'centralbibliotek.dk',
  'root' => '/data/www/centralbibliotek.dk/htdocs',
  'remote-host' => 'oshima.dbc.dk',
  'remote-user' => 'reload',
  'ssh-options' => '-F ' . __DIR__ . '/ssh/config -o GlobalKnownHostsFile=' . __DIR__ . '/ssh/known_hosts',
  'path-aliases' => array(
    '%drush-script' => '/home/reload/bin/drush',
  ),
);

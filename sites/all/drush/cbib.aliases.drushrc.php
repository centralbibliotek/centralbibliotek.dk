<?php

/**
 * @file
 * Drush aliases for centralbibliotek.dk.
 */

putenv('CBIB_DRUSH_DIR=' . __DIR__);

$aliases['prod'] = array(
  'uri' => 'ny.centralbibliotek.dk',
  'root' => '/data/www/centralbibliotek.dk',
  'remote-host' => 'centralbib.dbc.dk',
  'remote-user' => 'reload',
  'ssh-options' => '-F ' . __DIR__ . '/ssh/config -o GlobalKnownHostsFile=' . __DIR__ . '/ssh/known_hosts',
  'deployotron' => array(
    'branch' => 'develop',
    'dump-dir' => '/home/reload/backups',
    'restart-apache2' => TRUE,
    'restart-varnish' => FALSE,
    'flowdock-token' => 'a7200e7e654379df303056fbf14faf74',
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
  'deployotron' => array(
    'branch' => 'develop',
    'restart-apache2' => FALSE,
    'restart-varnish' => FALSE,
    'flowdock-token' => 'a7200e7e654379df303056fbf14faf74',
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

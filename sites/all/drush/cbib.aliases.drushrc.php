<?php

/**
 * @file
 * Drush aliases for centralbibliotek.dk.
 */

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

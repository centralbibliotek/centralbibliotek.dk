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
    // 'no-updb' => TRUE,
    // 'message' => 'Remember to run drush @stage updb manually',
    // 'newrelic-api-key' => '0d8954eb45f4f9753b64df3bcd559f9b0ac8b81ef9c4ff3',
    // 'newrelic-app-name' => 'coopanalyse.dk-stage',
  ),
);

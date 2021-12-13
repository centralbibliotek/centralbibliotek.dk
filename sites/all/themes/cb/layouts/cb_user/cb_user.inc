<?php

// Plugin definition
$plugin = array(
  'title' => t('CB My Page'),
  'category' => t('Miscellaneous'),
  'icon' => 'cb_user.png',
  'theme' => 'panels_cb_user',
  'css' => 'cb_user.css',
  'js' => 'cb_user.js',
  'admin css' => 'cb_user.admin.css',
  'regions' => array(
    'top_left' => t('Top Left'),
    'top_right' => t('Top Right'),
    'middle_left' => t('Middle Left'),
    'middle_right' => t('Middle Right'),
    'bottom_left' => t('Bottom Left'),
    'bottom_center' => t('Bottom Center'),
    'bottom_right' => t('Bottom Right'),
  ),
);

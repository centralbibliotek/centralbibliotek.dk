<?php

/**
 * @file
 * CB - AT Three column 25, 42, 33 template.
 */

/**
 * Implements hook_panels_layouts.
 */
function cb_cb_3col_special_panels_layouts() {
  $layout['cb_3col_special'] = array(
    'title'    => t('CB - AT Three column 25, 42, 33'),
    'category' => t('Centralbibliotek'),
    'icon'     => 'cb_3col_special.png',
    'theme'    => 'cb_3col_special',
    'admin css' => 'cb_3col_special.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'cb3_top'    => t('Top (conditional)'),
      'cb3_first'  => t('Left'),
      'cb3_second' => t('Center'),
      'cb3_third'  => t('Right'),
      'cb3_bottom' => t('Bottom (conditional)'),
    ),
    // AT Core.
    'type' => 'three',
    'options' => array(
      'cb3' => 'default',
      'cb3-stack' => 'stack',
    ),
    'styles' => array(
      'cb3' => array(
        'css' => array(
          '20' => array('.cb3 > .region-cb3-first' => 'width:20%'),
          '46' => array('.cb3 > .region-cb3-second' => 'width:46.666666%'),
          '33' => array('.cb3 > .region-cb3-third' => 'width:33.333333%'),
        ),
      ),
      'cb3-stack' => array(
        'css' => array(
          'fdw' => array('.cb3 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $layout;
}

/**
 * Preprocess variables for cb-3col-special.tpl.php.
 */
function template_preprocess_cb_3col_special(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}

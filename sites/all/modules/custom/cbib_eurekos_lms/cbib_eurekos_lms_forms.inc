<?php
function cbib_eurekos_lms_seach_acitivty_form()
{
    $form = array();
    $form['eurekos_search_field'] = array(
        '#type' => 'textfield',
        '#title' => t('Find din aktivitet'),
        '#size' => 30,
        '#maxlength' => 60,
        '#autocomplete_path' => 'admin/obb/eurekos/activties/autocomplete',
        '#default_value' => '',
        '#weight' => -1,
        '#attributes' => array('placeholder' => 'Indtast navn på din aktivitet..')
      );

    return $form;
}
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
function cbib_eurekos_lms_online_only_free_signup_form()
{
    $form = array();
    $form['eurekos_search_field'] = array(
        '#type' => 'button',
        '#title' => t('Start kursus'),
        '#attributes' => array('class' => array('commons-events-button'))
      );
    $form['#submit'][] = "cbib_eurekos_lms_online_only_free_signup_form_submit";
    return $form;
}
function cbib_eurekos_lms_online_only_free_signup_form_submit(&$form,&$form_state,$form_id)
{
  global $user;
  $node = menu_get_object();
  cbib_eurekos_lms_handle_sign_up($node,$user);
  
}
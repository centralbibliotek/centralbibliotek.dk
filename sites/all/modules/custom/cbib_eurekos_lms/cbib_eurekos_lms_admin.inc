<?php
function cbib_eurekos_lms_form_admin()
{
    $form = array();
    $form['eurekos_client_id'] = array(
        '#type' => 'textarea', 
        '#title' => t('client id'), 
        '#default_value' => variable_get('eurekos_client_id',''), 
        '#required' => TRUE,
      );
    $form['eurekos_client_secret'] = array(
        '#type' => 'textarea', 
        '#title' => t('client secret'), 
        '#default_value' => variable_get('eurekos_client_secret',''), 
        '#required' => TRUE,
      );
      $form['eurekos_server_url'] = array(
        '#type' => 'textfield', 
        '#title' => t('server url'), 
        '#default_value' => variable_get('eurekos_server_url',''), 
        '#required' => TRUE,
      );
    return system_settings_form($form);
}
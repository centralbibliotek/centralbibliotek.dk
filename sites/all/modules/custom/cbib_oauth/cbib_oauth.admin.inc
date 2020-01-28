<?php
function cbib_oauth_form_admin()
{
    $form = array();
    $form['eurekos_organisation_map'] = array(
        '#type' => 'textarea', 
        '#title' => t('Mapning af eurekos organisations( cbregion:eurekosId)'), 
        '#default_value' => variable_get('eurekos_organisation_map',''), 
        '#size' => 120,   
        '#required' => TRUE,
      
      );
    return system_settings_form($form);
}
<?php
/*
* Contains configuration options for cbib oc hooks.
*/
function oc_template_overwrites_admin()
{
    $form = array(
        
      );
     $form['oc_hooks_prevent_email_dispatch'] = array(
        '#type' => 'radios',
        '#title' => t('Sørg for at der ikke bliver sendt emails ud til brugere'),
        '#default_value' => variable_get('oc_hooks_prevent_email_dispatch', 0),
        '#description' => t(""),
        '#required' => TRUE,
        '#options' => array(t('Slået Fra'),t('Slået Til')),
     );
     return system_settings_form($form);
}

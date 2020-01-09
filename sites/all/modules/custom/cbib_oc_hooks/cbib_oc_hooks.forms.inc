<?php 

function cbib_oc_hooks_broadcast_to_group_followers_form($form, &$form_state, $entity_type, $entity)
{
    // we'll need this info when we submit the form
    $path = drupal_get_path('module', 'cbib_oc_hooks');
    drupal_add_js($path.'/js/multi-select/js/jquery.multi-select.js');
    drupal_add_js($path.'/js/multi-select-control.js');
    drupal_add_css($path.'/js/multi-select/css/multi-select.css');

    $entity_id = $entity->nid;
    $form_state['entity'] = array(
      'entity_id' => $entity_id,
      'entity_type' => $entity_type
    );
  
    $form['subject'] = array(
      '#type' => 'textfield',
      '#title' => t('Subject'),
      '#description' => t('The subject of the message.'),
      '#required' => TRUE,
      '#size' => 40,
      '#maxlength' => 40,
    );
    $form['message'] = array(
      '#type' => 'textarea',
      '#title' => t('Message'),
      '#description' => t(
        'Enter the message you want to send to %name registrants. Tokens are supported if the module is enabled, E.g., [node:title].',
        array('%name' => entity_label($entity_type, $entity))
      ),
      '#required' => TRUE,
      '#cols' => 60,
      '#rows' => 5,
    );

    $result = db_select('flag_content', 'c')
    ->fields('c',array('uid'))
    ->condition('content_id', $entity_id,'=')
    ->condition('fid', 4,'=')
    ->execute()
    ->fetchAll();

    $user_select_list = array();
    foreach($result as $obj)
    {
        $user = user_load($obj->uid);
        $user_select_list[  $user->mail] =$user->field_name_first['und'][0]['value']." " . $user->field_name_last['und'][0]['value'];
    }
    asort($user_select_list);

    $form['target_follower_field_group'] = array(

      '#type' => 'fieldset', 
    
      '#title' => t('Vælg udvalgte følgere at sende til ( dette er ikke nødvendigt hvis du vil sende til alle følgere)'), 
    
      '#weight' => 5, 
    
      '#collapsible' => TRUE, 
    
      '#collapsed' => TRUE,
      '#weight' => -5,
    );

    $form['target_follower_field_group']['target_follower_mails'] = array(
      '#type' => 'select',
        '#multiple' => TRUE,
      '#title' => t('Vælg modtagere'),
      '#required' => FALSE,
      '#options' => $user_select_list,
      '#size' => 5,
      
      '#default_value' => '',
);
  
    // Message preview
    if (isset($form_state['registration_broadcast_preview'])) {
      $form['preview'] = array(
        '#type' => 'textarea',
        '#title' => t('Message preview'),
        '#value' => $form_state['registration_broadcast_preview'],
        '#resizable' => FALSE,
        '#disabled' => TRUE
      );
    }  
    $form['actions']['send'] = array(
      '#type' => 'submit',
      '#value' => t('Send'),
    );
  
    return $form;
}
function cbib_oc_hooks_broadcast_to_group_followers_form_submit($form, &$form_state)
{
    global $language;
    //prepare
    $from = variable_get('site_mail', ''); // get the site mail.
    $entity_type = $form_state['entity']['entity_type'];
    $entity_id = $form_state['entity']['entity_id'];
    $subject = $form_state['values']['subject'];
    $message = $form_state['values']['message'];
    $target_follower_mails = isset($form_state['values']['target_follower_mails']) ? $form_state['values']['target_follower_mails'] : null;
    $mail_list = null;
    if(is_array($target_follower_mails) && count($target_follower_mails) <= 0)
    {
      //Load follows to recive the broadcast.
      $result = db_select('flag_content', 'c')
      ->fields('c',array('uid'))
      ->condition('content_id', $entity_id,'=')
      ->condition('fid', 4,'=')
      ->execute()
      ->fetchAll();

      $mail_list = array();
      foreach($result as $obj)
      {
          $user = user_load($obj->uid);
          array_push($mail_list,$user->mail);
      }
    }
    else
    {
      $mail_list = $target_follower_mails;
    }
    $success_count = 0;
    foreach($mail_list as $mail)
    {
        //fire the the emails.
        $params = array(
            'subject' => $subject,
            'message' => $message,
          );
        $result = drupal_mail('registration', 'broadcast',
          $mail, $language, $params, $from
        );
        $result['result'] = true;
        if ($result['result']) {
            $success_count++;
          }
        else {
        watchdog('registration', 'Failed to send registration broadcast email to %email.',
            array('%email' => $mail), WATCHDOG_ERROR
        );
        }
        
    }
    if ($success_count) {
      drupal_set_message(t('Registration broadcast sent to @count registrants.',
          array('@count' => $success_count)
      ));
      watchdog('registration', 'Registration broadcast sent to @count registrants.',
          array('@count' => $success_count)
      );
  }
  else{
    drupal_set_message(t('Broadcast could not be sent.'));
  }
}
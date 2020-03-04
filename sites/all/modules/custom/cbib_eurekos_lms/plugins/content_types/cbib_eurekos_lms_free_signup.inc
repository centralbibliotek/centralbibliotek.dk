<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
    'title' => t('Link to eurekos CMS when no signup required'),
    'description' => t('Linker til eurekos CMS kursus'),
    'category' => t('cbib'),
    'single' => TRUE,
    'content type' => 'cbib_eurekos_lms_free_signup',
    'all contexts' => TRUE,
  );
  /**
* Output function for the '[content_type]' content type.
*/
function cbib_eurekos_lms_cbib_eurekos_lms_free_signup_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
    if(!user_is_logged_in())
    {

    }
    else
    {
      $node = !empty($context['panelizer']->data) ? $context['panelizer']->data : NULL;
      $block = new stdClass();
      $block->title = '';
      //check if course is eurekos activity and if seats are unlimited.
      //maby differate on types of courses ?
      if($node->field_eurekos_event['und'][0]['value'] == 1 && $node->field_number_of_attendees['und'][0]['value'] == 0)
      {
          //Show a start course button.   
          if (!function_exists('commons_events_attend_event_form')
            || !function_exists('commons_events_cancel_event_form')) {
            module_load_include('inc', 'commons_events', 'includes/commons_events.forms');
          }
          $attendee_count = isset($variables['attendee_count']) ? $variables['attendee_count'] : 0;

          $registration_type = registration_get_entity_registration_type('node', $node);
          $registration = entity_get_controller('registration')->create(array(
            'entity_type' => 'node',
            'entity_id' => $node->nid,
            'type' => $registration_type,
            'author_uid' => $user->uid,
          ));

          /*$markup = theme('commons_events_attending_event', array(
            'event' => $node,
            'attendee_count' => commons_events_get_raw_attendee_count($node),
          ));*/
  
          //$block->content = array('#markup' => render($markup));
      }
    }
    return $block;
}


/**
* Returns an edit form for the custom type.
*/
function cbib_eurekos_lms_cbib_eurekos_lms_free_signup_content_type_edit_form($form, $form_state) {
    return $form;
  }
   
  /**
  * Returns an edit form for the custom type.
  */
  function cbib_eurekos_lms_cbib_eurekos_lms_free_signup_content_type_edit_form_submit($form, $form_state) {
    return $form;
  }

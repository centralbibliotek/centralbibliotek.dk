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

    $node = !empty($context['panelizer']->data) ? $context['panelizer']->data : NULL;
    $block = new stdClass();
    $block->title = '';
    //check if course is eurekos activity and if seats are unlimited.
    //maby differate on types of courses ?
    $field = $node->field_eurekos_event;
    if($node->field_eurekos_event['und'][0]['value'] == 1 && $node->field_number_of_attendees['und'][0]['value'] == 0)
    {
        //Show a start course button.   
        $block->content = '<a class="action-item-primary" style="color:white;" href="'.$node->field_eurekos_url['und'][0]['value'].'">Start Kursus</a>';
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
/**
 * Implements hook_commons_bw_group_widget().
 */
/*function cbib_oc_license_pr_bw_commons_bw_group_dont_hook_widget() {
    return array(
      'commons_browsing_widget_license_og_pr' => array(
        'title' => t('Formidling og pr'),
        'type' => 'view',
        'vid' => 'commons_browsing_widget_license_og_pr',
        'display' => 'default',
        'weight' => 10,
        'default' => true,
      ),
    );
  }*/
<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Promote license PR block'),
  'description' => t('a block that links to the PR promotion tab'),
  'category' => t('Commons'),
  'single' => TRUE,
  'content type' => 'commons_bw_promote_pr_block',
  'all contexts' => TRUE,
);
 
/**
* Output function for the '[content_type]' content type.
*/
function cbib_oc_license_pr_bw_commons_bw_promote_pr_block_content_type_render($subtype, $conf, $panel_args, $context) {
  global $user;
  /*
   * Dont output the commons bw widget if the group is admin approval
   * with hidden content from non members.
   */
    $block = new stdClass();
    $block->title = '';
    $onclick = "jQuery('#quicktabs-tab-cbib_oc_license_pr_bw-commons_browsing_widget_single_license_og_pr').click();jQuery('html, body').animate({ scrollTop: jQuery('#quicktabs-tab-cbib_oc_license_pr_bw-commons_browsing_widget_single_license_og_pr').offset().top-100}, 2000);";
    $block->content = '<div style="text-align:center;"><button style="background-color:WhiteSmoke;cursor:hand" onclick="'.$onclick.'"><i class="fa fa-2x fa-download" aria-hidden="true"></i><b><br/>Hent formidlingsmaterialer</b> <br/></button></div>';
    return $block;
}
 
/**
* Returns an edit form for the custom type.
*/
function cbib_oc_license_pr_bw_commons_bw_promote_pr_block_content_type_edit_form($form, $form_state) {
  return $form;
}
 
/**
* Returns an edit form for the custom type.
*/
function cbib_oc_license_pr_bw_commons_bw_promote_pr_block_content_type_edit_form_submit($form, $form_state) {
  return $form;
}

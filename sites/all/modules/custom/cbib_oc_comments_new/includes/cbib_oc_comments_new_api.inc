<?php
function cbib_oc_comments_add_wrappers(&$comments) {
    //remove a comment.
    foreach ($comments as $key => $comment) {
        if ($comment['comment_body']['#object']->pid != "0") {
            $prefix = $comment['#comment']->divs >= 0 ? str_repeat('<div class="indented">', $comment['#comment']->depth) : "\n" . '<div class="indented">';
            $suffix = $comment['#comment']->divs >= 0 ? str_repeat('</div>', $comment['#comment']->depth) : "\n" . '</div>';
            //$prefix .= $comment['#comment']->divs <= 0 ? str_repeat('</div>', abs($comment['#comment']->divs)) : "\n" . '<div class="indented">';
            $comments[$key]['#prefix'] = '<div class="cbib-oc-comment-single-ajax-wrap-' . $key . '">' . $prefix . '<div>';
            $comments[$key]['#suffix'] = '</div></div>' . $suffix;
        } else {
            $comments[$key]['#prefix'] = '<div class="cbib-oc-comment-single-ajax-wrap-' . $key . '"><div>';
            $comments[$key]['#suffix'] = '</div></div>';
        }


        if ($comment['#comment']->depth >= 2) {
            //Unset the reply button for the max number of levels of comments.

            unset($comments[$key]['links']['comment']['#links']['comment-reply']);
        }
    }
}

function add_comment_ajax_elements(&$comments) {
    foreach ($comments as $key => $comment) {
        $comment[]['cbib_oc_comments_new'] = array('#markup' => "<input type='hidden' id='cbib-oc-comments-new-nid' value='" . $key . "' />");
    }
}

function cbib_oc_comments_get_view_classes()
{
    return array(".view-id-commons_bw_all",".view-id-commons_browsing_widget_license_og_pr_single",".view-id-commons_browsing_widget_license_og_pr");
}
function cbib_oc_comments_get_active_quick_tab_selector()
{
    return ".quicktabs-tabpage:not(.quicktabs-hide) ";
}
function cbib_oc_comments_get_not_active_quick_tab_selector()
{
    return ".quicktabs-hide";
}
function cbib_oc_comments_is_license_page()
{
    $alias = $_SERVER['HTTP_REFERER'];
    if(strpos($alias, '/licens/') !== false && strpos($alias, '/licens/formidling-og-pr') === false)
    {
        return true;
    }
    return false;
}
function cbib_oc_comments_is_single_license_page()
{
    $alias = $_SERVER['HTTP_REFERER'];
    if(strpos($alias, '/licens/formidling-og-pr') !== false)
    {
        return true;
    }
    return false;
}
function cbib_oc_comments_get_active_quick_tab()
{
    
}
function cbib_oc_comments_get_single_license_pr_quicktab_tab_def()
{
   return array(
    'commons_browsing_widget_single_license_og_pr' => array(
      'title' => t('Formidling og pr'),
      'type' => 'view',
      'vid' => 'commons_browsing_widget_license_og_pr_single',
      'display' => 'default',
      'weight' => 10,
    ),
  );
}
function cbib_oc_comments_get_license_pr_quicktab_tab_def()
{
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
}
function cbib_oc_comments_get_restore_quicktabs_command()
{
    
}
function cbib_oc_comments_new_is_full_node_view()
{
    
}
<?php
/*
 * Get full txt for viewing + read less link
 */
function cbib_oc_comments_read_more()
{
    
}
/*
 * Get teaser text for viewing + read more link
 */
function cbib_oc_comments_read_less()
{
    
}
/*
 * Delete comment callback
 */
function cbib_oc_comments_new_comment_remove($cid) {
    $comment = comment_load($cid);
    $node = node_load($comment->nid);
    $group_id = $node->og_group_ref['und'][0]['target_id'];
    comment_delete($cid);
    $comment_form = comment_node_page_additions($node);
    unset($comment_form['comment_form']);
    if(sizeof($comment_form['comments']) == 0)
    {
        $comment_form['#prefix'] = '<div class="cbib-oc-comment-ajax-wrap-' . $node->nid . '"><div>';
    }
    else
    {
        $comment_form['#prefix'] = '<div class="cbib-oc-comment-ajax-wrap-' . $node->nid . '"><a title="Skjul kommentar boks" onclick="jQuery(this).parent().remove()" style="float:right;font-size:26px;color:black;cursor:pointer"><i class="fa fa-times" aria-hidden="true"></i></a><div>';
    }
    $comment_form['#suffix'] = '</div></div>';
    $commands[] = ajax_command_replace('.comment-form', ''); //remove form on success.
    
    $views = cbib_oc_comments_get_view_classes();
    foreach($views as $view_class)
    {
        $commands[] = ajax_command_replace('.cbib-oc-comment-ajax-wrap-' . $node->nid, '');
        $commands[] = ajax_command_replace($view_class.' .view-content .views-row > #node-' . $node->nid . " nav ul .comment-comments a span", '<span class="action-item-small-append">' . (sizeof($comment_form['comments']) != 0 ? sizeof($comment_form['comments']) - 2: 0 ) . '</span>');
        $commands[] = ajax_command_append($view_class.' .view-content .views-row > #node-' . $node->nid, drupal_render($comment_form)); //remove form on success.
    }
    $command[] = cbib_oc_comments_get_restore_quicktabs_command();
    return array('#type' => 'ajax', '#commands' => $commands);
}
/*
 * Delete post callback
 */
function cbib_oc_comments_new_post_remove($nid) {
    $node = node_load($nid);
    $group_id = $node->og_group_ref['und'][0]['target_id'];
    node_delete($nid);
    unset($_POST);
       
    $commands[] = ajax_command_replace('.cbib-oc-comment-ajax-wrap-' . $node->nid, '');
    if(cbib_oc_comments_is_license_page())
    {
        $tabs = commons_bw_get_tab_definitions('group');
        $tabs = array_merge($tabs,cbib_oc_comments_get_single_license_pr_quicktab_tab_def());
        $html = drupal_render(cbib_oc_license_pr_bw_generate_group_widget(node_load($group_id),$tabs));
        $commands[] = ajax_command_replace('#quicktabs-cbib_oc_license_pr_bw', $html);
    }
    elseif(cbib_oc_comments_is_single_license_page())
    {
        $html = drupal_render(cbib_oc_license_pr_bw_generate_group_widget(node_load($group_id),cbib_oc_comments_get_license_pr_quicktab_tab_def()));
        $commands[] = ajax_command_replace('#quicktabs-cbib_oc_license_pr_bw', $html);
    }
    else
    {
        $html = drupal_render(commons_bw_generate_group_widget(node_load($group_id)));
        $commands[] = ajax_command_replace('#quicktabs-commons_bw', $html);
    }

    
    return array('#type' => 'ajax', '#commands' => $commands);
}
/*
 * Update post title and body callback
 */
function cbib_oc_comments_post_update($nid) {
    //get the post
    $node = node_load($nid);
    $node->body['und'][0]['value'] = check_plain($_POST['UpdatedText']);
    $node->body['und'][0]['safe_value'] = _text_sanitize($_POST['UpdatedText']);
    $node->title = $_POST['UpdatedTitle'] != null ? check_plain($_POST['UpdatedTitle']) : "Ingen titel";
    node_save($node);

    $selector_save_btn = ".oc-comments-new-save-wrap";
    $selector_edit_btn = ".oc-comments-new-edit-wrap";
    $selector_reply_btn = ".oc-comments-new-reply-wrap";
    $selector_delete_btn = ".oc-comments-new-delete-wrap";
    $selector_cancel_btn = ".oc-comments-new-cancel-wrap";
    $commands[] = ajax_command_invoke($selector_save_btn, 'remove');
    $commands[] = ajax_command_invoke($selector_cancel_btn, 'remove');
    $commands[] = ajax_command_invoke($selector_edit_btn, 'show');
    $commands[] = ajax_command_invoke($selector_reply_btn, 'show');
    $commands[] = ajax_command_invoke($selector_delete_btn, 'show');


    $commands[] = ajax_command_replace('.oc-comments-edit-area-title', '<a href="/' . drupal_get_path_alias("node/" . $node->nid) . '" >' . $_POST['UpdatedTitle'] . "</a>");
    $commands[] = ajax_command_replace('.oc-comments-edit-area', $_POST['UpdatedText']);

    return array('#type' => 'ajax', '#commands' => $commands);
}
/*
 * Update post title and body callback
 */
function cbib_oc_comments_comment_update($cid) {
    $comment = comment_load($cid);
    $comment->subject = check_plain($_POST['UpdatedTitle']);
    $comment->comment_body['und'][0]['value'] = check_plain($_POST['UpdatedText']);
    $comment->comment_body['und'][0]['safe_value'] = _text_sanitize($_POST['UpdatedText']);
    comment_save($comment);


    $selector_save_btn = ".oc-comments-new-save-comment-wrap";
    $selector_edit_btn = ".comment-edit";
    $selector_reply_btn = ".comment-reply";
    $selector_delete_btn = ".comment-delete";
    $selector_cancel_btn = ".oc-comments-new-cancel-wrap";
    
    $commands[] = ajax_command_invoke($selector_save_btn, 'remove');
    $commands[] = ajax_command_invoke($selector_cancel_btn, 'remove');
    $commands[] = ajax_command_invoke($selector_edit_btn, 'show');
    $commands[] = ajax_command_invoke($selector_reply_btn, 'show');
    $commands[] = ajax_command_invoke($selector_delete_btn, 'show');
    $commands[] = ajax_command_replace('.oc-comments-edit-area-title', '<a href="/' . drupal_get_path_alias("comment/" . $comment->cid) . '#' . $comment->cid . '" >' . $_POST['UpdatedTitle'] . "</a>");
    $commands[] = ajax_command_replace('.oc-comments-edit-area', $_POST['UpdatedText']);

    return array('#type' => 'ajax', '#commands' => $commands);
}
/*
 * Create new post callback
 */
function cbib_oc_comments_new_post_add($form, &$form_state) {
    $node = $form['#entity'];
    node_submit($node);
    // Mark the node as created with the partial form
    $node->partial_node_form = TRUE;
    field_attach_submit('node', $node, $form, $form_state);

    $wrapper = entity_metadata_wrapper('node', $node);

    // If the node has a body and doesn't has a title, create a title from the
    // body.
    if ((empty($wrapper->title_field) || !$wrapper->title_field->value()) && empty($node->title)) {
        if (!empty($wrapper->body) && $wrapper->body->value()) {
            $title = htmlspecialchars_decode($wrapper->body->value->value());

            // Strip tags and whitespaces.
            $title = preg_replace('/[\t\n\r\0\x0B]/', '', strip_tags($title));

            // Shorten the title.
            $node->title = truncate_utf8($title, 30, TRUE, TRUE);
        }
    }

    // Set the group audience.
    if (!empty($form_state['group_id'])) {
        $wrapper->{OG_AUDIENCE_FIELD}->set(array($form_state['group_id']));
    }

    $node->form_state = $form_state;

    $wrapper->save();

    // Notify about the node creation.
    //$arguments = array('@type' => node_type_get_name($node), '%title' => $node->title);
    //drupal_set_message(t('@type %title has been created.', $arguments));
    unset($_POST);
    
    if(cbib_oc_comments_is_license_page())
    {
        $tabs = commons_bw_get_tab_definitions('group');
        $tabs = array_merge($tabs,cbib_oc_comments_get_single_license_pr_quicktab_tab_def());
        
        $html = drupal_render(cbib_oc_license_pr_bw_generate_group_widget(node_load($form_state['group_id']),$tabs));
        $commands[] = ajax_command_replace('#quicktabs-cbib_oc_license_pr_bw', $html);
    }
     elseif(cbib_oc_comments_is_single_license_page())
    {
        $html = drupal_render(cbib_oc_license_pr_bw_generate_group_widget(node_load($group_id),cbib_oc_comments_get_license_pr_quicktab_tab_def()));
        $commands[] = ajax_command_replace('#quicktabs-cbib_oc_license_pr_bw', $html);
    }
    else
    {
        $html = drupal_render(commons_bw_generate_group_widget(node_load($form_state['group_id'])));
        $commands[] = ajax_command_replace('#quicktabs-commons_bw', $html); 
    }
    //Click on the active quicktab!
    $active_quick_tab = cbib_oc_comments_get_active_quick_tab();
    
    return array('#type' => 'ajax', '#commands' => $commands);
}
/*
 * Create new comment callback
 */
function cbib_oc_comments_new_comment_add($form, &$form_state) {
    //comment_form_validate($form, $form_state);
    $comment = comment_form_submit_build_comment($form, $form_state);
    $comment->subject = $form_state['input']['subject']; //this is broken for some reason. body is filled fine.
    comment_save($comment);
    //Get all comments for the node.
    $comment_form = comment_node_page_additions($form['#node']);
    unset($comment_form['comment_form']);

    $comment_form['#prefix'] = '<div class="cbib-oc-comment-ajax-wrap-' . $form['#node']->nid . '"><a title="Skjul kommentar boks" onclick="jQuery(this).parent().remove()" style="float:right;font-size:26px;color:black;cursor:pointer"><i class="fa fa-times" aria-hidden="true"></i></a><div>';
    $comment_form['#suffix'] = '</div></div>';
    
    //check which view is being viewed
    $active_tab_select = cbib_oc_comments_get_active_quick_tab_selector();
    
    $views = cbib_oc_comments_get_view_classes();
       
    $rendered_comment_form = drupal_render($comment_form);
    $commands[] = ajax_command_replace('.comment-form', ''); //remove form on success.
    $commands[] = ajax_command_replace('.cbib-oc-comment-ajax-wrap-' . $form['#node']->nid, '');
    if ($comment->pid != null) {
        
        $html = '<span class="action-item-small-append">' . (sizeof($comment_form['comments']) != 0 ? sizeof($comment_form['comments']) - 2: 0 ) . '</span>';
        foreach($views as $view_class)
        {
            $commands[] = ajax_command_replace($view_class.' .view-content .views-row > #node-' . $form['#node']->nid . " nav ul .comment-comments a .action-item-small-append", $html);
            $commands[] = ajax_command_append($active_tab_select.$view_class.' .view-content .views-row > #node-' . $form['#node']->nid, $rendered_comment_form); //remove form on success.
        }
        
    } else {        
        if(sizeof($comment_form['comments'])-2 > 1)
         {
            $html = '<span class="action-item-small-append">' . (sizeof($comment_form['comments']) != 0 ? sizeof($comment_form['comments']) - 2: 0 ) . '</span>';
            foreach($views as $view_class)
            {
             $commands[] = ajax_command_replace($view_class.' .view-content .views-row > #node-' . $form['#node']->nid . " nav ul .comment-comments a .action-item-small-append", $html);
            }
         }
         else
         {
             $html = '<li class="comment-comments"><a class="action-item-small action-item-inline link-with-counter" style="margin-right:5px"><span class="action-item-small-append">' . (sizeof($comment_form['comments']) != 0 ? sizeof($comment_form['comments']) - 2: 0 ) . '</span></a></li>';
            foreach($views as $view_class)
            {
             $commands[] = ajax_command_prepend($view_class.' .view-content .views-row > #node-' . $form['#node']->nid . " nav ul", $html);
            }
         }
         foreach($views as $view_class)
        {
            $commands[] = ajax_command_append($active_tab_select.$view_class.' .view-content .views-row > #node-' . $form['#node']->nid, $rendered_comment_form); //remove form on success.
        }
    }

    return array('#type' => 'ajax', '#commands' => $commands);
}
/*
 * Get all post comments callback
 */
function cbib_oc_comments_new_comment_get($nid) {
    global $user;
    $node = node_load($nid);

    $comment_form = comment_node_page_additions($node);
    unset($comment_form['comment_form']);
    cbib_oc_comments_add_wrappers($comment_form['comments']);
    $comment_form['#prefix'] = '<div class="cbib-oc-comment-ajax-wrap-' . $node->nid . '"><a title="Skjul kommentar boks" onclick="jQuery(this).parent().remove()" style="float:right;font-size:26px;color:black;cursor:pointer"><i class="fa fa-times" aria-hidden="true"></i></a><div>';
    $comment_form['#suffix'] = '</div></div>';
    //$comment_form['close-btn'] = array('#markup'=>"");
    //$commands[] = ajax_command_replace('.comment-form', ''); //remove form on success.
    $active_tab_select = cbib_oc_comments_get_active_quick_tab_selector();
    $views = cbib_oc_comments_get_view_classes();
    
    $commands[] = ajax_command_replace('.cbib-oc-comment-ajax-wrap-' . $node->nid, ''); // kill other open ones.
    $form_render = drupal_render($comment_form);
    foreach($views as $view_class)
    {
        $commands[] = ajax_command_append($active_tab_select.$view_class.' .view-content .views-row > #node-' . $node->nid,$form_render ); //remove form on success.
    }

    return array('#type' => 'ajax', '#commands' => $commands);
}
/*
 * Get comment form
 */
function cbib_oc_comments_render_comment_form($nid, $pid = null) {
    $comment = new stdClass;
    $comment->nid = $nid;
    $comment->pid = $pid;
    $form_id = 'comment_form';
    $form_state = array();
    $form_state['build_info']['args'] = array($comment);
    $form_state['build_info']['files']['menu'] = array();
    //$form_state['triggering_element']['#ajax']['callback'] = 'cbib-oc-comments-save-comment-btn';
    $form = drupal_build_form($form_id, $form_state);
    $form['#cache'] = TRUE;
    $form['Save']['Save_knap'] = array(
        '#type' => 'button',
        '#id' => 'cbib-oc-comments-save-comment-btn',
        '#value' => t('Save comment'),
        '#weight' => 1,
        '#ajax' => array('callback' => 'cbib_oc_comments_new_comment_add',
            'wrapper' => 'checkboxes-div',
            'method' => 'replace',
            'effect' => 'fade'));

    $form['Annuller']['Annuller_knap'] = array(
        '#type' => 'button',
        '#value' => t('Annuller'),
        '#weight' => 9,
        '#attributes' => array('onclick' => 'jQuery(this).parent().parent().remove();'),
    );
    uasort($form, 'element_sort');
    $form['Save']['Save_knap'] = ajax_pre_render_element($form['Save']['Save_knap']);
    unset($form['actions']);
    unset($form['comment_body']['und'][0]['format']);
    unset($form['author']);
    unset($form['actions']['preview']);
    form_set_cache($form['#build_id'], $form, $form_state);
    $output_html = render($form);
    $js = drupal_add_js();
    //$commands[] = ajax_command_replace(NULL, theme('status_messages'));
    $settings = call_user_func_array('array_merge_recursive', $js['settings']['data']);
    return array('html' => $output_html, 'settings' => $settings);
}
(function ($) {
    var ajax_throb = '<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>'
    $(document).ready(function () {
        /*
         * Comment post form.
         */
        $('body').on('click', '.oc-comments-new-reply-btn', function (e) {
            
            var elem = $(e.currentTarget);
            var comment_elem = elem.parent().parent().parent().parent().find('.comment-form')
            if (comment_elem.length == 0)
            {
                elem.parent().parent().parent().parent().find('.oc-comments-new-reply-btn').parent().parent().append($(ajax_throb));
                $('.comment-form').remove();
                var nid = elem.parent().parent().parent().parent().parent();
                var nid = nid.find('#cbib-oc-comments-new-nid');
                $.ajax({
                    method: "GET",
                    url: "/cbib/oc/comments/ajax/getform/" + nid.val(),
                })
                        .done(function (msg) {
                            elem.parent().parent().parent().parent().find('.ajax-progress').remove();
                            var data = msg;

                            elem.parent().parent().parent().parent().append(data.html);
                            $.extend(Drupal.settings, data.settings)

                            //$('.oc-comments-new-reply-btn').click();
                            Drupal.attachBehaviors('#cbib-oc-comments-save-comment-btn') //messes with the jump menu.
                        });
            } else
            {
                $('.comment-form').remove();
            }
            return false;
        });
        /*
         * Load comments for post.
         */
        $('body').on('click', '.comment-comments', function (e) {
            
            var test = $(this);
            var nid = test.parent().parent().parent().parent().find('#cbib-oc-comments-new-nid').val();
            var comments = test.parent().parent().parent().parent().find('.cbib-oc-comment-ajax-wrap-' + nid);
            if (comments.length == 0)
            {

                test.attr('id', 'js-load-comments-ajax-' + nid);
                var element_settings = {
                    url: "/cbib/oc/comments/ajax/get/" + nid,
                    event: 'click',
                    progress: {
                        type: 'throbber'
                    }
                };

                Drupal.ajax['js-load-comments-ajax-' + nid] = new Drupal.ajax('js-load-comments-ajax-' + nid, this, element_settings);
                test.click();
                test.unbind('click');
                delete Drupal.ajax['js-load-comments-ajax-' + nid];
            } else
            {
                comments.remove();
            }
            //test.remove();
            return false;
        });
        /*
         * comment reply form
         */
        $('body').on('click', '.comment-reply', function () {
            
            var elem = $(this);
            var urlparts = elem.find('a').attr('href').split("/");
            var nid = urlparts[3];
            var pid = urlparts[4];
            var comment_elem = elem.parent().parent().find('.comment-form')
            if (comment_elem.length == 0)
            {
                elem.parent().parent().find('.comment-reply').append($(ajax_throb));
                $('.comment-form').remove();
                $.ajax({
                    method: "GET",
                    url: "/cbib/oc/comments/ajax/getform/" + nid + "/" + pid,
                })
                        .done(function (msg) {
                           
                            elem.parent().parent().find('.ajax-progress').remove();
                            var data = msg;

                            elem.parent().parent().append(data.html);
                            $.extend(Drupal.settings, data.settings)

                            //$('.oc-comments-new-reply-btn').click();
                            Drupal.attachBehaviors('#cbib-oc-comments-save-comment-btn');
                        });
            } else
            {
                $('.comment-form').remove();
            }
            return false;
        });
        /*
         * Edit post body
         */
        $('body').on('click', '.oc-comments-new-edit-btn', function (e) {
            $('.oc-comments-new-cancel-wrap').click();
            var comment_elem = $(e.currentTarget).parent().parent().parent().parent().parent();
            var body_elem = comment_elem.find(".field-name-body").find('.field-item');
            var title_elem = $(comment_elem.find('.node-title'));

            var text = body_elem.text();
            var title = title_elem.find('a').text();
            title_elem.empty();
            body_elem.empty();

            var text_area_body = $('<textarea class="oc-comments-edit-area" style="height:100px;"></textarea>');
            var text_area_title = $('<textarea class="oc-comments-edit-area-title" style="heigth:50px"></textarea>');

            text_area_body.text(text);
            text_area_title.text(title);
            body_elem.append(text_area_body);
            title_elem.append(text_area_title)

            //hide buttons and insert the save.
            comment_elem.find('.links').find('.oc-comments-new-reply-wrap').hide();
            comment_elem.find('.links').find('.oc-comments-new-edit-wrap').hide();
            comment_elem.find('.links').find('.oc-comments-new-delete-wrap').hide();
            comment_elem.find('.links').append('<li class="oc-comments-new-save-wrap"><span class="action-item-small action-item-inline"><div class="oc-comments-new-edit-save-btn"><i class="fa fa-floppy-o" aria-hidden="true"></i>Gem</div></span></li>');
            comment_elem.find('.links').append('<li class="oc-comments-new-cancel-wrap"><span class="action-item-small action-item-inline"><div class="oc-comments-new-edit-save-cancel-btn">Fortryd</div></span></li>');

        });
        /*
         * Save post updates.
         */
        $('body').on('click', '.oc-comments-new-save-wrap', function (e) {
            //get text and submit to backend.
            var elem = $(e.currentTarget);
            var text_area = elem.parent().parent().parent().parent().find('.oc-comments-edit-area');
            var text = text_area.val();

            var textarea_title = elem.parent().parent().parent().parent().find('.oc-comments-edit-area-title');
            var title_text = textarea_title.val();

            var nid = elem.parent().parent().parent().parent().find('#cbib-oc-comments-new-nid').val();
            // Drupal.settings.ajaxPageState.updatedText = text;
            elem.attr('id', 'js-load-save_edit-ajax-' + nid);
            var element_settings = {
                url: "/cbib/oc/comments/ajax/update/" + nid,
                event: 'click',
                progress: {
                    type: 'throbber'
                },
                submit: {
                    'js': true,
                    'UpdatedText': text,
                    'UpdatedTitle': title_text,
                }
            };
            Drupal.ajax['js-load-save_edit-ajax-' + nid] = new Drupal.ajax('js-load-save_edit-ajax-' + nid, this, element_settings);
            elem.click();
            elem.unbind('click');
            delete Drupal.ajax['js-load-save_edit-ajax-' + nid];

        });
        /*
         * Delete post
         */
        $('body').on('click', '.oc-comments-new-delete-btn', function (e) {


            if (confirm('Er du sikker på du vil slette denne post og alle dens kommentare ?')) {
                // Save it!
                var elem = $(e.currentTarget);
                var nid = elem.parent().parent().parent().parent().parent().find('#cbib-oc-comments-new-nid').val();
                elem.attr('id', 'js-load-save_delete-ajax-' + nid);
                var element_settings = {
                    url: "/cbib/oc/comments/ajax/remove/" + nid,
                    event: 'click',
                    progress: {
                        type: 'throbber'
                    },
                };
                Drupal.ajax['js-load-save_delete-ajax-' + nid] = new Drupal.ajax('js-load-save_delete-ajax-' + nid, this, element_settings);
                elem.click();
                elem.unbind('click');
                delete Drupal.ajax['js-load-save_delete-ajax-' + nid];
            }
        });
        /*
         * Edit comment body
         */
        $('body').on('click', '.comment-edit', function (e) {
            $('.oc-comments-new-cancel-comment-wrap').click();
            var comment_elem = $(e.currentTarget).parent().parent();
            var body_elem = comment_elem.find(".field-name-comment-body").find('.field-item');
            var title_elem = $(comment_elem.find('.comment-title'));

            var text = body_elem.text();
            var title = title_elem.find('a').text();
            title_elem.empty();
            body_elem.empty();

            var text_area_body = $('<textarea class="oc-comments-edit-area" style="height:100px;"></textarea>');
            var text_area_title = $('<textarea class="oc-comments-edit-area-title" style="heigth:50px"></textarea>');

            text_area_body.text(text);
            text_area_title.text(title);
            body_elem.append(text_area_body);
            title_elem.append(text_area_title)


            //hide buttons and insert the save.
            comment_elem.find('.links').find('.comment-edit').hide();
            comment_elem.find('.links').find('.comment-reply ').hide();
            comment_elem.find('.links').find('.comment-delete').hide();
            comment_elem.find('.links').append('<li class="oc-comments-new-save-comment-wrap"><span class="action-item-small action-item-inline"><div class="oc-comments-new-edit-comment-save-btn"><i class="fa fa-floppy-o" aria-hidden="true"></i>Gem</div></span></li>');
            comment_elem.find('.links').append('<li class="oc-comments-new-cancel-comment-wrap"><span class="action-item-small action-item-inline"><div class="oc-comments-new-edit-comment-cancel-btn">Fortryd</div></span></li>');
            return false;
        });
        
        /*
         * Save edit
         */
        $('body').on('click', '.oc-comments-new-save-comment-wrap', function (e) {
            //get text and submit to backend.
            
            var elem = $(e.currentTarget);
            var text_area = elem.parent().parent().find('.oc-comments-edit-area');
            var text = text_area.val();

            var textarea_title = elem.parent().parent().find('.oc-comments-edit-area-title');
            var title_text = textarea_title.val();

            //get comment id
            var reply_btn = elem.parent().parent().find('.comment-reply');
            var urlparts = reply_btn.find('a').attr('href').split("/");
            var nid = urlparts[3];
            var pid = urlparts[4];
            // Drupal.settings.ajaxPageState.updatedText = text;
            elem.attr('id', 'js-load-save_edit-ajax-' + pid);
            var element_settings = {
                url: "/cbib/oc/comments/ajax/update/comment/" + pid,
                event: 'click',
                progress: {
                    type: 'throbber'
                },
                submit: {
                    'js': true,
                    'UpdatedText': text,
                    'UpdatedTitle': title_text,
                }
            };
            Drupal.ajax['js-load-save_edit-ajax-' + pid] = new Drupal.ajax('js-load-save_edit-ajax-' + pid, this, element_settings);
            elem.click();
            elem.unbind('click');
            delete Drupal.ajax['js-load-save_edit-ajax-' + nid];
            return false;

        });
        /*
         * delete comment
         */
        $('body').on('click', '.comment-delete', function (e) {
            if (confirm('Er du sikker på du vil slette denne post og alle dens kommentare ?')) {
                // Save it!
                var elem = $(e.currentTarget);
                var reply_btn = elem.parent().parent().find('.comment-reply');
                var urlparts = reply_btn.find('a').attr('href').split("/");
                var nid = urlparts[3];
                var pid = urlparts[4];
                elem.attr('id', 'js-load-save_delete-ajax-' + pid);
                var element_settings = {
                    url: "/cbib/oc/comments/ajax/remove/comment/" + pid,
                    event: 'click',
                    progress: {
                        type: 'throbber'
                    },
                };
                Drupal.ajax['js-load-save_delete-ajax-' + pid] = new Drupal.ajax('js-load-save_delete-ajax-' + pid, this, element_settings);
                elem.click();
                elem.unbind('click');
                delete Drupal.ajax['js-load-save_delete-ajax-' + pid];
                return false;
            }
        });
        $('body').on('click','.oc-comments-new-cancel-comment-wrap',function RestoreCommentEdit(e)
        {
            debugger;
            var comment_elem = $(e.currentTarget).parent().parent();
            comment_elem.find('.links').find('.comment-edit').show();
            comment_elem.find('.links').find('.comment-reply ').show();
            comment_elem.find('.links').find('.comment-delete').show();
            $('.oc-comments-new-save-comment-wrap').remove();
            $('.oc-comments-new-cancel-comment-wrap').remove();
            
            var reply_btn = comment_elem.parent().parent().find('.comment-reply');
            var urlparts = reply_btn.find('a').attr('href').split("/");
            var nid = urlparts[3];
            var pid = urlparts[4];
            
            var body_edit = $('.oc-comments-edit-area');
            var title_edit = $('.oc-comments-edit-area-title');
            var bodyval = "";
            var titleval = "";
            if(body_edit.val() == undefined)
            {
                bodyval = body_edit.text();
            }
            else
            {
                bodyval = body_edit.val();
            }
            if(title_edit.val() == undefined)
            {
                titleval = title_edit.text();
            }
            else
            {
                titleval = title_edit.val();
            }
            body_edit.replaceWith($('<span></span>').text(bodyval));
            var titleobj = $('<a></a>').attr('href',"/comment/" + pid).text(titleval);
            title_edit.replaceWith(titleobj);
            return false;
        });
        //restore post edit
        $('body').on('click','.oc-comments-new-cancel-wrap',function RestoreCommentEdit(e)
        {
            var post_elem = $(e.currentTarget).parent().parent().parent().parent();          
            
            post_elem.find('.links').find('.oc-comments-new-edit-wrap').show();
            post_elem.find('.links').find('.oc-comments-new-reply-wrap ').show();
            post_elem.find('.links').find('.oc-comments-new-delete-wrap').show();
            $('.oc-comments-new-save-wrap').remove();
            $('.oc-comments-new-cancel-wrap').remove();
            
            var nid = post_elem.parent().parent().parent().parent().find('#cbib-oc-comments-new-nid').val()
            
            var body_edit = $('.oc-comments-edit-area');
            var title_edit = $('.oc-comments-edit-area-title');
            var bodyval = "";
            var titleval = "";
            if(body_edit.val() == undefined)
            {
                bodyval = body_edit.text();
            }
            else
            {
                bodyval = body_edit.val();
            }
            if(title_edit.val() == undefined)
            {
                titleval = title_edit.text();
            }
            else
            {
                titleval = title_edit.val();
            }
            body_edit.replaceWith($('<span></span>').text(bodyval));
            var titleobj = $('<a></a>').attr('href',"/node/" + nid).text(titleval);
            title_edit.replaceWith(titleobj);
            return false;
        });
        
    })
})(jQuery);



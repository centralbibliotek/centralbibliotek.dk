(function ($) {
    var old_edit_text;
    var old_edit_link_text;
    Drupal.behaviors.quicktabs_oc = {
        attach: function (context, settings) {
            /*
             * The original one fails to bind when using ajax
             */
            $('.quicktabs-wrapper').once(function () {
                Drupal.quicktabs.prepare(this);
            });
            /*
             * Hide the "All"
             */
            $('#quicktabs-tab-commons_bw-commons_all').parent().hide();
        }
    }

    var ajax_throb = '<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>'
    $(document).ready(function () {
        /*
         * Read More
         */
        $('body').on('click', '.node-readmore-link', function (e) {
            var elem = $(e.currentTarget);
            var nid = elem.parent().parent().parent();
            var nid = nid.find('#cbib-oc-comments-new-nid').val();
            elem.attr('id', 'js-load-comments-readmore-ajax-' + nid);
            var element_settings = {
                url: "/cbib/oc/comments/ajax/readmore/" + nid,
                event: 'click',
                progress: {
                    type: 'throbber'
                }
            };

            Drupal.ajax['js-load-comments-readmore-ajax-' + nid] = new Drupal.ajax('js-load-comments-readmore-ajax-' + nid, this, element_settings);
            elem.click();
            elem.unbind('click');
            //elem.attr('id','');
            //delete Drupal.ajax['js-load-comments-readmore-ajax-' + nid];

            return false;
        });
        /*
         * Read Less
         */
        $('body').on('click', '.node-readless-link', function (e) {
            var elem = $(e.currentTarget);
            var nid = elem.parent().parent().parent();
            var nid = nid.find('#cbib-oc-comments-new-nid').val();
            elem.attr('id', 'js-load-comments-readmore-ajax-' + nid);
            var element_settings = {
                url: "/cbib/oc/comments/ajax/readless/" + nid,
                event: 'click',
                progress: {
                    type: 'throbber'
                }
            };

            Drupal.ajax['js-load-comments-readmore-ajax-' + nid] = new Drupal.ajax('js-load-comments-readmore-ajax-' + nid, this, element_settings);
            elem.click();
            elem.unbind('click');
            elem.attr('id', '');
            delete Drupal.ajax['js-load-comments-readmore-ajax-' + nid];

            return false;
        });
        /*
         * Comment post form.
         */
        $('body').on('click', '.oc-comments-new-reply-btn', function (e) {
            var elem = $(e.currentTarget);
            var comment_elem = elem.parent().parent().parent().parent().parent().find('.comment-form')
            if (comment_elem.length == 0)
            {
                var nid = elem.parent().parent().parent().parent().parent().find('#cbib-oc-comments-new-nid').val();
                elem.attr('id', 'js-load-new-form-ajax-' + nid);
                var element_settings = {
                    url: "/cbib/oc/comments/ajax/getform/" + nid,
                    event: 'click',
                    progress: {
                        type: 'throbber'
                    },
                };
                Drupal.ajax['js-load-new-form-ajax-' + nid] = new Drupal.ajax('js-load-save_delete-ajax-' + nid, this, element_settings);
                elem.click();
                elem.unbind('click');
                delete Drupal.ajax['js-load-new-form-ajax-' + nid];

            } else
            {
                Drupal.behaviors.attachWysiwyg.detach(elem.parent().parent().parent().parent().parent(), elem.id, 'unload');
                comment_elem.remove();
            }
            return false;
        });
        /*
         * Load comments for post.
         */
        $('body').on('click', '.comment-comments', function (e) {
            debugger;
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
                 Drupal.behaviors.attachWysiwyg.detach(comments);
                comments.remove();
                
                
            }
            //test.remove();
            return false;
        });
        /*
         * comment reply form
         */
        $('body').on('click', '.comment-reply', function () {
            $('.oc_comment_new_cancel_post').click();
            var elem = $(this);
            var urlparts = elem.find('a');
            if(urlparts.length == 0)
            {
                return false;
            }
            urlparts = urlparts.attr('href').split("/")
            var nid = urlparts[3];
            var pid = urlparts[4];
            var comment_elem = elem.parent().parent().find('.comment-form')
            if (comment_elem.length == 0)
            {
                elem.attr('id', 'js-load-new-form-ajax-' + nid);
                var element_settings = {
                    url: "/cbib/oc/comments/ajax/getform/" + nid + "/" + pid,
                    event: 'click',
                    progress: {
                        type: 'throbber'
                    },
                };
                Drupal.ajax['js-load-new-form-ajax-' + nid] = new Drupal.ajax('js-load-save_delete-ajax-' + nid, this, element_settings);
                elem.click();
                elem.unbind('click');
                delete Drupal.ajax['js-load-new-form-ajax-' + nid];
            } else
            {
                Drupal.behaviors.attachWysiwyg.detach(elem.parent().parent(), elem.id, 'unload');
                comment_elem.remove();
            }
            return false;
        });
        /*
         * Edit post body
         */
        $('body').on('click', '.oc-comments-new-edit-btn', function (e) {
            
            $('.oc-comments-new-edit-cancel-wrap').click();
            $('.oc_comment_new_cancel_post').click();
            var comment_elem = $(e.currentTarget).parent().parent().parent().parent().parent();
            var body_elem = comment_elem.find(".field-name-body").find('.field-item');
            var title_elem = $(comment_elem.find('.node-title'));
            var elem = $(this);
            var nid = comment_elem.find('#cbib-oc-comments-new-nid').val();
            elem.attr('id', 'js-load-new-edit-form-ajax-' + nid);
            var element_settings = {
                url: "/cbib/oc/comments/ajax/edit/" + nid,
                event: 'click',
                progress: {
                    type: 'throbber'
                },
            };
            Drupal.ajax['js-load-new-edit-form-ajax-' + nid] = new Drupal.ajax('js-load-new-edit-form-ajax-' + nid, this, element_settings);
            elem.click();
            elem.unbind('click');
            delete Drupal.ajax['js-load-new-edit-form-ajax-' + nid];
            return false;
        });
        /*
         * Save post updates.
         */
        $('body').on('click', '#cbib-oc-post-save-comment-btn', function (e) {
            
            
            //get text and submit to backend.
            var elem = $(e.currentTarget);
            var text_area = elem.parent().parent().parent().parent().find('.oc-comments-edit-area');
            //var text = text_area.val();
            var nid = elem.parent().parent().parent().parent().find('#cbib-oc-comments-new-nid').val();

            // Drupal.settings.ajaxPageState.updatedText = text;
            elem.attr('id', 'js-load-save_edit-ajax-' + nid);
            var element_settings = {
                url: "/cbib/oc/comments/ajax/update",
                event: 'click',
                progress: {
                    type: 'throbber'
                },
                submit:{
                  'js': true,  
                },
            };
            Drupal.ajax['js-load-save_edit-ajax-' + nid] = new Drupal.ajax('js-load-save_edit-ajax-' + nid, this, element_settings);
            Drupal.settings.urlIsAjaxTrusted["/cbib/oc/comments/ajax/update"] = true;
            elem.click();
            elem.unbind('click');
            delete Drupal.ajax['js-load-save_edit-ajax-' + nid];
            
            //text_area.remove();
            //$('.wysiwyg-toggle-wrapper').remove();
            return false;
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
            return false;
        });
        /*
         * Edit comment body
         */
        $('body').on('click', '.comment-edit', function (e) {
            debugger;
             $('.oc_comment_new_cancel_post').click();
            var elem = $(this);
            var urlparts = elem.find('a').attr('href').split("/");
            var pid = urlparts[2];
            var comment_elem = elem.parent().parent().find('.comment-form')
            if (comment_elem.length == 0)
            {
                elem.attr('id', 'js-load-new-form-ajax-' + pid);
                var element_settings = {
                    url: "/cbib/oc/comments/ajax/get/edit/form/" + pid,
                    event: 'click',
                    progress: {
                        type: 'throbber'
                    },
                };
                Drupal.ajax['js-load-new-form-ajax-' + pid] = new Drupal.ajax('js-load-save_delete-ajax-' + pid, this, element_settings);
                elem.click();
                elem.unbind('click');
                delete Drupal.ajax['js-load-new-form-ajax-' + pid];
            } else
            {
                Drupal.behaviors.attachWysiwyg.detach(elem.parent().parent(), elem.id, 'unload');
                comment_elem.remove();
            }
            return false;
        });

        /*
         * Save comment edit
         */
        $('body').on('click', '#cbib-oc-comments-save-comment-btn', function (e) {
            debugger;
            //get text and submit to backend.
            var elem = $(e.currentTarget);
            var nid = elem.parent().find('.comment-cid').val();

            // Drupal.settings.ajaxPageState.updatedText = text;
            elem.attr('id', 'js-load-save_edit-ajax-' + nid);
            var element_settings = {
                url: "/cbib/oc/comments/ajax/get/edit/form/submit",
                event: 'click',
                progress: {
                    type: 'throbber'
                },
                submit:{
                  'js': true,  
                },
            };
            Drupal.ajax['js-load-save_edit-ajax-' + nid] = new Drupal.ajax('js-load-save_edit-ajax-' + nid, this, element_settings);
            Drupal.settings.urlIsAjaxTrusted["/cbib/oc/comments/ajax/get/edit/form/submit"] = true;
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
                
            }
            return false;
        });
        /*
         * Abort edit comment
         */
        $('body').on('click', '.oc-comments-new-cancel-comment-wrap', function (e)
        {
            $('#messages').remove();
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
            var bodyval = old_edit_text;
            var titleval = old_edit_link_text;

            Drupal.behaviors.attachWysiwyg.detach(comment_elem, body_edit.id, 'unload');
            $('.wysiwyg-toggle-wrapper').remove();
            body_edit.replaceWith($('<span></span>').html(bodyval));
            var titleobj = $('<a></a>').attr('href', "/comment/" + pid).text(titleval);
            title_edit.replaceWith(titleobj);
            return false;
        });
        //restore post edit
        $('body').on('click', '.oc-comments-new-edit-cancel-wrap', function (e)
        {
            $('#messages').remove();
            var post_elem = jQuery(this).parent().parent();
            var text_elem = post_elem.find('.wysiwyg')
            Drupal.behaviors.attachWysiwyg.detach(post_elem, text_elem.id, 'unload');
            post_elem.remove();
            return false;
        });
        //abort new comment post.
        $('body').on('click', '.oc_comment_new_cancel_post', function (e)
        {
            $('#messages').remove();
            var post_elem = jQuery(this).parent().parent();
            var text_elem = post_elem.find('.wysiwyg')
            Drupal.behaviors.attachWysiwyg.detach(post_elem, text_elem.id, 'unload');
            post_elem.remove();
            return false;
        });
        //Make sure data is pushed to form on submit for comment reply.
        $('body').on('submit', '.comment-form', function (e) {
            var post_elem = $(e.currentTarget).parent().parent();
            var text_area = post_elem.find('textarea'); //find the raw text area.
            var ck_text = "";
            text_area.val(ck_text);
        })
        $('body').on('click', '#oc-new-comment-new-post-btn', function () {
            $('form[id^=commons-bw-partial-node-form-post]').removeClass('js-hide');
            $(this).addClass('js-hide');
        });
        $('body').on('click', '.hide-new-post-form', function () {
            $('form[id^=commons-bw-partial-node-form-post]').addClass('js-hide');
            $('#oc-new-comment-new-post-btn').removeClass('js-hide');
        });



    })

})(jQuery);



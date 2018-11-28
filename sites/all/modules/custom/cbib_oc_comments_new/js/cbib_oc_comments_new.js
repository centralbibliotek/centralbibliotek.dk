(function ($) {
    var old_edit_text;
    var old_edit_link_text;
    Drupal.behaviors.quicktabs_oc = {
    attach: function (context, settings) {
        /*
         * The original one fails to bind when using ajax
         */
      $('.quicktabs-wrapper').once(function(){
        Drupal.quicktabs.prepare(this);
      });
    }
  }
 
    var ajax_throb = '<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>'
    $(document).ready(function () {
        /*
         * Read More
         */
        $('body').on('click','.node-readmore-link',function(e){
            debugger;
            var elem = $(e.currentTarget);
            var nid = elem.parent().parent().parent().parent().parent();
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
         $('body').on('click','.node-readless-link',function(e){
            debugger;
            var elem = $(e.currentTarget);
            var nid = elem.parent().parent().parent().parent().parent();
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
                elem.attr('id','');
                delete Drupal.ajax['js-load-comments-readmore-ajax-' + nid];
                
            return false;
        });
        /*
         * Comment post form.
         */
        $('body').on('click', '.oc-comments-new-reply-btn', function (e) {
            debugger;
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
                
                
                /*elem.parent().parent().find('.comment-reply').append($(ajax_throb));
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
                            debugger;
                            //$('.oc-comments-new-reply-btn').click();
                            Drupal.attachBehaviors('#cbib-oc-comments-save-comment-btn');
                             Drupal.attachBehaviors('.wysiwyg');
                        });*/
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
            debugger;
            $('.oc-comments-new-cancel-wrap').click();
            var comment_elem = $(e.currentTarget).parent().parent().parent().parent().parent();
            var body_elem = comment_elem.find(".field-name-body").find('.field-item');
            var title_elem = $(comment_elem.find('.node-title'));
            
            var nid = comment_elem.find('#cbib-oc-comments-new-nid').val();
            var text = body_elem.html();
            var title = title_elem.find('a').text().trim();
            if(title == "")
            {
                title = title_elem.text().trim();
            }
            
            old_edit_link_text = title;
            
            title_elem.empty();
            body_elem.empty();
            $.ajax({
                url: "/cbib/oc/comments/ajax/readmore/" + nid,
                cache: false
              })
                .done(function( commands ) {
                    var text_area_body = $('<textarea id="text-edit-'+nid+'" class="oc-comments-edit-area wysiwyg" style="height:100px;"></textarea>');
                    var text_area_title = $('<textarea  class="oc-comments-edit-area-title " style="heigth:50px"></textarea>');
                    text = commands[1].data;
                    text_area_body.html(text);
                    old_edit_text = text;
                    
                    text_area_title.text(title);
                    body_elem.append(text_area_body);
                    title_elem.append(text_area_title)
            
                    //hide buttons and insert the save.
                    comment_elem.find('.links').find('.oc-comments-new-reply-wrap').hide();
                    comment_elem.find('.links').find('.oc-comments-new-edit-wrap').hide();
                    comment_elem.find('.links').find('.oc-comments-new-delete-wrap').hide();
                    comment_elem.find('.links').append('<li class="oc-comments-new-save-wrap"><span class="action-item-small action-item-inline"><div class="oc-comments-new-edit-save-btn"><i class="fa fa-floppy-o" aria-hidden="true"></i>Gem</div></span></li>');
                    comment_elem.find('.links').append('<li class="oc-comments-new-cancel-wrap"><span class="action-item-small action-item-inline"><div class="oc-comments-new-edit-save-cancel-btn">Fortryd</div></span></li>');
                    debugger;
                    Drupal.settings.wysiwyg.triggers['text-edit-'+nid] = {
                        activeFormat: "comments",
                        field: 'text-edit-'+nid,
                        formatcomments: {
                                editor: "ckeditor",
                                status: 1,
                                toggle: 1,
                                }
                    };
                    Drupal.attachBehaviors(comment_elem,Drupal.settings);
                });
        });
        /*
         * Save post updates.
         */
        $('body').on('click', '.oc-comments-new-save-wrap', function (e) {
            debugger;
            //get text and submit to backend.
            var elem = $(e.currentTarget);
            var text_area = elem.parent().parent().parent().parent().find('.oc-comments-edit-area');
            //var text = text_area.val();
            
            var text = CKEDITOR.instances[text_area.attr('id')].getData();
            
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
            Drupal.behaviors.attachWysiwyg.detach(elem.parent().parent().parent().parent(), text_area.id, 'unload');
            //text_area.remove();
            $('.wysiwyg-toggle-wrapper').remove();
        });
        /*
         * Delete post
         */
        $('body').on('click', '.oc-comments-new-delete-btn', function (e) {


            if (confirm('Er du sikker på du vil slette denne post og alle dens kommentare ?')) {
                // Save it!
                debugger;
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
            
            //get comment id
            var reply_btn = comment_elem.find('.comment-reply');
            var urlparts = reply_btn.find('a').attr('href').split("/");
            var nid = urlparts[3];
            var pid = urlparts[4];
            
            var text = body_elem.html();
            var title = title_elem.find('a').html().trim();
            
            old_edit_text = text;
            old_edit_link_text = title;
            
            title_elem.empty();
            body_elem.empty();

            var text_area_body = $('<textarea id="text-edit-'+pid+'" class="oc-comments-edit-area wysiwyg" style="height:100px;"></textarea>');
            var text_area_title = $('<textarea class="oc-comments-edit-area-title" style="heigth:50px"></textarea>');

            text_area_body.html(text);
            text_area_title.html(title);
            body_elem.append(text_area_body);
            title_elem.append(text_area_title)
            
            Drupal.settings.wysiwyg.triggers['text-edit-'+pid] = {
                        activeFormat: "comments",
                        field: 'text-edit-'+pid,
                        formatcomments: {
                                editor: "ckeditor",
                                status: 1,
                                toggle: 1,
                                }
                    };
            Drupal.attachBehaviors(comment_elem,Drupal.settings);

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
            var text = CKEDITOR.instances[text_area.attr('id')].getData();
            //var text = text_area.val();

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
            Drupal.behaviors.attachWysiwyg.detach(elem.parent().parent(), text_area.attr('id'), 'unload');
            $('.wysiwyg-toggle-wrapper').remove();
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
        /*
         * Abort edit comment
         */
        $('body').on('click','.oc-comments-new-cancel-comment-wrap',function(e)
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
            var bodyval = old_edit_text;
            var titleval = old_edit_link_text;
            
            Drupal.behaviors.attachWysiwyg.detach(comment_elem, body_edit.id, 'unload');
            $('.wysiwyg-toggle-wrapper').remove();
            body_edit.replaceWith($('<span></span>').html(bodyval));
            var titleobj = $('<a></a>').attr('href',"/comment/" + pid).text(titleval);
            title_edit.replaceWith(titleobj);
            return false;
        });
        //restore post edit
        $('body').on('click','.oc-comments-new-cancel-wrap',function (e)
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
            
            var bodyval = old_edit_text;
            var titleval = old_edit_link_text;
            Drupal.behaviors.attachWysiwyg.detach(post_elem, body_edit.id, 'unload');
            $('.wysiwyg-toggle-wrapper').remove();
            body_edit.replaceWith($('<span></span>').html(bodyval));
            var titleobj = $('<a></a>').attr('href',"/node/" + nid).text(titleval);
            title_edit.replaceWith(titleobj);
            return false;
        });
        //abort new comment post.
        $('body').on('click','.oc_comment_new_cancel_post',function (e)
        {
            debugger;
            var post_elem = jQuery(this).parent().parent();
            var text_elem = post_elem.find('.wysiwyg')
            Drupal.behaviors.attachWysiwyg.detach(post_elem, text_elem.id, 'unload');
            post_elem.remove();  
            return false;
        });
        //Make sure data is pushed to form on submit for comment reply.
        $('body').on('submit','.comment-form',function(e){
            var post_elem = $(e.currentTarget).parent().parent();
            var text_area = post_elem.find('textarea'); //find the raw text area.
            var ck_text = "";
            text_area.val(ck_text);
        })
        $('body').on('click','#oc-new-comment-new-post-btn',function(){
            $('form[id^=commons-bw-partial-node-form-post]').removeClass('js-hide');
            $(this).addClass('js-hide');
        });
         $('body').on('click','.hide-new-post-form',function(){
            $('form[id^=commons-bw-partial-node-form-post]').addClass('js-hide');
            $('#oc-new-comment-new-post-btn').removeClass('js-hide');
        });
        
        
        
    })
    
})(jQuery);



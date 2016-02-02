/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function($) {
    //Add listening for typing in body elements
    
    $( document ).ready(function() {
        var editor = CKEDITOR.instances['edit-body-und-0-value'];
        $('textarea[id^=edit-body-und-0-summary]').attr('placeholder','Loading..');
        initSummary();
        
        editor.on( 'contentDom', function() {
            var editable = editor.editable();

            editable.attachListener( editable, 'blur', function() {
                 var data = editor.editable().getData()
                 //Call our custom ajax path for creating drupal summaries.
                 //And set the summary editor to the returned value.
                 if(data.length > 0)
                 {
                    var throbber = $('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
                    var label = $('label[for^=edit-body-und-0-summary]');
                    
                    label.prepend(throbber);
                      jQuery.ajax({
                       method: "POST",
                       url: "/admin/settings/cbib_oc_hooks/js/summary",
                       data: { text: data},
                       success: function(response) { 
                           /*
                            * Set placeholder on hidden text area so it is restored
                            * after clear events.
                            */
                           var textarea = $('textarea[id^=edit-body-und-0-summary]');
                           textarea.attr('placeholder',response);
                           
                           /*
                            * Set the iframe placeholder content to the new
                            * placeholder
                            */
                           var iframe = $("#cke_edit-body-und-0-summary").find('.cke_wysiwyg_frame');
                           var test2 = iframe.contents().find('.placeholder').html(response);
                           /*
                            * Remove spinner
                            */
                           var label = $('label[for^=edit-body-und-0-summary]');
                           label.find('.ajax-progress').remove();
                           }
                     });
                 }
            });
            editor.fire( 'blur' );
        });
        function initSummary()
        {
             var editor = CKEDITOR.instances['edit-body-und-0-value'];
             var data = editor.getData();
             if(data.length > 0)
             {
                 var throbber = $('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
                 var label = $('label[for^=edit-body-und-0-summary]');
                 
                label.prepend(throbber);
                jQuery.ajax({
                 method: "POST",
                 url: "/admin/settings/cbib_oc_hooks/js/summary",
                 data: { text: data},
                 success: function(response) { 
                     debugger;
                     /*
                      * Set placeholder on hidden text area so it is restored
                      * after clear events.
                      */
                     var textarea = $('textarea[id^=edit-body-und-0-summary]');
                     textarea.attr('placeholder',response);

                     /*
                      * Set the iframe placeholder content to the new
                      * placeholder
                      */
                     var iframe = $("#cke_edit-body-und-0-summary").find('.cke_wysiwyg_frame');
                     var test2 = iframe.contents().find('.placeholder').html(response);
                     /*
                      * Remove spinner
                      */
                     var label = $('label[for^=edit-body-und-0-summary]');
                     label.find('.ajax-progress').remove();
                     }
               });
             }
        }
    });
})(jQuery);

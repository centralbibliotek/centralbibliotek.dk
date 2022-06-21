/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
jQuery(document).ready(function ($) {
    const characters = 150;
    $('.text-summary-wrapper').find('.form-textarea-wrapper').append($('<div id="lead_length" style="float:right;">' + characters + '</div>'));
    var Warning_Shown = false;

    CKEDITOR.on('instanceReady', function (e) {

        // Get the HTML ID of the textarea input that would be used if the editor were not enabled:
        var fieldID = $("#edit-body-und-0-summary").attr("id");

        // Add keyup listener.
        CKEDITOR.instances[fieldID].on("key", function () {
            // The last key pressed isn't available in editor.getData() when
            // the key is pressed. A workaround is to use setTimeout(), with no
            // time set to it, as this moves it to the end of the process queue,
            // when the last pressed key will be available.
            var editor = this;
            var text = editor.getData().replace(/<[^>]*>/g, '').replace(/\s+/g, ' ').replace(/&\w+;/g, 'X').replace(/^\s*/g, '').replace(/\s*$/g, '');
            var numChars = text.length;

            /*
            * Create a counter showing how many letters the lead has.
            */

            var startval = characters - numChars;
            $('#lead_length').text(startval);
            if (startval < 0 && Warning_Shown != true) {
                var the_dialog = $('<div id="dialog" title="">' + Drupal.t('OBS. For at din tekst vises optimalt på sitet og ved udsendelse af notifikationer kan du max skrive 150 tegn. <br><br> Denne besked vises kun 1 gang pr. redigering.') + '</div>').dialog({
                    title: "Vigtig Information",
                    resizable: false,
                    height: "auto",
                    width: 400,
                    modal: true,
                    buttons: {
                        ok: function () {
                            $(this).dialog("close");
                            $(this).dialog("destroy");
                        }
                    }
                });

                Warning_Shown = true;
                $('#lead_length').text(startval);

            }
            else {
                $('#lead_length').text(startval);
            }
            window.setTimeout(function () {
                // Do something with the text.
                // Also note that the original textarea can be
                // retrieved from editor.element.$. So you could
                // do this:
                var originalTextarea = editor.element.$;
            });
        });
    });
});
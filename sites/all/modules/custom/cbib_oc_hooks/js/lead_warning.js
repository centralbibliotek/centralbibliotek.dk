/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
jQuery(document).ready(function ($) {

    CKEDITOR.on('instanceReady', function () {
        // Get the HTML ID of the textarea input that would be used if the editor were not enabled:
        var fieldID = $("#edit-body-und-0-summary").attr("id");


        if (CKEDITOR.instances[fieldID]) {
            var Warning_Shown = false;
            const characters = 150;
            $('.text-summary-wrapper').find('.form-textarea-wrapper').append($('<div id="lead_length" style="float:right;">' + characters + '</div>'));
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
                if (startval <= 0 && Warning_Shown != true) {

                    var the_dialog = $('<div id="dialog" title="">' + Drupal.t('OBS. Du har indtastet så mange tegn, at din tekst ikke vises optimalt på sitet og ved udsendelse af notifikationer. Overvej derfor at begrænse antal tegn.<br><br> Denne besked vises kun 1 gang pr. redigering. Du kan se grænsen for antal tegn, så du undgår tekst ombrydning i højre hjørne af manchet tekst boksen.') + '</div>').dialog({
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
        }
    });
});
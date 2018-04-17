/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($, Drupal) {

    Drupal.behaviors.pdfpreview = {
        attach: function (context, settings) {

                $('div[id^=pdfpreview-').hide();
                $('[id^=file-').mouseover(function () {
                var numeric_part = $( this ).attr( 'id' ).substr( 5 );
                var styles = {
                   position: "absolute",
                   transform: "translate(135%, -30%)",
                   zIndex: "10"
                };
                $('#pdfpreview-'+ numeric_part).css(styles).show();
                }).mouseout(function () {
                    var numeric_part = $( this ).attr( 'id' ).substr( 5 );
                   $('#pdfpreview-'+ numeric_part).hide();
                });

        }
    };

})(jQuery, Drupal);

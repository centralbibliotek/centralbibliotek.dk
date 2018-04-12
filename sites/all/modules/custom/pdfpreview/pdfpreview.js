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
                 $('#pdfpreview-'+ numeric_part).show();
                }).mouseout(function () {
                    var numeric_part = $( this ).attr( 'id' ).substr( 5 );
                   $('#pdfpreview-'+ numeric_part).hide();
                });

        }
    };

})(jQuery, Drupal);

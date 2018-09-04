/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($, Drupal) {

    Drupal.behaviors.pdfpreview = {
        attach: function (context, settings) {

                $('div[id^=pdfpreview-]').hide();
                $('[id^=file-]').mouseover(function () {
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
                
                $('a[type^=image]').one('mouseover', function () {
                var image = $( this ).attr( 'href' );
                $( this ).append('<img class="theImg" src="' + image + '" />');               
                });
                
                $('a[type^=image]').mouseover(function () {
                   var styles = {
                   position: "absolute",
                   transform: "translate(100%, -30%)",
                   maxWidth: "420px",
                   maxHeight: "420px",
                   zIndex: "10"
                };
                $(this).find('img').css(styles).show();
                }).mouseout(function () {
                    $(this).find('img').hide();
                });

        }
    };

})(jQuery, Drupal);

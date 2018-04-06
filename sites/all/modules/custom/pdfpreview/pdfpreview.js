/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($, Drupal) {

    Drupal.behaviors.pdfpreview = {
        attach: function (context, settings) {

            // can access setting from 'settings' or 'Drupal.settings';
            var path = Drupal.settings.pdfpreview.path;
            var filename = Drupal.settings.pdfpreview.filename;
            var fid = Drupal.settings.pdfpreview.fid;
            var arrayLength = fid.length;

            for (var i = 0; i < arrayLength; i++) {
                $('#pdfpreview-' + fid[i]).hide();
                var test = $('<span id="file-' + fid[i] + '"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png"> <a href=' + path[i] + ' type="application/pdf;">' + filename[i] + '</a></span>').mouseover(function () {
                    $('#pdfpreview-' + fid[i]).show();
                }).mouseout(function () {
                    $('#pdfpreview-' + fid).hide();
                    $('#file-' + fid[i]).show();
                });
                ;

                test.mouseover(function () {
                    $(this).next().show();
                }).mouseout(function () {
                    $(this).next().hide();
                    $(this).show();
                });

                if ($('#file-' + fid[i]).length) {
                    //do something if elem is present
                } else {
                    test.insertBefore('#pdfpreview-' + fid[i]);
                }

            };
        }
    };

})(jQuery, Drupal);

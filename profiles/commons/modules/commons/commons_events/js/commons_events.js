(function ($) {
  Drupal.behaviors.commons_events_update_registration_settings_legend = {
    attach: function (context, settings) {
      $(':input[name^="field_registration_type"]').change(function () {
        $('fieldset#edit-group_registration', context).drupalSetSummary(function (context) {
          return $(':input[name^="field_registration_type"] :selected').text();
        });
        if ($(':input[name^="field_registration_type"]').val() == 'external') {
          $(':input[name^="field_status"]').val('0').change();
        }
      });
      $(':input[name^="field_status"]').change(function () {
        $('fieldset#edit-group_registration', context).drupalSetSummary(function (context) {
          var cur = $(':input[name^="field_registration_type"] :selected').text();
          return cur + ', ' + $(':input[name^="field_status"] :selected').text();
        });
      });
      $(':input[name^="field_registration_type"]').change();
      $(':input[name^="field_status"]').change();
    }
  };
})(jQuery);

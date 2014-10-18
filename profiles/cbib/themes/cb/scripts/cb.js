// Misc javascript for the cb theme

// Add a placeholder string to the search field (in the header)
jQuery(document).ready(function($) {
  $('#search-block-form input[type="search"]').attr('placeholder', 'Søg på sitet...');
});


// Move the Commons utility links to another html element.
// This is just a quick fix and should be refactored the Drupal way as the project matures.
jQuery(document).ready(function($) {
  var source = $("#block-commons-utility-links-commons-utility-links").contents();
  var target = $('#main-menu .utility-links');

  $(target).append(source);
});


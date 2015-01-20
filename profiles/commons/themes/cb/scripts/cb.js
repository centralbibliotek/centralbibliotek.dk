// Misc javascript for the cb theme
/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

  // JavaScript should be made compatible with libraries other than jQuery by
  // wrapping it with an "anonymous closure". See:
  // - https://drupal.org/node/1446420
  // - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


  // Add a placeholder string to the search field (in the header).
  Drupal.behaviors.searchPlaceholder = {
    attach: function (context, settings) {
      $('#search-block-form input[type="search"]').attr('placeholder', 'Søg på sitet...');
    }
  }

  // Move the Commons utility links to another html element.
  // This is just a quick fix and should be refactored the Drupal way as the project matures.
  Drupal.behaviors.replaceCommonsUtility = {
    attach: function (context, settings) {
      var source = $("#block-commons-utility-links-commons-utility-links").contents();
      var target = $('#main-menu .utility-links');

      $(target).append(source);
    }
  }

  // Add link to whole teaser node.
  Drupal.behaviors.addLinkToElement = {
    attach: function (context, settings) {
      // Add hover class to element with class 'clickable' only if there's a link inside.
      $('.node-teaser .center-wrapper .panel-panel', context).hover(function () {
        $(this).toggleClass('hover');
      });

      // Add click event to whole block that holds a link.
      $(document, context).delegate('.node-teaser .center-wrapper .panel-panel', 'click', function (event) {
        var href = $(this).find("a").attr("href");
        if (typeof href === "undefined") {
          href = $(this).parent().find("a").attr("href");
        }
        window.location = href;
        return false;
      });
    }
  }

})(jQuery, Drupal, this, this.document);

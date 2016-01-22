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
(function ($, Drupal, window, document) {

  "use strict";

  // Add a placeholder string to the search field (in the header).
  Drupal.behaviors.searchPlaceholder = {
    attach: function (context, settings) {
      $('#search-block-form input[type="search"]').attr('placeholder', 'Søg på sitet...');
    }
  };

  // Move the Commons utility links to another html element.
  // This is just a quick fix and should be refactored the Drupal way as the project matures.
  Drupal.behaviors.replaceCommonsUtility = {
    attach: function (context, settings) {
      var source = $("#block-commons-utility-links-commons-utility-links").contents();
      var target = $('#main-menu .utility-links');

      $(target).append(source);
    }
  };

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
  };

  // Jump menu replacement for theming.
  Drupal.behaviors.regionSelect = {
    attach: function (context) {
      var container;
      var form;
      var select;
      var selected;
      var replaceMenu;

      // Set selector variables.
      container = $('#block-views-centralbiblioteker-block', context);
      form = $('form', container);
      select = $('select', form);
      selected = $('option:selected', select);
      replaceMenu = $('<ul>', {'class': 'region-select closed'});

      // We don't do this on mobile devices since they have cool
      // select functionality. We just submit the form on change
      // (otherwise ctools modules builtin JavaScript will alter the
      // form submit to link GET).
      if (
        navigator.userAgent.match(/Android/i) ||
        navigator.userAgent.match(/webOS/i) ||
        navigator.userAgent.match(/iPhone/i) ||
        navigator.userAgent.match(/iPod/i) ||
        navigator.userAgent.match(/iPad/i) ||
        navigator.userAgent.match(/Blackberry/i)
      ) {
        select.change(function () {
          form.submit();
        });
        return;
      }

      // Hide the select element since its not used.
      select.hide();

      // Loop through each option in select element.
      $('option', select).each(function (index) {
        var option;
        var item;
        var link;
        var href;
        option = this;
        href = option.value.split('::');

        // Ignore the first default option.
        if (index !== 0) {
          // Create a link that will trigger the option.
          link = $('<a>').attr('href', href[1]).click(function (e) {
            e.preventDefault();
            $(option).attr('selected', 'selected');
            // Do a form submit to let ctools jump menu handle the
            // navigation.
            form.submit();
          }).text(option.text);
        }

        // Set list item with link.
        item = $('<li>').html(link);
        // Append item to list.
        replaceMenu.append(item);
      });

      // Add the replacement menu.
      container.append(replaceMenu);

      // Add a toggle link.
      if (selected.length !== 0) {
        var href = selected[0].value.split('::')[1];
      }           
      if (typeof href === 'undefined') {
        href = '/';
      }
      $('<a>', {'href': href, 'class': 'toggle-link'}).text(selected.text()).click(function (e) {
        e.preventDefault();
        e.stopPropagation();
        replaceMenu.toggleClass('open closed');
      }).insertBefore(replaceMenu);

      // Remove menu on click.
      $(context).click(function () {
        $('.region-select.open').toggleClass('open closed');
      });
    }
  };
})(jQuery, Drupal, this, this.document);

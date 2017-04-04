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
  
    function trigger_loginSpinner() {
        $('<div class="search-overlay--wrapper"><div class="search-overlay--inner"><div class="loader"></div><p>Vent venligst...</p><p class="cancel"><a href="#">Luk</a></p></div></div>').prependTo('body');
    }
    
    $(document).ready(function () {
        //If user wants to cancel his search.
        $('.search-overlay--wrapper .cancel').live('click', function (e) {
            try {
                window.stop();
            } catch (e)
            {
                document.execCommand('Stop');
            }
            $('.search-overlay--wrapper').remove();
        });
        $('.print_html a').attr("href", "");
        $('.print_html a').attr("onclick", "window.print(); return false; ");
    
                // Node search overlay
        $('body').on('submit', '#views-exposed-form-search-api-nodes-default', function () {
            trigger_loginSpinner();
        });
        
        $('body').on('keyup', '.cb-teaser-list .view-filters input[type="text"], .block-facetapi option,  .views-exposed-widgets option', function (e) {
            e.preventDefault();
            if (e.keyCode === 13) {
                trigger_loginSpinner();
            }
        });
        $('body').on('mouseup', '.cb-teaser-list .view-filters input[type="submit"], .block-facetapi option, .views-exposed-widgets option, #reset', function () {
            trigger_loginSpinner();
        });

  }); 
  
    $(document).ajaxComplete(function (e, xhr, settings) {

        if (settings.url == Drupal.settings.basePath + "?q=views/ajax" || settings.url == Drupal.settings.basePath + "views/ajax" || settings.url == Drupal.settings.basePath + "?q=system/ajax" || settings.url == Drupal.settings.basePath + "system/ajax") {
            // enable selectBox jQuery plugin for all <select> elements
            $('.search-overlay--wrapper').remove();
            //Drupal.attachbehaviours();   

        }
    }); 
  
    // Add a Display icons for hiding elements in views.
    Drupal.behaviors.viewDisplays = {
        attach: function (context, settings) {           
           
            $('#facetapi-facet-search-apiglobal-search-block-item-bundle select option[value$="item_bundle%3Afile%3Adocument"]').text(function (text) {
                    return $(this).text().replace(/Dokument/g, "Filer");                
            });
            $('#facetapi-facet-search-apigroup-index-block-og-group-ref select option[value$="44443"], #facetapi-facet-search-apigroup-index-block-og-group-ref select option[value$="44459"').text(function (text) {
                    return $(this).remove();                
            });
            
            $('#edit-field-address-locality option[value=""]').html('Alle lokationer');
             $('section .views-exposed-form').once('myslider', function() {
                $('#views-exposed-form-search-api-group-panel-pane-1 .views-exposed-form').after('<div class="view-display"> <i id="fa-th" class="fa fa-th"></i> <i id="bars" class="fa fa-bars"></i></div>');
                $('#views-exposed-form-search-api-arrangementer-page .views-exposed-form').after('<div class="view-display"> <i id="fa-th" class="fa fa-th"></i> <i id="bars" class="fa fa-bars"></i></div>');
            });
            
            $('.fa-th').click(function () {
                $('.cb-teaser-list .node-teaser .panel-col-first').show();
                $('.field.field-name-og-group-ref.field-type-entityreference.field-label-hidden.view-mode-_custom_display').show();
                $('.field.field-name-field-topics.field-type-taxonomy-term-reference.field-label-hidden.view-mode-_custom_display').show();
            });
            $('.fa-bars').click(function () {
                $('.cb-teaser-list .node-teaser .panel-col-first').hide();
                $('.field.field-name-og-group-ref.field-type-entityreference.field-label-hidden.view-mode-_custom_display').hide();
                $('.field.field-name-field-topics.field-type-taxonomy-term-reference.field-label-hidden.view-mode-_custom_display').hide();
            });
        }
    };
  // Add a placeholder string to the search field (in the header).
  Drupal.behaviors.searchPlaceholder = {
    attach: function (context, settings) {
      $('#views-exposed-form-search-api-nodes-default input[type="text"]').attr('placeholder', 'Søg på sitet...');
      $('#views-exposed-form-search-api-arrangementer-page input[type="text"]').attr('placeholder', ' Søg i arrangementer');
      $('#views-exposed-form-search-api-group-panel-pane-1 input[type="text"]').attr('placeholder', ' Søg i grupper');
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

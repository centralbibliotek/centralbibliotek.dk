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
       
        /*
         * Add preloader to everything ?
         */
        $('body').find('a[class!="toggle-link"][class!="ui-tabs-anchor"][class!="print-page"][id!="quicktabs-tab-commons_bw-commons_all"][id!="quicktabs-tab-commons_bw-commons_all"][id!="quicktabs-tab-commons_bw-commons_posts"][id!="quicktabs-tab-commons_bw-commons_documents"]:not([href^="mailto:"])').not("[id*=quicktabs]").not('.flag').not('.button-yes').not(".browse").click(function(){
            debugger;
            trigger_loginSpinner();
        });


        $('select[id!=edit-following]').change(function () {
            trigger_loginSpinner();
        });
        // Node search overlay
        $('body').on('submit', '#views-exposed-form-search-api-nodes-default', function () {
            debugger;
            trigger_loginSpinner();
        });

        $('body').on('keyup', '.cb-teaser-list .view-filters input[type="text"], .block-facetapi option,  .views-exposed-widgets option', function (e) {
            e.preventDefault();
            if (e.keyCode === 13) {
                debugger;
                trigger_loginSpinner();
            }
        });

        
        /*
         * unbind login_spinner;
         */
        $('.file').find('a').unbind('click');
        $('.feed-icon').find('a').unbind('click');

        var topx = '52px';       
 
        $('strong').each(function () {
        if ($(this).text() === 'Søgning gav desværre ingen resultater.') {
                $('div.views-exposed-widget.views-reset-button').css("top", "30px");
                topx = '30px';
            }
        });
        $('#facetapi-facet-search-apiarrangement-index-block-og-group-ref').parent().parent().hide();
        $('#facetapi-facet-search-apiarrangement-index-block-og-group-ref').find('select').clone(false).insertBefore('form[id^="views-exposed-form-search-api-arrangementer-page"] .views-exposed-widget.views-reset-button').css('position','absolute').css('right','27%').css('top',topx)
                .unbind('change').unbind('click').attr('name','og_group_ref').attr('id','og_group_ref').addClass('fix_me_select').change(function(e){
                     e.preventDefault();
                     $('.fix_me_select').val(e.currentTarget.value);
                     return false;
         });
         /*
          * Group tilknytning styling fix.
          */
          $('#facetapi-facet-search-apigroup-index-block-og-group-ref').parent().parent().hide();
          $('#facetapi-facet-search-apigroup-index-block-og-group-ref').find('select').clone(false).insertBefore('form[id^="views-exposed-form-search-api-group-page"] .views-exposed-widget.views-reset-button').css('position','absolute').css('right','27%').css('top',topx)
                .unbind('change').unbind('click').attr('name','og_group_ref').attr('id','og_group_ref-1').addClass('fix_me_select').change(function(e){
                     e.preventDefault();
                    $('.fix_me_select').val(e.currentTarget.value);
                     return false;
         });
        
         var Selects_to_fix = $('.fix_me_select');
         $.each(Selects_to_fix,function(i,e){
             Fix_og_group_ref_ids($(e).children());
         })
         
         function Fix_og_group_ref_ids(children)
         {
             $.each(children,function(i,c){
             var test = c.value.replace('&&','&').split('?');
             test = test[test.length-1];
             if(test !== null || $(c).attr('selected') !== undefined)
             {
                 if($(c).attr('selected') !== undefined)
                 {
                    var query = getQueryParams(document.location.search.replace('&&','&'));
                    if(query['og_group_ref'] !== undefined)
                    {
                    c.value= query['og_group_ref'];
                    }
                    else
                    {
                        if(Drupal.settings.oc_cbib !== undefined && Drupal.settings.oc_cbib.centralbib !== undefined)
                        {
                            c.value = Drupal.settings.oc_cbib.centralbib;
                        }
                        else
                        {
                           c.value = ""; 
                        }
                       
                    }
                 }
                 else
                 {
                    var query = getQueryParams(test); //hack to make valid url.
                    test = query['og_group_ref'];
                    if(test !== undefined)
                    {
                        c.value= test;
                    }
                    else
                    {
                        c.value = "";
                    }
                 }

            }
         });
         }
         /*
          * Bind facet api and search field together for events.
          */
              var Forms = $('#views-exposed-form-search-api-arrangementer-page,#views-exposed-form-search-api-arrangementer-page-1,#views-exposed-form-search-api-arrangementer-page-2,#views-exposed-form-search-api-arrangementer-page-3,#views-exposed-form-search-api-group-page-1,#views-exposed-form-search-api-group-page-2,#views-exposed-form-search-api-group-page-3,#views-exposed-form-search-api-group-page-4');
              
              $.each(Forms,function(i,e){
                    var query = getQueryParams(document.location.search.replace('&&','&').replace('?&','?'));
                    var count = 0;
                    $.each(query,function(i,q){
                       if(i !== "og_group_ref" && i !== "search_api_views_fulltext" && i !== "page")
                       {
                           var new_elem = $('<input />');
                           new_elem.attr('name',i);
                           new_elem.val(q);
                           new_elem.attr('type','hidden');
                           $(e).append(new_elem);
                       }
                    });
              });

          function getQueryParams(qs) {
            qs = qs.split('+').join(' ');

            var params = {},
                tokens,
                re = /[?&]?([^=]+)=([^&]*)/g;

            while (tokens = re.exec(qs)) {
                params[decodeURIComponent(tokens[1])] = decodeURIComponent(tokens[2]);
            }

            return params;
        }
        /* $('#block-views-centralbiblioteker-block').clone(false).insertBefore('#views-exposed-form-search-api-arrangementer-page .views-exposed-widget.views-reset-button');
         $('#block-views-centralbiblioteker-block').clone(false).insertBefore('#views-exposed-form-search-api-arrangementer-page-1 .views-exposed-widget.views-reset-button');
        
        $('#block-views-centralbiblioteker-block').clone(false).insertBefore('#views-exposed-form-search-api-group-page-1 .views-exposed-widget.views-reset-button');
        $('#block-views-centralbiblioteker-block').clone(false).insertBefore('#views-exposed-form-search-api-group-page-2 .views-exposed-widget.views-reset-button');
        $('.views-exposed-widgets #block-views-centralbiblioteker-block').removeAttr( "id" ).addClass('centralbiblioteker-block');
        $(".views-exposed-widgets .centralbiblioteker-block .toggle-link").on('click', function (event) {
            event.preventDefault();
            if($('.views-exposed-widgets .centralbiblioteker-block ul.region-select.closed').is(':visible'))
            {
                $('#block-views-centralbiblioteker-block ul.region-select.open').css('display', 'block');
                $('.views-exposed-widgets .centralbiblioteker-block ul.region-select.closed').css('display', 'none');
            }
            else
            {
                $('#block-views-centralbiblioteker-block ul.region-select.open').css('display', 'none');
                $('.views-exposed-widgets .centralbiblioteker-block ul.region-select.closed').css('display', 'block');
            }
            
            if(window.location.href.indexOf("arrangementer") !== -1)
            {
                $('.region-select.closed li:first-child').html('<a href="/arrangementer?reset_cb">Vælg alle</a>');
            }
            if(window.location.href.indexOf("grupper") !== -1)
            {
                $('.region-select.closed li:first-child').html('<a href="/grupper?reset_cb">Vælg alle</a>');
            }
            
        });*/
        // fix ie reset button styling    
        if (navigator.appName == 'Microsoft Internet Explorer' || !!(navigator.userAgent.match(/Trident/) || navigator.userAgent.match(/rv:11/)) || (typeof $.browser !== "undefined" && $.browser.msie == 1))
        {
            $('.views-reset-button').css('top', '0');
        }
        $('.element-invisible').remove();

        $('#facetapi-facet-search-apiarrangement-index-block-field-datevalue, #facetapi-facet-search-apiglobal-search-block-nodefield-datevalue').each(function () {
            var select = $(document.createElement('select')).insertBefore($(this).hide());

            $(document.createElement('option')).appendTo(select).val('').html('--Vælg--');
            select.change(function () {
                trigger_loginSpinner();
                window.location = $(this).find("option:selected").val();
            });
            $('>li a', this).each(function () {
                var a = $(this).click(function () {
                    window.location.href = this.href;

                }),
                        option = $(document.createElement('option')).appendTo(select).val(this.href).html($(this).html()).click(function () {

                    a.click();
                    
                });

            });

        });
           
        $(".feed-icon").find("a").unbind('click');
 $('.item-list-facetapi-date-range option:contains((-))').attr('selected', 'selected').html($('#facetapi-facet-search-apiarrangement-index-block-field-datevalue > li:contains((-))').text());

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
        $('body').on('mouseup', '.cb-teaser-list .view-filters input[type="submit"], .item-list.item-list-facetapi-date-range select option, .block-facetapi option, #reset', function () {
            debugger;
            trigger_loginSpinner();
        });
  });
  
    $(document).ajaxComplete(function (e, xhr, settings) {
      
        if (settings.url.indexOf("/views/ajax?") !== -1 ||settings.url == Drupal.settings.basePath + "?q=views/ajax" || settings.url == Drupal.settings.basePath + "views/ajax" || settings.url == Drupal.settings.basePath + "?q=system/ajax" || settings.url == Drupal.settings.basePath + "system/ajax" || settings.url == Drupal.settings.basePath + "ajax?") {
            // enable selectBox jQuery plugin for all <select> elements
            $('.search-overlay--wrapper').remove();
            //Drupal.attachbehaviours();

        }
    });

    // Add a Display icons for hiding elements in views.
    Drupal.behaviors.viewDisplays = {
        attach: function (context, settings) {
         
            var ua = window.navigator.userAgent;
            var msie = ua.indexOf("MSIE ");
            var msie_trident = ua.indexOf("Trident");

            if (msie !== -1 || msie_trident !== -1) // If Internet Explorer, return version number
            {
                $('div.views-exposed-widget.views-reset-button').css('cssText', 'top:46px !important');
                $('strong').each(function () {
                    if ($(this).text() === 'Søgning gav desværre ingen resultater.') {
                        $('div.views-exposed-widget.views-reset-button').css("cssText", "top:24px !important");
                    }
                });                
            }
            $('#facetapi-facet-search-apiglobal-search-block-item-bundle select option[value*="item_bundle%3Afile%3Adocument"]').text(function (text) {
                    return $(this).text().replace(/Dokument/g, "Filer");
            });
            $('#facetapi-facet-search-apiglobal-search-block-item-bundle select option[value*="item_bundle%3Afile%3Aundefined"]').text(function (text) {
                return $(this).text().replace(/file:undefined/g, "Medie filer");
            });
            $('#facetapi-facet-search-apigroup-index-block-og-group-ref select option[value*="og_group_ref=44443"], #facetapi-facet-search-apigroup-index-block-og-group-ref select option[value*="og_group_ref=44459"]').text(function (text) {
                    return $(this).remove();
            });

            $('#edit-field-address-locality option[value=""]').html('Alle lokationer');
            
                $('#ui-id-1').html('<i id="fa-th" class="fa fa-th"></i>');
                $('#ui-id-2').html('<i id="fa-th" class="fa fa-bars"></i>');              
                $('.ui-state-default.ui-corner-top').css("background-color", "transparent");
        }
    };
  // Add a placeholder string to the search field (in the header).
  Drupal.behaviors.searchPlaceholder = {
    attach: function (context, settings) {
      $('#views-exposed-form-search-api-nodes-default input[type="text"]').attr('placeholder', 'Søg på sitet...');
      $('#views-exposed-form-search-api-arrangementer-page input[type="text"], #views-exposed-form-search-api-arrangementer-page-1 input[type="text"],  #views-exposed-form-search-api-arrangementer-page-3 input[type="text"]').attr('placeholder', ' Søg i arrangementer');
      $('#views-exposed-form-search-api-group-page-1 input[type="text"], #views-exposed-form-search-api-group-page-2 input[type="text"], #views-exposed-form-search-api-group-page-3 input[type="text"], #views-exposed-form-search-api-group-page-4 input[type="text"]').attr('placeholder', ' Søg i grupper');
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

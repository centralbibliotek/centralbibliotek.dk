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

  /**
   * detect IE
   * returns version of IE or false, if browser is not Internet Explorer
   */
  function detectIE() {
    var ua = window.navigator.userAgent;

    var msie = ua.indexOf("MSIE ");
    if (msie > 0) {
      // IE 10 or older => return version number
      return parseInt(ua.substring(msie + 5, ua.indexOf(".", msie)), 10);
    }

    var trident = ua.indexOf("Trident/");
    if (trident > 0) {
      // IE 11 => return version number
      var rv = ua.indexOf("rv:");
      return parseInt(ua.substring(rv + 3, ua.indexOf(".", rv)), 10);
    }

    var edge = ua.indexOf("Edge/");
    if (edge > 0) {
      // IE 12 => return version number
      return parseInt(ua.substring(edge + 5, ua.indexOf(".", edge)), 10);
    }

    // other browser
    return false;
  }

  function trigger_loginSpinner() {
    $(
      '<div class="search-overlay--wrapper"><div class="search-overlay--inner"><div class="loader"></div><p>Vent venligst...</p><p class="cancel"><a href="#">Luk</a></p></div></div>'
    ).prependTo("body");
  }
  $(document).ready(function () {
    $(".eu-cookie-withdraw-tab").toggle(
      function () {
        $(".eu-cookie-withdraw-tab").addClass("eu-cookie-withdraw-tab-close");
      },
      function () {
        $(".eu-cookie-withdraw-tab").removeClass(
          "eu-cookie-withdraw-tab-close"
        );
      }
    );
    $("u")
      .contents()
      .unwrap()
      .wrap('<span style="text-decoration: underline;"/>');
    $(".pane-node-field-gul-baggrund div:contains(1)").each(function () {
      $(this)
        .closest(".pane-node-field-gul-baggrund")
        .parent()
        .find(".pane-node-title-field")
        .css("background", "#FFcF01");
    });

    if (
      document.location.pathname.indexOf("/aktivitet") === 0 ||
      document.location.pathname.indexOf("/nyheder") === 0 ||
      document.location.pathname.indexOf("/herning/nyheder") === 0 ||
      document.location.pathname.indexOf("/aalborg/nyheder") === 0 ||
      document.location.pathname.indexOf("/vejle/nyheder") === 0 ||
      document.location.pathname.indexOf("/odense/nyheder") === 0 ||
      document.location.pathname.indexOf("/roskilde/nyheder") === 0 ||
      document.location.pathname.indexOf("/gentofte/nyheder") === 0
    ) {
      $("#tabs-0-center-1 .views-row")
        .not(
          ':has(.field.field-name-og-group-ref.field-type-entityreference .field-item a[href="/herning"],\n\
.field.field-name-og-group-ref.field-type-entityreference .field-item a[href="/aalborg"],\n\
.field.field-name-og-group-ref.field-type-entityreference .field-item a[href="/vejle"],\n\
.field.field-name-og-group-ref.field-type-entityreference .field-item a[href="/odense"],\n\
.field.field-name-og-group-ref.field-type-entityreference .field-item a[href="/roskilde"],\n\
.field.field-name-og-group-ref.field-type-entityreference .field-item a[href="/gentofte"])'
        )
        .remove();

      $("#tabs-0-center-2 .views-row")
        .not(
          ':has(.views-field-og-group-ref span a[href="/herning"],\n\
.views-field-og-group-ref span a[href="/aalborg"],\n\
.views-field-og-group-ref span a[href="/vejle"],\n\
.views-field-og-group-ref span a[href="/odense"],\n\
.views-field-og-group-ref span a[href="/roskilde"],\n\
.views-field-og-group-ref span a[href="/gentofte"])'
        )
        .remove();
    }

    /*
     * Add preloader to everything ?
     */
    $("body")
      .find(
        'a[target!="_blank"][class!="fieldset-title"][class!="toggle-link"][class!="ui-tabs-anchor"][class!="print-page"][id!="quicktabs-tab-commons_bw-commons_all"][id!="quicktabs-tab-commons_bw-commons_all"][id!="quicktabs-tab-commons_bw-commons_posts"][id!="quicktabs-tab-commons_bw-commons_documents"]:not([href^="mailto:"])'
      )
      .not("[id*=quicktabs]")
      .not(".flag")
      .not(".button-yes")
      .not(".browse")
      .not(".field-group-format-title")
      .click(function () {
        trigger_loginSpinner();
      });
    /*$('#commons-bw-partial-node-form-post').submit(function(){
            trigger_loginSpinner();
        });
        $('#comment-form').submit(function(){
            trigger_loginSpinner();
        });*/
    $(
      "select[id!=edit-following][id!=edit-field-library-und][id!=edit-og-group-ref-target-id]"
    )
      .not(".form-select")
      .change(function () {
        trigger_loginSpinner();
      });
    // Node search overlay
    $("body").on(
      "submit",
      "#views-exposed-form-search-api-nodes-default",
      function () {
        trigger_loginSpinner();
      }
    );

    $("body").on(
      "keyup",
      '.cb-teaser-list .view-filters input[type="text"], .block-facetapi option,  .views-exposed-widgets option',
      function (e) {
        e.preventDefault();
        if (e.keyCode === 13) {
          trigger_loginSpinner();
        }
      }
    );

    /*
     * unbind login_spinner;
     */
    $(".comment-delete a").unbind("click");
    $(".comment-reply a ").unbind("click");
    $(".comment-edit a").unbind("click");
    $(".node-readmore-link").unbind("click");
    $(".comment-comments a").unbind("click");
    $(".file").find("a").unbind("click");
    $("#navbar-administration").find("a").unbind("click");
    $(".feed-icon").find("a").unbind("click");
    var topx = "22px";

    $("strong").each(function () {
      if ($(this).text() === "Søgning gav desværre ingen resultater.") {
        $("div.views-exposed-widget.views-reset-button").css("top", "30px");
        topx = "30px";
      }
    });
    var bib_group_selector_rigth_value = "27%";
    if (isMobile(true)) {
      bib_group_selector_rigth_value = "10%";
    }
    /*
        $('#facetapi-facet-search-apiarrangement-index-block-og-group-ref').parent().parent().hide();
        $('#facetapi-facet-search-apiarrangement-index-block-og-group-ref').find('select').clone(false).insertBefore('#panels-ipe-paneid-1047, #panels-ipe-paneid-1041').wrap('<div class="block-facetapi new-og_group_ref"></div>')
                .unbind('change').unbind('click').attr('name','og_group_ref').attr('id','og_group_ref').addClass('fix_me_select').change(function(e){
                     e.preventDefault();
                     $('.fix_me_select').val(e.currentTarget.value);
                     return false;
         });
         $('#panels-ipe-paneid-1047 h3, #panels-ipe-paneid-1041 h3').clone().prependTo('.new-og_group_ref').html('Region');
        */
    /*
     * Group tilknytning styling fix.
     */
    $("#facetapi-facet-search-apigroup-index-block-og-group-ref")
      .parent()
      .parent()
      .hide();
    $("#facetapi-facet-search-apigroup-index-block-og-group-ref")
      .find("select")
      .clone(false)
      .insertBefore(
        'form[id^="views-exposed-form-search-api-group-page"] .views-exposed-widget.views-reset-button'
      )
      .css("position", "absolute")
      .css("right", bib_group_selector_rigth_value)
      .css("top", topx)
      .unbind("change")
      .unbind("click")
      .attr("name", "og_group_ref")
      .attr("id", "og_group_ref-1")
      .addClass("fix_me_select")
      .change(function (e) {
        e.preventDefault();
        $(".fix_me_select").val(e.currentTarget.value);
        return false;
      });
    var left_placement_value = "59%";
    var bottom_placement_value = "68px";
    if (!detectIE()) {
      if (isMobile()) {
        left_placement_value = "52%";
        bottom_placement_value = "98px";
      }
      $("#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref")
        .parent()
        .parent()
        .parent()
        .appendTo(".view-filters #views-exposed-form-search-api-nodes-default")
        .css("position", "relative")
        .css("left", left_placement_value)
        .css("bottom", bottom_placement_value);
    } else {
      $("#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref")
        .parent()
        .parent()
        .parent()
        .appendTo(".view-filters #views-exposed-form-search-api-nodes-default")
        .css("position", "relative")
        .css("left", left_placement_value)
        .css("bottom", "71px");
    }
    doOnOrientationChange();
    //$('#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref').parent().parent().parent().css('position','relative').css('left','60%').css('top','98px');

    //$('#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref').find('select').css('width','125px');
    $(
      "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref #edit-facets--5 > option"
    ).css("width", "95px");

    var Selects_to_fix = $(".fix_me_select");
    $.each(Selects_to_fix, function (i, e) {
      Fix_og_group_ref_ids($(e).children());
    });

    function Fix_og_group_ref_ids(children) {
      $.each(children, function (i, c) {
        var test = c.value.replace("&&", "&").split("?");
        test = test[test.length - 1];
        if (test !== null || $(c).attr("selected") !== undefined) {
          if ($(c).attr("selected") !== undefined) {
            var query = getQueryParams(
              document.location.search.replace("&&", "&")
            );
            if (query["og_group_ref"] !== undefined) {
              c.value = query["og_group_ref"];
            } else {
              if (
                Drupal.settings.oc_cbib !== undefined &&
                Drupal.settings.oc_cbib.centralbib !== undefined
              ) {
                c.value = Drupal.settings.oc_cbib.centralbib;
              } else {
                c.value = "";
              }
            }
          } else {
            var query = getQueryParams(test); //hack to make valid url.
            test = query["og_group_ref"];
            if (test !== undefined) {
              c.value = test;
            } else {
              c.value = "";
            }
          }
        }
      });
    }
    /*
     * Bind facet api and search field together for events.
     */
    var Forms = $(
      "#views-exposed-form-search-api-arrangementer-page,#views-exposed-form-search-api-arrangementer-page-1,#views-exposed-form-search-api-arrangementer-page-2,#views-exposed-form-search-api-arrangementer-page-3,#views-exposed-form-search-api-group-page-1,#views-exposed-form-search-api-group-page-2,#views-exposed-form-search-api-group-page-3,#views-exposed-form-search-api-group-page-4"
    );

    $.each(Forms, function (i, e) {
      var query = getQueryParams(
        document.location.search.replace("&&", "&").replace("?&", "?")
      );
      var count = 0;
      $.each(query, function (i, q) {
        if (
          i !== "og_group_ref" &&
          i !== "search_api_views_fulltext" &&
          i !== "page"
        ) {
          var new_elem = $("<input />");
          new_elem.attr("name", i);
          new_elem.val(q);
          new_elem.attr("type", "hidden");
          $(e).append(new_elem);
        }
      });
    });

    function getQueryParams(qs) {
      qs = qs.split("+").join(" ");

      var params = {},
        tokens,
        re = /[?&]?([^=]+)=([^&]*)/g;

      while ((tokens = re.exec(qs))) {
        params[decodeURIComponent(tokens[1])] = decodeURIComponent(tokens[2]);
      }

      return params;
    }
    // fix ie reset button styling
    if (
      navigator.appName == "Microsoft Internet Explorer" ||
      !!(
        navigator.userAgent.match(/Trident/) ||
        navigator.userAgent.match(/rv:11/)
      ) ||
      (typeof $.browser !== "undefined" && $.browser.msie == 1)
    ) {
      $(
        ".view-search-api-nodes .views-exposed-widgets .views-reset-button"
      ).css("top", "10px");
    }
    //$('.element-invisible').remove();

    $(
      "#facetapi-facet-search-apiarrangement-index-block-field-datevalue, #facetapi-facet-search-apiglobal-search-block-nodefield-datevalue"
    ).each(function () {
      var select = $(document.createElement("select")).insertBefore(
        $(this).hide()
      );

      $(document.createElement("option"))
        .appendTo(select)
        .val("/aktivitet?f[0]")
        .html("--Vælg--");
      $(document.createElement("option"))
        .appendTo(select)
        .val("/aktivitet?f[0]")
        .html("Kommende");
      select.change(function () {
        trigger_loginSpinner();
        window.location = $(this).find("option:selected").val();
      });
      $(">li a", this).each(function () {
        var a = $(this).click(function () {
            window.location.href = this.href;
          }),
          option = $(document.createElement("option"))
            .appendTo(select)
            .val(this.href)
            .html($(this).html())
            .click(function () {
              a.click();
            });
      });
    });

    $(".feed-icon").find("a").unbind("click");

    $(".item-list-facetapi-date-range option:contains((-))")
      .attr("selected", "selected")
      .html(
        $(
          "#facetapi-facet-search-apiarrangement-index-block-field-datevalue > li:contains((-))"
        ).text()
      );

    //If user wants to cancel his search.
    $(".search-overlay--wrapper .cancel").live("click", function (e) {
      try {
        window.stop();
      } catch (e) {
        document.execCommand("Stop");
      }
      $(".search-overlay--wrapper").remove();
    });
    $(".print_html a").attr("href", "");
    $(".print_html a").attr("onclick", "window.print(); return false; ");
    $("body").on(
      "mouseup",
      '.cb-teaser-list .view-filters input[type="submit"], .item-list.item-list-facetapi-date-range select option, .block-facetapi option, #reset',
      function () {
        trigger_loginSpinner();
      }
    );
  });

  $(document).ajaxComplete(function (e, xhr, settings) {
    if (
      settings.url.indexOf("/views/ajax?") !== -1 ||
      settings.url == Drupal.settings.basePath + "?q=views/ajax" ||
      settings.url == Drupal.settings.basePath + "views/ajax" ||
      settings.url == Drupal.settings.basePath + "?q=system/ajax" ||
      settings.url == Drupal.settings.basePath + "system/ajax" ||
      settings.url == Drupal.settings.basePath + "ajax?"
    ) {
      // enable selectBox jQuery plugin for all <select> elements
      $(".search-overlay--wrapper").remove();
      //Drupal.attachbehaviours();
    }
  });

  // Add a Display icons for hiding elements in views.
  Drupal.behaviors.viewDisplays = {
    attach: function (context, settings) {
      var ua = window.navigator.userAgent;
      var msie = ua.indexOf("MSIE ");
      var msie_trident = ua.indexOf("Trident");

      if (msie !== -1 || msie_trident !== -1) {
        // If Internet Explorer, return version number
        //$('div.views-exposed-widget.views-reset-button').css('cssText', 'top:10px !important');
        $("strong").each(function () {
          if ($(this).text() === "Søgning gav desværre ingen resultater.") {
            $("div.views-exposed-widget.views-reset-button").css(
              "cssText",
              "top:24px !important"
            );
          }
        });
      }
      $(
        '#facetapi-facet-search-apiglobal-search-block-item-bundle select option[value*="item_bundle%3Afile%3Adocument"]'
      ).text(function (text) {
        return $(this)
          .text()
          .replace(/Dokument/g, "Filer");
      });
      $(
        '#facetapi-facet-search-apiglobal-search-block-item-bundle select option[value*="item_bundle%3Afile%3Aundefined"]'
      ).text(function (text) {
        return $(this)
          .text()
          .replace(/file:undefined/g, "Medie filer");
      });
      $(
        '#facetapi-facet-search-apigroup-index-block-og-group-ref select option[value*="og_group_ref=44443"], #facetapi-facet-search-apigroup-index-block-og-group-ref select option[value*="og_group_ref=44459"]'
      ).text(function (text) {
        return $(this).remove();
      });
      $("#event_type2 select").attr("id", "edit-facets--fix");

      // Accessibility stuff
      $("header").removeAttr("role");
      $("footer").removeAttr("role");
      $("nav").removeAttr("role");
      $("nav#navbar-administration").attr("aria-label", "Admin Nav");
      $("#main-menu nav").attr("aria-label", "Main Nav");
      $("header nav").attr("aria-label", "Header Nav");
      $("footer nav").attr("aria-label", "Footer Nav");
      $("header.main-header").attr("aria-label", "Main Header");
      $("#page header").attr("aria-label", "Page Header");
      $("noscript").attr("role", "contentinfo");
      $("noscript").attr("aria-label", "Noscript message");
      $("div#skip-link").attr("role", "navigation");
      $("div#skip-link").attr("aria-label", "Skip Link");
      $("#main-menu .utility-links").attr("role", "navigation");
      $("#main-menu .utility-links").attr("aria-label", "Log Ind");
      $(".comment_forbidden span a:first-child").attr(
        "aria-label",
        "Log Ind Kommentar"
      );
      $(".pane-centralbibliotek-news-panel-pane-3 h2 a").attr(
        "aria-label",
        "CB Nyheder"
      );

      //
      $("#event_type2 select > option")
        .not(":first-child")
        .each(function () {
          if (this.selected) {
            $("#event_type").remove();
          }
        });
      $("#event_type2 select > option")
        .not(
          ':first-child, [value*="]=50"], \n\
                [value*="]=640"], [value=""]'
        )
        .text(function (text) {
          return $(this).remove();
        });

      var optionExists =
        $('#event_type2 select > option[value*="]=50"]').length > 0;
      var optionExists2 =
        $('#event_type2 select > option[value*="]=640"]').length > 0;
      var url = window.location.href;
      if (!optionExists) {
        if (
          $("#event_type2 select > option[selected]").html() !==
          " E-læring m/dato"
        ) {
          $("#event_type2 select").append(
            "<option value=" +
              url.replace("]=640", "") +
              "]=50> E-læring m/dato</option>'"
          );
        }
      }
      if (!optionExists2) {
        if (
          $("#event_type2 select > option[selected]").html() !==
          " E-læring u/dato"
        ) {
          $("#event_type2 select").append(
            "<option value=" +
              url.replace("]=50", "") +
              "]=640> E-læring u/dato</option>'"
          );
        }
      }
      $('#edit-field-address-locality option[value=""]').html(
        "Alle lokationer"
      );

      $("#ui-id-1").html('<span id="fa-th" class="fa fa-th"></span>');
      $("#ui-id-2").html('<span id="fa-th" class="fa fa-bars"></span>');
      $(".ui-state-default.ui-corner-top").css(
        "background-color",
        "transparent"
      );
    },
  };
  // Add a placeholder string to the search field (in the header).
  Drupal.behaviors.searchPlaceholder = {
    attach: function (context, settings) {
      $('#views-exposed-form-search-api-nodes-default input[type="text"]')
        .attr("placeholder", "Søg på sitet...")
        .attr("aria-label", "Søg på sitet...");
      $(
        'form[id^="views-exposed-form-search-api-arrangementer-page"] input[type="text"]'
      )
        .attr("placeholder", " Søg")
        .attr("aria-label", "Søg i arrangementer");
      $(
        '#views-exposed-form-search-api-group-page-1 input[type="text"], #views-exposed-form-search-api-group-page-2 input[type="text"], #views-exposed-form-search-api-group-page-3 input[type="text"], #views-exposed-form-search-api-group-page-4 input[type="text"]'
      )
        .attr("placeholder", " Søg i grupper")
        .attr("aria-label", "Søg i grupper");
    },
  };

  // Produktkatalog
  $(document).ready(function () {
      $(".page-produktkatalog #page header").append("<img src='https://centralbibliotek.dk/sites/all/themes/cb/images/temaspor/tema_materiale_baggrund.png' />");
  });  

  // Header menu icons and search toogle
  $(document).ready(function () {
    $(".branch-selector").append(
      "<span class='search' title='Søg'><svg xmlns='http://www.w3.org/2000/svg' style='height:2rem; width:2rem' fill='none' viewBox='0 0 24 24' stroke='#FFF'><path stroke-linecap='round' stroke-linejoin='round' stroke-width='2' d='M21 21l-6-6m2-5a7 7 0 11-14 0 7 7 0 0114 0z' /></svg></span>"
    );
    $(".search").click(function () {
      $(".main-header .container .branch-selector form").toggle();
      $(".main-header .container .branch-selector form").toggleClass("open");
      if (".main-header .container .branch-selector form.open") {
        $(".main-header .container .branch-selector form input").focus();
      }
    });

    $(".commons-utility-links .name a").empty();
    $(".commons-utility-links .name a").append(
      "<span class='profile' title='Min side'><svg xmlns='http://www.w3.org/2000/svg' style='margin-right: 1.5rem; height:2rem; width:2rem' fill='none' viewBox='0 0 24 24' stroke='#FFF'><path stroke-linecap='round' stroke-linejoin='round' stroke-width='2' d='M16 7a4 4 0 11-8 0 4 4 0 018 0zM12 14a7 7 0 00-7 7h14a7 7 0 00-7-7z'></path></svg></span>"
    );
    $(".commons-utility-links .login a").empty();
    $(".commons-utility-links .login a").append(
      "<span class='login'  title='Log ind'><svg xmlns='http://www.w3.org/2000/svg' style='height:2rem; width:2rem' fill='none' viewBox='0 0 24 24' stroke='#FFF'><path stroke-linecap='round' stroke-linejoin='round' stroke-width='2' d='M11 16l-4-4m0 0l4-4m-4 4h14m-5 4v1a3 3 0 01-3 3H6a3 3 0 01-3-3V7a3 3 0 013-3h7a3 3 0 013 3v1' /></svg></span>"
    );
    $(".commons-utility-links .logout a").empty();
    $(".commons-utility-links .logout a").append(
      "<span class='logout'  title='Log ud'><svg xmlns='http://www.w3.org/2000/svg' style='height:2rem; width:2rem' fill='none' viewBox='0 0 24 24' stroke='#FFF'><path stroke-linecap='round' stroke-linejoin='round' stroke-width='2' d='M17 16l4-4m0 0l-4-4m4 4H7m6 4v1a3 3 0 01-3 3H6a3 3 0 01-3-3V7a3 3 0 013-3h4a3 3 0 013 3v1' /></svg></span>"
    );
    $(".commons-utility-links .signup").remove();
    $(".commons-utility-links .settings").remove();
  });

  // Temaspor menu dropdown
  $(document).ready(function () {
    $("#block-menu-block-1 h3").removeClass("element-invisible");
    $("#block-menu-block-1 h3").wrap("<div class='temaspormenu'></div>");
    $(".temaspormenu").append(
      "<span class='arrow'><svg xmlns='http://www.w3.org/2000/svg' fill='none' viewBox='0 0 24 24' stroke='#FFF'><path strokelinecap='round' strokelinejoin='round' strokewidth='3' d='M5 15l7-7 7 7'></path></svg></span>"
    );

    $(".temaspormenu").click(function () {
      $(".menu-name-menu-temaspor").fadeToggle();
      $(".temaspormenu span").toggleClass("open");
    });
  });

  // Temaspor undermenu scroll
  Drupal.behaviors.anchorscroll = {
    attach: function (context, settings) {
      $(".node-type-temaspor a[href*=\\#]").on("click", function (event) {
        const hash = this.hash;
        event.preventDefault();
        event.stopPropagation();
        event.stopImmediatePropagation();
        var position = $(hash).offset().top - 100;
        $("HTML, BODY").animate(
          {
            scrollTop: position,
          },
          500
        );
      });
    },
  };

  // Temaspor undermenu icon
  $(document).ready(function () {
    $(".view-temaspor-undermenu .views-field-title .field-content").append(
      "<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 20 20' fill='currentColor' style='height: 1..5rem; width: 1.5rem; margin-left: 5px;'><path fill-rule='evenodd' d='M15.707 4.293a1 1 0 010 1.414l-5 5a1 1 0 01-1.414 0l-5-5a1 1 0 011.414-1.414L10 8.586l4.293-4.293a1 1 0 011.414 0zm0 6a1 1 0 010 1.414l-5 5a1 1 0 01-1.414 0l-5-5a1 1 0 111.414-1.414L10 14.586l4.293-4.293a1 1 0 011.414 0z' clip-rule='evenodd'></path></svg>"
    );
  });

  // PRODUKT-NODE ACCORDION

  $(document).ready(function () {
    // Wrap h3 tekst og tilføj svg ikon
    $(".field-name-field-underemne h3.panelizer-node-title").wrapInner(
      "<span></span>"
    );
    $(".field-name-field-underemne h3.panelizer-node-title").append(
      `<svg
          xmlns="http://www.w3.org/2000/svg"
          fill="none"
          viewBox="0 0 20 20"
          stroke="currentColor"
          style='height: 1.5rem; width: 1.5rem;'
        >
          <path
            stroke-linecap="round"
            stroke-linejoin="round"
            stroke-width="2"
            d="M19 9l-7 7-7-7"
          />
        </svg>`
    );

    // Roter svg ikon
    $(".field-name-field-underemne h3.panelizer-node-title").click(function () {
      $(this).toggleClass("play");
      $(this).next().fadeToggle();
      if ($(this).hasClass("play")) {
        $(this)
          .find("svg")
          .animate(
            { deg: 180 },
            {
              duration: 300,
              step: function (now) {
                $(this).css({ transform: "rotate(" + now + "deg)" });
              },
            }
          );
      } else {
        $(this)
          .find("svg")
          .animate(
            { deg: 0 },
            {
              duration: 300,
              step: function (now) {
                $(this).css({ transform: "rotate(" + now + "deg)" });
              },
            }
          );
      }
    });
  });

  // Temp fix
  $(document).ready(function () {
    $(".page-events .item-list-facetapi-date-range option span").remove();

    // Removes titles from temaspor caroussels if view is empty
    function isEmpty(el) {
      return !$.trim(el.html());
    }
    if (isEmpty($(".pane-temaspor-panel-pane-1 .view-content"))) {
      $(".pane-temaspor-panel-pane-1").remove();
    }
    if (isEmpty($(".pane-temaspor-panel-pane-2 .view-content"))) {
      $(".pane-temaspor-panel-pane-2").remove();
    }
    if (isEmpty($(".pane-temaspor-panel-pane-3 .view-content"))) {
      $(".pane-temaspor-panel-pane-3").remove();
    }
    if (isEmpty($(".pane-temaspor-panel-pane-4 .view-content"))) {
      $(".pane-temaspor-panel-pane-4").remove();
    }
  });

  // Add link to whole teaser node.
  Drupal.behaviors.addLinkToElement = {
    attach: function (context, settings) {
      // Add hover class to element with class 'clickable' only if there's a link inside.
      $(".node-teaser .center-wrapper .panel-panel", context).hover(
        function () {
          $(this).toggleClass("hover");
        }
      );

      // Add click event to whole block that holds a link.
      $(document, context).delegate(
        ".node-teaser .center-wrapper .panel-panel",
        "click",
        function (event) {
          var href = $(this).find("a").attr("href");
          if (typeof href === "undefined") {
            href = $(this).parent().find("a").attr("href");
          }
          window.location = href;
          return false;
        }
      );
    },
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
      container = $("#block-views-centralbiblioteker-block", context);
      form = $("form", container);
      select = $("select", form);
      select.attr("aria-label", "Regioner");
      selected = $("option:selected", select);
      replaceMenu = $("<ul>", { class: "region-select closed" });

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
      $("option", select).each(function (index) {
        var option;
        var item;
        var link;
        var href;
        option = this;
        href = option.value.split("::");

        // Ignore the first default option.
        if (index !== 0) {
          // Create a link that will trigger the option.
          link = $("<a>")
            .attr("href", href[1])
            .click(function (e) {
              e.preventDefault();
              $(option).attr("selected", "selected");
              // Do a form submit to let ctools jump menu handle the
              // navigation.
              form.submit();
            })
            .text(option.text);
        }

        // Set list item with link.
        item = $("<li>").html(link);
        // Append item to list.
        replaceMenu.append(item);
      });

      // Add the replacement menu.
      container.append(replaceMenu);

      // Add a toggle link.
      if (selected.length !== 0) {
        var href = selected[0].value.split("::")[1];
      }
      if (typeof href === "undefined") {
        href = "/";
      }
      $("<a>", { href: href, class: "toggle-link" })
        .text(selected.text())
        .click(function (e) {
          e.preventDefault();
          e.stopPropagation();
          replaceMenu.toggleClass("open closed");
        })
        .insertBefore(replaceMenu);

      // Remove menu on click.
      $(context).click(function () {
        $(".region-select.open").toggleClass("open closed");
      });
    },
  };
  /*
   * Functions to detect if mobile and the orientation
   */
  function isPortrait() {
    return window.innerHeight > window.innerWidth;
  }
  function isLandscape() {
    return window.orientation === 90 || window.orientation === -90;
  }
})(jQuery, Drupal, this, this.document);

function isMobile(excludeTablet) {
  if (excludeTablet) {
    if (
      navigator.userAgent.match(/Android/i) ||
      navigator.userAgent.match(/iPhone/i)
    ) {
      return true;
    }
  } else {
    if (
      navigator.userAgent.match(/Android/i) ||
      navigator.userAgent.match(/iPhone/i) ||
      navigator.userAgent.match(/ipad/i)
    ) {
      return true;
    }
  }

  return false;
}
function doOnOrientationChange() {
  if (isMobile()) {
    var left_placement_value = "48%";
    var bottom_placement_value = "98px";
    switch (window.orientation) {
      case -90:
      case 90:
        if (window.innerWidth == 414) {
          // iphone 7 plus landscape hack
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .attr(
              "style",
              "position: relative;left:72%;bottom:63px !important;"
            );
          jQuery(".view-search-api-nodes")
            .find(".views-reset-button")
            .attr("style", "top:5px;");
        } else if (window.innerWidth < 580) {
          // small phones
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .css("left", "66%")
            .css("bottom", bottom_placement_value);
        } else if (window.innerWidth < 737 && window.innerWidth > 735) {
          // ihpone 7 plus
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .attr(
              "style",
              "position: relative;left:72%;bottom:63px !important;"
            );
          jQuery(".view-search-api-nodes")
            .find(".views-reset-button")
            .attr("style", "top:5px;");
        } else if (window.innerWidth < 813 && window.innerWidth > 811) {
          // ihpone x
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .attr(
              "style",
              "position: relative;left:58%;bottom:68px !important;"
            );
          jQuery(".view-search-api-nodes")
            .find(".views-reset-button")
            .attr("style", "right:14%;");
        } else if (window.innerWidth == 1024 || window.innerHeight == 768) {
          // ipad tablet size.
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .css("left", "59%")
            .css("bottom", "68px");
        } else if (window.innerWidth == 1366 || window.innerHeight == 1024) {
          //ipad pro tablet size.
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .css("left", "59%")
            .css("bottom", "68px");
        } // default
        else {
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .css("left", "68%")
            .css("bottom", bottom_placement_value);
        }
        break;
      default:
        jQuery(".view-search-api-nodes")
          .find(".views-reset-button")
          .attr("style", "");
        if (window.innerWidth < 321) {
          // phones
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .css("left", "45%")
            .css("bottom", bottom_placement_value);
        } else if (window.innerWidth == 768) {
          // ipad tablet size.
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .css("left", "67%")
            .css("bottom", "60px");
        } else if (window.innerWidth == 1024 || window.innerHeight == 1366) {
          //ipad pro tablet size.
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .css("left", "71%")
            .css("bottom", "115px");
          jQuery(".view-search-api-nodes")
            .find(".views-reset-button")
            .attr("style", "right:-79%;top: -31px;");
        } else if (window.innerWidth < 1200) {
          // laptops .
          jQuery(
            "#facetapi-facet-search-apiglobal-search-block-nodeog-group-ref"
          )
            .parent()
            .parent()
            .parent()
            .css("left", "52%")
            .css("bottom", bottom_placement_value);
        }

        break;
    }
  }
}

window.addEventListener("orientationchange", doOnOrientationChange);
/*
 * left: 67%;
    bottom: 60px;
 */

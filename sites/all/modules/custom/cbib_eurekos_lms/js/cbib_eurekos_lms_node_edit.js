(function ($) {
    //Add listening for typing in body elements
    lockedit = false;
    $(document).ready(function () {
        $(document).on('click','.search-overlay--wrapper .cancel', function (e) {
            try {
                window.stop();
            } catch (e)
            {
                document.execCommand('Stop');
            }
            $('.search-overlay--wrapper').remove();
        });
        $(document).on('click', '.form-item-eurekos-search-field #autocomplete ul li', function (event) {
            var elem = $(event.currentTarget);
            $('#edit-eurekos-search-field').val(elem.text());
            $('#edit-field-eurekos-activity-id-und-0-value').val(elem.data('autocompleteValue'));

            //show preloader.

            //set the data.
            togglePreLoader();
            eurekosGetActity(elem.data('autocompleteValue'));

            //unlock editable fields.
        });

        if ($('#edit-field-eurekos-event-und').is(':checked')) {
            lockedit = true;
            debugger;
            eurekosDisableToggleFields();
            
        }
        eurekosDisableToggleFields();
        //Attach the checkbox listener
        $('#edit-field-eurekos-event-und').change(function (e) {
            if(lockedit)
            {
                this.checked = true;
                return false;
            }
            if (this.checked) {
                //Hide all the fields we are certain need no more manual changes.
                debugger;
                 toggleFormElements('hide');
                

                eurekosDisableToggleFields();

                //disable all others until a lms is chosen.


                //ajax load the search field..
                var element_settings = {
                    url: "/admin/obb/eurekos/activate/js",
                    event: 'mouseup',
                    progress: {
                        type: 'throbber'
                    }
                };

                Drupal.ajax['#edit-field-eurekos-event-und'] = new Drupal.ajax('#edit-field-eurekos-event-und', $('#edit-field-eurekos-event-und'), element_settings);
                $("#edit-field-eurekos-event-und").trigger('mouseup');
                $("#edit-field-eurekos-event-und").unbind('mouseup');
                delete Drupal.ajax['#edit-field-eurekos-event-und'];
                //rest will be handled on search field select.
            }
            else {

                //Handle wrong clicks or disable of lms connection ?
                $('.form-item-eurekos-search-field').remove();
                toggleFormElements("show");
                eurekosEnableToggleFields();
            }

        });
        // an lms course has been choosen
        $('').click(function () {
            //show a spinner ?

            //Load data into the fields! :)
        });
    });
    function eurekosGetActity($id) {
        $.ajax({
            method: "GET",
            url: "/admin/obb/eurekos/activties/get/" + $id,

        })
            .done(function (activity) {
                /*
                * Insert data into fields.
                */
                debugger;
                $('.field-name-title-field').find('input').val(activity.title);
                if(activity.courses != null && typeof activity.courses.description != "undefined")
                {
                    CKEDITOR.instances["edit-body-und-0-value"].setData(activity.courses.description);
                }
                var dateParent = $('.field-name-field-date');
                if(activity.starts != undefined && activity.starts != "")
                {
                    dateParent.find('.form-item-field-date-und-0-value-date input').val(activity.starts['date']);
                    dateParent.find('.form-item-field-date-und-0-value-time input').val(activity.starts['time']);
    
                    dateParent.find('.form-item-field-date-und-0-value2-date input').val(activity.ends['date']);
                    dateParent.find('.form-item-field-date-und-0-value2-time input').val(activity.ends['time']);
                }
                else{
                   //$('#edit-field-date').remove();
                }

                var deadlineField = $('.field-name-field-tilmeldings-frist');
                if(activity.deadline != undefined && activity.deadline != "")
                {
                    deadlineField.find('#edit-field-tilmeldings-frist-und-0-value-datepicker-popup-0').val(activity.deadline['date']);
                    deadlineField.find('#edit-field-tilmeldings-frist-und-0-value-timeEntry-popup-1').val(activity.deadline['time']);
                }
                else{
                    //deadlineField.remove();
                    if(activity.starts != undefined && activity.starts != "")
                    {
                        deadlineField.find('#edit-field-tilmeldings-frist-und-0-value-datepicker-popup-0').val(activity.starts['date']);
                        deadlineField.find('#edit-field-tilmeldings-frist-und-0-value-timeEntry-popup-1').val(activity.starts['time']);
                    }
                }

                var location = $('.field-name-field-location');

                if(activity.location != undefined)
                {
                    var address = $('.field-name-field-address');
                    address.find('#edit-field-address-und-0-organisation-name').val(activity.location.title);
                    address.find('#edit-field-address-und-0-thoroughfare').val(activity.location.street);
                    address.find('#edit-field-address-und-0-postal-code').val(activity.location.postal_code);
                    address.find('#edit-field-address-und-0-locality').val(activity.location.city);
                    $('#edit-field-location-und').val('online_physical');
                    
                }
                else
                {
                    $('#edit-field-location-und').val('online');
                }
                
                var lecturer = $('.field-name-field-lecturer');
                if(activity.instructors.last_name == undefined)
                {
                    activity.instructors.last_name = "";
                }
                if(typeof activity.instructors != null)
                {
                    lecturer.find('#edit-field-lecturer-und-0-first').val(activity.instructors.first_name + " " + activity.instructors.last_name);
                    lecturer.find('#edit-field-lecturer-und-0-second').val(activity.instructors.mail);
                }

                var responsible = $('.field-name-field-ansvarlig-for-dagen');

                var contact = $('.field-name-field-contact');
                
                var seats = $('.form-item-field-number-of-attendees-und-0-value');
                if(activity.seats == "-1")
                {
                    //no restrictions.
                    toggleFormElements("show");
                    $('#edit-field-event-type-und').val(640).trigger('change');
                    seats.find('input').val(0);
                }
                else{
                    toggleFormElements("show");
                    $('#edit-field-event-type-und').val(50);
                    seats.find('input').val(activity.seats);
                }
                

                var status = $('.form-item-field-status');
                if(activity.courses != null)
                {
                    $('#edit-field-eurekos-url-und-0-value').val(activity.courses.url);
                }
               
                togglePreLoader();
                
            });
    }
    function togglePreLoader() {
        debugger;
        if($('.search-overlay--wrapper').length == 0 )
        {
            $('<div class="search-overlay--wrapper"><div class="search-overlay--inner"><div class="loader"></div><p>Indlæser kursus...</p><p class="cancel"><a href="#">Luk</a></p></div></div>').prependTo('body');
        }
        else{
            $('.search-overlay--wrapper').remove();
        }
        

    }
    function toggleFormElements(action)
    {
        debugger;
        var form_wrappers =  $('.form-wrapper').not('.field-name-field-eurekos-event');
        form_wrappers.each(function(i,e){
            var elem = $(e);
            debugger;
            if(elem.hasClass('vertical-tabs-pane') || elem.parent().parent().hasClass('vertical-tabs-pane'))
            {
                
                return;
            }
            if(action == "show")
            {
                elem.show();
            }
            else
            {
                $(e).hide();
            }
        });
    }
    function eurekosDisableToggleFields() {
        $('.field-name-title-field').find('input').attr('readonly', 'true');
        var dateParent = $('.field-name-field-date');
        dateParent.find('.form-item-field-date-und-0-value-date input').attr('readonly', 'true');
        dateParent.find('.form-item-field-date-und-0-value-time input').attr('readonly', 'true');

        dateParent.find('.form-item-field-date-und-0-value2-date input').attr('readonly', 'true');
        dateParent.find('.form-item-field-date-und-0-value2-time input').attr('readonly', 'true');

        var deadlineField = $('.field-name-field-tilmeldings-frist');
        deadlineField.find('#edit-field-tilmeldings-frist-und-0-value-datepicker-popup-0');
        //deadlineField.find('#edit-field-tilmeldings-frist-und-0-value-timeEntry-popup-1').attr('readonly', 'true').unbind();

        $('.field-name-field-address').find('input').attr('readonly', 'true');
        //$('.field-name-field-lecturer').find('input').attr('readonly', 'true');

        $('.form-item-field-number-of-attendees-und-0-value').find('input').attr('readonly', 'true');

        $('#edit-field-location-und').attr('readonly', 'true');
        $('#edit-field-event-type-und').attr('readonly', 'true');
        
        $('#edit-field-event-type-und').mousedown(function(e){
            e.preventDefault ();
            return false;
        });
        $('#edit-field-location-und').mousedown(function(e){
            e.preventDefault();
            return false;
        });

    }
    function eurekosEnableToggleFields() {
        
        $('.field-name-title-field').find('input').removeAttr('readonly');
        var dateParent = $('.field-name-field-date');
        dateParent.find('.form-item-field-date-und-0-value-date input').removeAttr('readonly');
        dateParent.find('.form-item-field-date-und-0-value-time input').removeAttr('readonly');

        dateParent.find('.form-item-field-date-und-0-value2-date input').removeAttr('readonly');
        dateParent.find('.form-item-field-date-und-0-value2-time input').removeAttr('readonly');

        var deadlineField = $('.field-name-field-tilmeldings-frist');
        deadlineField.find('#edit-field-tilmeldings-frist-und-0-value-datepicker-popup-0').removeAttr('readonly');
        deadlineField.find('#edit-field-tilmeldings-frist-und-0-value-timeEntry-popup-1').removeAttr('readonly');

        $('.field-name-field-address').find('input').removeAttr('readonly');
       //$('.field-name-field-lecturer').find('input').removeAttr('readonly');

        $('.form-item-field-number-of-attendees-und-0-value').find('input').removeAttr('readonly');

        $('#edit-field-location-und').removeAttr('readonly');
        $('#edit-field-event-type-und').removeAttr('readonly');
        
        $('#edit-field-event-type-und').unbind('mousedown');
        $('#edit-field-location-und').unbind('mousedown');
        
        //Drupal.attachBehaviors(document, Drupal.settings); // rebind everything disbled.
        
    }
})(jQuery);
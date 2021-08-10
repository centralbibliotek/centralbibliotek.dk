WYSIWYG A11ychecker
===================

INTRODUCTION
------------
This module enables the Accessibility Checker plugin (and its dependency,
Balloon Panel) from CKEditor.com in your CKEditor WYSIWYG on your Drupal 7
site.
http://ckeditor.com/addon/a11ychecker
http://ckeditor.com/addon/balloonpanel

* For a full description of the module, visit the project page:
  https://www.drupal.org/sandbox/jennatollerson/2820973

* To submit bug reports and feature suggestions, or to track changes:
  https://www.drupal.org/project/issues/2820973

REQUIREMENTS
------------
* Wysiwyg module
  https://www.drupal.org/project/wysiwyg
* One or more Wysiwyg profiles using CKeditor 4.3+
  http://ckeditor.com/download

INSTALLATION
------------
* Place this module in your site's contrib modules folder as usual.
  For help with this step see: https://www.drupal.org/node/895232
  
* Download the Accessibility Checker plugin from
  http://ckeditor.com/addon/a11ychecker.
  
* Download the Balloon Panel plugin from
  http://ckeditor.com/addon/balloonpanel.
  
* Place the plugins in the site's libraries folder (/libraries), so the
  structure looks like:
  sites/all/libraries/a11ychecker
  sites/all/libraries/balloonpanel
  
* Enable WYSIWYG A11ychecker in your site's modules admin.

CONFIGURATION
-------------
Configure your Wysiwyg profiles(s) using CKeditor to include **BOTH** the 
A11ychecker button and the Balloon Panel plugin, by checking the boxes for each
in the profile settings.

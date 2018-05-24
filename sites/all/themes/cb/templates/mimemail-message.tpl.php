<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <style type="text/css">
        <!--
      a:visited {
        color: #fa587b; /* Or whatever white you're using */
      }
      a:hover{
          color: #fa587b !important;
      }
      -->
    </style>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="center">
      <div id="main">
        <div style="width:100%;background-color:RGB(5, 35, 65);">
            <table style="width:100%;background-color:RGB(5, 35, 65);font-weight:700;font-size:22px;">
                <tbody>
                <td style="width:100%;padding:10px;"><span class="mail-site-logo" style="color:#fa587b;font-size:22px;"><img src="http://centralbibliotek.dk/sites/default/files/rsz_central-bibliotekerne-logo-pink-standard.png"></span></td>
                </tbody>
            </table>
        </div>
        <?php print $body ?>
      </div>
    </div>
  </body>
</html>

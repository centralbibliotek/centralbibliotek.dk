#!/bin/sh

##
# We need a lot of options to do a drush site-install.
#
drush site-install commons \
  install_configure_form.enable_acquia_connector \
  install_configure_form.acquia_connector_modules_acquia_agent \
  install_configure_form.acquia_connector_modules_acquia_spi \
  install_configure_form.update_status_module.2 \
  commons_anonymous_welcome_text_form.commons_install_example_content \
  commons_anonymous_welcome_text_form.commons_enable_og_access=1

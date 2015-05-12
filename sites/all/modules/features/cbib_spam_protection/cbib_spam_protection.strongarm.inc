<?php
/**
 * @file
 * cbib_spam_protection.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cbib_spam_protection_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_da';
  $strongarm->value = 'Dette spørgsmål tester hvorvidt du er et menneske og forhindrer automatisk indsendelse af spam.';
  $export['captcha_description_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_placement_map_cache';
  $strongarm->value = array(
    'user_register_form' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 99,
    ),
    'user_login' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 99,
    ),
  );
  $export['captcha_placement_map_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_comment_node_group_form';
  $strongarm->value = 0;
  $export['honeypot_form_comment_node_group_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_register_form';
  $strongarm->value = 1;
  $export['honeypot_form_user_register_form'] = $strongarm;

  return $export;
}

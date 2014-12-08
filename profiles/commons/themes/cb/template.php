<?php

/**
 * @file
 * Centralbibliotek.dk template.php.
 */

/**
 * Overrides theme_field__addressfield().
 *
 * A slightly modified version of commons_origins_field__addressfield(). We
 * modified it because the original didn't work with Danish address formats.
 *
 * @see commons_origins_field__addressfield()
 */
function cb_field__addressfield($variables) {
  $output = '';

  // Add Microformat classes to each address.
  foreach ($variables['items'] as &$address) {
    // Only display an address if it has been populated. We determine this by
    // validating that the locality has been populated.
    if (!empty($address['#address']['locality'])) {
      _commons_origins_format_address($address);
    }
    else {
      // Deny access to incomplete addresses.
      $address['#access'] = FALSE;
    }
  }

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':</div> ';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Render lecturer field as name and mail address.
 */
function cb_field__field_lecturer($variables) {
  return _cb_field_render_double_field_as_mailto_link($variables);
}

/**
 * Render contact field as name and mail address.
 */
function cb_field__field_contact($variables) {
  return _cb_field_render_double_field_as_mailto_link($variables);
}

/**
 * Overrides theme_field__field_number_of_attendees().
 *
 * Special rendering if value is zero.
 */
function cb_field__field_number_of_attendees($variables) {
  if ($variables['element']['#items'][0]['value'] == '0') {
    return 'Ubegrænset';
  }
  return $variables['element']['#items'][0]['value'];
}

/**
 * Helper to render a double field as name and mail address.
 */
function _cb_field_render_double_field_as_mailto_link($variables) {
  $items[] = array();
  foreach ($variables['items'] as $delta => $item) {
    if (!empty($item['#item']['second'])) {
      $items[$delta] = '<a title="' . $item['#item']['second'] . '" href="mailto:' . $item['#item']['second'] . '">' . $item['#item']['first'] . '</a>';
    }
    else {
      $items[$delta] = $item['#item']['first'];
    }
  }
  return implode(' / ', $items);
}

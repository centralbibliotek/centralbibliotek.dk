<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php

$entity = $row->_field_data['field_upload']['entity'];

foreach ($entity->field_upload['und'] as $field) {
    $output = field_view_value('node', $entity, 'field_upload', $field, array(
        'type' => 'colorbox',
        'settings' => array(
            'colorbox_node_style' => 'medium',
        ),
    ));
    echo '<div style="display: inline-block;margin-right: 10px;">';
    print render($output);
    echo "<div class='field_kilde'>" . t('Photo: ') . $field['field_kilde']['und'][0]['value'] . "</div>";
    $download = field_view_value('node', $entity, 'field_upload', $field, array(
        'type' => 'file_download_link',
        'settings' => array(
            'text' => 'Download [file:field_file_image_title_text]',
        ),
    ));
    print render($download);
    echo '</div>';
}

 ?>
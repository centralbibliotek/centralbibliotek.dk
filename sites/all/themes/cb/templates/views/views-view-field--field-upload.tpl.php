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


foreach ($row->field_field_upload as $delta => $item) {
    echo '<div style="display: inline-block;margin-right: 10px;">';
    print render($item);
    if (isset($item['rendered']['#item']['field_kilde']['und'][0]['value'])) {
        echo "<div>" . t('Photo: ') . $item['rendered']['#item']['field_kilde']['und'][0]['value'] . "</div>";
        print render($row->field_field_upload_1[$delta]);
    }
    echo '</div>';
}
 ?>
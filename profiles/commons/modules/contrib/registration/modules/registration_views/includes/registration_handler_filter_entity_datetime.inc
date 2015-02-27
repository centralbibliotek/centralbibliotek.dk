<?php

// This views handler filters by datetime values used in the registration table.
// It extends views_handler_filter_date so that the date controls are available
// but converts the values into the timestamp 'YYYY-MM-DD HH:MM:SS' format.

class registration_handler_filter_entity_datetime extends views_handler_filter_date {
  function op_between($field) {
    $a = intval(strtotime($this->value['min'], 0));
    $b = intval(strtotime($this->value['max'], 0));

    // Replacing ***CURRENT_TIME*** with REQUEST_TIME here for the date conversion below.
    // TODO: Find a way to avoid this in a way which is also database agnostic.
    if ($this->value['type'] == 'offset') {
      $a = REQUEST_TIME + $a;
      $b = REQUEST_TIME + $b;
    }

    // Specific to this handler, for datetime:
    $a = date("Y-m-d H:i:s", $a);
    $b = date("Y-m-d H:i:s", $b);

    // This is safe because we are manually scrubbing the values.
    // It is necessary to do it this way because $a and $b are formulas when using an offset.
    $operator = strtoupper($this->operator);
    $this->query->add_where_expression($this->options['group'], "$field $operator '$a' AND '$b'");
  }

  function op_simple($field) {
    $value = intval(strtotime($this->value['value'], 0));
    if (!empty($this->value['type']) && $this->value['type'] == 'offset') {
      // Replacing ***CURRENT_TIME*** with REQUEST_TIME here for the date conversion below.
      // TODO: Find a way to avoid this in a way which is also database agnostic.
      $value = REQUEST_TIME + $value;
    }

    // Specific to this handler, for datetime:
    $value = date("Y-m-d H:i:s", $value);

    // This is safe because we are manually scrubbing the value.
    // It is necessary to do it this way because $value is a formula when using an offset.
    $this->query->add_where_expression($this->options['group'], "$field $this->operator '$value'");
  }
}
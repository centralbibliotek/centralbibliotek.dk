<?php

/**
 * @file
 * Facet API views integration - filter to keep the set facets.
 */

/**
 * Filter to keep the set facets.
 *
 * @ingroup views_filter_handlers
 */
class facetapi_views_handler_filter_keep_facet_values extends views_handler_filter {

  /**
   * Remove expose option from options form.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    unset($form['expose_button']);
  }

  /**
   * Has no summary.
   */
  public function admin_summary() {
    return '';
  }

  /**
   * Always exposed.
   */
  public function can_expose() {
    return TRUE;
  }

  /**
   * Always expose.
   */
  public function is_exposed() {
    return TRUE;
  }

  /**
   * Ensure we don't modify the query.
   */
  public function query() {}

  /**
   * No need for output here.
   */
  public function render($empty = FALSE) {}

  /**
   * Placeholder to use for the form output.
   *
   * @return string
   *   Unique placeholder to be able to inject the facet fields.
   */
  public function getFormPlaceholder() {
    return '<!--facetapi_keep_facets_placeholder:' . $this->view->name . ':' . $this->view->current_display . '-->';
  }

  /**
   * Inject the facets into the exposed form.
   *
   * With the query run we've active searchers and we can access the facet
   * parameters of them.
   *
   * @see facetapi_get_active_searchers()
   */
  public function post_execute(&$values) {
    // Iterate over active searchers and collect the facet values.
    $facets = array();
    foreach (facetapi_get_active_searchers() as $searcher) {
      $adapter = facetapi_adapter_load($searcher);
      $url_processor = $adapter->getUrlProcessor();
      $filter_key = $url_processor->getFilterKey();
      $params = $url_processor->getParams();
      if (isset($params[$filter_key])) {
        foreach ($params[$filter_key] as $index => $value) {
          $facets[$filter_key][$index] = array(
            '#type' => 'hidden',
            '#value' => $value,
            '#name' => $filter_key . '[' . $index . ']',
          );
        }
      }
    }

    // Inject the hidden fields into the exposed widget output.
    $this->view->exposed_widgets = str_replace($this->getFormPlaceholder(), drupal_render($facets), $this->view->exposed_widgets);
    return parent::post_execute($values);
  }

  /**
   * This doesn't output the facet fields but a placeholder for later injection.
   *
   * We can't output the hidden fields here because at that point it's not sure
   * that facetapi_get_active_searchers() will provide the necessary
   * information. This due the fact that the exposed form handling takes place
   * before the views query is run. And only with the query run we might get the
   * searcher related to this view.
   *
   * @see facetapi_get_active_searchers()
   */
  public function exposed_form(&$form, &$form_state) {
    $form['facetapi_keep_facets_placeholder'][] = array(
      '#type' => 'markup',
      '#markup' => $this->getFormPlaceholder(),
    );
  }

}

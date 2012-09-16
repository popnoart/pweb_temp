<?php

/**
 * @file
 *
 * @author Lachezar Valchev
 */

/**
 * Custom class providing dropdown widget to facet search.
 */
class PrpFacetDropdownWidget extends FacetapiWidget {

  /**
   * Overrides constructor to reset the key.
   */
  public function __construct($id, array $realm, FacetapiFacet $facet, stdClass $settings) {
    parent::__construct($id, $realm, $facet, $settings);
    if (isset($this->settings->settings['soft_limit'])) {
      $this->jsSettings['limit'] = $this->settings->settings['soft_limit'];
    }
    $this->key = $facet['name'];
  }

  /**
   * Renders the form.
   */
  public function execute() {
    $elements = &$this->build[$this->facet['field alias']];
    $settings = $this->settings->settings;

    $elements = drupal_get_form($this->facet['field alias'] . '_facetapi_select_form', $elements, $this->facet['field alias'], $settings);
  }

}

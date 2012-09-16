<?php

/**
 * @file
 * The standard URL processor.
 */

/**
 * Extension of FacetapiUrlProcessorStandard.
 * Restricts only one value per facet to be selected
 */
class FacetapiUrlProcessorSingleItem extends FacetapiUrlProcessorStandard {

  /**
   * Implements FacetapiUrlProcessor::getQueryString().
   */
  public function getQueryString(array $facet, array $values, $active) {
    $realms = facetapi_get_realm_info();
    $qstring = $this->getParams();
    $active_items = $this->adapter->getActiveItems($facet);
    $field_alias = rawurlencode($facet['field alias']);

    foreach ($realms as $realm_name => $realm) {
      $facet_settings[$realm_name] = $this->adapter->getFacetSettings($facet, $realm);
      $facet_settings_global[$realm_name] = $this->adapter->getFacetSettingsGlobal($facet);

      if ($facet_settings[$realm_name]->settings['widget'] == 'facetapi_links' && $facet_settings_global[$realm_name]->settings['query_type'] == 'term' && $facet_settings[$realm_name]->settings['single_item'] == '1') {
        // Appends to qstring if inactive
        foreach ($values as $value) {
          foreach ($realms as $realm_name => $realm) {
            if (!$active && $value != 'none') {
              $check_query = $this->checkQueryString($field_alias, $qstring[$this->filterKey]);
              if ($check_query !== FALSE) {
                unset($qstring[$this->filterKey][$check_query]);
              }
              $qstring[$this->filterKey][] = $field_alias . ':' . $value;
            }
            else {
              if ($value === 0) {
                $check_query = $this->checkQueryString($field_alias, $qstring[$this->filterKey]);
                if ($check_query) {
                  unset($qstring[$this->filterKey][$check_query]);
                }
              }
              else {
                unset($qstring[$this->filterKey][$active_items[$value]['pos']]);
              }
            }
          }
        }
      }
      else {
        $qstring = $this->params;
        // Appends to qstring if inactive, removes if active.
        foreach ($values as $value) {
          if ($facet_settings[$realm_name]->settings['view_all_link'] == '1') {
            if ($active && (isset($active_items[$value]) || $value === 0)) {
              if ($value === 0) {
                $check_query = $this->checkQueryString($field_alias, $qstring[$this->filterKey]);
                if ($check_query !== FALSE) {
                  unset($qstring[$this->filterKey][$check_query]);
                }
              }
              else {
                unset($qstring[$this->filterKey][$active_items[$value]['pos']]);
              }
            }
            elseif (!$active) {
              $qstring[$this->filterKey][] = $field_alias . ':' . $value;
            }
          }
          else {
            if ($active && isset($active_items[$value])) {
              unset($qstring[$this->filterKey][$active_items[$value]['pos']]);
            }
            elseif (!$active) {
              $qstring[$this->filterKey][] = $field_alias . ':' . $value;
            }
          }
        }
      }
    }

    return array_filter($qstring);
  }

  /**
   * Implements FacetapiUrlProcessor::getQueryString().
   */
  private function checkQueryString($field_alias, array $query_f) {
    foreach ($query_f as $position => $item) {
      if (strpos($item, $field_alias) !== FALSE) {
        return $position;
      }
    }

    return FALSE;
  }

}
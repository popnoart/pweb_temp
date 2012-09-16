<?php

/**
 * @file
 */

module_load_include('php', 'apachesolr', 'Solr_Base_Query');

/**
 * Custom class to extend the standard SolrBaseQuery class in order to fix a
 * problem with the facet URLs pointing to wrong URL.
 */
class PwbSolrBaseQuery extends SolrBaseQuery {

  /**
   * Parameter to determine when to make the right redirect.
   */
  protected $is_q_path = FALSE;

  /**
   * Constructor
   *
   * @param $env_id
   *   The environment where you are calling the query from.  Typically the default environment.
   *
   * @param $solr
   *   An instantiated DrupalApacheSolrService Object.
   *   Can be instantiated from apachesolr_get_solr().
   *
   * @param $params
   *   Array of params to initialize the object (typically 'q' and 'fq').
   *
   * @param $sortstring
   *   Visible string telling solr how to sort - added to GET query params.
   *
   * @param $base_path
   *   The search base path (without the keywords) for this query, without trailing slash.
   */
  public function __construct($name, $solr, array $params = array(), $sortstring = '', $base_path = '') {
    parent::__construct($name, $solr, $params, $sortstring, $base_path);
  }

  /**
   * Get the parameter that determins if to make the right redirect.
   */
  public function getQPath() {
    return $this->is_q_path;
  }

  /**
   * Set the parameter that determins when to make the right redirect
   *
   * @param boolean $flag
   */
  public function setQPath($flag) {
    $this->is_q_path = $flag;
  }

  /**
   * Get the right path to be redirected to.
   * @see SolrBaseQuery::getPath()
   */
  public function getPath($new_keywords = NULL) {
    if ($this->is_q_path) {
      return $_GET['q'];
    }
    else {
      if (isset($new_keywords)) {
        return $this->base_path . '/' . $new_keywords;
      }
      return $this->base_path . '/' . $this->getParam('q');
    }
  }

}

<?php
/**
 * @file
 * apachesolr_and_facets.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function apachesolr_and_facets_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8080/solr/personaleweb';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_show_facets' => 0,
  );
  $export['solr'] = $environment;

  return $export;
}

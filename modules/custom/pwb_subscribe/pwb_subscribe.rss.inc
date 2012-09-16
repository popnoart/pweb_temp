<?php

/**
 * @since 1 Aug 2012
 * @author Pavlin
 *
 * RSS subscription to given Section and Search Pages
 */


function pwb_subscribe_rss() {
  global $base_url;

  $section = arg(1);

  $search = array(
    'keys'  => '',
    'filters' => array(
      0 => $section
    ),
    'sort' => NULL,
    'path' => NULL,
  );

  $results = pwb_subscribe_search($search);

  $feed_nids = array();
  foreach($results as $res) {
    $feed_nids[] = $res['fields']['entity_id'];
  }

  $channel = array(
    'title' => 'PersonaleWeb feed: ' . pwb_subscribe_filters_label($search['filters']),
  );

  node_feed($feed_nids, $channel);
}

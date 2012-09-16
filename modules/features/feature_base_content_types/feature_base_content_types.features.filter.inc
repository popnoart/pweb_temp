<?php
/**
 * @file
 * feature_base_content_types.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function feature_base_content_types_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'invisimail_encode_js_entities' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 0,
          'link' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_autop' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-8',
    'filters' => array(
      'invisimail_encode_js_entities' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 0,
          'link' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_autop' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Glossary
  $formats['glossary'] = array(
    'format' => 'glossary',
    'name' => 'Glossary',
    'cache' => '1',
    'status' => '1',
    'weight' => '-7',
    'filters' => array(
      'invisimail_encode_js_entities' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 0,
          'link' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_autop' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(),
      ),
      'glossary' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Glossary Term
  $formats['glossary_term'] = array(
    'format' => 'glossary_term',
    'name' => 'Glossary Term',
    'cache' => '1',
    'status' => '1',
    'weight' => '-6',
    'filters' => array(
      'filter_url' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'invisimail_encode_js_entities' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 0,
          'link' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_autop' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}

<?php
/**
 * @file
 * feature_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage-blocks';
  $context->description = 'Frontpage blocks';
  $context->tag = 'frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-latest_news-block_2' => array(
          'module' => 'views',
          'delta' => 'latest_news-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-upcoming_events-block_2' => array(
          'module' => 'views',
          'delta' => 'upcoming_events-block_2',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'campaignmonitor-dffd249e2997a95acc31844fb234f500' => array(
          'module' => 'campaignmonitor',
          'delta' => 'dffd249e2997a95acc31844fb234f500',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage blocks');
  t('frontpage');
  $export['frontpage-blocks'] = $context;

  return $export;
}

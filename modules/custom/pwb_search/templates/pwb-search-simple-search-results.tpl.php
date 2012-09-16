<?php

/**
 * @file
 *
 * Available variables:
 * - $search_results:
 * - $module:
 * - $type_of_search:
 * - $
        'response' => NULL,
        'results_title' => NULL,
        'rows_per_page' => NULL,
        'suggested_words' => NULL,
        'searched_keyword' => NULL,
        'image_style' => NULL,
        'enable_see_more' => NULL,
        'see_more_link_text' => NULL,
        'see_more_link_points_to' => NULL,
        'type_of_search' => NULL,
        'pwb_date_formats' => NULL,
 *
 *
 *
 * - $search_results: All results as it is rendered through
 *   search-result.tpl.php
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 *
 * @see template_preprocess_search_results()
 */
?>

<?php if ($search_results): ?>
  <div class="search-results-header-wrapper">
    <?php if ($type_of_search != 'pwb_search_search_result') { ?>
      <?php if (isset($results_title) && !empty($results_title)) { ?>
        <h2 class="title-list"><?php print t($results_title); ?></h2>
      <?php } ?>
    <?php } else { ?>
      <h2 class="title-search"><?php print t(':total results with', array(':total' => $total_search_results)) . ' "' . $searched_keyword . '" ' . t('found'); ?></h2>
    <?php } ?>
  </div>

  <?php if (isset($suggested_words)) { ?>
    <div class="text-secondary">
      <?php print $suggested_words; ?>
    </div>
  <?php } ?>

  <?php if ($type_of_search == 'pwb_search_search_result') { ?>
    <ol class="list-search <?php print $module; ?>-results">
      <?php print $search_results; ?>
    </ol>
  <?php } elseif ($type_of_search == 'section_tag_listing_search_results') { ?>
    <ul class="list-content <?php print $module; ?>-results">
      <?php print $search_results; ?>
    </ul>
  <?php } else { ?>
    <ul class="list-block text-secondary <?php print $module; ?>-results">
      <?php print $search_results; ?>
    </ul>
  <?php } ?>

  <?php if (isset($see_more)): ?>
    <p><?php print $see_more; ?></p>
  <?php endif; ?>

  <?php if (isset($pager)): ?>
    <div class="pager"><?php print $pager; ?></div>
  <?php endif; ?>
<?php else : ?>
  <?php print pwb_search_help('pwb_search#noresults', drupal_help_arg()); ?>
<?php endif; ?>

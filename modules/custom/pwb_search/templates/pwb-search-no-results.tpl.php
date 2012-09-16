<?php

/**
 * @file
 */

?>

<?php if (isset($suggested_words)) { ?>
  <div class="text-secondary">
    <?php print $suggested_words; ?>
  </div>
<?php } ?>

<div class="pwb-search-no-results"><?php print $search_no_results; ?></div>

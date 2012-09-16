<?php

/**
 * @file
 */

?>

<div class="mountain-tags-listing">
  <?php if (isset($selected_tags) && !empty($selected_tags)) { ?>
    <ul class="selected-mountain-tags">
      <?php foreach ($selected_tags as $tid => $item) { ?>
        <li class="tag-link tag-selected selected-mountain-tag"><?php print l($item['name'], ltrim($variables['redirect_url'], '/') . '/' . $item['name'], array('attributes' => array('id' => 'mountain-tag-' . $tid, 'class' => array($item['class'])))); ?></li>
      <?php } ?>
    </ul>
  <?php } ?>

  <?php if (isset($not_selected_tags) && !empty($not_selected_tags)) { ?>
    <ul class="not-selected-mountain-tags">
      <?php foreach ($not_selected_tags as $tid => $item) { ?>
        <li class="tag-link not-selected-mountain-tag"><?php print l($item['name'], ltrim($variables['redirect_url'], '/') . '/' . $item['name'], array('attributes' => array('id' => 'mountain-tag-' . $tid, 'class' => array($item['class'])))); ?></li>
      <?php } ?>
    </ul>
  <?php } ?>
</div>

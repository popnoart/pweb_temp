<li class="<?php print $classes; ?> <?php print (isset($item_class)) ? $item_class : ''; ?>"<?php print $attributes; ?>>
  <?php if ($result_title): ?>
    <div class="list-item-title"><?php print $result_title; ?></div>
  <?php endif; ?>

  <?php if (isset($result_snippet)): ?>
    <div class="list-item-snippet"><?php print $result_snippet; ?></div>
  <?php endif; ?>

  <?php if (isset($result_image)): ?>
    <div class="list-media"><?php print $result_image; ?></div>
  <?php endif; ?>

  <div class="list-item-bottom">
    <?php if (isset($bottom_info)): ?>
      <?php print $bottom_info; ?>
    <?php endif; ?>
  </div>
</li>

<?php

/**
 * @file
 */

?>


  <nav role="navigation" class="grid-full grid clearfix block-navigation area-tags">
    <div class="lft">
      <div class="pad">
        <ul class="selected-mountain-tags" id="tags-added">
          <?php if (isset($selected_tags) && !empty($selected_tags)) { $counter=0; ?>
            <?php foreach ($selected_tags as $tid => $item) { $counter++;?>
              <li class="tag-link tag-selected selected-mountain-tag" id="add<?=$counter?>moth" style="visibility:visible;"><?php print l($item['name'], ltrim($variables['redirect_url'], '/') . '/' . $item['name'], array('attributes' => array('rel' => 'tag'.$counter, 'id' => 'add' . $counter, 'class' => array($item['class'])))); ?><span class="autohide" id="add<?=$counter?>span"><?=$tid?></span></li>
            <?php } ?>
          <?php } ?>
        </ul>
      </div>
    </div>
    <div class="rgt">
      <div class="pad">
        
        <ul class="not-selected-mountain-tags" id="tags-default">
          <?php if (isset($selected_tags) && !empty($selected_tags)) { ?>
            <?php foreach ($selected_tags as $tid => $item) { ?>
              <li class="tag-link not-selected-mountain-tag" style="display:none;"><?php print l($item['name'], ltrim($variables['redirect_url'], '/') . '/' . $item['name'], array('attributes' => array('rel-tid' => $tid, 'id' => 'mountain-tag-' . $tid, 'class' => array($item['class'])))); ?></li>
            <?php } ?>
          <?php } ?>
          <?php if (isset($not_selected_tags) && !empty($not_selected_tags)) { ?>
              <?php foreach ($not_selected_tags as $tid => $item) { ?>
                <li class="tag-link not-selected-mountain-tag"><?php print l($item['name'], ltrim($variables['redirect_url'], '/') . '/' . $item['name'], array('attributes' => array('rel' => $tid, 'id' => 'mountain-tag-' . $tid, 'class' => array($item['class'])))); ?></li>
              <?php } ?>
          <?php } ?>
        </ul>
        
      </div>
    </div>
    <div class="clr"></div>
    <div class="more">
      <a href="#" title="LinkDescription">Abonner på kvalitetsudvikling<br />+ Deltid + Jobsamtale</a>
    </div>
    </nav>
<!--

<div class="mountain-tags-listing">
  <h2>Selected:</h2>
  <?php if (isset($selected_tags) && !empty($selected_tags)) { ?>
    <ul class="selected-mountain-tags">
      <?php foreach ($selected_tags as $tid => $item) { ?>
        <li class="tag-link tag-selected selected-mountain-tag"><?php print l($item['name'], ltrim($variables['redirect_url'], '/') . '/' . $item['name'], array('attributes' => array('id' => 'mountain-tag-' . $tid, 'class' => array($item['class'])))); ?></li>
      <?php } ?>
    </ul>
  <?php } ?>

  <h2>Not Selected:</h2>
  <?php if (isset($not_selected_tags) && !empty($not_selected_tags)) { ?>
    <ul class="not-selected-mountain-tags">
      <?php foreach ($not_selected_tags as $tid => $item) { ?>
        <li class="tag-link not-selected-mountain-tag"><?php print l($item['name'], ltrim($variables['redirect_url'], '/') . '/' . $item['name'], array('attributes' => array('id' => 'mountain-tag-' . $tid, 'class' => array($item['class'])))); ?></li>
      <?php } ?>
    </ul>
  <?php } ?>
</div>
-->
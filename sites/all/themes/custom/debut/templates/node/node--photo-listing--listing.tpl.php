<?php
/**
 * @file
 * Template file.
 */
?>
<div class="photo node-item photo-listing-item contextual-links-region">
  <?php print $_html['contextual_links']; ?>
  <div class="title">
    <?php print $_html['title']; ?>
  </div>
  <?php foreach ($_html['images'] as $image) : ?>
    <?php print $image; ?>
  <?php endforeach; ?>
  <div class="separator"></div>
</div>

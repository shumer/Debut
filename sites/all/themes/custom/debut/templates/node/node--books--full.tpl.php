<?php
/**
 *
 * @file
 * Template file.
 */
?>
<div class="news node-item books-item">
  <div class="books-title">
      <?php print $_html['title']; ?>
  </div>
  <?php if (!empty($_html['image'])) : ?>
    <div class="book-image">
      <?php print $_html['image']; ?>
      <div class="publication"><?php print $_html['publication']; ?></div>
      <?php if (!empty($_html['pdf_link'])) : ?>
        <div class="book_link"><?php print $_html['pdf_link']; ?></div>
      <?php endif; ?>
    </div>
  <?php endif; ?>
  <div class="book-content">
    <h4><?php print $_html['stories_type']; ?></h4>
    <?php if (!empty($_html['authors'])) : ?>
      <?php foreach ($_html['authors'] as $author) : ?>
        <div class="book-author">
          <?php print $author['author']; ?>
          <div class="text">
            <?php print $author['stories']; ?>
          </div>
          <div class="clear"></div>
        </div>
      <?php endforeach; ?>
    <?php endif; ?>
  </div>
  <div class="clear"></div>
  <div class="separator"></div>
</div>

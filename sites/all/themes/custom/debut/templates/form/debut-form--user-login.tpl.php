<?php
/**
 * @file
 * Form template.
 */
?>
<section class="newsletter-confirmation">
  <div class="form-items">
    <?php print theme('status_messages'); ?>
    <?php print $_html['name']; ?>
    <?php print $_html['pass']; ?>
    <?php print $_html['submit']; ?>
  </div>
  <div class="hidsden">
    <?php print $_html['form']; ?>
  </div>
</section>

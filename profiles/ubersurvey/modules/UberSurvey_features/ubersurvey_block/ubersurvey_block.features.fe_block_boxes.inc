<?php
/**
 * @file
 * ubersurvey_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ubersurvey_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer section';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'footer_section';
  $fe_block_boxes->body = '© <?php echo date("Y");?> Ubersuvey. All rights reserved. ';

  $export['footer_section'] = $fe_block_boxes;

  return $export;
}

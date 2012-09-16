<?php

/**
 * @file
 * Field handler to display print button.
 */

/**
 * Field handler for Propeople print.
 */
class propeople_print_handler_field_print extends views_handler_field {

  function query() {
  }
  
  function render($values) {
    $block = print_block_view('print-links');
    return $block['content'];
  }
  
}

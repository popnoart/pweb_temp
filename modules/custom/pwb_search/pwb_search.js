(function ($) {
  Drupal.behaviors.pwb_search = {
    attach: function (context, settings) {
      $('#pwb-search-content-types', context).change(function () {
        jQuery(this).parents('form:first').find(':submit:first').click();
      });
    }
  };
}(jQuery));
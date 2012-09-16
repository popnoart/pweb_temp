(function ($) {
  Drupal.behaviors.prp_facet_dropdown = {
    attach: function (context, settings) {
      jQuery('#prp-facet-dropdown-facets:not(.prp-dropdown-processed)', context).each(function (){
        jQuery(this).change(function () {
          jQuery(this).parents('form:first').submit();
        });

        jQuery(this).addClass('prp-dropdown-processed');
      });
    }
  };
}(jQuery));
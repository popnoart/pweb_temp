(function ($) {
  Drupal.behaviors.pwb_section = {
    attach: function (context, settings) {
      $('ul.notselected-mountain-tags li.notselected-mountain-tag a:not(.processed)', context).each(function() {
        jQuery(this).click(function () {
          var tmp = new Array();
          tmp.push(jQuery(this).attr('id').split('-')[2]);
          var url = '/ajax/section/' + settings.paramount_tag + '/';

          $('li.selected-mountain-tag a', context).each(function () {
        	tmp.push(jQuery(this).attr('id').split('-')[2]);
          });

          url += tmp.join('+');

          $.ajax({
      	    'url': url,
          	'success': function(data) {
          	  $('div.grid-full').html(data.html);
          	    Drupal.attachBehaviors(data.html);
                },
          	'dataType': "json"
          });

          return false;
        });

        jQuery(this).addClass('processed');
      });
    }
  };
}(jQuery));

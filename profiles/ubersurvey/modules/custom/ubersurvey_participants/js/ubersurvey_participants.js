(function ($) {
  Drupal.behaviors.ubersurvey_ui = {
    attach: function(context, settings) {
      // Use context to ensure the link is only ever activated if it's regenerated.
      var $mySpecialLink = $('#my-special-link', context);
      // Only run if the link exists in the current page load or fragment refresh.
      if ($mySpecialLink.size() > 0) {
        new Drupal.ajax('#my-special-link', $mySpecialLink, {
          url: $mySpecialLink.attr('href'),
          settings: {},
          event: 'click tap'
        });
      }
    }
  }
})(jQuery);
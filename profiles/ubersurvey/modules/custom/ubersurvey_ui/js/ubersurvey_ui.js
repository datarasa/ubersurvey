(function ($) {
  $(document).ready(function(){
      $(window).scroll(function(){
         if($('.page-node-edit.node-type-qform #qforms-elements .qforms-element').length){
           var el1 = $('div.form-item-qforms-add-element'); 
           var windowpos = $(window).scrollTop();
           if ($(window).scrollTop() > 300){
             el1.stop().animate({'top':windowpos - 250},'fast');
           }
         }
       });

    var qforms = $('#qforms-elements .qforms-element').length;
    $('div.form-item-qforms-add-element').append('<div class="select-title" style="display:none;">Add Question</div>');
    $('div.form-item-qforms-add-element .form-select').mouseenter(function(){
      $('div.form-item-qforms-add-element .select-title').show();
    });
    $('div.form-item-qforms-add-element .form-select').mouseleave(function(){
      $('div.form-item-qforms-add-element .select-title').hide();
    });
    $('div.form-item-qforms-add-element .form-select').change(function(){
      $('div.form-item-qforms-add-element .select-title').hide();
    });
   $('#qforms-form-actions').css("visibility","hidden");
   
   $(document).ajaxComplete(function(event, xhr, settings){
     if (settings.url == '/system/ajax'){
       
       if($('#qforms-elements .qforms-element').length != qforms){
          if($('#qforms-elements .qforms-element').length){
            qforms = $('#qforms-elements .qforms-element').length;
            $('html, body').animate({scrollTop: $('#qforms-elements .qforms-element').last().position().top + $('#qforms-elements .qforms-element').height()}, 1000);
            $('div.form-item-qforms-add-element').css({top: $('#qforms-elements .qforms-element').last().position().top  + $('#qforms-elements .qforms-element').height()}, 2000);
			$('#qforms-form-actions').css("visibility","visible");
          }
          else{ 
            qforms = 0;
            $('div.form-item-qforms-add-element').css({top: 'auto'}, 2000);
			$('#qforms-form-actions').css("visibility","hidden");
          }
       }
       //run on scroll
       $(window).scroll(function(){
         if($('#qforms-elements .qforms-element').length){
           var el1 = $('div.form-item-qforms-add-element'); 
           var windowpos = $(window).scrollTop();
           if ($(window).scrollTop() > 300){
             el1.stop().animate({'top':windowpos - 250},'fast');
           }
         }
       });  
     }
   });
 });
}(jQuery));


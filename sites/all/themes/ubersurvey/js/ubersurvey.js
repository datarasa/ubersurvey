// JavaScript Document
(function($) {
  $(document).ready(function() {  
    $(".charts-google").html('<span class="loader"><img src="/sites/all/themes/ubersurvey/images/loading.gif"></span>');
    $('.toggle-nav').click(function(e) {
      e.preventDefault();
      hideNav();
    });  

    function hideNav() {
      $("aside.sidebar_first").toggle().toggleClass("forced-hide");
        if ($("aside.sidebar_first").is(":visible")) {
          $("#main").css("margin-left", $("aside.sidebar_first").width());
        } else {
          $("#main").css("margin-left", 0);
        }
    }
	
	$('body.page-user-password img.login_logo').attr("src","/sites/default/files/logo__22.png");
	$('body.page-user-reset img.login_logo').attr("src","/sites/default/files/logo__22.png");
	$('body.page-user.not-logged-in img.login_logo').attr("src","/sites/default/files/logo__22.png");
	//$("#edit-qforms-add-element").attr( "href", "#" );
	/*$("#edit-qforms-add-element").attr( "rel", "tooltip" );
	$("#edit-qforms-add-element").attr( "data-placement", "right" );
	$("#edit-qforms-add-element").attr( "data-original-title", "Add Question" );
	$("#edit-qforms-add-element").attr( "data-toggle", "tooltip" );*/
	  
	$("#edit-qforms-add-element").children('optgroup').children().unwrap();
    $("#edit-qforms-add-element").children().remove("optgroup");  
	$("#edit-qforms-add-element").children('option').addClass('opt');
	
	$('.node-qform-form .tabbable  ul.nav > li').each(function(){

      if ($(this).filter(':contains("Publishing")').length > 0) {
        $(this).addClass("pub");
      }
    });
	$('.page-user ul.nav-tabs > li').each(function(){
	  if ($(this).filter(':contains("Hybrid")').length > 0) {
        $(this).addClass("hyb");
      }
	});
	$('body.page-user-edit fieldset#edit-picture div.user-picture').wrap('<div id="pro-pic" class="col-md-12 col-sm-12 col-xs-12"></div>');
	$('body.page-user-edit fieldset#edit-picture div.form-item').addClass('col-sm-12 p-0');
	 
	$('#edit-cancel').addClass('btn btn-cancel');
	
	$('body.page-node-qforms-result .qforms-submission-author .user-picture').wrap('<div class="picture col-md-1 col-sm-1 col-xs-12 p-0"></div>');
	
	$('body.page-node-qforms-result .qforms-submission-author div.username').addClass('cred');
	$('body.page-node-qforms-result .qforms-submission-author div.time').addClass('cred');
	$('body.page-node-qforms-result .qforms-submission-author div.ip').addClass('cred');
	$('body.page-node-qforms-result .qforms-submission-author div.cred').wrapAll('<div class="creds col-md-11 col-sm-11 col-xs-12" />');
	
	$('.page-search .region-content h2').each(function(){
	  if ($(this).filter(':contains("Search results")').length > 0) {
        $(this).addClass("search-title");
      }
	});
	$('.page-node ul.action-links li a').each(function(){
	  if ($(this).filter(':contains("Copy Survey")').length > 0) {
        $(this).addClass("copy-surv");
      }
	});
	$('.copy-surv').addClass('btn');
	$( ".page-node-participants textarea#edit-emails" ).attr( "rel", "popover" );
	$('[rel=popover]').popover();
	
	//$('#qforms-form-actions').css("visibility","hidden");
	
	
	if($('#qforms-elements .qforms-element').length){
        $('#qforms-form-actions').css("visibility","visible");
	  } 
	  else {
        $('#qforms-form-actions').css("visibility","hidden");
	  } 
	$( "#edit-qforms-element-5-date").addClass('date-field');
	$('.date-field').data('bs.tooltip').options.placement = 'top'; 
	$('.form-control[readonly]').options.placement = 'top'; 
	
	$(window).ready( function () {
      if ($(window).width() <= 1024) {
        hideNav();
          $('#edit-qforms-submit-action-redirect').data('bs.tooltip').options.placement = 'bottom';
          $('#edit-qforms-submit-email-values').data('bs.tooltip').options.placement = 'top';
	  }
	  
    });
	
  });//ready ends here
})(jQuery);	 
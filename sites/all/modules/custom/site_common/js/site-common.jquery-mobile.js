/**
 * @file
 * Implements logic to support jquery mobile.
 */

// Namespace.
var site_common = site_common || {};

// Init jQuery sign.
(function ($) {

// Init main object.
site_common.jquery_mobile = site_common.jquery_mobile || {
  _inited: false,
};

// Overrige drupal attach behaviors.
site_common.jquery_mobile.DrupalAttachBehaviors = Drupal.attachBehaviors;
Drupal.attachBehaviors = function (context, settings) {
  site_common.jquery_mobile.attachBehaviors(context, settings);
}

// On page create, replace all links actions with navigate event.
$(window).on('pagecreate', function (event, data) {
  site_common.jquery_mobile.init(event, data);
});

// On page before show - replace Drupal.settings with settings for this page.
$(window).on('pagecontainerbeforeshow', function(event, data) {
  site_common.jquery_mobile.pagecontainerbeforeshow(event, data);
});

// On page load reattach behaviors.
$(window).on('pagecontainerload', function (event, data) {

  // Get context and settings.
  var $context = data.toPage;

  // Getting settings a bit harder.
  var response_text = data.xhr.responseText;
  response_text = response_text.match(/jQuery\.extend\(Drupal\.settings\,(.*)/)[1];
  if (response_text && response_text != '') {
    var eval_text = 'var site_common_drupal_settings = (' + response_text;
    eval(eval_text);
    if (site_common_drupal_settings) {
      site_common_drupal_settings._site_common_jquery_mobile_url = data.absUrl;
      // Save data to DOM element and switch global settings.
      $context[0]._drupalSettings = site_common_drupal_settings;
      Drupal.settings = site_common_drupal_settings;
    }
  }

  // Attach Behaviors to new page.
  // We use timeout to offload behaviors from current thread as contain is not yet in DOM
  // despite JQM says otherwise.
  setTimeout(function () {
    $context._skipCreate = true;
    Drupal.attachBehaviors($context, Drupal.settings);
  }, 0);
});

/**
 * Default attach to links, should be overriden in your theme!
 */
Drupal.behaviors.site_common_jquery_mobile = {
  attach: function ($context, settings) {
    site_common.jquery_mobile.attach($context, settings);
  }
};

/**
 * Admin behaviors.
 */
Drupal.admin = Drupal.admin || {};
Drupal.admin.behaviors = Drupal.admin.behaviors || {};
Drupal.admin.behaviors.site_common_jquery_mobile = function (context, settings) {
  var $context = $(context);
  $context._skipCreate = true;
  site_common.jquery_mobile.attach($context, settings);
};

/**
 * Behavior implementation.
 */
site_common.jquery_mobile.attach = function ($context, settings) {

  // Enhance content if it wasn't page load.
  if (!$context._skipCreate) {
    qtools.log('SCJQM: enhance:', $context);
    $context.trigger("create");
  }

  // Define a click binding for all links in the page.
  $context.find('a, .site-common-jqm-navigate').once('site-common-jqm-navigate', function () {
    var $this = $(this);
    $this.click(function(event) {
      // Skip if item disabled.
      if ($this.hasClass('.site-common-jqm-navigate-disabled')) {
        return true;
      }

      // Get destination url.
      var href = $this.attr('data-navigate-href');
      if (!href) {
        href = $this.attr('href');
      }

      // Prevent the usual navigation behavior.
      event.preventDefault();

      // Ignore anchor and empty links.
      var url = qtools.parseUrl(href);
      if (url.hash != '' || href == '') {
        return;
      }

      // Direct navigate for excluded (admin?) links.
      var pattern = Drupal.settings.site_common.jquery_mobile.exclude;
      if (url.href.match(pattern)) {
        window.location.href = href;
        return true;
      }
      else {
        qtools.log('SCJQM: check fails:', [url.href, pattern]);
      }

      // Get list of attributes that needs to be stored.
      var attrlist = $this.attr('data-navigate-params');
      var params = {};
      if (attrlist && attrlist != '') {
        attrlist = attrlist.split(',');
        for (key in attrlist) {
          params[attrlist[key]] = $this.attr('data-' + attrlist[key]);
        }
      }

      // Pass to internal naviagtion function.
      site_common.jquery_mobile.naviagte(href, params);
    });
  });
}

/**
 * Return current page.
 */
site_common.jquery_mobile.getPageContext = function () {
  var $context = $('.page.ui-page-active');
  if ($context.length == 0) {
    $context = $('.page[data-role="page"]');
  }
  return $context;
}

/**
 * Attach behaviors replacement.
 */
site_common.jquery_mobile.attachBehaviors = function (context, settings) {
  // Do nothing if not inited.
  if (!site_common.jquery_mobile._inited) {
    return;
  }

  // Get apropriate context.
  if (!context) {
    $context = site_common.jquery_mobile.getPageContext();
  }
  else if (!context._skipCreate) {
    $context = $(context);
  }
  else {
    $context = context;
  }

  // Log action.
  qtools.log('SCJQM: attachBehaviors to:', $context);

  // Attach drupal behaviors, selecting apropriate context.
  site_common.jquery_mobile.DrupalAttachBehaviors($context, settings);
}

/**
 * Perform initialisation, you may override this.
 */
site_common.jquery_mobile.init = function (event, data) {

  // Only init once.
  if (!site_common.jquery_mobile._inited) {

    // Mark as inited.
    site_common.jquery_mobile._inited = true;

    // Save main page settings.
    Drupal.settings._site_common_jquery_mobile_url = window.location.href;
    site_common.jquery_mobile._original_settings = Drupal.settings;

    // Save settings.
    event.target._drupalSettings = Drupal.settings;

    // Attach behaviors to whole doc at first load.
    var $context = $(document);
    $context._skipCreate = true;
    Drupal.attachBehaviors($context, Drupal.settings);
  }
}

/**
 * Handle before show event.
 */
site_common.jquery_mobile.pagecontainerbeforeshow = function (event, data) {
  // Restore settings from page we navigating to.
  Drupal.settings = data.toPage[0]._drupalSettings;
  qtools.log('SCJQM: populate settings for:', Drupal.settings._site_common_jquery_mobile_url);
}

/**
 * Performs navigate.
 */
site_common.jquery_mobile.naviagte = function (href, params) {
  // Alter the url according to the given params.
  $.mobile.navigate(href, params);
  qtools.log('SCJQM: navigate to:', href);
}

})(jQuery);


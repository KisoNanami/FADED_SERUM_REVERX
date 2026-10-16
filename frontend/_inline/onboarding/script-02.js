(function () {
  "use strict";
  var currentSlide = 0;
  var totalSlides = 3;
  var dither = null;
  var nativeRuntimeActive = __FAD_ONBOARDING_RUNTIME_ACTIVE__;
  var activationStarted = false;
  var acceptCompleted = false;
  var acceptRecoveryTimer = null;
  var activeResultId = null;
  var activeCommandIsAccept = false;
  var activeCommandIsCopy = false;
  var commandSequence = 0;
  var capabilitySequence = 0;
  var juceCompletionListenerInstalled = false;
  var authStateRevision = -1;
  var authState = readInitialAuthState();
  var waitingForBrowser = false;
  // Keep the existing page/bridge IDs while folding the educational detours into page 02.
  // The visible journey is now welcome -> sound workflow -> account handoff.
  var compactSlides = [
    document.getElementById("slide-0"),
    document.getElementById("slide-1"),
    document.getElementById("slide-4")
  ];
  document.getElementById("slide-2").className = "slide hidden";
  document.getElementById("slide-3").className = "slide hidden";
  var slides = compactSlides;
  var segments = document.querySelectorAll(".segment");
  var previousButton = document.getElementById("btn-prev");
  var nextButton = document.getElementById("btn-next");
  var enterButton = document.getElementById("btn-enter");
  var agreement = document.getElementById("legal-agreement");
  var legalButtons = document.querySelectorAll(".legal-link");
  var legalDialogLayer = document.getElementById("legal-dialog-layer");
  var legalDialog = document.getElementById("legal-dialog");
  var legalDialogTitle = document.getElementById("legal-dialog-title");
  var legalDialogSummary = document.getElementById("legal-dialog-summary");
  var legalDialogOpen = document.getElementById("legal-dialog-open");
  var legalDialogClose = document.getElementById("legal-dialog-close");
  var legalDialogBackground = [
    document.querySelector(".os-bar"),
    document.getElementById("slider"),
    document.querySelector(".bottom-rail"),
    document.getElementById("accept-error")
  ];
  var legalDialogReturnFocus = null;
  var legalDialogPath = "eula";

  function setLegalDialogBackgroundInert(inert) {
    for (var i = 0; i < legalDialogBackground.length; i++) {
      var node = legalDialogBackground[i];
      if (!node) continue;
      if (inert) {
        node.setAttribute("inert", "");
        node.setAttribute("aria-hidden", "true");
      } else {
        node.removeAttribute("inert");
        node.removeAttribute("aria-hidden");
      }
    }
  }

  function openLegalDocument(button) {
    legalDialogReturnFocus = button;
    legalDialogTitle.textContent = button.dataset.legalTitle;
    legalDialogSummary.textContent = button.dataset.legalSummary;
    legalDialogPath = button.dataset.legalPath || "eula";
    legalDialogLayer.classList.remove("hidden");
    legalDialogLayer.setAttribute("aria-hidden", "false");
    setLegalDialogBackgroundInert(true);
    legalDialogOpen.focus();
  }

  function closeLegalDocument() {
    if (legalDialogLayer.classList.contains("hidden")) return;
    legalDialogLayer.classList.add("hidden");
    legalDialogLayer.setAttribute("aria-hidden", "true");
    setLegalDialogBackgroundInert(false);
    if (legalDialogReturnFocus && document.body.contains(legalDialogReturnFocus)) {
      legalDialogReturnFocus.focus();
    }
  }

  function normalizeAuthState(state) {
    state = state && typeof state === "object" ? state : {};
    return {
      activated: state.activated === true,
      storeManaged: state.storeManaged === true,
      standalone: state.standalone === true,
      deviceCode: typeof state.deviceCode === "string" ? state.deviceCode : "",
      email: typeof state.email === "string" ? state.email : "",
      tier: typeof state.tier === "string" ? state.tier : "",
      isTrial: state.isTrial === true,
      trialExpiresAt: Number(state.trialExpiresAt) || 0,
      entitlementExpiresAt: Number(state.entitlementExpiresAt) || 0,
      entitlementGraceUntil: Number(state.entitlementGraceUntil) || 0,
      error: typeof state.error === "string" ? state.error : "",
      errorCode: typeof state.errorCode === "string" ? state.errorCode : "",
      revision: Number(state.revision)
    };
  }

  function readInitialAuthState() {
    try { return normalizeAuthState(__FAD_ONBOARDING_AUTH_STATE__); }
    catch (error) { return normalizeAuthState(null); }
  }

  function nonceRoute(base) {
    return base + "?nonce=" + encodeURIComponent("__FAD_ONBOARDING_ACCEPT_NONCE__");
  }

  function capabilityRoute(base) {
    capabilitySequence += 1;
    var deliveryId = String(Date.now()) + "-" + String(capabilitySequence);
    return nonceRoute(base) + "&delivery=" + encodeURIComponent(deliveryId);
  }

  function handleJuceNativeCompletion(event) {
    if (!event || Number(event.promiseId) !== activeResultId) return;
    if (activeCommandIsAccept && event.result === false) showAcceptError();
    if (activeCommandIsCopy) document.getElementById('copy-device-code').textContent = tr(event.result === true ? 'common.copied' : 'common.copy_failed');
  }

  function installNativeCompletionListener() {
    try {
      if (juceCompletionListenerInstalled) return true;
      if (!window.__JUCE__ || !window.__JUCE__.backend || !window.__JUCE__.backend.addEventListener) return false;
      window.__JUCE__.backend.addEventListener("__juce__complete", handleJuceNativeCompletion);
      juceCompletionListenerInstalled = true;
      return true;
    } catch (error) {}
    return false;
  }

  function dispatchJuceNativeCommand(url, resultId) {
    try {
      if (!window.__JUCE__ || !window.__JUCE__.backend || !window.__JUCE__.backend.emitEvent) return false;
      var init = window.__JUCE__.initialisationData;
      var functions = init && init.__juce__functions ? init.__juce__functions : [];
      if (!functions.indexOf || functions.indexOf("fadNativeCommand") < 0) return false;
      installNativeCompletionListener();
      window.__JUCE__.backend.emitEvent("__juce__invoke", {
        name: "fadNativeCommand",
        params: [url],
        resultId: resultId
      });
      return true;
    } catch (error) {}
    return false;
  }

  function dispatchNativeNavigation(url) {
    try { window.location.href = url; } catch (error) {}
    try {
      var link = document.createElement("a");
      link.href = url;
      document.body.appendChild(link);
      link.click();
      document.body.removeChild(link);
    } catch (error) {}
  }

  function dispatchNative(url) {
    commandSequence += 1;
    var resultId = Date.now() + commandSequence;
    activeResultId = resultId;
    activeCommandIsAccept = url.indexOf("fadlab://onboarding-accept?") === 0;
    activeCommandIsCopy = url.indexOf("fadlab://onboarding-copy-device-code?") === 0;
    var sentToNative = dispatchJuceNativeCommand(url, resultId);
    setTimeout(function () { dispatchNativeNavigation(url); }, sentToNative ? 120 : 0);
  }

  function dispatchCapability(base) { dispatchNative(capabilityRoute(base)); }

  function showAcceptError(message) {
    var error = document.getElementById("accept-error");
    error.textContent = typeof message === "string" ? message : tr("common.could_not_save_setup_check_access_and_try_again");
    error.classList.remove("hidden");
    enterButton.disabled = !(authState.activated && agreement.checked);
  }

  window.fadOnboardingNativeAcceptRejected = function () {
    if (acceptRecoveryTimer) clearTimeout(acceptRecoveryTimer);
    showAcceptError(authState.error || tr("common.authorisation_is_not_complete_check_access_then_try_entering_again"));
  };

  function updateAcceptAvailability() {
    enterButton.disabled = !(authState.activated && agreement.checked) || acceptCompleted;
  }

  function formatAuthorizationStatus() {
    if (waitingForBrowser) return tr("common.waiting_for_the_browser_return_to_fad_synth_when_finished");
    if (!authState.activated) {
      if (authState.error) return tr("common.connection_failed_see_the_message_below");
      return authState.storeManaged ? tr("common.awaiting_access_connect_an_existing_account_or_restore_purchases") : tr("common.not_connected_sign_in_and_connect_your_existing_license");
    }
    if (authState.isTrial && authState.trialExpiresAt > 0) {
      var remainingDays = Math.max(0, Math.ceil((authState.trialExpiresAt - Date.now()) / 86400000));
      return tr("common.connected_term_license_remaining") + remainingDays + tr("common.days_2");
    }
    if (authState.entitlementExpiresAt > 0) {
      var now = Date.now();
      if (now < authState.entitlementExpiresAt) {
        return tr("common.access_valid_until")
          + new Date(authState.entitlementExpiresAt).toLocaleString("zh-CN");
      }
      if (authState.entitlementGraceUntil > now) {
        return tr("common.access_expired_device_grace_period_until")
          + new Date(authState.entitlementGraceUntil).toLocaleString("zh-CN")
          + tr("common.not_a_renewal");
      }
    }
    return tr("common.connected_device_access_is_valid");
  }

  function renderAuthState() {
    document.body.dataset.authorized = authState.activated ? "true" : "false";
    document.getElementById("store-settings").hidden = !authState.storeManaged || !authState.standalone;
    document.getElementById("store-guidance").hidden = !authState.storeManaged || authState.standalone;
    if (authState.storeManaged) {
      document.getElementById("account-intro").textContent = tr("common.connect_an_existing_fad_account_or_purchase_access_through_the");
      document.getElementById("license-summary").textContent = tr("common.existing_fad_access_continues_after_verification_purchase_and_restore_in");
      document.getElementById("trial-agreement").textContent = tr("common.plans_and_terms_are_shown_on_the_purchase_page");
    }
    document.getElementById("device-code").textContent = authState.deviceCode || tr("common.waiting_for_device_code");
    document.getElementById('copy-device-code').disabled = !authState.deviceCode;
    var accountEmail = document.getElementById("account-email");
    accountEmail.textContent = authState.email || (authState.activated ? tr("common.connected") : tr("common.not_signed_in"));
    accountEmail.title = authState.email;
    document.getElementById("auth-tier").textContent = authState.isTrial ? tr("common.term_license") : authState.tier || (authState.activated ? tr("common.authorised") : tr("common.not_authorised"));
    var recoveryRequired = !authState.activated
      && (authState.errorCode === "FAD-AUTH-STATE-SCHEMA"
        || authState.errorCode === "FAD-AUTH-STATE-CORRUPT");
    var recoveryButton = document.getElementById("reset-auth");
    recoveryButton.disabled = !recoveryRequired;
    recoveryButton.classList.toggle("available", recoveryRequired);
    recoveryButton.setAttribute("aria-hidden", recoveryRequired ? "false" : "true");
    document.getElementById("refresh-auth").disabled = recoveryRequired;
    // DIRECT_ONLY_BEGIN
    document.getElementById("redeem-cdk").disabled = recoveryRequired;
    // DIRECT_ONLY_END
    var connectAccountButton = document.getElementById("connect-account");
    connectAccountButton.textContent = authState.activated ? tr("common.account_connected_2") : tr("common.sign_in_or_create_account");
    connectAccountButton.disabled = authState.activated || recoveryRequired;
    connectAccountButton.classList.toggle("primary", !authState.activated);
    document.getElementById("auth-status").textContent = formatAuthorizationStatus();
    document.getElementById("handoff-note").textContent = waitingForBrowser
      ? tr("common.complete_the_steps_in_your_browser_keep_fad_synth_open")
      : authState.activated
        ? tr("common.device_connected_read_and_accept_the_terms_then_click_enter")
        : authState.error
          ? tr("common.connection_incomplete_read_the_error_below_correct_it_and_try")
          : tr("common.keep_fad_synth_open_it_will_unlock_after_you_finish");
    var authError = document.getElementById("auth-error");
    authError.textContent = authState.error
      ? ((authState.errorCode ? authState.errorCode + " · " : "") + authState.error)
      : "";
    authError.tabIndex = authState.error ? 0 : -1;
    authError.scrollTop = 0;
    updateAcceptAvailability();
  }

  window.fadOnboardingReceiveAuthState = function (state) {
    state = normalizeAuthState(state);
    if (state.revision <= authStateRevision) return;
    authStateRevision = state.revision;
    authState = state;
    if (state.activated || state.error) waitingForBrowser = false;
    renderAuthState();
  };

  function setDitherState(state) {
    var previousState = document.body.dataset.ditherState || "boot";
    document.body.dataset.ditherState = state;
    if (!dither) return;
    if (!nativeRuntimeActive || document.hidden) {
      dither.setActive(false);
      return;
    }
    if (state === "boot") {
      if (previousState === "corner" && typeof dither.restoreHero === "function")
        dither.restoreHero(0.55);
      else
        dither.replay();
    } else if (state === "exit") {
      dither.exit();
    } else if (previousState === "boot") {
      if (typeof dither.wakeTo === "function") dither.wakeTo("right", 0.82, 0.55);
      else dither.setActive(true);
    }
  }

  function notifyPage(page) {
    dispatchNativeNavigation("fadlab://onboarding-page/" + page);
  }

  function isElementKeyboardReachable(element) {
    if (!element || element === document.body || !document.body.contains(element)) return false;
    if (element.disabled) return false;
    var owningSlide = element.closest ? element.closest(".slide") : null;
    if (owningSlide && !owningSlide.classList.contains("active")) return false;
    var style = window.getComputedStyle(element);
    return style.display !== "none" && style.visibility !== "hidden";
  }

  function migrateFocusAfterSlideChange(previousFocus, page) {
    if (!previousFocus || previousFocus === document.body) return;
    if (isElementKeyboardReachable(previousFocus)) return;
    var successor = slides[page];
    if (previousFocus === nextButton && isElementKeyboardReachable(enterButton)) successor = enterButton;
    else if (previousFocus === nextButton && isElementKeyboardReachable(previousButton)) successor = previousButton;
    else if ((previousFocus === enterButton || previousFocus === previousButton) && isElementKeyboardReachable(nextButton)) successor = nextButton;
    if (successor && successor.focus) successor.focus();
  }

  function applyRovingFocusOrder(page) {
    for (var i = 0; i < totalSlides; i++) {
      segments[i].tabIndex = i === page ? 0 : -1;
      slides[i].tabIndex = i === page ? 0 : -1;
    }
  }

  function updateNavigationCopy(page) {
    nextButton.textContent = page === 0 ? tr("common.explore_the_sound") : tr("common.connect_account");
  }

  function goToSlide(page, options) {
    if (page < 0 || page >= totalSlides || page === currentSlide) return;
    var previousFocus = document.activeElement;
    currentSlide = page;
    updateNavigationCopy(page);
    for (var i = 0; i < totalSlides; i++) {
      slides[i].classList.toggle("active", i === page);
      segments[i].classList.toggle("active", i === page);
      segments[i].setAttribute("aria-selected", i === page ? "true" : "false");
    }
    applyRovingFocusOrder(page);
    document.getElementById("counter-num").textContent = String(page + 1).padStart(2, "0");
    previousButton.disabled = page === 0;
    nextButton.classList.toggle("slot-parked", page === totalSlides - 1);
    enterButton.classList.toggle("slot-parked", page !== totalSlides - 1);
    if (options && options.focusActiveTab) segments[page].focus();
    else migrateFocusAfterSlideChange(previousFocus, page);
    setDitherState(page === 0 ? "boot" : "corner");
    notifyPage(page);
    if (page === totalSlides - 1 && !authState.activated && !activationStarted) {
      activationStarted = true;
      dispatchCapability("fadlab://onboarding-auth/start");
    }
  }

  function accept() {
    if (acceptCompleted || !authState.activated || !agreement.checked) {
      updateAcceptAvailability();
      return;
    }
    enterButton.disabled = true;
    document.getElementById("accept-error").classList.add("hidden");
    dispatchNative(nonceRoute("fadlab://onboarding-accept"));
    if (acceptRecoveryTimer) clearTimeout(acceptRecoveryTimer);
    acceptRecoveryTimer = setTimeout(showAcceptError, 2500);
  }

  window.fadOnboardingNativeAcceptResolved = function () {
    acceptCompleted = true;
    if (acceptRecoveryTimer) clearTimeout(acceptRecoveryTimer);
    enterButton.textContent = tr("common.entering_fad_synth");
    enterButton.disabled = true;
    setDitherState("exit");
  };

  function initDither() {
    var source = document.getElementById("onboarding-logo");
    source.onerror = function () {
      if (source.dataset.fallback) return;
      source.dataset.fallback = "1";
      source.src = "/FAD%20Logo.png";
    };
    if (!window.FADDitherEngine) return;
    dither = window.FADDitherEngine.mount(
      document.getElementById("onboarding-dither"),
      source,
      {
        active: nativeRuntimeActive && !document.hidden,
        columns: 72,
        maxDpr: 3,
        scene: "hero",
        scale: 0.88,
        fill: 0.85,
        braille: 0.55,
        colors: ["#3D4A78", "#596AA6", "#7A9CFF", "#22348E"]
      }
    );
  }

  function syncOnboardingRuntimeActive() {
    if (!dither) return;
    if (!nativeRuntimeActive || document.hidden) {
      dither.suspend();
    } else if (currentSlide === 0) {
      dither.replay();
    } else if (typeof dither.wakeTo === "function") {
      dither.wakeTo("right", 0.82, 0.55);
    }
  }

  window.fadOnboardingSetRuntimeActive = function (active) {
    nativeRuntimeActive = active !== false;
    syncOnboardingRuntimeActive();
  };
  document.addEventListener("visibilitychange", syncOnboardingRuntimeActive);

  previousButton.addEventListener("click", function () { goToSlide(currentSlide - 1); });
  nextButton.addEventListener("click", function () { goToSlide(currentSlide + 1); });
  enterButton.addEventListener("click", accept);
  agreement.addEventListener("change", updateAcceptAvailability);
  // Legacy bridge route literals kept for bundled/native compatibility; the UI exposes one account CTA.
  // fadlab://onboarding-account/connect | fadlab://onboarding-account/login | fadlab://onboarding-account/register | fadlab://onboarding-account/help
  // fadlab://onboarding-legal/eula | fadlab://onboarding-legal/terms | fadlab://onboarding-legal/privacy
  document.getElementById("refresh-auth").addEventListener("click", function () {
    waitingForBrowser = true;
    renderAuthState();
    dispatchCapability("fadlab://onboarding-auth/refresh");
  });
  document.getElementById('copy-device-code').addEventListener('click', function () {
    if (authState.deviceCode) dispatchCapability('fadlab://onboarding-copy-device-code');
  });
  document.getElementById("connect-account").addEventListener("click", function () {
    waitingForBrowser = true;
    renderAuthState();
    dispatchCapability("fadlab://onboarding-account/connect");
  });
  // DIRECT_ONLY_BEGIN
  document.getElementById("redeem-cdk").addEventListener("click", function () {
    waitingForBrowser = true;
    renderAuthState();
    dispatchCapability("fadlab://onboarding-account/cdk");
  });
  // DIRECT_ONLY_END
  document.getElementById("store-settings").addEventListener("click", function () {
    dispatchCapability("fadlab://onboarding-store/settings");
  });
  document.getElementById("account-help").addEventListener("click", function () {
    dispatchCapability("fadlab://onboarding-account/help");
  });
  document.getElementById("reset-auth").addEventListener("click", function () {
    dispatchCapability("fadlab://onboarding-auth/reset");
  });
  legalDialogClose.addEventListener("click", closeLegalDocument);
  legalDialogOpen.addEventListener("click", function () {
    dispatchCapability("fadlab://onboarding-legal/" + legalDialogPath);
  });
  for (var legalIndex = 0; legalIndex < legalButtons.length; legalIndex++) {
    legalButtons[legalIndex].addEventListener("click", function () { openLegalDocument(this); });
  }
  for (var i = 0; i < segments.length; i++) {
    segments[i].addEventListener("click", function () { goToSlide(Number(this.dataset.slide)); });
  }
  var segmentRail = document.querySelector(".segments");
  segmentRail.addEventListener("keydown", function (event) {
    var target = currentSlide;
    if (event.key === "ArrowLeft") target = currentSlide - 1;
    else if (event.key === "ArrowRight") target = currentSlide + 1;
    else if (event.key === "Home") target = 0;
    else if (event.key === "End") target = totalSlides - 1;
    else return;
    event.preventDefault();
    event.stopPropagation();
    target = Math.max(0, Math.min(totalSlides - 1, target));
    if (target === currentSlide) segments[target].focus();
    else goToSlide(target, { focusActiveTab: true });
  });
  document.addEventListener("keydown", function (event) {
    if (!legalDialogLayer.classList.contains("hidden")) {
      if (event.key === "Escape") {
        event.preventDefault();
        closeLegalDocument();
      } else if (event.key === "Tab") {
        event.preventDefault();
        var focusable = [legalDialogClose, legalDialogOpen];
        var focusIndex = focusable.indexOf(document.activeElement);
        var focusStep = event.shiftKey ? -1 : 1;
        if (focusIndex < 0) focusIndex = event.shiftKey ? 0 : -1;
        focusable[(focusIndex + focusStep + focusable.length) % focusable.length].focus();
      }
      return;
    }
    if (event.key === "ArrowLeft") goToSlide(currentSlide - 1);
    if (event.key === "ArrowRight") goToSlide(currentSlide + 1);
  });

  updateNavigationCopy(currentSlide);
  renderAuthState();
  function refreshOnboardingLanguage(next){renderAuthState();updateNavigationCopy(currentSlide);}
var unsubscribeLanguage=window.FADI18n.onChange(refreshOnboardingLanguage,"onboarding");
window.addEventListener("pagehide",function(){unsubscribeLanguage();});
window.addEventListener("pageshow",function(event){if(event.persisted)unsubscribeLanguage=window.FADI18n.onChange(refreshOnboardingLanguage,"onboarding");});
  initDither();
}());

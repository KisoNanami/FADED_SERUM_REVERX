(function (global) {
  "use strict";
  if (global.FADI18n) return;
  var catalogs = global.__FAD_I18N_CATALOGS__ || {};
  var valueKeys = global.__FAD_I18N_VALUES__ || {};
  var listeners = [];
  var locale = "en";
  var normalizedValues = {};
  var boundText = new WeakMap();
  var boundAttributes = new WeakMap();
  function normalizeLocale(value) { return /^zh(?:-|_|$)/i.test(String(value)) ? "zh-CN" : "en"; }
  function valueToken(value) { return String(value).trim().replace(/\s+/g, " ").toLowerCase(); }
  Object.keys(valueKeys).forEach(function (value) { normalizedValues[valueToken(value)] = valueKeys[value]; });
  function text(key, language, parameters) {
    var selected = catalogs[normalizeLocale(language || locale)] || catalogs.en || {};
    var message = selected[key];
    if (message == null && catalogs.en) message = catalogs.en[key];
    if (message == null) return "[" + key + "]";
    if (typeof message === "object") {
      var category = global.Intl && global.Intl.PluralRules
        ? new global.Intl.PluralRules(normalizeLocale(language || locale)).select(Number(parameters && parameters.count))
        : Number(parameters && parameters.count) === 1 ? "one" : "other";
      message = message[category] || message.other;
    }
    if (!parameters) return String(message);
    return String(message).replace(/\{([a-zA-Z0-9_]+)\}/g, function (match, name) {
      return Object.prototype.hasOwnProperty.call(parameters, name) ? String(parameters[name]) : match;
    });
  }
  function escape(value) {
    return String(value).replace(/&/g, "&amp;").replace(/</g, "&lt;").replace(/>/g, "&gt;")
      .replace(/"/g, "&quot;").replace(/'/g, "&#39;");
  }
  function value(input, language) {
    var source = String(input == null ? "" : input);
    var key = valueKeys[source] || normalizedValues[valueToken(source)];
    return key ? text(key, language) : source;
  }
  function bind(scope) {
    if (!scope || !scope.querySelectorAll) return;
    var selector = "[data-i18n],[data-i18n-title],[data-i18n-aria-label],[data-i18n-placeholder],[data-i18n-alt],[data-i18n-data-legal-title],[data-i18n-data-legal-summary]";
    var nodes = Array.prototype.slice.call(scope.querySelectorAll(selector));
    if (scope.matches && scope.matches(selector)) nodes.unshift(scope);
    nodes.forEach(function (node) {
      var key = node.getAttribute("data-i18n");
      if (key) {
        var prior = boundText.get(node);
        if ((prior == null && !node.textContent) || node.textContent === prior) {
          node.textContent = text(key);
          boundText.set(node, node.textContent);
        }
      }
      var attributes = boundAttributes.get(node) || {};
      ["title", "aria-label", "placeholder", "alt", "data-legal-title", "data-legal-summary"].forEach(function (attribute) {
        var attributeKey = node.getAttribute("data-i18n-" + attribute);
        if (attributeKey && (!node.getAttribute(attribute) || node.getAttribute(attribute) === attributes[attribute])) {
          attributes[attribute] = text(attributeKey);
          node.setAttribute(attribute, attributes[attribute]);
        }
      });
      boundAttributes.set(node, attributes);
    });
  }
  function useLocale(language) {
    var next = normalizeLocale(language);
    var changed = next !== locale;
    if (!changed) return false;
    locale = next;
    if (global.document && global.document.documentElement) {
      var root = global.document.documentElement;
      root.lang = locale;
      root.dataset.fadLanguage = locale === "zh-CN" ? "zh" : "en";
    }
    return changed;
  }
  function setLocale(language) {
    var changed = useLocale(language);
    if (global.document) bind(global.document);
    if (changed) listeners.slice().forEach(function (entry) { entry.listener(locale); });
  }
  global.FADI18n = { text: text, value: value, escape: escape, bind: bind,
    hasKey: function (key) { return !!catalogs.en && Object.prototype.hasOwnProperty.call(catalogs.en, key); },
    useLocale: useLocale, setLocale: setLocale,
    onChange: function (listener, owner) {
      if (typeof listener !== "function") throw new TypeError("Language listener must be a function");
      // Reopening the same surface replaces its closure. An old disposer must
      // never remove the newer surface's subscription.
      listeners = listeners.filter(function (entry) {
        return owner ? entry.owner !== owner : entry.listener !== listener;
      });
      var entry = { listener: listener, owner: owner };
      listeners.push(entry);
      return function () {
        var index = listeners.indexOf(entry);
        if (index >= 0) listeners.splice(index, 1);
      };
    },
    getLocale: function () { return locale; } };
  global.FADI18n.localized = function localized(definition) {
    Object.keys(definition).forEach(function (name) {
      var entry = definition[name];
      if (entry && typeof entry === "object" && entry.$i18n) {
        Object.defineProperty(definition, name, { enumerable: true, configurable: true,
          get: function () { return text(entry.$i18n); } });
      } else if (entry && typeof entry === "object") localized(entry);
    });
    return definition;
  };
  global.FADI18n.label = function (node, key) {
    node.setAttribute("data-i18n", key);
    node.textContent = text(key);
    boundText.set(node, node.textContent);
    return node;
  };
  global.FADI18n.attribute = function (node, attribute, key) {
    node.setAttribute("data-i18n-" + attribute, key);
    var saved = boundAttributes.get(node) || {};
    saved[attribute] = text(key);
    node.setAttribute(attribute, saved[attribute]);
    boundAttributes.set(node, saved);
  };
  global.tr = function (key, parameters) { return text(key, locale, parameters); };
  global.FADTranslateCopy = function (source) {
    var key = valueKeys[source] || normalizedValues[valueToken(source)];
    return key ? text(key) : null;
  };
  global.FADApplyLanguage = setLocale;
  if (global.document && global.document.documentElement) {
    useLocale(global.document.documentElement.dataset.fadLanguage || global.document.documentElement.lang);
    if (global.document.readyState === "loading")
      global.document.addEventListener("DOMContentLoaded", function () { bind(global.document); }, { once: true });
    else bind(global.document);
  }
}(window));

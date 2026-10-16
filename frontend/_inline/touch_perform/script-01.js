    (function () {
      "use strict";





      var language = "en";
      var nativeConnected = false;
      var runtimeActive = true;
      var assetEditorVisible = false;
      var heartbeatTimer = 0;
      var nextActionOperationId = 1;
      var pendingAction = null;
      var actionWatchdog = 0;
      var actionReceiptTimeoutMs = 8000;
      var pendingLibrarySection = "";
      var lastAppliedRevision = 0;
      var pageEpoch = Number("__FAD_TOUCH_PAGE_EPOCH__");
      var model = __FAD_TOUCH_LOADING_STATE__;
      model.commerce = { visible: false, active: false, trial: false, permanent: false, trialExpiresAt: 0, purchaseAvailable: false, operation: "idle", error: "" };
      model.library = { section: "factory", entries: [] };
      var selectedOsc = 1;
      var oscPage = "core";
      var soundTask = "source";
      var modTask = "lfo";
      var effectsTask = "chain";
      var libraryTask = "list";
      var selectedLfo = 1;
      var selectedRoute = 1;
      var selectedFx = 0;
      var selectedPresetId = "";
      var wideOscillatorCompare = false;
      var wideLfoComparison = false;
      var librarySearch = "",libraryCategory="",libraryFilterTimer=0;
      var activeGestures = {};
      var pendingSets = {};
      var setTimer = 0;
      var visualFrame = 0;
      var knobDrags = {};
      var renderAfterGestures = false;
      var lastImportFocusKey = "";
      var lastImportMarkup = "";
      var importReturnFocus = null;
      var guideOpen = false;
      var guidePresented = false;
      var guideStep = 0;
      var guideRenderKey = "";
      var guideReturnFocus = null;

      function t(key) { return window.FADI18n.text("touch." + key, language); }
      function translationKey(value) { return String(value == null ? "" : value).toLowerCase().replace(/[^a-z0-9]+/g, ""); }


      function tv(value) { return window.FADI18n.value(value, language); }
      function esc(value) { return String(value == null ? "" : value).replace(/&/g, "&amp;").replace(/</g, "&lt;").replace(/>/g, "&gt;").replace(/\"/g, "&quot;").replace(/'/g, "&#39;"); }
      function clamp01(value) { return Math.max(0, Math.min(1, Number(value) || 0)); }
      function two(value) { return value < 10 ? "0" + value : String(value); }
      function applyTextScale(value) {
        var style = document.documentElement.style;
        var scale = Math.max(.9, Math.min(1.62, Number(value) || Number(style.getPropertyValue("--fad-font-scale")) || 1)); var sizes = [10, 11, 12, 13, 15];
        document.body.setAttribute("data-large-text", scale > 1.25 ? "true" : "false");
        style.setProperty("--text-scale", String(scale));
        for (var i = 0; i < sizes.length; i++) style.setProperty("--text-" + sizes[i], (sizes[i] * scale) + "px");
        style.setProperty("--compact-control-row", Math.max(80, 44 + 28 * scale) + "px");
        style.setProperty("--compact-label-track", Math.max(16, 12 * scale) + "px");
        style.setProperty("--compact-value-track", Math.max(20, 12 * scale) + "px");
        var compareTextTrack = Math.max(16, 12 * scale * 1.15);
        style.setProperty("--compare-control-row", Math.max(80, 48 + 3 * compareTextTrack) + "px");
        style.setProperty("--compare-label-track", compareTextTrack + "px");
      }
      function receiveViewport(value) {
        if (!value || !Number.isFinite(value.width) || !Number.isFinite(value.height)
            || value.width < 0 || value.height < 0) return false;
        var insets = value.insets || {}, keyboard = value.keyboard || {};
        var sides = ["top", "right", "bottom", "left"];
        for (var i = 0; i < sides.length; i++)
          if (value.safeAreaKnown === true && (!Number.isFinite(insets[sides[i]]) || insets[sides[i]] < 0
              || insets[sides[i]] > (i % 2 ? value.width : value.height))) return false;
        var fields = ["x", "y", "width", "height"];
        for (var k = 0; k < fields.length; k++)
          if (value.keyboardKnown === true && (!Number.isFinite(keyboard[fields[k]]) || keyboard[fields[k]] < 0)) return false;
        if (value.safeAreaKnown === true && (insets.left + insets.right > value.width
            || insets.top + insets.bottom > value.height)) return false;
        if (value.keyboardKnown === true && (keyboard.x + keyboard.width > value.width + 1
            || keyboard.y + keyboard.height > value.height + 1)) return false;
        var style = document.documentElement.style;
        for (var s = 0; s < sides.length; s++) {
          var name = "--native-safe-" + sides[s];
          if (value.safeAreaKnown === true) style.setProperty(name, insets[sides[s]] + "px");
          else style.removeProperty(name);
        }
        var docked = value.keyboardKnown === true && keyboard.width >= value.width * .75
          && keyboard.height > 0 && keyboard.y + keyboard.height >= value.height - 1;
        style.setProperty("--native-keyboard-bottom", (docked ? Math.max(0, value.height - keyboard.y) : 0) + "px");
        var dialogTop = value.safeAreaKnown === true ? insets.top : 0;
        var dialogBottom = Math.max(value.safeAreaKnown === true ? insets.bottom : 0, docked ? Math.max(0, value.height - keyboard.y) : 0);
        var dialog = document.querySelector(".touch-number-window");
        if (dialog && !docked && value.keyboardKnown === true && keyboard.width > 0 && keyboard.height > 0) {
          var r = dialog.getBoundingClientRect();
          // Keep the chosen side stable across keyboard/layout updates; using
          // the already shifted vertical rect would alternate sides/insets.
          if (r.left < keyboard.x + keyboard.width && r.right > keyboard.x) {
            if (keyboard.y >= value.height - keyboard.y - keyboard.height) dialogBottom = Math.max(dialogBottom, value.height - keyboard.y);
            else dialogTop = Math.max(dialogTop, keyboard.y + keyboard.height);
          }
        }
        style.setProperty("--native-dialog-top", dialogTop + "px");
        style.setProperty("--native-dialog-bottom", dialogBottom + "px");
        model.viewport = value;
        return true;
      }
      function def(id, label, type, accent, choices) { return { id: id, label: label, type: type || "auto", accent: accent || "indigo", choices: choices || [] }; }

      function dispatchNative(command) {
        try {
          if (!window.__JUCE__ || !window.__JUCE__.backend || !window.__JUCE__.backend.emitEvent) return false;
          var init = window.__JUCE__.initialisationData;
          var events = init && init.__juce__registeredGlobalEventIds ? init.__juce__registeredGlobalEventIds : [];
          if (events.indexOf("fadNativeCommand") < 0) return false;
          var commands = Array.isArray(command) ? command : [command];
          var wireCommands = [];
          for (var c = 0; c < commands.length; c++)
            wireCommands.push(String(commands[c]) + "|" + String(pageEpoch));
          for (var i = 0; i < wireCommands.length; i += 64) {
            var batch = wireCommands.slice(i, i + 64);
            window.__JUCE__.backend.emitEvent("fadNativeCommand", batch.length === 1 ? batch[0] : batch);
          }
          return true;
        } catch (error) { return false; }
      }
      // Native requests test liveness, not drawing. A hidden live page must
      // still acknowledge; its visual loops and editing stay suspended.
      function ping() { if(runtimeActive && !renderSuspended && nativeConnected)dispatchNative("pong"); }

      function inferMeta(id) {
        if (/^osc[12]\.pitchTracking$/.test(id)) return {id:id,kind:"toggle",normalized:1,defaultNormalized:1,plain:1,text:"On",choices:[]};
        if (id === "global.nativeMonoRetrigger") return {id:id,kind:"toggle",normalized:0,defaultNormalized:0,plain:0,text:"Off",choices:[]};
        if (/^mod[0-9]+\.enabled$/.test(id)) return {id:id,kind:"toggle",normalized:1,defaultNormalized:1,text:"On",choices:[]};
        if (/\.fadSemantics$/.test(id)) return {id:id,kind:"toggle",normalized:0,defaultNormalized:0,text:"0",choices:[]};
        var modSources = ["none", "lfo1", "lfo2", "filterEnvelope", "ampEnvelope", "velocity", "modWheel", "aftertouch", "lfo3", "lfo4", "modEnvelope", "macro1", "macro2", "macro3", "macro4", "macro5", "macro6", "macro7", "macro8"];
        var modDestinations = ["none", "filterCutoff", "filterResonance", "filterDrive", "osc1Pitch", "osc2Pitch", "osc1Level", "osc2Level", "subLevel", "noiseLevel", "osc1WavetablePosition", "osc2WavetablePosition", "osc1FmIndex", "osc2FmIndex", "osc1Pan", "osc2Pan", "globalPitch"];
        var choiceMap = {
          "osc1.mode": ["Analog", "Wavetable", "2-Op FM"], "osc2.mode": ["Analog", "Wavetable", "2-Op FM"],
          "osc1.analog.wave": ["Sine", "Saw", "Square", "Triangle"], "osc2.analog.wave": ["Sine", "Saw", "Square", "Triangle"],
          "osc1.wavetable.crossMode": ["Off", "FM", "AM", "RM"], "osc2.wavetable.crossMode": ["Off", "FM", "AM", "RM"],
          "osc1.wavetable.warpMode": ["Phase", "Sync", "Bend+", "Bend-", "FM", "Asym"], "osc2.wavetable.warpMode": ["Phase", "Sync", "Bend+", "Bend-", "FM", "Asym"],
          "lfo1.shape": ["Sine", "Triangle", "Saw", "Square", "Random"], "lfo2.shape": ["Sine", "Triangle", "Saw", "Square", "Random"],
          "lfo3.shape": ["Sine", "Triangle", "Saw", "Square", "Random"], "lfo4.shape": ["Sine", "Triangle", "Saw", "Square", "Random"],
          "lfo1.sync": ["Free", "Tempo"], "lfo2.sync": ["Free", "Tempo"], "lfo3.sync": ["Free", "Tempo"], "lfo4.sync": ["Free", "Tempo"],
          "filter1.mode": ["Low-pass", "Band-pass", "High-pass"], "sub.type": ["Sine", "Square", "Triangle"],
          "global.amplitudeModel": ["FAD", "Serum"], "global.voiceMode": ["Poly", "Mono"], "global.glideMode": ["Off", "Always", "Legato"]
        };
        if (/^lfo[1-8]\.triggerMode$/.test(id)) choiceMap[id]=["Free","Retrigger","Envelope"];
        if (/^lfo[1-8]\.nativeTiming$/.test(id)) choiceMap[id]=["Straight","Dotted","Triplet","Dotted + Triplet"];
        var choices = /^mod(?:[1-9]|[12][0-9]|3[0-2])\.source$/.test(id) ? modSources : /^mod(?:[1-9]|[12][0-9]|3[0-2])\.destination$/.test(id) ? modDestinations : choiceMap[id] || [];
        if (/nativeSource$/.test(id)) return {id:id,kind:"integer",normalized:0,defaultNormalized:0,plain:-1,text:tr("common.fad_source"),choices:[],steps:33};
        if (/nativeAuxSource$/.test(id)) return {id:id,kind:"integer",normalized:0,defaultNormalized:0,plain:0,text:tr("common.no_auxiliary_source"),choices:[],steps:32};
        if (/nativeFlags$/.test(id)) return {id:id,kind:"integer",normalized:0,defaultNormalized:0,plain:0,text:tr("common.unipolar"),choices:[],steps:4};
        if (/nativeTarget$/.test(id)) return {id:id,kind:"integer",normalized:0,defaultNormalized:0,plain:-1,text:tr("common.standard_target"),choices:[],steps:513};
        if (/extendedOctave$/.test(id)) return {id:id,kind:"choice",normalized:0,defaultNormalized:0,plain:-5,text:"Auto",choices:["Auto","-4","-3","-2","-1","0","+1","+2","+3","+4"],steps:10};
        if (id==="filter1.nativeModel"||id==="sub.nativeShape") return {id:id,kind:"choice",normalized:0,defaultNormalized:0,plain:-1,text:"FAD",choices:["FAD"],steps:1};
        if (/directOut$|oneShot$|keytrack$/.test(id)) return {id:id,kind:"toggle",normalized:0,defaultNormalized:0,text:"Off",choices:[]};
        if (/curveSlot$/.test(id)) return { id:id,kind:"integer",normalized:0,defaultNormalized:0,text:tr("common.built_in"),choices:[],steps:17 };
        if (/\.(wideRate|freeRate|extendedRate|cycleBeats)$/.test(id)) return { id:id,kind:"continuous",normalized:0,defaultNormalized:0,text:"Auto",choices:[] };
        if (/\.anchor$/.test(id)) return { id:id,kind:"toggle",normalized:1,defaultNormalized:1,text:"On",choices:[] };
        if (/extendedVoices$/.test(id)) return { id: id, kind: "integer", normalized: 0, defaultNormalized: 0, text: "Auto", choices: [], steps: 17 };
        if (/extendedDetune$/.test(id)) return { id: id, kind: "continuous", normalized: 0, defaultNormalized: 0, text: "0 ct", choices: [] };
        if (/\.enabled$/.test(id)) return { id: id, name: id, kind: "toggle", normalized: /^(sub|noise)\./.test(id)?1:0, defaultNormalized: /^(sub|noise)\./.test(id)?1:0, text: "0", choices: [] };
        if (choices.length) return { id: id, name: id, kind: "choice", normalized: 0, defaultNormalized: 0, text: choices[0], choices: choices, steps: choices.length };
        if (/octave|semitone|voices|slot|pitchBendRange/.test(id)) return { id: id, name: id, kind: "integer", normalized: .5, defaultNormalized: .5, text: "0", choices: [], steps: 9 };
        return { id: id, name: id, kind: "continuous", normalized: .5, defaultNormalized: .5, text: "50%", choices: [] };
      }

      function unisonParameter(p, suffix) {
        var extended = model.parameters[p + ".unison.extendedVoices"];
        return p + (extended ? ".unison.extended" + (suffix === "detune" ? "Detune" : "Voices") : suffix === "detune" ? ".detune" : ".unison.voices");
      }
      function wideControlId(id) {
        var candidate=id;
        if(/^env\.(amp|filter|mod)\.(attack|decay|release)$/.test(id))candidate=id+"Wide";
        else if(/^osc[12]\.fm\.(ratio|index)$/.test(id))candidate=id.replace(/\.(ratio|index)$/,function(_,v){return ".wide"+v[0].toUpperCase()+v.slice(1);});
        else if(/^osc[12]\.(unison\.extendedDetune|detune)$/.test(id))candidate=id.slice(0,4)+".unison.wideDetune";
        else if(id==="global.glideTime")candidate="global.wideGlideTime";
        else if(id==="global.pitchBendRange")candidate="global.widePitchBendRange";
        else if(id==="filter1.keyTrack")candidate="filter1.wideKeyTrack";
        else if(id==="noise.level")candidate="noise.wideLevel";
        else if(/^mod\d+\.amount$/.test(id)) {
          var p=id.split(".")[0],d=param(p+".destination"),choices=d.choices||[],index=Math.round(d.normalized*(choices.length-1));
          if([4,5,16].indexOf(index)>=0 && (!model.parameters[p+".nativeTarget"] || model.parameters[p+".nativeTarget"].normalized===0))candidate=p+".widePitchDepth";
        } else if(/^fx\.slot\d+\.param9$/.test(id)) {
          var ratePrefix=id.slice(0,id.lastIndexOf(".")),rateMeta=model.parameters[ratePrefix+".wideRate"];
          if(rateMeta && rateMeta.legacyId===id)candidate=ratePrefix+".wideRate";
        } else if(/^fx\.slot\d+\.param(0|6|7)$/.test(id)) {
          var prefix=id.slice(0,id.lastIndexOf(".")),suffix=id.split(".").pop();
          candidate=prefix+(suffix==="param0"?".wideRate":suffix==="param6"?".wideLeftTime":".wideRightTime");
        }
        var meta=model.parameters[candidate];return meta && meta.wideAvailable!==false?candidate:id;
      }
      function widePlain(meta,n) {
        var r=meta.wideRange;if(!r)return meta.plain;
        if(!r.logScale)return r.automatic+(r.maximum-r.automatic)*n;
        var z=r.autoSegment;
        if(n<=z)return r.automatic+(r.minimum-r.automatic)*n/z;
        if(n>=1)return r.maximum;
        return r.minimum+r.logScale*Math.expm1(Math.log1p((r.maximum-r.minimum)/r.logScale)*(n-z)/(1-z));
      }
      function wideNormalized(meta,v) {
        var r=meta.wideRange;if(!r)return meta.normalized;
        if(!r.logScale)return (v-r.automatic)/(r.maximum-r.automatic);
        if(v<=r.minimum)return (v-r.automatic)/(r.minimum-r.automatic)*r.autoSegment;
        return r.autoSegment+(1-r.autoSegment)*Math.log1p((v-r.minimum)/r.logScale)/Math.log1p((r.maximum-r.minimum)/r.logScale);
      }
      function updateLocalWide(meta) {
        if(!meta.wideRange)return;
        var value=widePlain(meta,meta.normalized);meta.plain=value;meta.editValue=meta.editPercent?value*100:value;
        var unit=meta.editUnit||meta.unit||"";
        meta.text=meta.editPercent?(value*100).toFixed(1)+"%":unit==="ms"?(value>=1000?(value/1000).toFixed(3)+" s":value.toFixed(value<1?4:2)+" ms")
          :unit==="Hz"?value.toFixed(value>=1?2:value>=.01?4:6)+" Hz":unit==="cents"?value.toFixed(1)+" ct":value.toFixed(value<.1?6:2)+(unit?" "+unit:"");
      }
      function clampParameterNormalized(id, value) {
        var minimum = Number(param(id).minimumNormalized || (/^osc[12]\.unison\.extendedVoices$/.test(id) ? 1 / 16 : 0));
        return Math.max(minimum, Math.min(1, Number(value)));
      }
      function envelopeCurveValue(id) {
        id=wideControlId(id);var meta=param(id);
        if(meta.wideRange)return Math.log1p(Math.max(0,Number(meta.plain)||0))/Math.log1p(300000);
        return meta.envelopeNormalized == null ? meta.normalized : meta.envelopeNormalized;
      }
      function updateLocalEnvelope(meta) {
        if (meta.envelopeRangeSkew == null) return;
        var milliseconds = meta.envelopeRangeMinimum + (meta.envelopeRangeMaximum - meta.envelopeRangeMinimum)
          * Math.pow(meta.normalized, 1 / meta.envelopeRangeSkew);
        meta.envelopeNormalized = Math.log(1 + milliseconds) / Math.log(32001);
        meta.plain = milliseconds;
        meta.editValue = milliseconds;
        meta.text = milliseconds >= 1000 ? (milliseconds / 1000).toFixed(3) + " s"
          : milliseconds.toFixed(milliseconds < 1 ? 4 : 2) + " ms";
      }
      function lfoRateIsModulated(p, legacyOnly) {
        var index=Number(p.slice(3)), target=index<=4?60+index:255+index;
        for(var slot=1;slot<=32;slot++) {
          var row=model.parameters["mod"+slot+".nativeTarget"];
          var semantics = model.parameters["mod"+slot+".fadSemantics"];
          if (legacyOnly && semantics && semantics.normalized >= .5) continue;
          if(!row || nativeFxTargetValue(slot)!==target)continue;
          var ns=nativeRouteValue(slot,"nativeSource");
          if((ns>0 || ns<0&&param("mod"+slot+".source").normalized>0) && Math.abs((model.parameters["mod"+slot+".amount"] || {normalized:.5}).normalized*2-1)>=.0001)return true;
        }
        return false;
      }
      function lfoRateParameter(p) {
        var cycle = model.parameters[p + ".cycleBeats"], extended = model.parameters[p + ".extendedRate"], free = model.parameters[p + ".freeRate"], wide = model.parameters[p + ".wideRate"];
        if(param(p+".sync").normalized>=.5 && lfoRateIsModulated(p, true)) {
          if (wide && (typeof wide.plain === "number" ? wide.plain >= 0 : wide.normalized >= Math.fround(.02))) return p+".wideRate";
          if (free && (typeof free.plain === "number" ? free.plain >= 0 : free.normalized >= 1/193)) return p+".freeRate";
          return extended && (typeof extended.plain === "number" ? extended.plain >= 0 : extended.normalized >= 1/101) ? p+".extendedRate" : p+".rate";
        }
        if (param(p + ".sync").normalized >= .5) return cycle && cycle.normalized > 0 ? p + ".cycleBeats" : p + ".rate";
        return wide ? p + ".wideRate" : free ? p + ".freeRate" : extended ? p + ".extendedRate" : p + ".rate";
      }
      function importedLfoCurve(index) {
        var meta = model.parameters["lfo" + index + ".curveSlot"];
        var slot = meta ? Math.round(typeof meta.plain === "number" ? meta.plain : meta.normalized * 16) : 0;
        var curve = (model.lfoCurves || [])[index-1];
        return curve && (curve.nodes || slot > 0 && curve.slot === slot) && curve.samples && curve.samples.length >= 2 ? curve : null;
      }
      function octaveParameter(p) { var ext=model.parameters[p+".extendedOctave"]; return p+(ext&&ext.normalized>0?".extendedOctave":".octave"); }
      function importedFilterActive() {var meta=model.parameters["filter1.nativeModel"];return !!(meta&&meta.normalized>0);}
      function subShapeParameter() {var meta=model.parameters["sub.nativeShape"];return meta&&meta.normalized>0&&param("global.amplitudeModel").normalized>=.5?"sub.nativeShape":"sub.type";}
      function param(id) { if (!model.parameters[id]) model.parameters[id] = inferMeta(id); return freeLfoRateMeta(id, model.parameters[id]); }
      function wideLfoRateNormalized(hz) {
        var zero = Math.fround(.02), scale = Math.fround(.0001), value = Math.max(-1, Math.min(20000, hz));
        if (value <= 0) return (value + 1) * zero;
        if (value >= 20000) return 1;
        return zero + (1 - zero) * Math.log1p(value / scale) / Math.log1p(20000 / scale);
      }
      function wideLfoRateHz(normalized) {
        var zero = Math.fround(.02), scale = Math.fround(.0001), n = Math.max(0, Math.min(1, normalized));
        if (n <= zero) return -1 + n / zero;
        if (n >= 1) return 20000;
        return scale * Math.expm1(Math.log1p(20000 / scale) * (n - zero) / (1 - zero));
      }
      function wideLfoRateText(hz) {
        if (hz < 0) return "Auto";
        if (hz === 0) return "0 Hz";
        return hz.toFixed(hz >= 100 ? 0 : hz >= 1 ? 2 : hz >= .01 ? 4 : 6) + " Hz";
      }
      function freeLfoRateMeta(id, meta) {
        var lfo = /^(lfo[1-8])\.(wideRate|freeRate|extendedRate)$/.exec(id);
        if (!lfo || (typeof meta.plain === "number" ? meta.plain >= 0 : meta.normalized > 0)) return meta;
        var legacy = model.parameters[lfo[1] + ".rate"];
        if (!legacy) return meta;
        var inherited = model.parameters[lfo[1] + ".extendedRate"];
        var inheritedHz = inherited ? (typeof inherited.plain === "number" ? inherited.plain : inherited.normalized * 101 - 1) : -1;
        var free = model.parameters[lfo[1] + ".freeRate"];
        var freeHz = free ? (typeof free.plain === "number" ? free.plain : free.normalized * 193 - 1) : -1;
        var hz = lfo[2] === "wideRate" && freeHz >= 0 ? freeHz
          : lfo[2] !== "extendedRate" && inheritedHz >= 0 ? inheritedHz : 0.05 + 39.95 * Math.pow(legacy.normalized, 1 / 0.3);
        if (lfo[2] === "wideRate") return Object.assign({}, meta, { normalized: wideLfoRateNormalized(hz), text: wideLfoRateText(hz), editValue: hz });
        return Object.assign({}, meta, { normalized: (hz + 1) / (lfo[2] === "freeRate" ? 193 : 101), text: hz.toFixed(2) + " Hz", editValue: hz });
      }
      function updateLocalFreeLfoRate(meta) {
        if (!/^lfo[1-8]\.(wideRate|freeRate|extendedRate)$/.test(meta.id || "")) return;
        meta.plain = /\.wideRate$/.test(meta.id) ? wideLfoRateHz(meta.normalized) : meta.normalized * (/\.freeRate$/.test(meta.id) ? 193 : 101) - 1;
        meta.editValue = meta.plain;
        meta.text = /\.wideRate$/.test(meta.id) ? wideLfoRateText(meta.plain) : meta.plain < 0 ? "Auto" : meta.plain.toFixed(2) + " Hz";
      }
      function paramsToMap(rows) { var result = {}; for (var i = 0; i < rows.length; i++) result[rows[i].id] = rows[i]; return result; }
      function valueText(meta) {
        if (/^env\.(amp|filter|mod)\.(attack|decay|release)Curve$/.test(meta.id||"")) {
          var curvature=Number.isFinite(meta.plain)?meta.plain:clamp01(meta.normalized)*200-100;
          return (Math.abs(curvature)<.05?0:curvature).toFixed(1).replace(/^-/,"−");
        }
        if (/^osc[12]\.fine$/.test(meta.id||"") && model.parameters["global.amplitudeModel"] && model.parameters["global.amplitudeModel"].normalized>=.5) return String(Math.floor((typeof meta.plain==="number"?meta.plain:(meta.normalized*200-100))+100.5)-100)+" ct";
        if (meta.choices && meta.choices.length) return tv(meta.choices[Math.round(clamp01(meta.normalized) * (meta.choices.length - 1))]);
        return tv(meta.text == null || meta.text === "" ? Math.round(clamp01(meta.normalized) * 100) + "%" : meta.text);
      }
      function choiceCount(meta, definition) { definition=definition||{}; return (meta.choices && meta.choices.length) || (definition.choices && definition.choices.length) || meta.steps || 1; }
      function choiceIndex(meta, definition) { var count = choiceCount(meta, definition); return count > 1 ? Math.round(clamp01(meta.normalized) * (count - 1)) : 0; }
      function choiceValues(meta, definition) { if (/^lfo[1-8]\.sync$/.test(definition.id)) return ["Hz","Tempo"]; if (/^lfo[1-8]\.triggerMode$/.test(definition.id)) return ["Free loop","Triggered loop","Envelope playback"]; return meta.choices && meta.choices.length ? meta.choices : definition.choices || []; }
      var labelAliases = {
        Amount: "amount", Tone: "timbre", Mix: "blend", Mode: "mode", Rate: "rate", Time: "time", Depth: "depth",
        Delay: "delay", Feedback: "feedback", Size: "space", Damping: "damping", Wet: "wet", Width: "width",
        "Hi Cut": "hiCut", "Lo Cut": "loCut", "Pre-Delay": "preDelay", Threshold: "threshold", Ratio: "ratio",
        Attack: "attack", Release: "release", Makeup: "makeup", Knee: "knee", Center: "center", Stages: "stages",
        Stereo: "stereo", Bits: "bits", Jitter: "jitter", Cutoff: "cutoff", Resonance: "resonance", Drive: "drive",
        Ceiling: "ceiling", Lookahead: "lookahead", Pan: "pan", "Mid Gain": "midGain", "Side Gain": "sideGain"
      };
      function parameterLabelKey(id, label) {
        var fxMatch = /^fx\.slot(\d+)\.param\d+$/.exec(id);
        if (fxMatch && label === "Mid Gain") {
          for (var f = 0; f < (model.fxSlots || []).length; f++) {
            var slot = model.fxSlots[f];
            if (String(slot.slotIndex) === fxMatch[1] && /^(eq|eq3band)$/.test(translationKey(slot.name))) return "eqMidGain";
          }
        }
        if (/^osc[12]\.mode$/.test(id)) return "synthMode";
        if (/^osc[12]\.analog\.wave$/.test(id)) return "baseWave";
        if (/^osc[12]\.analog\.shape$/.test(id)) return "analogShape";
        if (/^osc[12]\.unison\.voices$/.test(id)) return "unisonVoices";
        if (/^osc[12]\.unison\.stereo$/.test(id)) return "stereoWidth";
        if (/^osc[12]\.unison\.blend$/.test(id)) return "unisonBlend";
        if (/^osc[12]\.wavetable\.warpMode$/.test(id)) return "warpAlgorithm";
        if (/^osc[12]\.wavetable\.slot$/.test(id)) return "userSlot";
        if (/^osc[12]\.fm\.ratio$/.test(id)) return "frequencyRatio";
        if (/^osc[12]\.fm\.level$/.test(id)) return "fmBranchLevel";
        if (/^osc[12]\.pitchTracking$/.test(id)) return "pitchTracking";
        if (id === "global.nativeMonoRetrigger") return "nativeRetrigger";
        if (/^lfo[1-8]\.shape$/.test(id)) return "wave";
        if (id === "filter1.mode") return "filterMode";
        if (id === "filter1.cutoff" || id === "filter1.nativeCutoff") return "cutoffFrequency";
        if (id === "sub.type") return "subWave";
        if (id === "sub.level") return "subOutput";
        if (id === "sub.octave") return "subOctaveLabel";
        if (id === "global.output") return "mainOutput";
        if (id === "global.voiceMode") return "voiceModeLabel";
        return "";
      }
      function labelText(definition) {
        var macro = /^macro\.([1-8])$/.exec(definition.id);
        if (macro) return (model.macroLabels||[])[Number(macro[1])-1] || t("macro") + " " + macro[1];
        var warp=/^(osc[12])\.wavetable\.warp$/.exec(definition.id);
        if(warp){var cross=choiceIndex(param(warp[1]+".wavetable.crossMode"));return cross?["","FM","AM","RM"][cross]+(tr("common.amount_2")):(tr("common.warp_amount"));}
        var key = parameterLabelKey(definition.id, definition.label);
        if (!key) key = window.FADI18n.hasKey("touch."+definition.label) ? definition.label : labelAliases[definition.label];
        return key ? t(key) : definition.label;
      }

      function oscillatorControlState(id) {
        var m=/^(osc[12])\.(analog\.(shape|pulseWidth)|timbre)$/.exec(id);
        if(!m || choiceIndex(param(m[1]+".mode"))!==0)return "";
        var wave=choiceIndex(param(m[1]+".analog.wave"));
        return wave===0 || (m[2]==="analog.pulseWidth" && wave!==2) ? (tr("common.unused_by_this_waveform")) : "";
      }
      function instrumentControlCopy(zh,en) { return language==="en"?en:zh; }
      function instrumentControlsView() { var state=model.instrumentControls;return state&&state.version===1?state:null; }
      var glideDraft=null,glidePending=null,glideRequestSerial=0,glideNumberDialog=null,glideStatus="";
      function glideControlState() {
        var controls=instrumentControlsView(),g=controls&&controls.glide;
        var available=!!(g&&typeof g.supported==="boolean"&&typeof g.advancedEnabled==="boolean"
          &&Number.isFinite(g.timeMs)&&Number.isFinite(g.curve)&&typeof g.scaled==="boolean"
          &&typeof controls.glideContext==="string"&&controls.glideContext);
        var supported=available&&g.supported===true,advanced=supported&&g.advancedEnabled===true;
        return {available:available,supported:supported,advancedEnabled:advanced,timeMs:available?g.timeMs:0,
          curve:available?g.curve:0,scaled:available&&g.scaled,max:Number(g&&g.maximumTimeMs)||60000,
          context:available?controls.glideContext:"",reason:!available?tr("common.native_state_unavailable")
            :!supported?tr("common.available_in_the_serum_model"):""};
      }
      function glideSurfaceAvailable() { return nativeConnected&&runtimeActive&&!document.hidden&&model.workspace==="sound"; }
      function glideCapture() { return {context:glideControlState().context,epoch:String(pageEpoch),generation:String(gestureGeneration)}; }
      function glideCaptureCurrent(capture) {
        return !!(capture&&glideSurfaceAvailable()&&capture.context===glideControlState().context
          &&capture.epoch===String(pageEpoch)&&capture.generation===String(gestureGeneration));
      }
      function glideValueText(operation,value) {
        return String(Number(Number(value).toFixed(2)))+(operation==="time"?" ms":"%");
      }
      function glideWorkingValue(state,operation) {
        if(glideDraft&&glideDraft.operation===operation&&!glideDraft.stale&&glideCaptureCurrent(glideDraft.capture))return glideDraft.value;
        if(glidePending&&glidePending.operation===operation&&glidePending.context===state.context)return glidePending.value;
        return operation==="time"?state.timeMs:state.curve;
      }
      function glideRangeDisabled(state,operation,target) {
        return !!glidePending||!glideSurfaceAvailable()||!state.supported||(operation==="curve"&&!state.advancedEnabled)
          ||!!(glideDraft&&(target?glideDraft.target!==target:glideDraft.operation!==operation));
      }
      function glideControlsMarkup() {
        var state=glideControlState(),disabled=!!glidePending||!!glideDraft||!glideSurfaceAvailable();
        var time=state.supported?'<div class="glide-time"><div class="control-label" data-glide-reset="time" title="'+esc(tr("common.restore_default"))+'">'+esc(tr("common.glide_time"))+'</div>'
          +'<input type="range" min="0" max="'+state.max+'" step="1" value="'+glideWorkingValue(state,"time")+'" data-glide-range="time" aria-label="'+esc(tr("common.glide_time"))+'"'+(glideRangeDisabled(state,"time")?' disabled':'')+'>'
          +'<button type="button" class="glide-value" data-glide-number="time" aria-label="'+esc(tr("common.enter_glide_time"))+'"'+(disabled?' disabled':'')+'>'+esc(glideValueText("time",glideWorkingValue(state,"time")))+'</button></div>'
          :renderControl(def("global.glideTime","glide"));
        return '<div class="touch-glide-control" data-glide-control data-glide-supported="'+state.supported+'" aria-busy="'+!!glidePending+'">'+time
          +'<details class="glide-advanced'+(!state.supported?' is-unavailable':'')+'" data-glide-details><summary title="'+esc(state.reason||tr("common.advanced_glide"))+'">'+esc(tr("common.advanced_glide"))+'</summary><div class="glide-advanced-body">'
          +'<button type="button" class="glide-switch" role="switch" data-glide-switch="advanced" aria-checked="'+state.advancedEnabled+'"'+(!state.supported||disabled?' disabled':'')+'><span>'+esc(tr("common.enable_advanced_glide"))+'</span><span aria-hidden="true">'+(state.advancedEnabled?'I':'0')+'</span></button>'
          +'<div class="glide-curve"><button type="button" class="glide-label" data-glide-reset="curve" title="'+esc(tr("common.restore_default"))+'"'+(!state.advancedEnabled||disabled?' disabled':'')+'>'+esc(tr("common.glide_curve"))+'</button>'
          +'<input type="range" min="-100" max="100" step=".1" value="'+glideWorkingValue(state,"curve")+'" data-glide-range="curve" aria-label="'+esc(tr("common.glide_curve"))+'"'+(glideRangeDisabled(state,"curve")?' disabled':'')+'>'
          +'<button type="button" class="glide-value" data-glide-number="curve" aria-label="'+esc(tr("common.enter_glide_curve"))+'"'+(!state.advancedEnabled||disabled?' disabled':'')+'>'+esc(glideValueText("curve",glideWorkingValue(state,"curve")))+'</button></div>'
          +'<button type="button" class="glide-switch" role="switch" data-glide-switch="scaled" aria-checked="'+state.scaled+'"'+(!state.advancedEnabled||disabled?' disabled':'')+'><span>'+esc(tr("common.scale_by_interval"))+'</span><span aria-hidden="true">'+(state.scaled?'I':'0')+'</span></button>'
          +'<p class="glide-model-limit" data-glide-model-limit'+(!state.reason?' hidden':'')+'>'+esc(state.reason)+'</p>'
          +'<output class="glide-status" data-glide-status role="status"'+(!glideStatus?' hidden':'')+'>'+esc(glideStatus)+'</output></div></details></div>';
      }
      function positionGlidePanel(details) {
        if(!details||!details.open)return;
        var panel=details.querySelector(".glide-advanced-body"),rect=details.querySelector("summary").getBoundingClientRect();
        if(!panel)return;
        var width=document.documentElement.clientWidth||window.innerWidth,height=window.innerHeight;
        panel.style.maxHeight=Math.max(44,height-24)+"px";
        var panelRect=panel.getBoundingClientRect(),left=Math.max(12,Math.min(width-panelRect.width-12,rect.right-panelRect.width));
        var top=rect.top-panelRect.height-6;
        if(top<12)top=Math.min(height-panelRect.height-12,rect.bottom+6);
        panel.style.left=left+"px";panel.style.top=Math.max(12,top)+"px";
      }
      function syncGlideControls() {
        var state=glideControlState(),busy=!!glidePending,drafting=!!glideDraft,active=glideSurfaceAvailable();
        if(glideDraft&&!glideCaptureCurrent(glideDraft.capture))glideDraft.stale=true;
        if(glideNumberDialog&&!glideNumberDialog.pending&&!glideCaptureCurrent(glideNumberDialog.capture)){
          glideNumberDialog.stale=true;glideNumberDialog.overlay.querySelector("#touch-glide-number-error").textContent=tr("common.the_state_changed_reopen_the_value_editor");
          glideNumberDialog.overlay.querySelector('[type="submit"]').disabled=true;
        }
        document.querySelectorAll("[data-glide-control]").forEach(function(node){
          if(node.getAttribute("data-glide-supported")!==String(state.supported)){
            var open=!!(node.querySelector("[data-glide-details]")||{}).open;node.outerHTML=glideControlsMarkup();
            var next=document.querySelector("[data-glide-control] [data-glide-details]");if(open&&next){next.open=true;positionGlidePanel(next);}return;
          }
          node.setAttribute("aria-busy",String(busy||drafting));
          node.querySelectorAll("[data-glide-range]").forEach(function(input){
            var operation=input.getAttribute("data-glide-range"),value=glideWorkingValue(state,operation);
            input.disabled=glideRangeDisabled(state,operation,input);
            input.setAttribute("aria-disabled",String(input.disabled));
            if(operation==="time")input.max=String(state.max);
            input.value=String(value);input.setAttribute("aria-valuetext",glideValueText(operation,value));
          });
          node.querySelectorAll("[data-glide-number],[data-glide-reset]").forEach(function(button){
            var operation=button.getAttribute("data-glide-number")||button.getAttribute("data-glide-reset");
            button.disabled=busy||drafting||!active||!state.supported||(operation==="curve"&&!state.advancedEnabled);
            button.setAttribute("aria-disabled",String(button.disabled));
            if(button.hasAttribute("data-glide-number"))button.textContent=glideValueText(operation,glideWorkingValue(state,operation));
          });
          node.querySelectorAll("[data-glide-switch]").forEach(function(button){
            var operation=button.getAttribute("data-glide-switch"),value=operation==="advanced"?state.advancedEnabled:state.scaled;
            button.disabled=busy||drafting||!active||!state.supported||(operation==="scaled"&&!state.advancedEnabled);
            button.setAttribute("aria-disabled",String(button.disabled));button.setAttribute("aria-checked",String(value));
            button.lastElementChild.textContent=value?"I":"0";
          });
          var limit=node.querySelector("[data-glide-model-limit]");if(limit){limit.textContent=state.reason;limit.hidden=!state.reason;}
          var status=node.querySelector("[data-glide-status]");if(status){status.textContent=glideStatus;status.hidden=!glideStatus;}
          var details=node.querySelector("[data-glide-details]");if(details){details.classList.toggle("is-unavailable",!state.supported);details.querySelector("summary").title=state.reason||tr("common.advanced_glide");positionGlidePanel(details);}
        });
      }
      function glideEditFailure(status) {
        glideStatus=status==="conflict"?tr("common.the_state_changed_try_again")
          :status==="unsupported"?tr("common.available_in_the_serum_model")
          :status==="disconnected"?tr("common.native_glide_service_is_not_connected")
          :status==="timeout"?tr("common.no_glide_confirmation_received_try_again")
          :tr("common.invalid_glide_value");
        if(glideNumberDialog)glideNumberDialog.overlay.querySelector("#touch-glide-number-error").textContent=glideStatus;
        syncGlideControls();
      }
      function submitGlideEdit(operation,value,capture) {
        var state=glideControlState();capture=capture||glideCapture();
        if(glidePending||glideDraft)return false;
        if(!glideCaptureCurrent(capture)){glideEditFailure("conflict");dispatchNative("refresh");return false;}
        if(!state.supported||(operation!=="advanced"&&operation!=="time"&&!state.advancedEnabled)){glideEditFailure("unsupported");return false;}
        var valid=(operation==="advanced"||operation==="scaled")?typeof value==="boolean"
          :(operation==="time"||operation==="curve")&&typeof value==="number"&&Number.isFinite(value)
            &&value>=(operation==="time"?0:-100)&&value<=(operation==="time"?state.max:100);
        if(!valid){glideEditFailure("invalid");return false;}
        var current=operation==="advanced"?state.advancedEnabled:operation==="scaled"?state.scaled:operation==="time"?state.timeMs:state.curve;
        if(value===current){glideStatus="";syncGlideControls();return true;}
        var pending={version:1,request:String(++glideRequestSerial),context:capture.context,capture:capture,operation:operation,value:value,timer:0};
        glidePending=pending;glideStatus="";syncGlideControls();
        if(!dispatchNative("glide-edit|"+encodeURIComponent(JSON.stringify({version:1,request:pending.request,context:pending.context,operation:operation,value:value}))+"|"+capture.generation)){
          glidePending=null;glideEditFailure("disconnected");return false;
        }
        if(glidePending===pending)pending.timer=window.setTimeout(function(){if(glidePending!==pending)return;glidePending=null;if(glideNumberDialog){glideNumberDialog.pending=false;glideNumberDialog.stale=true;glideNumberDialog.overlay.querySelector('[type="submit"]').disabled=true;}glideEditFailure("timeout");dispatchNative("refresh");},10000);
        return true;
      }
      function receiveGlideEditResult(reply) {
        var pending=glidePending;if(!pending||!reply||reply.version!==1||String(reply.request)!==pending.request)return;
        if(pending.timer)window.clearTimeout(pending.timer);glidePending=null;
        var current=glideControlState().context,projection=reply.instrumentControls;
        var authoritative=projection&&projection.version===1&&projection.glideContext===reply.context
          &&(current===pending.context||current===reply.context);
        if(authoritative)receiveInstrumentControls(projection);else dispatchNative("refresh");
        var edit=glideNumberDialog;if(edit&&edit.request===pending.request){edit.pending=false;edit.stale=!glideCaptureCurrent(edit.capture);edit.overlay.querySelector('[type="submit"]').disabled=edit.stale;}
        if(reply.status==="applied"&&authoritative){
          glideStatus="";if(edit&&edit.request===pending.request)closeGlideNumberDialog();
        }else glideEditFailure(authoritative?reply.status:"conflict");
        syncGlideControls();
      }
      function startGlideDraft(operation,target,pointerId,keyboard) {
        var state=glideControlState();if(glidePending||!glideSurfaceAvailable()||!state.supported||(operation==="curve"&&!state.advancedEnabled))return false;
        if(glideDraft)return glideDraft.target===target&&glideDraft.pointerId===pointerId&&glideDraft.keyboard===!!keyboard;
        flushPendingSets();cancelGestures();
        glideDraft={operation:operation,target:target,pointerId:pointerId,keyboard:!!keyboard,capture:glideCapture(),
          value:operation==="time"?state.timeMs:state.curve,initial:operation==="time"?state.timeMs:state.curve,stale:false};
        glideStatus="";syncGlideControls();return true;
      }
      function updateGlideDraft(target) {
        var operation=target.getAttribute("data-glide-range");
        if(glidePending||target.disabled){syncGlideControls();return;}
        if(!glideDraft){if(!startGlideDraft(operation,target,null,false))return;}
        if(glideDraft.target!==target){syncGlideControls();return;}
        var value=Number(target.value),state=glideControlState();
        if(!Number.isFinite(value))return;
        glideDraft.value=Math.max(operation==="time"?0:-100,Math.min(operation==="time"?state.max:100,value));syncGlideControls();
      }
      function finishGlideDraft(cancel) {
        var draft=glideDraft;if(!draft)return;glideDraft=null;
        if(cancel){syncGlideControls();return;}
        if(draft.stale||!glideCaptureCurrent(draft.capture)){glideEditFailure("conflict");dispatchNative("refresh");return;}
        if(draft.value!==draft.initial)submitGlideEdit(draft.operation,draft.value,draft.capture);else syncGlideControls();
      }
      function cancelGlideInteraction() {
        var pending=glidePending;if(pending&&pending.timer)window.clearTimeout(pending.timer);
        glideDraft=null;glidePending=null;glideStatus="";
        closeGlideNumberDialog(false);
        document.querySelectorAll("[data-glide-details][open]").forEach(function(details){details.open=false;});
        syncGlideControls();
      }
      function closeGlideNumberDialog(restoreFocus) {
        var edit=glideNumberDialog;if(!edit)return;glideNumberDialog=null;edit.overlay.remove();
        edit.inert.forEach(function(saved){saved.node.inert=saved.inert;if(saved.aria===null)saved.node.removeAttribute("aria-hidden");else saved.node.setAttribute("aria-hidden",saved.aria);});
        if(restoreFocus!==false){var target=edit.focus&&edit.focus.isConnected?edit.focus:document.querySelector('[data-glide-number="'+edit.operation+'"]');if(target&&target.focus)target.focus();}
      }
      function openGlideNumber(operation,target) {
        var state=glideControlState();if(glidePending||glideDraft||!glideSurfaceAvailable()||!state.supported||(operation==="curve"&&!state.advancedEnabled))return;
        flushPendingSets();cancelGestures();finishGlideDraft(true);closeNumberDialog();closeGlideNumberDialog();
        var overlay=document.createElement("div");overlay.className="touch-number-overlay";overlay.id="touch-glide-number-dialog";
        overlay.setAttribute("role","dialog");overlay.setAttribute("aria-modal","true");overlay.setAttribute("aria-labelledby","touch-glide-number-title");
        overlay.innerHTML='<form class="touch-number-window" id="touch-glide-number-form"><h2 id="touch-glide-number-title">'+esc(tr("common.enter_parameter_value"))+'</h2>'
          +'<label for="touch-glide-number-input">'+esc(instrumentControlCopy(operation==="time"?tr("common.glide_time"):tr("common.glide_curve"),operation==="time"?"Glide time":"Glide curve"))+'</label>'
          +'<div class="touch-number-value"><input type="text" inputmode="decimal" id="touch-glide-number-input" autocomplete="off" spellcheck="false" maxlength="64"><span>'+(operation==="time"?"ms":"%")+'</span></div>'
          +'<p class="touch-number-range">'+(operation==="time"?"0 – "+state.max+" ms":"-100 – 100%")+'</p>'
          +'<p class="touch-number-error" id="touch-glide-number-error" role="status" aria-live="polite"></p>'
          +'<div class="touch-number-actions"><button type="button" data-glide-number-close>'+esc(tr("common.cancel"))+'</button>'
          +'<button type="submit" class="primary" id="touch-glide-number-apply">'+esc(tr("common.confirm"))+'</button></div></form>';
        var initialValue=operation==="time"?state.timeMs:state.curve,initialText=String(Number(Number(initialValue).toPrecision(7)));
        glideNumberDialog={operation:operation,capture:glideCapture(),initialValue:initialValue,initialText:initialText,pending:false,composing:false,imeSettling:false,stale:false,request:"",overlay:overlay,focus:target,inert:[]};
        var edit=glideNumberDialog;document.body.appendChild(overlay);
        Array.prototype.forEach.call(document.body.children,function(node){if(node!==overlay&&node.tagName!=="SCRIPT"&&node.tagName!=="STYLE"){edit.inert.push({node:node,inert:node.inert,aria:node.getAttribute("aria-hidden")});node.inert=true;node.setAttribute("aria-hidden","true");}});
        var input=overlay.querySelector("#touch-glide-number-input");input.value=initialText;
        input.addEventListener("compositionstart",function(){edit.composing=true;});
        input.addEventListener("compositionend",function(){edit.composing=false;edit.imeSettling=true;window.setTimeout(function(){edit.imeSettling=false;},0);});
        overlay.querySelector("[data-glide-number-close]").onclick=closeGlideNumberDialog;
        overlay.querySelector("form").onsubmit=function(event){event.preventDefault();submitGlideNumber();};
        overlay.onkeydown=function(event){
          if(event.isComposing||edit.composing||event.keyCode===229)return;
          if(event.key==="Escape"){event.preventDefault();event.stopPropagation();closeGlideNumberDialog();return;}
          if(event.key==="Tab"){var nodes=Array.from(overlay.querySelectorAll("input,button")).filter(function(node){return !node.disabled;});var index=nodes.indexOf(document.activeElement);
            if(event.shiftKey&&index<=0){event.preventDefault();nodes[nodes.length-1].focus();}else if(!event.shiftKey&&index===nodes.length-1){event.preventDefault();nodes[0].focus();}}
        };
        input.focus();input.select();
      }
      function submitGlideNumber() {
        var edit=glideNumberDialog;if(!edit||edit.pending||edit.composing||edit.imeSettling)return;
        var text=edit.overlay.querySelector("#touch-glide-number-input").value.trim();
        if(!/^[+-]?(?:\d+\.?\d*|\.\d+)(?:e[+-]?\d+)?$/i.test(text)||!Number.isFinite(Number(text))){glideEditFailure("invalid");return;}
        if(edit.stale||!glideCaptureCurrent(edit.capture)){edit.stale=true;glideEditFailure("conflict");dispatchNative("refresh");return;}
        var value=text===edit.initialText?edit.initialValue:Number(text);
        if(!submitGlideEdit(edit.operation,value,edit.capture))return;
        if(!glidePending){closeGlideNumberDialog();return;}
        edit.request=glidePending.request;edit.pending=true;edit.overlay.querySelector("#touch-glide-number-apply").disabled=true;
        edit.overlay.querySelector("#touch-glide-number-error").textContent=tr("common.waiting_for_native_confirmation");
      }
      document.addEventListener("pointerdown",function(event){
        var target=event.target.closest&&event.target.closest("[data-glide-range]");
        if(target&&event.button===0){
          if(target.disabled||!startGlideDraft(target.getAttribute("data-glide-range"),target,event.pointerId,false)){
            event.preventDefault();event.stopImmediatePropagation();return;
          }
        }
        var inside=event.target.closest&&event.target.closest("[data-glide-details]");
        document.querySelectorAll("[data-glide-details][open]").forEach(function(details){if(details!==inside)details.open=false;});
      },true);
      document.addEventListener("input",function(event){if(event.target.hasAttribute&&event.target.hasAttribute("data-glide-range")){updateGlideDraft(event.target);event.stopImmediatePropagation();}},true);
      document.addEventListener("change",function(event){if(event.target.hasAttribute&&event.target.hasAttribute("data-glide-range")){if(glideDraft&&glideDraft.target===event.target&&!glideDraft.keyboard)finishGlideDraft(false);else syncGlideControls();event.stopImmediatePropagation();}},true);
      document.addEventListener("pointerup",function(event){if(glideDraft&&glideDraft.pointerId===event.pointerId)finishGlideDraft(false);},true);
      document.addEventListener("pointercancel",function(event){if(glideDraft&&glideDraft.pointerId===event.pointerId)finishGlideDraft(true);},true);
      document.addEventListener("click",function(event){
        var button=event.target.closest&&event.target.closest("[data-glide-switch]");
        if(button){event.preventDefault();event.stopImmediatePropagation();if(!button.disabled){var operation=button.getAttribute("data-glide-switch"),state=glideControlState();submitGlideEdit(operation,!(operation==="advanced"?state.advancedEnabled:state.scaled));}return;}
        button=event.target.closest&&event.target.closest("[data-glide-number]");
        if(button&&event.detail===0&&!button.disabled){event.preventDefault();event.stopImmediatePropagation();openGlideNumber(button.getAttribute("data-glide-number"),button);}
        button=event.target.closest&&event.target.closest("button[data-glide-reset]");
        if(button&&event.detail===0&&!button.disabled){event.preventDefault();event.stopImmediatePropagation();finishGlideDraft(true);submitGlideEdit(button.getAttribute("data-glide-reset"),0);}
      },true);
      document.addEventListener("dblclick",function(event){
        var target=event.target.closest&&event.target.closest("[data-glide-number],[data-glide-reset],[data-glide-range]");if(!target)return;
        event.preventDefault();event.stopImmediatePropagation();if(target.disabled||glideDraft)return;
        if(target.hasAttribute("data-glide-number"))openGlideNumber(target.getAttribute("data-glide-number"),target);
        else{finishGlideDraft(true);submitGlideEdit(target.getAttribute("data-glide-reset")||target.getAttribute("data-glide-range"),0);}
      },true);
      document.addEventListener("keydown",function(event){
        var target=event.target.closest&&event.target.closest("[data-glide-range]");
        if(target&&!target.disabled&&["ArrowLeft","ArrowRight","ArrowUp","ArrowDown","Home","End","PageUp","PageDown"].indexOf(event.key)>=0)startGlideDraft(target.getAttribute("data-glide-range"),target,null,true);
        if(event.key==="Escape"){
          if(glideDraft){event.preventDefault();finishGlideDraft(true);}
          var details=event.target.closest&&event.target.closest("[data-glide-details]");if(details&&details.open){event.preventDefault();details.open=false;details.querySelector("summary").focus();}
        }
      },true);
      document.addEventListener("keyup",function(event){if(glideDraft&&glideDraft.keyboard&&glideDraft.target===event.target)finishGlideDraft(false);},true);
      document.addEventListener("toggle",function(event){if(event.target.hasAttribute&&event.target.hasAttribute("data-glide-details")){if(!event.target.open&&glideDraft&&glideDraft.target.closest&&glideDraft.target.closest("[data-glide-details]")===event.target)finishGlideDraft(true);positionGlidePanel(event.target);}},true);
      document.addEventListener("visibilitychange",function(){if(document.hidden)cancelGlideInteraction();});
      window.addEventListener("blur",function(){finishGlideDraft(true);});
      window.addEventListener("pagehide",cancelGlideInteraction);
      window.addEventListener("resize",function(){document.querySelectorAll("[data-glide-details]").forEach(positionGlidePanel);});
      function instrumentControlState(id) {
        if(id!=="global.nativeMonoRetrigger")return "";
        var state=instrumentControlsView(),retrigger=state&&state.nativeRetrigger;
        return !retrigger?tr("common.native_state_unavailable"):retrigger.supported!==true?tr("common.unavailable_for_this_model"):"";
      }
      function instrumentControlStatus(id) {
        var pitch=/^(osc[12])\.pitchTracking$/.exec(id),state=instrumentControlsView();
        if(pitch) {
          if(param(id).normalized>=.5)return {text:"",title:""};
          var descriptor=state&&Array.isArray(state.oscillatorPitch)&&state.oscillatorPitch[Number(pitch[1].slice(3))-1];
          var text=tr("common.fixed_base_pitch"),title=tr("common.pitch_bend_mpe_pitch_modulation_remain_active");
          if(descriptor&&descriptor.tracking===false&&Number.isFinite(descriptor.tunedFixedBaseHz)&&descriptor.tunedFixedBaseHz>0)text+=" · "+Number(descriptor.tunedFixedBaseHz.toPrecision(6))+" Hz";
          if(descriptor&&Number.isFinite(descriptor.referenceHz)&&descriptor.referenceHz>0)title=tr("common.reference_base")+" · "+Number(descriptor.referenceHz.toPrecision(6))+" Hz · "+title;
          return {text:text,title:title};
        }
        if(id==="global.nativeMonoRetrigger") {
          var reason=instrumentControlState(id),retrigger=state&&state.nativeRetrigger;
          return {text:reason||(retrigger.scope==="shared-fx-lfo"?tr("common.shared_fx_lfo"):tr("common.envelopes_fx_lfo")),title:""};
        }
        return null;
      }
      function instrumentControlStatusMarkup(id) {
        var state=instrumentControlStatus(id);return state?'<output class="control-state instrument-control-state" data-instrument-control-state="'+esc(id)+'" title="'+esc(state.title)+'" '+(!state.text?'hidden':'')+'>'+esc(state.text)+'</output>':"";
      }
      function refreshInstrumentControlStates() {
        document.querySelectorAll("[data-instrument-control-state]").forEach(function(node){var state=instrumentControlStatus(node.getAttribute("data-instrument-control-state"));if(state){node.textContent=state.text;node.title=state.title;node.hidden=!state.text;}});
      }
      function syncInstrumentControls() { refreshOscillatorControlStates(); }
      function refreshOscillatorControlStates() {
        document.querySelectorAll("[data-osc-control-state]").forEach(function(node){
          var id=node.getAttribute("data-osc-control-state"),state=instrumentControlState(id)||oscillatorControlState(id);
          node.classList.toggle("is-inapplicable",!!state);node.setAttribute("aria-disabled",state?"true":"false");
          node.querySelectorAll("[data-param-step],[data-param-toggle],[data-knob-param],[data-value-for]").forEach(function(control){
            if(control.hasAttribute("data-inline-route"))return;
            if(control.tagName==="BUTTON")control.disabled=!!state;
            control.setAttribute("aria-disabled",state?"true":"false");
            if(control.hasAttribute("data-knob-param")||control.hasAttribute("data-number-param"))control.tabIndex=state?-1:0;
          });
        });
        refreshInstrumentControlStates();
      }
      function renderControl(definition) {
        definition=Object.assign({},definition,{id:wideControlId(definition.id)});
        if((/^osc[12]\.pitchTracking$/.test(definition.id)||definition.id==="global.nativeMonoRetrigger")&&!model.parameters[definition.id])return "";
        var meta = param(definition.id);
        var kind = definition.type === "auto" ? meta.kind : definition.type;
        var label = labelText(definition);
        var curveLabel=/^env\.(amp|filter|mod)\.(attack|decay|release)Curve$/.test(definition.id)?(tr("common.curve")):"";
        var scopeMatch = /^(osc[12]|lfo[1-8])\./.exec(definition.id);
        var accessibleLabel = (scopeMatch ? scopeMatch[1].replace("osc1", "OSC A").replace("osc2", "OSC B").toUpperCase() + " / " : "") + label;
        var value = valueText(meta);
        var inactive=!!(instrumentControlState(definition.id)||oscillatorControlState(definition.id)) || meta.audioRateAvailable===false;
        var numberAttrs=numberValueEditable(definition.id)?' data-number-param="'+esc(definition.id)+'" role="button" tabindex="'+(inactive?'-1':'0')+'" aria-label="'+esc(t("numberTitle")+' · '+accessibleLabel)+'"':'';
        var control = "";
        var wide = false;
        var isStepper = kind === "stepper" || kind === "integer";
        var standaloneReadout = true;
        if (kind === "nativeSource" || kind === "nativeAuxSource" || kind === "nativeFlags") {
          standaloneReadout=false;control=nativeRouteSelect(Number(/^mod(\d+)/.exec(definition.id)[1]),kind);
        } else if (kind === "nativeTarget") {
          standaloneReadout=false;
          control=nativeFxTargetControl(Number(/^mod(\d+)/.exec(definition.id)[1]));
        } else if (kind === "toggle") {
          standaloneReadout = false;
          control = '<button class="mechanical-toggle" type="button" role="switch" data-param-toggle="' + esc(definition.id) + '" aria-label="' + esc(accessibleLabel) + '" aria-checked="' + (meta.normalized >= .5 ? "true" : "false") + '"'+(inactive?' disabled aria-disabled="true"':'')+'><span class="zero">0</span><span class="one">I</span></button>';
          value = meta.normalized >= .5 ? "I" : "0";
        } else if (kind === "choice" || kind === "segments" || kind === "select") {
          standaloneReadout = false;
          var values = choiceValues(meta, definition);
          // A select keeps every choice reachable when comparison banks or a
          // compact viewport cannot give each segment a 44-point hit area.
          if (kind !== "select" && values.length > 0 && values.length <= 4
              && !/^lfo[1-8]\./.test(definition.id) && window.innerWidth > 900 && !wideOscillatorCompare) {
            wide = values.length > 1;
            control = '<div class="segment-control" role="group" aria-label="' + esc(accessibleLabel) + '">';
            for (var i = 0; i < values.length; i++) control += '<button class="choice-button' + (i === choiceIndex(meta, definition) ? " is-active" : "") + '" type="button" data-param-choice="' + esc(definition.id) + '" data-choice-index="' + i + '" aria-pressed="' + (i === choiceIndex(meta, definition) ? "true" : "false") + '">' + esc(tv(values[i])) + '</button>';
            control += '</div>';
          } else {
            control = '<select class="select-control" data-param-select="' + esc(definition.id) + '" aria-label="' + esc(accessibleLabel) + '">';
            for (var j = 0; j < values.length; j++) control += '<option value="' + j + '"' + (j === choiceIndex(meta, definition) ? " selected" : "") + '>' + esc(tv(values[j])) + '</option>';
            control += '</select>';
          }
        } else if (isStepper) {
          standaloneReadout = false;
          control = '<div class="stepper"><button type="button" data-param-step="' + esc(definition.id) + '" data-step="-1" aria-label="' + esc(t("decrease") + " " + accessibleLabel) + '">-</button><output data-value-for="' + esc(definition.id) + '"'+numberAttrs+'>' + esc(value) + '</output><button type="button" data-param-step="' + esc(definition.id) + '" data-step="1" aria-label="' + esc(t("increase") + " " + accessibleLabel) + '">+</button></div>';
        } else {
          var progress = clamp01(meta.normalized) * 270;
          var angle = -135 + progress;
          control = '<div class="knob-hit" tabindex="0" role="slider" data-knob-param="' + esc(definition.id) + '" data-accent="' + esc(definition.accent) + '" aria-label="' + esc(accessibleLabel) + '" aria-description="' + esc(t("knobHelp")) + '" aria-valuemin="0" aria-valuemax="1" aria-valuenow="' + clamp01(meta.normalized).toFixed(3) + '" aria-valuetext="' + esc(value) + '" style="--progress:' + progress + 'deg"><div class="knob-ring"><span class="touch-knob-mod-depth" aria-hidden="true"></span><div class="knob-face"><span class="knob-indicator" style="transform:rotate(' + angle + 'deg)"></span></div></div></div>';
        }
        if (/^lfo[1-8]\.shape$/.test(definition.id)) {
          var slot=model.parameters[definition.id.replace(".shape",".curveSlot")];
          if (slot && slot.normalized>0) control=control.replace(/<button/g,"<button disabled").replace(/<select/g,"<select disabled");
        }
        if ((definition.id==="filter1.mode"&&importedFilterActive()) || (definition.id==="sub.type"&&subShapeParameter()==="sub.nativeShape") || (definition.id==="sub.octave"&&octaveParameter("sub")==="sub.extendedOctave")) {
          control=control.replace(/<button/g,"<button disabled").replace(/<select/g,"<select disabled").replace(/<input/g,"<input disabled");
        }
        if(inactive)control=control.replace(/<button/g,'<button disabled aria-disabled="true"').replace(/tabindex="0"/g,'tabindex="-1" aria-disabled="true"');
        var readout = standaloneReadout
          ? '<div class="control-value" data-value-for="' + esc(definition.id) + '"'+numberAttrs+' aria-disabled="'+inactive+'">' + esc(value) + '</div>'
          : '<div class="control-value is-embedded" aria-hidden="true"></div>';
        var instrumentStatus=instrumentControlStatusMarkup(definition.id);
        if(instrumentStatus)readout='<div class="instrument-state-slot">'+instrumentStatus+'</div>';
        return '<div class="control-cell' + (instrumentStatus?' instrument-effective-cell':'') + (standaloneReadout && numberAttrs && !instrumentStatus ? ' has-number-editor' : '') + (inactive?' is-inapplicable':'') + (wide ? " is-wide" : "") + (isStepper ? " is-stepper" : "") + (control.indexOf('<select') === 0 ? " is-select" : "") + '" data-control-id="' + esc(definition.id) + '" data-osc-control-state="'+esc(definition.id)+'" aria-disabled="'+inactive+'"><div class="control-label"'+(curveLabel?' title="'+esc(label)+'"':'')+'>' + esc(curveLabel||label) + '</div><div>' + control + '</div>' + readout + (standaloneReadout&&!isStepper?inlineModFoot(definition.id):"") + '</div>';
      }

      function controls(definitions, dense, extraClass) { var html = '<div class="control-grid' + (dense ? " is-dense" : "") + (extraClass ? " " + extraClass : "") + '">'; for (var i = 0; i < definitions.length; i++) html += renderControl(definitions[i]); return html + '</div>'; }

      var envelopeCurveSelection = {};
      function envelopeCurveLabel(stage) { return (language==="zh"?{attack:tr("common.attack_curve"),decay:tr("common.decay_curve"),release:tr("common.release_curve")}:{attack:"Attack curve",decay:"Decay curve",release:"Release curve"})[stage]; }
      function envelopeCurveControls(prefix) {
        var selected=envelopeCurveSelection[prefix]||"attack";
        return '<div class="envelope-curve-controls" role="group" aria-label="'+esc(tr("common.curvature"))+'"><div class="envelope-curve-tabs">'
          +["attack","decay","release"].map(function(stage,index){return '<button type="button" data-envelope-curve-select="'+prefix+'" data-curve-stage="'+stage+'" aria-pressed="'+(stage===selected)+'" title="'+esc(envelopeCurveLabel(stage))+'" aria-label="'+esc(envelopeCurveLabel(stage))+'">'+["A","D","R"][index]+' <span data-envelope-curve-tab-value="'+prefix+'.'+stage+'">'+envelopeCurvature(prefix,stage).toFixed(1)+'</span></button>';}).join("")
          +'</div><div class="envelope-curve-bank" data-envelope-curve-bank="'+prefix+'">'+renderControl(def(prefix+"."+selected+"Curve",envelopeCurveLabel(selected),"auto","indigo"))+'</div></div>';
      }
      function envelopeDiagram(prefix,canvasId,label) {
        return '<div class="visual-strip envelope-curve-visual" data-envelope-curve-display="'+prefix+'"><span class="visual-label">'+esc(label)+'</span><canvas id="'+canvasId+'" role="img" aria-label="'+esc(tr("common.envelope_parameter_diagram"))+'"></canvas></div>'+envelopeCurveControls(prefix);
      }
      function selectEnvelopeCurve(prefix,stage) {
        if(!/^env\.(amp|filter|mod)$/.test(prefix)||!/^(attack|decay|release)$/.test(stage))return;
        if(envelopeCurveSelection[prefix]===stage)return;
        flushPendingSets();cancelGestures();envelopeCurveSelection[prefix]=stage;
        document.querySelectorAll('[data-envelope-curve-select="'+prefix+'"]').forEach(function(button){button.setAttribute("aria-pressed",String(button.dataset.curveStage===stage));});
        document.querySelectorAll('[data-envelope-curve-bank="'+prefix+'"]').forEach(function(bank){bank.innerHTML=renderControl(def(prefix+"."+stage+"Curve",envelopeCurveLabel(stage),"auto","indigo"));});
        requestVisualDraw();
      }
      function frame(code, title, meta, body, classes) { return '<section class="frame ' + (classes || "") + '"><header class="frame-header"><span class="frame-code">' + esc(code) + '</span><span class="frame-title">' + esc(title) + '</span><span class="frame-rule"></span><span class="frame-meta">' + esc(meta || "") + '</span></header><div class="frame-body" id="frame-body-' + esc(code) + '">' + body + '</div></section>'; }
      function tabs(items, current, attribute, className) { var html = '<div class="' + (className || "subtabs") + '" role="tablist">'; for (var i = 0; i < items.length; i++) { var active = items[i][0] === current; html += '<button class="' + (className === "mobile-task-tabs" ? "task-tab" : "subtab") + (active ? " is-active" : "") + '" type="button" role="tab" aria-selected="' + (active ? "true" : "false") + '" tabindex="' + (active ? "0" : "-1") + '" ' + attribute + '="' + items[i][0] + '">' + esc(t(items[i][1])) + '</button>'; } return html + '</div>'; }

      function oscillatorCore(n, compactChoices) { var p = "osc" + n; return [def(p + ".enabled", "enabled", "toggle", n === 1 ? "indigo" : "pine"), def(p + ".mode", "mode", compactChoices ? "select" : "choice", n === 1 ? "indigo" : "pine", ["Analog", "Wavetable", "2-Op FM"]), def(p + ".level", "level", "auto", n === 1 ? "indigo" : "pine"), def(p + ".timbre", "timbre", "auto", n === 1 ? "indigo" : "pine"), def(p + ".pan", "pan", "auto", n === 1 ? "indigo" : "pine")]; }
      function oscillatorTune(n) { var p = "osc" + n; return [def(p + ".pitchTracking",tr("common.pitch_tracking"),"toggle"),def(octaveParameter(p), "octave", "auto"), def(p + ".extendedOctave", tr("common.extended_octave"), "select"), def(p + ".nativeCoarse", tr("common.coarse_pitch")), def(p + ".semitone", "semitone", "stepper"), def(p + ".fine", "fine"), def(unisonParameter(p, "detune"), "detune"), def(p + ".phase", "phase"), def(p + ".drift", "drift")]; }
      function oscillatorEngine(n, compactChoices) {
        var p = "osc" + n; var result = [def(unisonParameter(p, "voices"), "voices", "stepper"), def(p + ".unison.stereo", "width"), def(p + ".unison.blend", "blend"), def(p + ".unison.rand", "random")];
        var mode = choiceIndex(param(p + ".mode"), def(p + ".mode", "mode", "choice", "", ["Analog", "Wavetable", "2-Op FM"]));
        if (mode === 0) result = result.concat([def(p + ".analog.wave", "wave", compactChoices ? "select" : "choice", "", ["Sine", "Saw", "Square", "Triangle"]), def(p + ".analog.shape", "shape"), def(p + ".analog.pulseWidth", "pulseWidth")]);
        if (mode === 1) result = result.concat([def(p + ".wavetable.position", "position"), def(p + ".wavetable.warp", "warp"), def(p + ".wavetable.slot", "wavetable", "stepper"), def(p + ".wavetable.crossMode", n===1?"B → A":"A → B", "select"), def(p + ".wavetable.warpMode", "warpMode", "choice")]);
        if (mode === 2) result = result.concat([def(p + ".fm.ratio", "ratio"), def(p + ".fm.index", "index"), def(p + ".fm.feedback", "feedback"), def(p + ".fm.level",tr("common.fm_branch_level"))]);
        if(mode===1 && choiceIndex(param(p+".wavetable.crossMode"))>0)result=result.filter(function(d){return d.id!==p+".wavetable.warpMode";});
        return result;
      }

      var filterDefs = [def("filter1.enabled", tr("common.enabled"), "toggle", "mustard"), def("filter1.mix", tr("common.mix"), "auto", "mustard"), def("filter1.route.osc1", "OSC A", "toggle", "mustard"), def("filter1.route.osc2", "OSC B", "toggle", "mustard"), def("filter1.route.sub", "Sub", "toggle", "mustard"), def("filter1.route.noise", "Sample", "toggle", "mustard"), def("filter1.nativeModel", tr("common.imported_model"), "select", "mustard"), def("filter1.mode", "mode", "choice", "mustard", ["Low-pass", "Band-pass", "High-pass"]), def("filter1.stereoOffset", tr("common.stereo_frequency_offset"), "auto", "mustard"), def("filter1.nativeVariation", tr("common.fat_variation"), "auto", "mustard"), def("filter1.cutoff", "cutoff", "auto", "mustard"), def("filter1.resonance", "resonance", "auto", "mustard"), def("filter1.drive", "drive", "auto", "mustard"), def("filter1.keyTrack", "keytrack", "auto", "mustard"), def("filter1.envAmount", "envAmount", "auto", "mustard")];
      var ampEnvDefs = [def("env.amp.hold", "hold", "auto", "pine"),def("env.amp.attack", "attack", "auto", "pine"), def("env.amp.decay", "decay", "auto", "pine"), def("env.amp.sustain", "sustain", "auto", "pine"), def("env.amp.release", "release", "auto", "pine")];
      var filterEnvDefs = [def("env.filter.hold", "hold", "auto", "pine"),def("env.filter.attack", "attack", "auto", "mustard"), def("env.filter.decay", "decay", "auto", "mustard"), def("env.filter.sustain", "sustain", "auto", "mustard"), def("env.filter.release", "release", "auto", "mustard")];
      var utilityDefs = [def("global.amplitudeModel", "amplitudeModel", "choice", "", ["FAD", "Serum"]), def("global.presetGain", "presetGain"),def("sub.enabled", tr("common.enable_sub"), "toggle", "pine"), def("sub.nativeShape", tr("common.imported_waveform"), "select", "pine"), def("sub.type", "subType", "choice", "pine", ["Sine", "Square", "Triangle"]), def("sub.level", "subLevel", "auto", "pine"), def("sub.octave", "subOctave", "stepper", "pine"), def("sub.extendedOctave", tr("common.extended_octave"), "select", "pine"), def("sub.pan", tr("common.sub_pan"), "auto", "pine"), def("sub.directOut", tr("common.sub_bypass_filter_fx"), "toggle", "pine"), def("global.output", "output"), def("global.voiceMode", "voiceMode", "choice", "", ["Poly", "Mono"]), def("global.nativeTune", tr("common.master_tuning")), def("global.pitchBendRange", "bend", "stepper"), def("global.glideTime", "glide"), def("global.glideMode", "glideMode", "choice", "", ["Off", "Always", "Legato"])];
      function glideUtilityControls() {
        return '<div class="control-grid is-dense">'+utilityDefs.map(function(definition){return definition.id==="global.glideTime"?glideControlsMarkup():renderControl(definition);}).join("")+'</div>';
      }
      var modEnvDefs = [def("env.mod.hold", "hold", "auto", "pine"),def("env.mod.attack", "attack", "auto", "indigo"), def("env.mod.decay", "decay", "auto", "indigo"), def("env.mod.sustain", "sustain", "auto", "indigo"), def("env.mod.release", "release", "auto", "indigo")];
      utilityDefs.splice(1,0,def("global.nativeMonoRetrigger","nativeRetrigger","toggle"));

      function useWideOscillatorCompare() {
        return window.innerWidth >= 1360 && window.innerHeight > 420;
      }
      function oscillatorSourcePane(index) {
        return '<section class="osc-pane" aria-label="OSC ' + (index === 1 ? "A" : "B") + '">'
          + '<div class="visual-strip curve-toolbar" data-workbench-display="oscillator"><span class="visual-label">OSC '
          + (index === 1 ? "A" : "B") + ' / ' + esc(t(choiceIndex(param("osc" + index + ".mode"), def("", "", "choice", "", [1,2,3])) === 0 ? "waveDiagram" : "parameterMap")) + '</span><canvas id="osc-canvas-' + index + '"></canvas><button type="button" class="action-button curve-well-entry" data-asset-open="waveform" data-asset-target="'+(index-1)+'"'+(choiceIndex(param('osc'+index+'.mode'))===1?'':' disabled')+' aria-label="'+esc(window.FADI18n.text('asset.openDrawing'))+' · OSC '+(index===1?'A':'B')+'">'+esc(window.FADI18n.text('asset.openDrawing'))+'</button></div>'
          + '<div class="section-label" data-workbench-bank="core">' + esc(t("core")) + '</div>' + controls(oscillatorCore(index, true), true)
          + '<div class="section-label" data-workbench-bank="tune">' + esc(t("tuning")) + '</div>' + controls(oscillatorTune(index), true, "osc-tune-grid")
          + '<div class="section-label" data-workbench-bank="engine">' + esc(t("engine")) + '</div>' + controls(oscillatorEngine(index, true), true, "osc-engine-grid")
          + (window.FADAssetEditor?window.FADAssetEditor.renderWarp(index-1,model.instrumentControls):'')
          + '</section>';
      }
      // Noise presentation owns no sample slot or audio resources.
      var noisePageEpoch = pageEpoch, noiseRequestSequence = 0, noiseDocumentNonce = createNoiseDocumentNonce();
      // Protocol identity only; never used by parameters, samples or DSP randomness.
      function createNoiseDocumentNonce() {
        if(window.crypto && typeof window.crypto.getRandomValues==='function') {
          var bytes=new Uint8Array(12);window.crypto.getRandomValues(bytes);
          return Array.prototype.map.call(bytes,function(value){return ('0'+value.toString(16)).slice(-2);}).join('');
        }
        return Date.now().toString(36)+Math.random().toString(36).slice(2,14);
      }
      function nextNoiseRequestId() { return 'n'+noiseDocumentNonce+'_'+(++noiseRequestSequence).toString(36); }
      var noisePreviousRequestId='', noisePreviousUpload=null, noiseUpload = null, noiseRequestId = '', noiseStatus = null, noiseLocalError = '';
      function noiseCopy(zh, en) { return language==='zh' ? zh : en; }
      function noiseCapabilities() {
        var c = model.noiseSampleCapabilities;
        return c && c.protocolVersion === 1 ? c : {};
      }
      function noiseWire(action, fields) { return dispatchNative(action + '|1|' + noisePageEpoch + '|' + fields.join('|')); }
      function noiseIdentity() { return model.noiseSampleDescriptor || { sourceKind:'unavailable' }; }
      function noiseWaveform(d) {
        if (d.sourceKind !== 'pcm' || !Array.isArray(d.waveformMinMax)) return '';
        var tracks = d.waveformMinMax.slice(0,2), path = '';
        tracks.forEach(function(buckets, channel) {
          if (!Array.isArray(buckets)) return;
          var count = Math.min(512,buckets.length), centre = (channel + .5) * 80 / tracks.length;
          for (var i=0;i<count;i++) {
            var pair=buckets[i]; if (!Array.isArray(pair) || pair.length!==2 || !pair.every(Number.isFinite)) continue;
            var x=count===1?256:i*512/(count-1), scale=34/tracks.length;
            path += 'M'+x.toFixed(2)+','+(centre-Math.max(-1,Math.min(1,pair[1]))*scale).toFixed(2)+'V'+(centre-Math.max(-1,Math.min(1,pair[0]))*scale).toFixed(2);
          }
        });
        var phase=Number(param('noise.phase').normalized)||0;phase-=Math.floor(phase);
        return '<svg viewBox="0 0 512 80" preserveAspectRatio="none" aria-hidden="true"><path class="noise-pcm-trace" d="'+path+'"/><path class="noise-start-line" d="M'+(phase*512).toFixed(2)+',0V80"/></svg>';
      }
      function noiseMessage() {
        if (noiseLocalError) return noiseLocalError;
        var s=noiseStatus || model.noiseImportStatus || {}, p=s.phase;
        if (s.shortMessage) return String(s.shortMessage);
        if(model.previewActive && (!p || p==='idle'))return tr("common.keep_or_discard_the_current_preview_first");
        if (p==='receiving') return tr("common.reading_file") + (s.inputBytesTotal>0?Math.floor(s.inputBytesReceived/s.inputBytesTotal*100)+'%':'');
        return ({acquiring:tr("common.choosing_file"),inputAccepted:tr("common.decoding"),decoding:tr("common.decoding"),validating:tr("common.validating"),committing:tr("common.applying"),applied:tr("common.loaded"),superseded:tr("common.sound_changed_sample_was_not_loaded")})[p] || '';
      }
      function noisePanel() {
        var d=noiseIdentity(), c=noiseCapabilities(), source=d.sourceKind==='procedural'?tr("common.built_in_noise"):d.displayName || tr("common.source_unavailable");
        var options='<option value="procedural" data-generation="0"'+(d.sourceKind==='procedural'?' selected':'')+'>'+esc(tr("common.built_in_noise"))+'</option>';
        var resources=Array.isArray(d.resources)?d.resources.slice(0,16):[];
        if(d.sourceKind==='pcm' && !resources.some(function(r){return r.assetIdentity===d.assetIdentity;}))resources.unshift(d);
        resources.forEach(function(r){options+='<option value="'+esc(r.assetIdentity)+'" data-generation="'+Number(r.assetGeneration || 0)+'"'+(r.assetIdentity===d.assetIdentity?' selected':'')+'>'+esc(r.displayName || r.assetIdentity)+'</option>';});
        var meta=d.sourceKind==='pcm'?[Number(d.duration).toFixed(3)+' s',d.channels===2?'Stereo':'Mono',Number(d.sampleRate)+' Hz'].join(' · '):'';
        var unavailable=!c.canChoose && !c.canReceiveBytes;
        return '<section class="noise-sample-panel" aria-label="Sample"><div class="noise-identity"><strong>SAMPLE</strong>'+renderControl(def('noise.enabled',tr("common.power"),'toggle'))
          +'<select data-noise-source aria-label="'+esc(tr("common.noise_source"))+'" '+(!c.canSelectResidentAsset?'disabled':'')+'>'+options+'</select><button type="button" data-noise-choose '+(!c.canChoose?'disabled':'')+'>'+esc(tr("common.load"))+'</button></div>'
          +'<div class="noise-sample-display" data-noise-sample-target tabindex="0" aria-label="'+esc(source)+'"><span class="noise-source-name" data-localization="literal" title="'+esc(source)+'">'+esc(source)+'</span>'+noiseWaveform(d)+'<span class="noise-metadata">'+esc(meta)+'</span></div>'
          +'<div class="noise-primary-controls">'+controls([def('noise.level',tr("common.level")),def('noise.pitch',tr("common.pitch")),def('noise.oneShot',tr("common.one_shot_2"),'toggle'),def('noise.keytrack',tr("common.keytrack_3"),'toggle')],true)+'</div>'
          +'<details class="noise-details"><summary>'+esc(tr("common.details"))+'</summary><div class="control-grid">'+controls([def('noise.fine',tr("common.fine")),def('noise.pan',tr("common.pan")),def('noise.phase',tr("common.start")),def('noise.randomPhase',tr("common.random_start")),def('noise.directOut',tr("common.direct_out"),'toggle')],true)+'</div></details>'
          +'<div class="noise-status" role="status" aria-live="polite" data-localization="literal">'+esc(unavailable?tr("common.native_sample_service_unavailable"):noiseMessage())+'</div>'
          +'<button class="noise-cancel" type="button" data-noise-cancel '+(!noiseRequestId || !c.cancellationSupported?'disabled':'')+'>'+esc(tr("common.cancel"))+'</button></section>';
      }
      function refreshNoisePresentation() {
        document.querySelectorAll('.noise-status').forEach(function(node){node.textContent=noiseMessage();});
        document.querySelectorAll('[data-noise-cancel]').forEach(function(node){node.disabled=!noiseRequestId || !noiseCapabilities().cancellationSupported;});
      }
      function stopNoiseUpload(cancel, incompleteOnly) {
        var u=noiseUpload;if(!u)return;clearTimeout(u.timer);if(u.reader && u.reader.readyState===1)u.reader.abort();
        if(cancel && !u.accepted && (!incompleteOnly || !u.ended))noiseWire('cancel-noise-import',[u.requestId]);noiseUpload=null;
      }
      function noiseUploadTimeout(u) {
        clearTimeout(u.timer);u.timer=setTimeout(function(){if(noiseUpload===u){noiseLocalError=tr("common.sample_transfer_was_not_acknowledged_retry");stopNoiseUpload(true);refreshNoisePresentation();}},30000);
      }
      function startNoiseDrop(files) {
        var c=noiseCapabilities(), file=files && files.length===1?files[0]:null;
        var ext=file && String(file.name).split('.').pop().toLowerCase();
        if(!file || !Number.isSafeInteger(file.size) || file.size<=0 || typeof file.slice!=='function')noiseLocalError=tr("common.load_one_audio_file_at_a_time");
        else if(!c.canReceiveBytes)noiseLocalError=tr("common.native_sample_service_unavailable");
        else if(!Array.isArray(c.supportedExtensions) || c.supportedExtensions.indexOf(ext)<0)noiseLocalError=tr("common.wav_aiff_only");
        else if(!Number.isSafeInteger(c.maxInputBytes) || file.size>c.maxInputBytes)noiseLocalError=tr("common.file_exceeds_sample_input_limit");
        else if(!Number.isSafeInteger(c.chunkBytes) || c.chunkBytes<=0 || c.chunkBytes>49152 || c.maxInFlightChunks!==1)noiseLocalError=tr("common.sample_transfer_capability_unavailable");
        else {
          noiseLocalError='';noisePreviousRequestId=noiseRequestId;noisePreviousUpload=noiseUpload;if(noisePreviousUpload){clearTimeout(noisePreviousUpload.timer);if(noisePreviousUpload.reader && noisePreviousUpload.reader.readyState===1)noisePreviousUpload.reader.abort();}noiseRequestId=nextNoiseRequestId();noiseStatus={phase:'receiving',inputBytesReceived:0,inputBytesTotal:file.size};
          var u=noiseUpload={requestId:noiseRequestId,file:file,nextChunk:0,offset:0,chunkBytes:c.chunkBytes,started:Date.now(),accepted:false};
          if(!noiseWire('noise-upload-begin',[u.requestId,encodeURIComponent(file.name),file.size])){noiseLocalError=tr("common.native_sample_service_unavailable");stopNoiseUpload(false);}else noiseUploadTimeout(u);
        }
        refreshNoisePresentation();
      }
      function receiveNoiseImport(reply) {
        if(!noiseRequestId && reply && reply.protocolVersion===1 && Number(reply.pageEpoch)===noisePageEpoch && ['decoding','validating','committing','inputAccepted'].indexOf(reply.phase)>=0 && /^[a-zA-Z0-9_-]{1,64}$/.test(String(reply.requestId || '')))noiseRequestId=reply.requestId;
        if(!noiseRequestId || !reply || reply.protocolVersion!==1 || Number(reply.pageEpoch)!==noisePageEpoch || reply.requestId!==noiseRequestId)return;
        noiseStatus=reply;noiseLocalError='';var u=noiseUpload;
        if(reply.phase==='applied' && reply.descriptor){noisePreviousUpload=null;noisePreviousRequestId='';model.noiseSampleDescriptor=reply.descriptor;stopNoiseUpload(false);noiseRequestId='';renderWorkspace();return;}
        if(['failed','rejected','cancelled','superseded'].indexOf(reply.phase)>=0){stopNoiseUpload(false);noiseRequestId='';if(reply.phase==='rejected' && noisePreviousRequestId){noiseUpload=noisePreviousUpload;noisePreviousUpload=null;noiseRequestId=noisePreviousRequestId;noisePreviousRequestId='';if(noiseUpload){noiseUpload.lastAck=undefined;noiseUpload.reader=null;noiseUploadTimeout(noiseUpload);}noiseWire('query-noise-import',[noiseRequestId]);}else{noisePreviousUpload=null;noisePreviousRequestId='';}refreshNoisePresentation();return;}
        if(reply.phase==='acquiring'){noisePreviousUpload=null;noisePreviousRequestId='';}
        if(reply.phase==='inputAccepted'){noisePreviousUpload=null;noisePreviousRequestId='';if(u){u.accepted=true;stopNoiseUpload(false);}refreshNoisePresentation();return;}
        if(u && reply.phase==='receiving' && reply.nextChunk!==undefined){
          noisePreviousUpload=null;noisePreviousRequestId='';
          if(reply.nextChunk===u.lastAck){refreshNoisePresentation();return;}
          if(!Number.isSafeInteger(reply.nextChunk) || reply.nextChunk!==u.nextChunk || Date.now()-u.started>120000){noiseLocalError=tr("common.sample_transfer_sequence_error");stopNoiseUpload(true);refreshNoisePresentation();return;}
          u.lastAck=reply.nextChunk;clearTimeout(u.timer);
          if(u.reader && u.reader.readyState===1)return;
          if(u.offset>=u.file.size){if(!u.ended){u.ended=true;noiseWire('noise-upload-end',[u.requestId,u.file.size]);noiseUploadTimeout(u);}return;}
          var end=Math.min(u.file.size,u.offset+u.chunkBytes), reader=u.reader=new FileReader();
          reader.onerror=function(){if(noiseUpload===u){noiseLocalError=tr("common.cannot_read_sample_file");stopNoiseUpload(true);refreshNoisePresentation();}};
          reader.onload=function(){if(noiseUpload!==u)return;var data=String(reader.result || ''),comma=data.indexOf(',');if(comma<0){reader.onerror();return;}
            var index=u.nextChunk++;u.offset=end;noiseWire('noise-upload-chunk',[u.requestId,index,data.slice(comma+1)]);noiseUploadTimeout(u);};
          try{reader.readAsDataURL(u.file.slice(u.offset,end));}catch(error){reader.onerror();}
        }
        refreshNoisePresentation();
      }
      function handleNoiseClick(event) {
        var b=event.target.closest && event.target.closest('[data-noise-choose],[data-noise-cancel]');if(!b)return false;
        if(b.disabled)return true;
        if(b.hasAttribute('data-noise-cancel')){noiseWire('cancel-noise-import',[noiseRequestId]);stopNoiseUpload(false);}
        else{noisePreviousRequestId=noiseRequestId;noisePreviousUpload=noiseUpload;stopNoiseUpload(false);noiseRequestId=nextNoiseRequestId();noiseLocalError='';noiseStatus={phase:'acquiring'};noiseWire('choose-noise-sample',[noiseRequestId]);}
        refreshNoisePresentation();return true;
      }
      document.addEventListener('click',function(event){if(handleNoiseClick(event)){event.preventDefault();event.stopImmediatePropagation();}});
      document.addEventListener('change',function(event){var target=event.target;if(!target.hasAttribute || !target.hasAttribute('data-noise-source'))return;var option=target.options[target.selectedIndex];noisePreviousRequestId=noiseRequestId;noisePreviousUpload=noiseUpload;stopNoiseUpload(false);noiseRequestId=nextNoiseRequestId();noiseWire('select-noise-source',[noiseRequestId,encodeURIComponent(target.value),Number(option.getAttribute('data-generation'))]);var current=noiseIdentity();target.value=current.sourceKind==='procedural'?'procedural':current.assetIdentity;if(typeof syncPaperSelect==='function')syncPaperSelect(target);});
      document.addEventListener('keydown',function(event){if(event.key!=='Escape')return;var details=event.target.closest && event.target.closest('.noise-details');if(details && details.open){details.open=false;details.querySelector('summary').focus();event.preventDefault();}});
      document.addEventListener('dragover',function(event){var target=event.target.closest && event.target.closest('[data-noise-sample-target]');if(!target || !event.dataTransfer || Array.prototype.indexOf.call(event.dataTransfer.types || [],'Files')<0)return;event.preventDefault();event.dataTransfer.dropEffect='copy';target.classList.add('is-noise-drop');});
      document.addEventListener('dragleave',function(event){var target=event.target.closest && event.target.closest('[data-noise-sample-target]');if(target && (!event.relatedTarget || !target.contains(event.relatedTarget)))target.classList.remove('is-noise-drop');});
      document.addEventListener('drop',function(event){var target=event.target.closest && event.target.closest('[data-noise-sample-target]');if(!target || !event.dataTransfer || (!(event.dataTransfer.files && event.dataTransfer.files.length) && Array.prototype.indexOf.call(event.dataTransfer.types || [],'Files')<0))return;event.preventDefault();event.stopImmediatePropagation();target.classList.remove('is-noise-drop');var items=event.dataTransfer && event.dataTransfer.items;if(items && Array.prototype.some.call(items,function(item){var entry=item.webkitGetAsEntry && item.webkitGetAsEntry();return entry && entry.isDirectory;})){noiseLocalError=tr("common.load_one_audio_file_at_a_time");refreshNoisePresentation();return;}startNoiseDrop(event.dataTransfer && event.dataTransfer.files);});
      document.addEventListener('keydown',function(event){if(!event.defaultPrevented && event.key==='Escape' && noiseSourceOpen && !(event.target.closest && event.target.closest('.noise-details[open]'))){flushPendingSets();cancelGestures();noiseSourceOpen=false;renderWorkspace();var back=document.querySelector('[data-noise-source-open]');if(back)back.focus();event.preventDefault();}});
      window.addEventListener('pagehide',function(){stopNoiseUpload(true,true);noisePreviousUpload=null;noisePreviousRequestId='';});

      var noiseSourceOpen=false, noiseSourceReturnFocus=null;
      function renderSound() {
        var oscTabs = tabs([["1", "oscillator"], ["2", "oscillator"]], String(selectedOsc), "data-osc-select").replace(t("oscillator") + '</button>', t("oscillator") + ' A</button>').replace(t("oscillator") + '</button>', t("oscillator") + ' B</button>');
        wideOscillatorCompare = useWideOscillatorCompare();
        var sourceBody = wideOscillatorCompare
          ? '<div class="osc-compare">' + oscillatorSourcePane(1) + oscillatorSourcePane(2) + '</div>'
          : oscTabs + '<div class="visual-strip curve-toolbar" data-workbench-display="oscillator"><span class="visual-label">OSC ' + (selectedOsc === 1 ? "A" : "B") + ' / ' + esc(t(choiceIndex(param("osc" + selectedOsc + ".mode"), def("", "", "choice", "", [1,2,3])) === 0 ? "waveDiagram" : "parameterMap")) + '</span><canvas id="osc-canvas"></canvas><button type="button" class="action-button curve-well-entry" data-asset-open="waveform" data-asset-target="'+(selectedOsc-1)+'"'+(choiceIndex(param('osc'+selectedOsc+'.mode'))===1?'':' disabled')+' aria-label="'+esc(window.FADI18n.text('asset.openDrawing'))+' · OSC '+(selectedOsc===1?'A':'B')+'">'+esc(window.FADI18n.text('asset.openDrawing'))+'</button></div>' +
            '<div class="section-label" data-workbench-bank="core">' + esc(t("core")) + '</div>' + controls(oscillatorCore(selectedOsc), true) +
            '<div class="section-label" data-workbench-bank="tune">' + esc(t("tuning")) + '</div>' + controls(oscillatorTune(selectedOsc), true, "osc-tune-grid") +
            '<div class="section-label" data-workbench-bank="engine">' + esc(t("engine")) + '</div>' + controls(oscillatorEngine(selectedOsc), true, "osc-engine-grid");
        sourceBody='<div class="noise-source-actions"><button type="button" class="action-button" data-noise-source-open aria-pressed="'+noiseSourceOpen+'">Sample</button></div>'+ (noiseSourceOpen ? '<button type="button" class="action-button" data-noise-source-close>'+esc(tr("common.back_to_osc_a_b"))+'</button>'+noisePanel() : sourceBody);
        var shapingBody = '<div class="stack-body curve-stack-body"><div class="visual-strip curve-toolbar"><span class="visual-label">' + esc(t("filterDiagram")) + '</span><canvas id="filter-canvas"></canvas><button type="button" class="action-button curve-well-entry" data-node-open="10">' + esc(window.FADI18n.text('asset.automationNodes')) + '</button></div>' + '<div class="section-label">' + esc(t("filter")) + '</div>' + controls(filterDefs.map(function(d){return d.id==="filter1.cutoff" ? def(mainFilterCutoffParameter(),"cutoff","auto","mustard") : d;}), true) + '<div class="section-label">' + esc(t("filterEnv")) + '</div>'+envelopeDiagram("env.filter","filter-env-canvas","FILTER ENVELOPE") + controls(filterEnvDefs, true) + '</div>';
        var dynamicsBody = '<div class="stack-body">'+envelopeDiagram("env.amp","env-canvas","AMP ENVELOPE") + '<div class="section-label">' + esc(t("ampEnv")) + '</div>' + controls(ampEnvDefs, true) + '<div class="section-label">' + esc(t("utility")) + '</div>' + glideUtilityControls() + '</div>';
        var mobile = tabs([["source", "source"], ["shaping", "shaping"], ["dynamics", "dynamics"]], soundTask, "data-sound-task", "mobile-task-tabs");
        return '<div class="workspace">' + mobile + '<div class="workbench-grid">' +
          frame("A", t("source"), "OSC A/B", sourceBody, "sound-source" + (wideOscillatorCompare ? " compare-oscillators" : "") + (soundTask === "source" ? " is-mobile-active" : "")) +
          frame("F", t("shaping"), "TONE STAGE", shapingBody, "sound-shaping" + (soundTask === "shaping" ? " is-mobile-active" : "")) +
          frame("D", t("dynamics"), "VOICE SYSTEM", dynamicsBody, "sound-dynamics" + (soundTask === "dynamics" ? " is-mobile-active" : "")) + '</div></div>';
      }

      function lfoDefs(index) { var p="lfo"+index; return [def(lfoRateParameter(p), "rate", "auto", "indigo"), def(p+".depth", tr("common.source_output"), "auto", "indigo"), def(p+".shape", "shape", "choice", "indigo"), def(p+".sync", tr("common.clock"), "choice", "indigo", ["Free", "Tempo"]), def(p+".curveSlot", "curveSlot", "stepper"), def(p+".triggerMode", "triggerMode", "choice"), def(p+".anchor", "anchorClock", "toggle"),def(p+".nativeTiming",tr("common.beat_division"),"choice")]; }

      function nativeFxTargetCatalog() { return [[-1, tr("common.standard_target")]].concat((model.modulationTargetCatalog || []).map(function(target) { return [target.target, target.label]; })); }
      function mainFilterCutoffParameter() { var meta=model.parameters["filter1.nativeCutoff"]; return importedFilterActive() && meta && meta.normalized>0 ? "filter1.nativeCutoff" : "filter1.cutoff"; }
      function nativeFxTargetValue(index) { var meta=model.parameters["mod"+index+".nativeTarget"]; return meta ? Math.round(meta.normalized*512)-1 : -1; }
      function nativeFxTargetLabel(index) { var nativeFxTargets=nativeFxTargetCatalog(); var value=nativeFxTargetValue(index); for(var i=0;i<nativeFxTargets.length;i++)if(nativeFxTargets[i][0]===value)return nativeFxTargets[i][1]; return tr("common.unknown_target")+value; }
      function nativeFxTargetControl(index) { var nativeFxTargets=nativeFxTargetCatalog(); var current=nativeFxTargetValue(index); if(!nativeFxTargets.some(function(t){return t[0]===current;}))nativeFxTargets.push([current,tr("common.unknown_target")+current]); var id="mod"+index+".nativeTarget", value=nativeFxTargetValue(index), html=("<select class=\"select-control\" aria-label=\"" + window.FADI18n.escape(tr("common.extended_modulation_target")) + "\" data-native-fx-target=\"")+index+'" data-param-id="'+id+'">'; for(var i=0;i<nativeFxTargets.length;i++)html+='<option value="'+nativeFxTargets[i][0]+'"'+(value===nativeFxTargets[i][0]?' selected':'')+'>'+nativeFxTargets[i][1]+'</option>';return html+'</select>'; }
      var nativeRouteSources = [[1, "Mod Wheel"], [2, "Env 1"], [3, "Env 2"], [4, "Env 3"], [5, "LFO 1"], [6, "LFO 2"], [7, "LFO 3"], [8, "LFO 4"], [9, "LFO 5"], [10, "LFO 6"], [11, "LFO 7"], [12, "LFO 8"], [13, "Velocity"], [14, "Note Number"], [15, "Aftertouch"], [16, "Poly Aftertouch"], [19, "Sample OSC"], [24, "Macro 1"], [25, "Macro 2"], [26, "Macro 3"], [27, "Macro 4"], [28, "Pitch Bend"], [29, "MPE Slide (CC74)"], [30, "Release Velocity"], [31, "MIDI Per-Note"]];
      function nativeRouteValue(index,field) { var meta=model.parameters["mod"+index+"."+field]; if(!meta)return field==="nativeSource"?-1:0;return Math.round(meta.normalized*(field==="nativeFlags"?3:field==="nativeSource"?32:31))-(field==="nativeSource"?1:0); }
      function nativeRouteSourceLabel(index) { var id=nativeRouteValue(index,"nativeSource");for(var i=0;i<nativeRouteSources.length;i++)if(nativeRouteSources[i][0]===id)return nativeRouteSources[i][1];return "Unsupported source "+id; }
      function nativeRouteIsFadLfo(index) { var meta=model.parameters["mod"+index+".fadSemantics"], source=nativeRouteValue(index,"nativeSource"); return !!(meta && meta.normalized>=.5 && source>=5 && source<=12); }
      function nativeRouteSelect(index,field) { var choices=field==="nativeFlags"?[[0,tr("common.unipolar_aux_forward")],[1,tr("common.bipolar_aux_forward")],[2,tr("common.unipolar_aux_inverted")],[3,tr("common.bipolar_aux_inverted")]]:[[field==="nativeSource"?-1:0,field==="nativeSource"?tr("common.fad_source"):tr("common.no_auxiliary_source")]].concat(nativeRouteSources);var value=nativeRouteValue(index,field),found=false;if(field==="nativeFlags" && nativeRouteIsFadLfo(index)){var polarity=value&1;choices=[[polarity,tr("common.bipolar_aux_forward")],[polarity|2,tr("common.bipolar_aux_inverted")]];}var html='<select class="select-control" aria-label="'+(field==="nativeSource"?tr("common.serum_source"):field==="nativeFlags"?tr("common.polarity_and_auxiliary_direction"):tr("common.auxiliary_source"))+'" data-native-route="'+index+'" data-native-field="'+field+'" data-param-id="mod'+index+'.'+field+'">';for(var i=0;i<choices.length;i++){found=found||value===choices[i][0];html+='<option value="'+choices[i][0]+'"'+(value===choices[i][0]?' selected':'')+'>'+choices[i][1]+'</option>';}if(!found)html+='<option selected disabled>Unsupported '+value+'</option>';return html+'</select>'; }
      function nativeRoutingSignature() { var values=[];for(var i=1;i<=32;i++)values.push(nativeRouteValue(i,"nativeSource"),nativeRouteValue(i,"nativeAuxSource"),nativeRouteValue(i,"nativeFlags"),!(model.parameters["mod"+i+".enabled"] && model.parameters["mod"+i+".enabled"].normalized<.5),!!(model.parameters["mod"+i+".fadSemantics"] && model.parameters["mod"+i+".fadSemantics"].normalized>=.5));return values.join(","); }
      var newModSource="native:5", newModTarget="filter1.cutoff", modConnectionSequence=0, pendingModConnection=null, modConnectionMessage="";
      var directModTargets={"filter1.cutoff":1,"filter1.resonance":2,"filter1.drive":3,"osc1.level":6,"osc2.level":7,"sub.level":8,"noise.level":9,"osc1.wavetable.position":10,"osc2.wavetable.position":11,"osc1.fm.index":12,"osc2.fm.index":13,"osc1.pan":14,"osc2.pan":15};
      var modNativeParameterTargets={"filter1.nativeCutoff":45,"filter1.nativeVariation":48,"filter1.mix":49,"osc1.nativeCoarse":10,"osc2.nativeCoarse":23,"osc1.fine":5,"osc2.fine":18,"osc1.semitone":4,"osc2.semitone":17,"env.amp.sustain":38,"noise.pitch":28,"global.nativeTune":80};
      function modTarget(id) {
        if(model.parameters[id] && model.parameters[id].legacyId)id=model.parameters[id].legacyId;
        if(directModTargets[id])return {kind:"fad",value:directModTargets[id]};
        if(modNativeParameterTargets[id]!=null)return {kind:"native",value:modNativeParameterTargets[id]};
        var l=/^lfo([1-8])\.(rate|cycleBeats|extendedRate|freeRate|wideRate)$/.exec(id);
        if(l)return {kind:"native",value:Number(l[1])<=4?60+Number(l[1]):255+Number(l[1])};
        var extra=(model.modulationParameterTargets||[]).find(function(t){return t.parameterId===id;});
        return extra?{kind:"native",value:extra.target}:null;
      }
      function modParameterLabel(id) {
        var target=modTarget(id), choices=param("mod1.destination").choices||[];
        if(target&&target.kind==="fad"&&choices[target.value])return tv(choices[target.value]);
        var descriptor=target&&(model.modulationTargetCatalog||[]).find(function(t){return t.target===target.value;});
        return descriptor?tv(descriptor.label):param(id).name||id;
      }
      function modTargetCatalog() {
        var seen={};
        return Object.keys(model.parameters).filter(function(id){
          var target=modTarget(id);if(!target)return false;
          var l=/^(lfo[1-8])\.(rate|cycleBeats|extendedRate|freeRate|wideRate)$/.exec(id);
          if(l && id!==lfoRateParameter(l[1]))return false;
          if((id==="filter1.cutoff"||id==="filter1.nativeCutoff") && id!==mainFilterCutoffParameter())return false;
          var key=target.kind+":"+target.value;if(seen[key])return false;seen[key]=true;return true;
        }).map(function(id){return {id:id,label:modParameterLabel(id),target:modTarget(id)};});
      }
      function modTargetScope(target) {
        if(!target || target.kind!=="native")return "";
        var rows=(model.modulationParameterTargets||[]).filter(function(row){return row.target===target.value&&row.scope==="all-compatible-effects";});
        if(!rows.length)return "";
        var slots=(model.fxSlots||[]).filter(function(slot){return (slot.parameters||[]).some(function(p){return rows.some(function(row){return row.parameterId===p.id;});});});
        return (tr("common.all_compatible_instances_2"))+slots.map(function(slot){return tv(slot.name)+" · "+two(model.fxSlots.indexOf(slot)+1);}).join(" / ");
      }
      function inlineModRoutes(id) {
        var target=modTarget(id);if(!target)return [];
        var aliases={"filter1.cutoff":45,"filter1.nativeCutoff":45,"filter1.resonance":46,"filter1.drive":47,"osc1.pan":2,"osc2.pan":15};
        var legacy=id==="filter1.nativeCutoff"?1:directModTargets[id],rows=[];
        for(var slot=1;slot<=32;slot++){
          var source=choiceIndex(param("mod"+slot+".source")),dest=choiceIndex(param("mod"+slot+".destination"));
          var ns=nativeRouteValue(slot,"nativeSource"),nt=nativeFxTargetValue(slot);
          if((!source&&ns<0)||!(nt>=0?nt===(aliases[id]!=null?aliases[id]:target.kind==="native"?target.value:-2):dest===(legacy||target.kind==="fad"&&target.value||-2)))continue;
          var label=ns>=0?nativeRouteSourceLabel(slot):valueText(param("mod"+slot+".source"));
          var short=ns>=5&&ns<=12?"L"+(ns-4):ns>=24&&ns<=27?"M"+(ns-23):({2:"A",3:"F",4:"E",13:"V",14:"N",1:"W"})[ns];
          if(ns<0)short=source===1||source===2?"L"+source:source>=11&&source<=18?"M"+(source-10):({3:"F",4:"A",5:"V",6:"N",7:"W",8:"L3",9:"L4",10:"E"})[source];
          rows.push({slot:slot,source:source,nativeSource:ns,label:label,short:short||String(label).slice(0,2),enabled:!model.parameters["mod"+slot+".enabled"]||param("mod"+slot+".enabled").normalized>=.5});
        }
        return rows;
      }
      function inlineModSignature(rows){return rows.map(function(r){return r.slot+":"+r.source+":"+r.nativeSource;}).join(";");}
      function inlineModBadge(id,row){
        var amount=(param("mod"+row.slot+".amount").normalized-.5)*200;
        var title=row.label+" → "+modParameterLabel(id)+" · "+Math.round(amount)+"%";
        return '<button type="button" class="inline-mod-badge" data-knob-param="mod'+row.slot+'.amount" data-inline-route="'+row.slot+'" role="slider" aria-label="'+esc(title)+'" aria-valuemin="0" aria-valuemax="1" aria-valuenow="'+param("mod"+row.slot+".amount").normalized+'" aria-valuetext="'+Math.round(amount)+'%" title="'+esc(title)+'">'+esc(row.short)+'</button>';
      }
      function inlineModFoot(id){var rows=inlineModRoutes(id);return modTarget(id)?'<div class="inline-mod-foot" data-inline-mod="'+esc(id)+'" data-signature="'+esc(inlineModSignature(rows))+'">'+rows.map(function(row){return inlineModBadge(id,row);}).join("")+'</div>':"";}
      function refreshInlineModDepth(changedId){
        if(changedId&&!/^mod[0-9]+\./.test(changedId)&&!modTarget(changedId))return;
        document.querySelectorAll("[data-inline-mod]").forEach(function(foot){
          var id=foot.dataset.inlineMod,rows=inlineModRoutes(id),signature=inlineModSignature(rows);
          if(foot.dataset.signature!==signature){foot.dataset.signature=signature;foot.innerHTML=rows.map(function(row){return inlineModBadge(id,row);}).join("");}
          var active=rows.find(function(row){return row.slot===selectedRoute;})||rows[0];
          foot.querySelectorAll("[data-inline-route]").forEach(function(badge){
            var row=rows.find(function(row){return row.slot===Number(badge.dataset.inlineRoute);});if(!row)return;
            var value=param("mod"+row.slot+".amount").normalized,amount=Math.round((value-.5)*200);
            badge.title=row.label+" → "+modParameterLabel(id)+" · "+amount+"%";badge.setAttribute("aria-label",badge.title);badge.setAttribute("aria-valuenow",String(value));badge.setAttribute("aria-valuetext",amount+"%");
            badge.classList.toggle("is-active",row===active);badge.classList.toggle("is-bypassed",!row.enabled);
          });
          var cell=foot.closest("[data-control-id]"),ring=cell&&cell.querySelector(".touch-knob-mod-depth");
          if(ring){var base=clamp01(param(id).normalized),depth=active&&active.enabled?(param("mod"+active.slot+".amount").normalized-.5)*2:0,a=base*270,b=clamp01(base+depth)*270;ring.style.setProperty("--mod-lo",Math.min(a,b)+"deg");ring.style.setProperty("--mod-hi",Math.max(a,b)+"deg");}
        });
      }
      function renderNewModConnection() {
        var targets=modTargetCatalog();if(!targets.some(function(t){return t.id===newModTarget;}))newModTarget=targets.length?targets[0].id:"";
        var sources=nativeRouteSources.map(function(s){return ["native:"+s[0],tv(s[1])];});
        for(var m=5;m<=8;m++)sources.push(["fad:"+(m+10),"M"+m]);
        return '<div class="new-mod-connection"><label>'+(tr("common.source"))+'<select class="select-control" id="new-mod-source">'+sources.map(function(s){return '<option value="'+s[0]+'"'+(s[0]===newModSource?' selected':'')+'>'+esc(s[1])+'</option>';}).join('')+'</select></label><label>'+(tr("common.target"))+'<select class="select-control" id="new-mod-target">'+targets.map(function(t){return '<option value="'+esc(t.id)+'"'+(t.id===newModTarget?' selected':'')+'>'+esc(t.label)+'</option>';}).join('')+'</select></label><div class="control-state">'+esc(modTargetScope(modTarget(newModTarget)))+'</div><button class="action-button" data-mod-connect'+(pendingModConnection||!targets.length||Number(model.modulationConnectionVersion||0)<1?' disabled':'')+'>'+(tr("common.connect_depth_0"))+'</button><div role="status">'+esc(modConnectionMessage)+'</div></div>';
      }
      function connectModulation() {
        if(pendingModConnection||!nativeConnected||Number(model.modulationConnectionVersion||0)<1)return;
        var target=modTarget(newModTarget),source=newModSource.split(":");if(!target)return;
        var request=String(++modConnectionSequence);
        if(!dispatchNative("mod-connect|1|"+request+"|"+source[0]+"|"+source[1]+"|"+target.kind+"|"+target.value))return;
        pendingModConnection={request:request,timer:setTimeout(function(){pendingModConnection=null;modConnectionMessage=tr("common.no_engine_confirmation_check_connections");renderWorkspace();},4000)};
        modConnectionMessage=tr("common.waiting_for_engine");renderWorkspace();
      }
      function receiveModulationResult(result) {
        if(!pendingModConnection||String(result.request)!==pendingModConnection.request)return;
        clearTimeout(pendingModConnection.timer);pendingModConnection=null;
        receiveParameters(result.parameters||[]);
        modConnectionMessage=result.ok?"":(tr("common.connection_failed_check_available_slots"));
        if(result.ok)selectedRoute=Number(result.slot);renderWorkspace();
        if(result.ok){var knob=document.querySelector('[data-knob-param="mod'+selectedRoute+'.amount"]');if(knob){knob.focus({preventScroll:true});knob.scrollIntoView({block:"nearest"});}}
      }
      function routeDefs(index) {var prefix="mod"+index+".",definitions=[def(prefix+"enabled","enabled","toggle","indigo"),def(prefix+"nativeSource",tr("common.serum_source"),"nativeSource","indigo")];if(nativeRouteValue(index,"nativeSource")<0)definitions.push(def(prefix+"source","sourceParam","choice","indigo"));definitions.push(def(prefix+"nativeTarget",tr("common.extended_target"),"nativeTarget","indigo"));if(nativeFxTargetValue(index)<0)definitions.push(def(prefix+"destination","destination","choice","indigo"));definitions.push(def(prefix+"amount","amount","auto","indigo"),def(prefix+"audioRate","Audio Rate","toggle","indigo"));if(nativeRouteValue(index,"nativeSource")>=0)definitions.push(def(prefix+"nativeAuxSource",tr("common.auxiliary_source"),"nativeAuxSource","indigo"),def(prefix+"nativeFlags",tr("common.polarity_secondary_direction"),"nativeFlags","indigo"));return definitions;}
      function macroDefs() { var result = []; for (var i = 1; i <= 8; i++) result.push(def("macro." + i, "macro", "auto", i % 2 ? "indigo" : "pine")); return result; }
      function routeSummary(index) { var source = nativeRouteValue(index,"nativeSource")>=0 ? nativeRouteSourceLabel(index) : valueText(param("mod" + index + ".source")); var destination = nativeFxTargetValue(index)>=0 ? nativeFxTargetLabel(index) : valueText(param("mod" + index + ".destination")); var amount = valueText(param(wideControlId("mod" + index + ".amount"))); return { path: source + " -> " + destination + (model.parameters["mod"+index+".enabled"] && model.parameters["mod"+index+".enabled"].normalized<.5?" · "+t("bypass"):""), amount: amount }; }

      function useWideLfoComparison() { return window.innerWidth >= 1180 && window.innerHeight >= 740; }
      function renderModulation() {
        wideLfoComparison = useWideLfoComparison();
        var lfoTabs = '<div class="subtabs lfo-selector" role="tablist">'; for (var l = 1; l <= 8; l++) lfoTabs += '<button class="subtab' + (selectedLfo === l ? " is-active" : "") + '" type="button" role="tab" aria-selected="' + (selectedLfo === l ? "true" : "false") + '" tabindex="' + (selectedLfo === l ? "0" : "-1") + '" data-lfo-select="' + l + '" aria-label="LFO ' + l + '"><span class="lfo-prefix">LFO </span>' + l + '</button>'; lfoTabs += '</div>';
        var curveEntry='<button type="button" class="action-button curve-well-entry" data-asset-open="lfo" data-asset-target="'+(selectedLfo-1)+'" aria-label="'+esc(window.FADI18n.text('asset.openDrawing'))+' · LFO '+selectedLfo+'">'+esc(window.FADI18n.text('asset.openDrawing'))+'</button>';
        var lfoBody = lfoTabs + '<div class="visual-strip curve-toolbar"><span class="visual-label">LFO ' + selectedLfo + ' / ' + esc(valueText(param("lfo" + selectedLfo + ".shape"))) + ' · ' + esc(t(choiceIndex(param("lfo" + selectedLfo + ".shape"), def("", "", "choice", "", [1,2,3,4,5])) === 4 ? "randomDiagram" : "lfoDiagram")) + '</span><canvas id="lfo-canvas"></canvas>' + curveEntry + '</div>' +
          '<div class="lfo-bank is-compact-active"><div class="section-label">LFO ' + selectedLfo + '</div>' + controls(lfoDefs(selectedLfo), true, "lfo-control-grid") + '</div>';
        if (wideLfoComparison) {
          lfoBody = lfoTabs + '<div class="lfo-comparison">';
          var firstLfo = selectedLfo <= 4 ? 1 : 5;
          for (var bank = firstLfo; bank < firstLfo + 4; bank++) lfoBody += '<section class="lfo-compare-unit"><div class="visual-strip curve-toolbar"><span class="visual-label">LFO ' + bank + '</span><canvas id="lfo-canvas-' + bank + '"></canvas><button type="button" class="action-button curve-well-entry" data-asset-open="lfo" data-asset-target="'+(bank-1)+'" aria-label="'+esc(window.FADI18n.text('asset.openDrawing'))+' · LFO '+bank+'">'+esc(window.FADI18n.text('asset.openDrawing'))+'</button></div><div class="section-label">LFO ' + bank + '</div>' + controls(lfoDefs(bank), true, "lfo-control-grid") + '</section>';
          lfoBody += '</div>';
        }
        var routes = '<div class="route-panel-body"><div class="route-list">'+renderNewModConnection();
        for (var r = 1; r <= 32; r++) { if(r!==selectedRoute && nativeRouteValue(r,"nativeSource")<0 && nativeFxTargetValue(r)<0 && param("mod"+r+".source").normalized===0 && param("mod"+r+".destination").normalized===0 && nativeRouteValue(r,"nativeAuxSource")===0 && nativeRouteValue(r,"nativeFlags")===0)continue; var summary = routeSummary(r); routes += '<button class="route-row' + (selectedRoute === r ? " is-active" : "") + '" type="button" data-route-select="' + r + '"><span>' + two(r) + '</span><span class="route-path">' + esc(summary.path) + '</span><span class="route-amount">' + esc(summary.amount) + '</span></button>'; }
        routes += '</div><div class="route-editor">' + controls([def('mod'+selectedRoute+'.amount',tr("common.connection_depth"))],true) + '<div class="control-state">'+esc(modTargetScope({kind:'native',value:nativeFxTargetValue(selectedRoute)}))+'</div><details><summary>'+(tr("common.endpoints_compatibility"))+'</summary>'+ controls(routeDefs(selectedRoute).filter(function(d){return !/\.amount$/.test(d.id);}), true) + '</details></div></div>';
        var macroBody = '<div class="macro-body has-envelope-curves">'+envelopeDiagram("env.mod","mod-env-canvas","MOD ENVELOPE")+'<div class="section-label">' + esc(t("modEnv")) + '</div>' + controls(modEnvDefs, true) + '<div class="section-label">MACRO 1-8</div><div class="control-grid is-dense macro-grid">'; var macros = macroDefs(); for (var m = 0; m < macros.length; m++) { macroBody += renderControl(macros[m]); } macroBody += '</div></div>';
        var mobile = tabs([["lfo", "lfo"], ["routes", "routes"], ["macros", "macros"]], modTask, "data-mod-task", "mobile-task-tabs");
        return '<div class="workspace">' + mobile + '<div class="workbench-grid mod-grid">' +
          frame("L", t("lfo"), "01-08", lfoBody, (wideLfoComparison ? "has-lfo-comparison " : "") + (modTask === "lfo" ? "is-mobile-active" : "")) +
          frame("R", t("routes"), "01-32", routes, modTask === "routes" ? "is-mobile-active" : "") +
          frame("M", t("macros"), "PERFORMANCE", macroBody, modTask === "macros" ? "is-mobile-active" : "") + '</div></div>';
      }

      function reverbHallSelected(slot) {
        var prefix = "fx.slot" + slot.slotIndex + ".param";
        var mode = Math.round(param(prefix + "13").normalized * 2);
        return mode === 2 || (mode === 0 && param(prefix + "8").normalized >= .5);
      }
      function reverbModeControl(slot) {
        if (Number(slot.type) !== 4) return "";
        var hall = reverbHallSelected(slot), id = "fx.slot" + slot.slotIndex + ".param13";
        return '<div class="control-cell" data-control-id="' + id + '"><div class="control-label">' + (tr("common.mode")) + '</div><div class="segment-control reverb-mode" role="group" aria-label="' + (tr("common.reverb_mode")) + '">' +
          [false, true].map(function (isHall) { var active = isHall === hall; return '<button class="choice-button' + (active ? ' is-active' : '') + '" type="button" data-reverb-mode="' + (isHall ? 1 : .5) + '" data-mode-param="' + id + '" aria-pressed="' + active + '">' + (language === "zh" ? (isHall ? tr("common.hall") : tr("common.original")) : (isHall ? "Hall" : "Original")) + '</button>'; }).join("") + '</div></div>';
      }
      function visibleFxParameters(slot) {
        var rows = slot.parameters || [];
        if (Number(slot.type) === 4) {
          var hall = reverbHallSelected(slot);
          return rows.filter(function (row, index) { return hall ? index === 0 || index === 2 || index === 6 || index >= 8 && index <= 12 : index <= 7; });
        }
        if (rows.length < 8) return rows;
        var modelValue = param(rows[7].id).normalized;
        if (Number(slot.type) === 5) {
          if (modelValue < .5) return rows.slice(0, 8);
          return rows.filter(function (row, index) {
            if (index < 7) return false;
            if (index === 12 && rows[14] && param(rows[14].id).normalized >= .75) return false;
            if (index === 13 && rows[15] && param(rows[15].id).normalized >= .75) return false;
            return true;
          });
        }
        if (Number(slot.type) === 6) {
          var nativeModel = Math.round(modelValue * 2);
          if (nativeModel === 0) return rows.slice(0, 8);
          return rows.filter(function (row, index) {
            return index === 5 || (index >= 7 && (nativeModel === 1 ? index <= 12 : index !== 10));
          });
        }
        return rows;
      }
      function fxControlSignature() {
        return (model.fxSlots || []).map(function (slot) {
          return visibleFxParameters(slot).map(function (row) { return row.id; }).join(",");
        }).join("|");
      }

      function renderEffects() {
        var slots = model.fxSlots || []; if (selectedFx >= slots.length) selectedFx = Math.max(0, slots.length - 1);
        var chain = '<div class="fx-chain-body"><div class="fx-slot-list">';
        for (var i = 0; i < 10; i++) {
          if (i < slots.length) {
            var slot = slots[i]; var enabled = param(slot.enabledId).normalized >= .5;
            chain += '<div class="fx-row' + (i === selectedFx ? " is-active" : "") + '"><button class="fx-select" type="button" data-select-fx="' + i + '"><span>' + two(i + 1) + '</span><span>' + esc(tv(slot.name)) + '</span></button><button class="mechanical-toggle" type="button" role="switch" data-param-toggle="' + esc(slot.enabledId) + '" aria-label="' + esc(tv(slot.name) + " / " + t("enabled")) + '" aria-checked="' + (enabled ? "true" : "false") + '"><span class="zero">0</span><span class="one">I</span></button></div>';
          } else chain += '<div class="fx-row"><div class="fx-empty">' + two(i + 1) + ' / ' + esc(t("emptySlot")) + '</div></div>';
        }
        chain += '</div><div class="fx-add"><select class="select-control" id="fx-add-type"' + (slots.length >= 10 ? ' disabled' : '') + ' aria-label="' + esc(t("addEffect")) + '">';
        for (var a = 0; a < (model.availableFxTypes || []).length; a++) chain += '<option value="' + model.availableFxTypes[a].value + '">' + esc(tv(model.availableFxTypes[a].name)) + '</option>';
        chain += '</select><button class="plus-button" type="button" data-fx-action="add"' + (slots.length >= 10 ? ' disabled' : '') + ' title="' + esc(t("addEffect")) + '" aria-label="' + esc(t("addEffect")) + '">+</button></div></div>';

        var editor = '<div class="empty-state">' + esc(t("noEffect")) + '</div>';
        if (slots.length) {
          var selected = slots[selectedFx]; var definitions = [def(selected.enabledId, "enabled", "toggle", "pine")];
          var visibleParameters = visibleFxParameters(selected);
          for (var p = 0; p < visibleParameters.length; p++) definitions.push(def(visibleParameters[p].id, visibleParameters[p].label, "auto", p % 2 ? "pine" : "indigo"));
          var fxRowsLandscape = Math.max(1, Math.ceil((definitions.length + (Number(selected.type) === 4 ? 1 : 0)) / 3)); var fxRowsPortrait = Math.max(1, Math.ceil((definitions.length + (Number(selected.type) === 4 ? 1 : 0)) / 2)); var fxRowsWide = Math.max(1, Math.ceil((definitions.length + (Number(selected.type) === 4 ? 1 : 0)) / 6)); var fxColumnsWide = Math.min(6, definitions.length);
          editor = '<div class="fx-editor-body"><div class="fx-toolbar"><strong>' + two(selectedFx + 1) + ' / ' + esc(tv(selected.name)) + '</strong><button class="tool-button" type="button" data-fx-action="up" title="' + esc(t("moveUp")) + '" aria-label="' + esc(t("moveUp")) + '">↑</button><button class="tool-button" type="button" data-fx-action="down" title="' + esc(t("moveDown")) + '" aria-label="' + esc(t("moveDown")) + '">↓</button><button class="tool-button" type="button" data-fx-action="remove" title="' + esc(t("remove")) + '" aria-label="' + esc(t("remove")) + '">×</button></div><div class="fx-visual"><span class="fx-visual-label">' + esc(tv(selected.name)) + ' / ' + esc(t("signalPath")) + '</span><canvas id="fx-canvas"></canvas></div><div class="fx-parameter-grid" style="--fx-rows-landscape:' + fxRowsLandscape + ';--fx-rows-portrait:' + fxRowsPortrait + ';--fx-rows-wide:' + fxRowsWide + ';--fx-columns-wide:' + fxColumnsWide + '">' + reverbModeControl(selected) + controls(definitions, true) + '</div></div>';
        }
        var mobile = tabs([["chain", "chain"], ["editor", "editor"]], effectsTask, "data-effects-task", "mobile-task-tabs");
        return '<div class="workspace">' + mobile + '<div class="workbench-grid effects-grid">' + frame("C", t("chain"), slots.length + "/10", chain, effectsTask === "chain" ? "is-mobile-active" : "") + frame("E", t("editor"), slots.length ? tv(slots[selectedFx].name) : "EMPTY", editor, effectsTask === "editor" ? "is-mobile-active" : "") + '</div></div>';
      }

      function filteredPresets() { if (pendingLibrarySection) return []; var entries = model.library && model.library.entries ? model.library.entries : []; var query = librarySearch.trim().toLowerCase(); if (nativeConnected) return entries; if (!query&&!libraryCategory) return entries; return entries.filter(function (entry) { return (!libraryCategory||entry.category===libraryCategory)&&[entry.name, entry.author, entry.category, entry.fileName, (entry.tags||[]).join(" ")].join(" ").toLowerCase().indexOf(query) >= 0; }); }
      function selectedPreset(entries) { for (var i = 0; i < entries.length; i++) if (entries[i].id === selectedPresetId) return entries[i]; return null; }
      function libraryEntryActions() {
        var kind=(model.library||{}).kind||'preset',blocked=!!pendingAction||model.surface==='import';
        if(kind==='lfo')return '<button type="button" data-curve-import>'+esc(tr('asset.loadCurve'))+'</button>';
        if(kind==='waveform')return '';
        return '<button type="button" data-library-preset-action="import"'+(blocked?' disabled':'')+'>'+esc(tr('ui.library_import'))+'</button>'
          +'<button type="button" data-library-preset-action="save"'+(blocked?' disabled':'')+'>'+esc(tr('ui.library_save'))+'</button>'
          +'<details class="library-guide"><summary>'+esc(tr('ui.library_guide'))+'</summary><ol>'+['browse','import','save'].map(function(k){return '<li>'+esc(tr('ui.library_guide_'+k))+'</li>';}).join('')+'</ol></details>';
      }
      function renderPresetRows(entries) {
        var rows = "";
        for (var i = 0; i < entries.length; i++) { var entry = entries[i]; rows += '<button class="preset-row' + (entry.id === selectedPresetId ? " is-active" : "") + '" type="button" data-select-preset="' + esc(entry.id) + '"><span class="preset-index">' + two(i + 1) + '</span><span><span class="preset-title">' + esc(entry.name || entry.fileName) + '</span><span class="preset-meta">' + esc([tv(entry.category), entry.author].filter(Boolean).join(" / ")) + '</span></span></button>'; }
        return rows || '<div class="empty-state"><div>' + esc(pendingLibrarySection?t("libraryLoading"):librarySearch.trim()?t("noSearchResults"):model.library.kind==='lfo'?tr("ui.library_no_curves"):model.library.kind==='waveform'?tr("common.no_wt_tables_found"):t("noPresets")) + (pendingLibrarySection?'':librarySearch.trim()||libraryCategory?'<button data-clear-library>'+esc(tr("common.clear_filters"))+'</button>':'<div class="library-empty-actions">'+libraryEntryActions()+'</div>')+'</div></div>';
      }
      function renderPresetInspector(selected) {
        if(model.library&&model.library.kind==='lfo')return '<div class="inspector"><h2>'+esc(selected?selected.name:'LFO')+'</h2><div class="curve-targets">'+Array.from({length:8},function(_,i){return '<button data-curve-target="'+i+'" aria-pressed="'+(Number(model.library.curveTarget)===i)+'">LFO '+(i+1)+'</button>';}).join('')+'</div>'+(selected?'<svg class="curve-thumbnail" viewBox="0 0 64 32" preserveAspectRatio="none"><path fill="none" stroke="currentColor" d="'+(selected.preview||[]).map(function(y,i){return(i?'L':'M')+i+' '+(32-y*32);}).join(' ')+'"/></svg><button data-curve-apply>'+esc(tr('asset.apply'))+'</button><button data-curve-export>'+esc(tr('asset.dragCurve'))+'</button>':'')+'<button data-curve-import>'+esc(tr('asset.loadCurve'))+'</button></div>';
        if (!selected) return '<div class="empty-state">' + esc(t(pendingLibrarySection ? "libraryLoading" : librarySearch.trim() ? "noSearchResults" : "noPresets")) + '</div>';
        return '<div class="inspector"><div class="preset-sheet-wrap"><article class="preset-sheet"><div class="preset-sheet-identity"><div class="frame-code">P</div><h2>' + esc(selected.name || selected.fileName) + '</h2><div class="preset-category">' + esc(tv(selected.category || "-")) + '</div></div><dl><dt>' + esc(t("author")) + '</dt><dd>' + esc(selected.author || "-") + '</dd><dt>' + esc(t("file")) + '</dt><dd>' + esc(selected.fileName || "-") + '</dd></dl></article></div></div>';
      }
      function loadLibraryPreset(id) {
        if (!id || pendingLibrarySection || pendingAction) return false;
        selectedPresetId = id;
        libraryTask = isFocusedTouchLayout() ? "detail" : libraryTask;
        if(model.library.kind==='lfo'){renderWorkspace();return true;}
        var sent = dispatchStateAction("library-load|" + encodeURIComponent(id));
        renderWorkspace();
        return sent;
      }
      function renderLibrary() {
        var library = model.library || { section: "factory", entries: [] }; var entries = filteredPresets(); var selected = selectedPreset(entries);
        var kinds='<div class="library-kinds">'+[['preset','common.presets'],['waveform','common.wavetable'],['lfo','asset.lfo']].map(function(row){return '<button data-library-kind="'+row[0]+'" aria-pressed="'+((library.kind||'preset')===row[0])+'">'+esc(tr(row[1]))+'</button>';}).join('')+'</div>';
        var list = kinds+'<div class="library-entry-actions">'+libraryEntryActions()+'</div><div class="library-list-body"><input class="library-search" id="library-search" type="search" value="' + esc(librarySearch) + '" placeholder="' + esc(t("search")) + '"><div class="section-tabs" role="tablist">';
        [["factory", "factory"], ["user", "user"], ["imported", "imported"], ["recent", "recent"], ["vital", ".vital"]].filter(function(section) { return (library.kind!=="lfo"||["user","recent"].indexOf(section[0])>=0)&&(section[0] !== "vital" || library.vitalImportAvailable !== false); }).forEach(function (section) { var active = library.section === section[0]; var label=section[0]==="vital"?tr("common.pulse_bank_vital_presets"):t(section[1]);list += '<button class="section-tab' + (active ? " is-active" : "") + '" type="button" role="tab" aria-selected="' + (active ? "true" : "false") + '" tabindex="' + (active ? "0" : "-1") + '" data-library-section="' + section[0] + '"'+(section[0]==="vital"?' title="'+esc(label)+'" aria-label="'+esc(label)+'"':'')+'>'+(section[0]==="vital"?'<svg class="library-source-icon" viewBox="0 0 12 12" shape-rendering="crispEdges" aria-hidden="true" focusable="false"><path fill="currentColor" d="M0 6h3v1H0zM3 4h1v3H3zM4 2h1v2H4zM5 4h1v5H5zM6 8h1v3H6zM7 6h1v3H7zM8 4h1v3H8zM9 6h3v1H9z"/></svg>':'')+esc(section[0]==="vital"?".vital":t(section[1]))+'</button>'; });
        list += '</div><div class="library-filter-row"><select id="library-category" aria-label="'+(tr("common.filter_category"))+'"><option value="">'+(tr("common.all_categories"))+'</option>'+(library.categories||[]).map(function(c){return '<option'+(libraryCategory===c?' selected':'')+'>'+esc(c)+'</option>';}).join('')+'</select><button data-clear-library>'+(tr("common.clear_filters"))+'</button></div><div class="preset-list">' + (library.error ? '<div class="warning">' + esc(library.error) + '</div>' : library.loading ? '<div class="empty-state">' + esc(t("libraryLoading")) + '</div>' : renderPresetRows(entries)) + '</div><div class="library-filter-row"><button data-library-page="' + Math.max(0, Number(library.page || 0) - 1) + '"' + (library.loading || !library.page ? ' disabled' : '') + ' aria-label="' + (tr("common.previous_page")) + '">◀</button><span>' + (Number(library.page || 0) + 1) + ' / ' + Math.max(1, Math.ceil(Number(library.total || 0) / Number(library.pageSize || 64))) + '</span><button data-library-page="' + (Number(library.page || 0) + 1) + '"' + (library.loading || (Number(library.page || 0) + 1) * Number(library.pageSize || 64) >= Number(library.total || 0) ? ' disabled' : '') + ' aria-label="' + (tr("common.next_page")) + '">▶</button></div></div>';
        var inspector = renderPresetInspector(selected);
        var mobile = tabs([["list", "presets"], ["detail", "presetDetails"]], libraryTask, "data-library-task", "mobile-task-tabs");
        return '<div class="workspace">' + mobile + '<div class="workbench-grid library-grid">' + frame("P", t("presets"), Number(library.total == null ? entries.length : library.total) + " " + t("count"), list, "library-list-frame " + (libraryTask === "list" ? "is-mobile-active" : "")) + frame("I", t("presetDetails"), library.section.toUpperCase(), inspector, "library-inspector-frame " + (libraryTask === "detail" ? "is-mobile-active" : "")) + '</div></div>';
      }

      function renderImportDetails(preview, unsupportedImport) {
        var entries = preview.details || [];
        if (!entries.length) return preview.detail
          ? '<div class="warning">' + esc(preview.detail) + '</div>'
          : unsupportedImport ? '<div class="warning">' + esc(t("cannotCommit")) + '</div>' : '';
        var html = '<section class="import-report" tabindex="0" aria-label="' + esc(t("warnings") + ' / ' + t("unsupported")) + '"><ol>';
        for (var i = 0; i < entries.length; i++) {
          var entry = entries[i];
          var parameters = [entry.sourceParameter, entry.targetParameter].filter(Boolean).join(' → ');
          html += '<li><strong>' + esc(t(entry.severity === "unsupported" ? "unsupported" : "warnings")) + '</strong>'
            + (parameters ? '<p class="import-report-parameters">' + esc(parameters) + '</p>' : '')
            + '<p>' + esc(entry.message) + '</p></li>';
        }
        return html + '</ol></section>';
      }

      function renderImport() {
        var overlay = document.getElementById("import-overlay");
        var wasOpen = overlay.classList.contains("is-open");
        if (model.surface !== "import") {
          overlay.classList.remove("is-open"); overlay.innerHTML = ""; overlay.removeAttribute("data-dialog-key"); lastImportFocusKey = ""; lastImportMarkup = ""; document.body.removeAttribute("data-modal");
          if (wasOpen) { setBackgroundInert(false); restoreImportReturnFocus(); }
          return;
        }
        if (!wasOpen) { importReturnFocus = document.activeElement && document.activeElement !== document.body ? document.activeElement : null; setBackgroundInert(true); }
        overlay.classList.add("is-open");
        document.body.setAttribute("data-modal", "import");
        var actionStatus = '<div class="import-action-status" role="status" aria-live="polite" tabindex="' + (model.actionError ? '0' : '-1') + '">' + esc(model.actionError || "") + '</div>';
        var pickerMarkup = '<section class="import-sheet" role="dialog" aria-modal="true" aria-labelledby="import-dialog-title"><header class="import-sheet-header" id="import-dialog-title">' + esc(t("import")) + '</header><div class="import-sheet-body"><h2>' + esc(t("importHint")) + '</h2><p>' + esc(t("importFormats")) + '</p>' + actionStatus + '<div class="import-actions"><button class="action-button" type="button" data-import-action="cancel">' + esc(t("back")) + '</button><span></span><button class="action-button primary" type="button" data-import-action="choose" data-import-initial>' + esc(t("chooseFile")) + '</button></div></div></section>';
        setImportDialogMarkup(overlay, "picker", pickerMarkup);
      }

      // Import-sheet modality: while open, the shell behind it is made inert
      // where the runtime supports the property (the Tab trap in the keydown
      // handler stays as the guaranteed fallback), and focus returns to the
      // opener on close (constitution XII). The guard avoids claiming inert
      // on runtimes that lack it.
      function setBackgroundInert(active) { var shell = document.querySelector(".shell"); if (!shell) return; if ("inert" in shell) shell.inert = active; if (active) shell.setAttribute("aria-hidden", "true"); else shell.removeAttribute("aria-hidden"); }
      function restoreImportReturnFocus() { var restore = importReturnFocus; importReturnFocus = null; if (restore && document.contains(restore) && !restore.disabled) { restore.focus(); return; } var fallback = document.getElementById("preset-import"); if (fallback && !fallback.disabled) fallback.focus(); }
      function setImportDialogMarkup(overlay, key, markup) {
        var changed = overlay.getAttribute("data-dialog-key") !== key || lastImportMarkup !== markup;
        if (changed) { overlay.innerHTML = markup; overlay.setAttribute("data-dialog-key", key); lastImportMarkup = markup; }
        focusImportDialog(key, changed);
      }
      function focusImportDialog(key, force) {
        var dialog = document.querySelector('.import-sheet[role="dialog"]');
        if (!force && lastImportFocusKey === key && dialog && dialog.contains(document.activeElement)) return;
        lastImportFocusKey = key;
        requestAnimationFrame(function () {
          if (model.surface !== "import") return;
          var currentDialog = document.querySelector('.import-sheet[role="dialog"]');
          if (currentDialog && currentDialog.contains(document.activeElement)) return;
          var initial = document.querySelector("[data-import-initial]");
          if (initial) initial.focus();
        });
      }

      var semanticFocusAttributes = [
        "data-workspace", "data-sound-task", "data-mod-task", "data-effects-task", "data-library-task",
        "data-osc-select", "data-lfo-select", "data-route-select", "data-select-fx", "data-library-section",
        "data-select-preset", "data-preview-action", "data-commerce-action", "data-param-toggle",
        "data-param-choice", "data-reverb-mode", "data-param-step", "data-knob-param", "data-fx-action",
        "data-import-action"
      ];
      function captureSemanticFocus() {
        var active = document.activeElement;
        if (!active || active === document.body || active === document.documentElement) return null;
        var identity = active.id ? { id: active.id } : null;
        if (!identity) for (var i = 0; i < semanticFocusAttributes.length; i++) if (active.hasAttribute(semanticFocusAttributes[i])) { identity = { attribute: semanticFocusAttributes[i], value: active.getAttribute(semanticFocusAttributes[i]) }; break; }
        if (!identity) return null;
        if (active.hasAttribute("data-choice-index")) identity.choiceIndex = active.getAttribute("data-choice-index");
        if (active.hasAttribute("data-step")) identity.step = active.getAttribute("data-step");
        var fallbacks = [];
        if (active.hasAttribute("data-preview-action") && selectedPresetId) {
          fallbacks.push({ attribute: "data-select-preset", value: selectedPresetId });
        } else if (active.hasAttribute("data-import-action")) {
          fallbacks.push({ id: "preset-import" });
        }
        return { identity: identity, fallbacks: fallbacks, selectionStart: typeof active.selectionStart === "number" ? active.selectionStart : null, selectionEnd: typeof active.selectionEnd === "number" ? active.selectionEnd : null, selectionDirection: active.selectionDirection };
      }
      function findSemanticFocusTarget(identity) {
        var candidates = identity.id ? [document.getElementById(identity.id)] : document.querySelectorAll("[" + identity.attribute + "]");
        for (var i = 0; i < candidates.length; i++) { var candidate = candidates[i]; if (!candidate || candidate.disabled || (identity.value != null && candidate.getAttribute(identity.attribute) !== identity.value) || (identity.choiceIndex != null && candidate.getAttribute("data-choice-index") !== identity.choiceIndex) || (identity.step != null && candidate.getAttribute("data-step") !== identity.step) || candidate.closest('[aria-hidden="true"]')) continue; var rect = candidate.getBoundingClientRect(); if (rect.width > 0 && rect.height > 0) return candidate; }
        return null;
      }
      function restoreSemanticFocus(snapshot) {
        if (!snapshot) return;
        requestAnimationFrame(function () {
          var identities = [snapshot.identity].concat(snapshot.fallbacks || []); var target = null;
          for (var i = 0; i < identities.length && !target; i++) target = findSemanticFocusTarget(identities[i]);
          if (!target) { var workspaceTargets = document.querySelectorAll("[data-workspace]"); for (var w = 0; w < workspaceTargets.length; w++) if (workspaceTargets[w].getAttribute("data-workspace") === model.workspace) { target = findSemanticFocusTarget({ attribute: "data-workspace", value: model.workspace }); break; } }
          if (!target) return;
          try { target.focus({ preventScroll: true }); } catch (error) { target.focus(); }
          if (snapshot.selectionStart != null && target.setSelectionRange) target.setSelectionRange(snapshot.selectionStart, snapshot.selectionEnd, snapshot.selectionDirection || "none");
        });
      }

      function renderWorkspace(preferredFocusSnapshot) {
        if(renderSuspended){renderAfterGestures=true;return;}
        if (librarySearchComposing && model.workspace === "library") return;
        var scrolls = [];
        document.querySelectorAll(".preset-list, .fx-slot-list").forEach(function(node) { scrolls.push([node.className, node.scrollTop]); });
        var focusSnapshot = preferredFocusSnapshot || captureSemanticFocus();
        var html = model.workspace === "modulation" ? renderModulation() : model.workspace === "effects" ? renderEffects() : model.workspace === "library" ? renderLibrary() : renderSound();
        document.getElementById("stage").innerHTML = html;
        document.querySelectorAll(".preset-list, .fx-slot-list").forEach(function(node) { var saved = scrolls.find(function(s) { return s[0] === node.className; }); if (saved) node.scrollTop = saved[1]; });
        if(typeof refreshInlineModDepth==="function")refreshInlineModDepth();
        updateChrome(); renderImport(); renderQuickStart(); syncPendingActionState(); requestVisualDraw();
        if (!guideOpen) restoreSemanticFocus(focusSnapshot);
      }

      function openQuickStart() {
        if (model.surface === "import") return;
        cancelGestures();
        if (model.auditionPlaying) dispatchNative("audition-stop");
        guideReturnFocus = document.activeElement;
        guideOpen = true; guidePresented = true; guideStep = 0; guideRenderKey = "";
        dispatchNative("guide-open");
        renderQuickStart();
      }

      function closeQuickStart() {
        if (model.auditionPlaying) dispatchNative("audition-stop");
        guideOpen = false;
        dispatchNative("guide-dismiss");
        renderQuickStart();
        var target = guideReturnFocus && document.contains(guideReturnFocus) ? guideReturnFocus : document.getElementById("guide-open");
        guideReturnFocus = null;
        if (target && !target.disabled) target.focus();
        requestVisualDraw();
      }

      function renderQuickStart() {
        if (nativeConnected && model.quickStartNeeded === true && !guidePresented && model.surface !== "import") {
          guideOpen = true; guidePresented = true;
          guideReturnFocus = document.getElementById("guide-open");
          dispatchNative("guide-open");
        }
        var overlay = document.getElementById("quick-start-overlay");
        overlay.classList.toggle("is-open", guideOpen);
        if (!guideOpen) {
          if (guideRenderKey) { overlay.innerHTML = ""; guideRenderKey = ""; }
          if (model.surface !== "import") setBackgroundInert(false);
          return;
        }
        setBackgroundInert(true);
        var key = language + "|" + guideStep;
        if (guideRenderKey !== key) {
          guideRenderKey = key;
          var titles = ["guideSoundTitle", "guideHostTitle", "guideSaveTitle"];
          var bodies = ["guideSoundBody", "guideHostBody", "guideSaveBody"];
          var audition = guideStep === 0 ? '<button class="action-button primary" id="guide-audition" type="button"></button><p class="quick-start-audio-status" id="guide-audio-status" role="status"></p>' : "";
          var note = guideStep === 0 ? "knobHelp" : "";
          overlay.innerHTML = '<section class="quick-start" role="dialog" aria-modal="true" aria-labelledby="quick-start-title"><header class="quick-start-header"><span>FAD Synth / ' + esc(t("quickStart")) + '</span><span>' + (guideStep + 1) + ' / 3</span></header><div class="quick-start-body"><h2 id="quick-start-title">' + esc(t(titles[guideStep])) + '</h2><p>' + esc(t(bodies[guideStep])) + '</p>' + audition + (guideStep===2?'<button type="button" class="action-button primary" data-guide-action="library">'+esc(tr('ui.library_browse'))+'</button>':'') + (note ? '<p class="quick-start-note">' + esc(t(note)) + '</p>' : "") + '</div><footer class="quick-start-actions"><button class="action-button" type="button" data-guide-action="skip">' + esc(t("skip")) + '</button><button class="action-button" type="button" data-guide-action="back"' + (guideStep === 0 ? " disabled" : "") + '>' + esc(t("back")) + '</button><button class="action-button primary" id="guide-next" type="button" data-guide-action="next">' + esc(t(guideStep === 2 ? "done" : "nextStep")) + '</button></footer></section>';
          document.getElementById("guide-next").focus();
        }
        var play = document.getElementById("guide-audition");
        if (play) {
          play.textContent = t(model.auditionPlaying ? "stopAudition" : "audition");
          play.setAttribute("aria-pressed", model.auditionPlaying ? "true" : "false");
          play.disabled = !model.auditionPlaying && !(nativeConnected && model.commerce && model.commerce.active === true);
          document.getElementById("guide-audio-status").textContent = model.auditionPlaying ? t("auditionPlaying") : play.disabled ? document.getElementById("status-message").textContent : "";
        }
      }

      function replaceSelectOptions(select, items, current) {
        while (select.firstChild) select.removeChild(select.firstChild);
        for (var i = 0; i < items.length; i++) {
          var option = document.createElement("option");
          option.value = String(items[i][0]); option.textContent = items[i][1]; select.appendChild(option);
        }
        select.value = String(current);
      }

      function landscapeRailButton(label, attribute, value, active, level) {
        return '<button class="landscape-rail-button is-' + level + (active ? ' is-active' : '') + '" type="button" aria-current="' + (active ? "page" : "false") + '" ' + attribute + '="' + esc(value) + '">' + esc(label) + '</button>';
      }

      function updateLandscapeRail() {
        var rail = document.getElementById("landscape-rail");
        var workspaceItems = [["sound", "01 " + t("sound")], ["modulation", "02 " + t("modulation")], ["effects", "03 " + t("effects")], ["library", "04 " + t("presets")]];
        var html = '<div class="landscape-rail-group">';
        for (var w = 0; w < workspaceItems.length; w++) html += landscapeRailButton(workspaceItems[w][1], "data-workspace", workspaceItems[w][0], model.workspace === workspaceItems[w][0], "workspace");
        html += '</div>';

        var taskItems; var taskAttribute; var currentTask;
        if (model.workspace === "sound") { taskItems = [["source", t("source")], ["shaping", t("shaping")], ["dynamics", t("dynamics")]]; taskAttribute = "data-sound-task"; currentTask = soundTask; }
        else if (model.workspace === "modulation") { taskItems = [["lfo", t("lfo")], ["routes", t("routes")], ["macros", t("macros")]]; taskAttribute = "data-mod-task"; currentTask = modTask; }
        else if (model.workspace === "effects") { taskItems = [["chain", t("chain")], ["editor", t("editor")]]; taskAttribute = "data-effects-task"; currentTask = effectsTask; }
        else { taskItems = [["list", t("presets")], ["detail", t("presetDetails")]]; taskAttribute = "data-library-task"; currentTask = libraryTask; }
        if (model.workspace === "sound" || model.workspace === "modulation" || isFocusedTouchLayout()) {
          html += '<div class="landscape-rail-group">';
          for (var taskIndex = 0; taskIndex < taskItems.length; taskIndex++) html += landscapeRailButton(taskItems[taskIndex][1], taskAttribute, taskItems[taskIndex][0], currentTask === taskItems[taskIndex][0], "task");
          html += '</div>';
        }

        var contexts = []; var contextAttribute = ""; var currentContext = "";
        if (model.workspace === "sound" && soundTask === "source" && !useWideOscillatorCompare()) {
          contexts = [["1", "OSC A"], ["2", "OSC B"]]; contextAttribute = "data-osc-select"; currentContext = String(selectedOsc);
        } else if (model.workspace === "modulation" && modTask === "lfo" && !useWideLfoComparison()) {
          for (var l = 1; l <= 8; l++) contexts.push([String(l), "LFO " + l]); contextAttribute = "data-lfo-select"; currentContext = String(selectedLfo);
        } else if (model.workspace === "modulation" && modTask === "routes") {
          for (var r = 1; r <= 32; r++) contexts.push([String(r), two(r)]); contextAttribute = "data-route-select"; currentContext = String(selectedRoute);
        } else if (model.workspace === "effects") {
          var slots = model.fxSlots || []; for (var s = 0; s < slots.length; s++) contexts.push([String(s), two(s + 1)]); contextAttribute = "data-select-fx"; currentContext = String(selectedFx);
        }
        if (contexts.length) {
          html += '<div class="landscape-rail-group is-context">';
          for (var contextIndex = 0; contextIndex < contexts.length; contextIndex++) html += landscapeRailButton(contexts[contextIndex][1], contextAttribute, contexts[contextIndex][0], currentContext === contexts[contextIndex][0], "context");
          html += '</div>';
        }
        rail.innerHTML = html;
      }

      function updateCompactRoute() {
        var bar = document.getElementById("compact-routebar");
        var workspaceSelect = document.getElementById("compact-workspace-select");
        var taskSelect = document.getElementById("compact-task-select");
        var contextSelect = document.getElementById("compact-context-select");
        replaceSelectOptions(workspaceSelect, [["sound", t("sound")], ["modulation", t("modulation")], ["effects", t("effects")], ["library", t("presets")]], model.workspace);

        var tasks = model.workspace === "sound" ? [["source", t("source")], ["shaping", t("shaping")], ["dynamics", t("dynamics")]]
          : model.workspace === "modulation" ? [["lfo", t("lfo")], ["routes", t("routes")], ["macros", t("macros")]]
          : model.workspace === "effects" ? [["chain", t("chain")], ["editor", t("editor")]]
          : [["list", t("presets")], ["detail", t("presetDetails")]];
        var task = model.workspace === "sound" ? soundTask : model.workspace === "modulation" ? modTask : model.workspace === "effects" ? effectsTask : libraryTask;
        replaceSelectOptions(taskSelect, tasks, task);

        var contexts = []; var context = "";
        if (model.workspace === "sound" && soundTask === "source") {
          contexts = [["1", t("oscillator") + " A"], ["2", t("oscillator") + " B"]]; context = selectedOsc;
        } else if (model.workspace === "modulation" && modTask === "lfo") {
          for (var l = 1; l <= 8; l++) contexts.push([String(l), "LFO " + l]); context = selectedLfo;
        } else if (model.workspace === "modulation" && modTask === "routes") {
          for (var r = 1; r <= 32; r++) contexts.push([String(r), t("routes") + " " + two(r)]); context = selectedRoute;
        } else if (model.workspace === "effects" && effectsTask === "editor") {
          var slots = model.fxSlots || []; for (var s = 0; s < slots.length; s++) contexts.push([String(s), two(s + 1) + " / " + slots[s].name]); context = selectedFx;
        }
        replaceSelectOptions(contextSelect, contexts, context);
        contextSelect.classList.toggle("is-hidden", contexts.length === 0);
        bar.classList.toggle("has-context", contexts.length > 0);
        workspaceSelect.setAttribute("aria-label", t("workspaceLabel"));
        taskSelect.setAttribute("aria-label", t("taskLabel"));
        contextSelect.setAttribute("aria-label", t("contextLabel"));
      }

      function updateChrome() {
        window.FADI18n.useLocale(language);
        document.documentElement.lang = language === "zh" ? "zh-CN" : "en";
        document.getElementById("preset-name").textContent = model.presetName || "Init";
        document.body.setAttribute("data-container", model.container === "standalone" ? "standalone" : "host");
        document.body.setAttribute("data-preview", model.previewActive ? "true" : "false");
        var commerce = model.commerce || {};
        var commercePending = commerce.busy === true || ["loadingProduct","purchasing","deferred","restoring"].indexOf(commerce.operation) >= 0;
        var engineAuthorized = nativeConnected && commerce.active === true;
        document.body.setAttribute("data-engine", engineAuthorized ? "native" : "unavailable");
        var commerceVisible = model.container === "standalone" && commerce.visible === true
          && (!model.previewActive || !commerce.active || commercePending || !!commerce.error);
        document.body.setAttribute("data-commerce", commerceVisible ? "visible" : "hidden");
        document.getElementById("engine-label").textContent = engineAuthorized ? t("native") : t("unavailable");
        var accessMessage = commerce.known === false ? t("accessChecking") : !commerce.active ? t(model.container === "host" ? "entitlementHost" : "entitlementStandalone") : "";
        var operationMessage = pendingAction ? t(pendingAction.waitingForFile ? "fileActionWaiting" : pendingAction.checking ? "actionChecking" : "actionWaiting") : "";
        var commerceError = commerce.error ? window.FADI18n.value(commerce.error, model.language) + (accessMessage ? " " + accessMessage : "") : "";
        var commerceMessages = { loadingProduct: "commerceLoading", purchasing: "commercePurchasing", restoring: "commerceRestoring", deferred: "commerceDeferred" };
        var commerceMessage = commerceMessages[commerce.operation] ? t(commerceMessages[commerce.operation]) : "";
        var visibleStatus = model.actionError || commerceError || (model.statusIsError && model.statusMessage) || operationMessage || commerceMessage || accessMessage || (model.auditionPlaying ? t("auditionPlaying") : "") || model.statusMessage || (model.previewActive ? t(model.previewKind === "recovery" ? "recoveryPreview" : "previewActive") : t("engineReady"));
        document.getElementById("status-message").textContent = visibleStatus;
        document.getElementById("status-message").title = visibleStatus;
        var commerceStatus = document.getElementById("commerce-status");
        var commercePurchase = document.querySelector('[data-commerce-action="purchase"]');
        var commerceRestore = document.querySelector('[data-commerce-action="restore"]');
        if (commerceStatus) {
          var commerceText = commerceMessage || (commerce.known === false ? t("accessChecking") : commerce.error ? t("unavailable") : (commerce.permanent ? t("unlocked") : commerce.trial && commerce.trialExpiresAt > Date.now() ? t("trial") + " · " + Math.max(1, Math.ceil((commerce.trialExpiresAt - Date.now()) / 86400000)) + " " + t("days") : commerce.trial ? t("trialEnded") : t("unavailable")));
          commerceStatus.textContent = commerceText;
          commerceStatus.title = commerceText;
        }
        if (commercePurchase) commercePurchase.disabled = commercePending || !commerceVisible || commerce.purchaseAvailable !== true || commerce.permanent === true;
        if (commerceRestore) commerceRestore.disabled = commercePending || !commerceVisible || commerce.purchaseAvailable !== true;
        document.getElementById("commerce-bar").setAttribute("aria-busy", commercePending ? "true" : "false");
        document.getElementById("preview-actions").classList.toggle("is-visible", !!model.previewActive);
        var assetState=model.assetEditor||{},assetResume=document.getElementById('asset-resume');
        if(assetResume){assetResume.hidden=!assetState.active;assetResume.textContent=tr(assetState.preview?'asset.previewing':'asset.draft');assetResume.setAttribute('data-asset-open',assetState.kind||'lfo');assetResume.setAttribute('data-asset-target',assetState.target||0);assetResume.setAttribute('aria-label',tr('asset.resume'));}
        var workspaces = document.querySelectorAll("[data-workspace]"); for (var i = 0; i < workspaces.length; i++) { var activeWorkspace = workspaces[i].getAttribute("data-workspace") === model.workspace; workspaces[i].classList.toggle("is-active", activeWorkspace); workspaces[i].setAttribute("aria-current", activeWorkspace ? "page" : "false"); if (workspaces[i].getAttribute("role") === "tab") { workspaces[i].setAttribute("aria-selected", activeWorkspace ? "true" : "false"); workspaces[i].tabIndex = activeWorkspace ? 0 : -1; } }
        var nodes = document.querySelectorAll("[data-copy]"); for (var j = 0; j < nodes.length; j++) nodes[j].textContent = t(nodes[j].getAttribute("data-copy"));
        var audition = document.getElementById("audition-toggle");
        audition.hidden = model.workspace === "library" || model.surface === "import";
        audition.disabled = !model.auditionPlaying && (!engineAuthorized || model.surface === "import");
        audition.setAttribute("aria-pressed", model.auditionPlaying ? "true" : "false");
        audition.setAttribute("aria-label", t(model.auditionPlaying ? "stopAudition" : "audition"));
        audition.querySelector("span").textContent = t(model.auditionPlaying ? "stopAuditionShort" : "auditionShort");
        var guideButton = document.getElementById("guide-open");
        guideButton.setAttribute("aria-label", t("quickStart"));
        guideButton.title = t("quickStart");
        guideButton.disabled = model.surface === "import";
        document.getElementById("preset-prev").setAttribute("aria-label", t("previousPreset"));
        document.getElementById("preset-next").setAttribute("aria-label", t("nextPreset"));
        document.getElementById("preset-import").setAttribute("aria-label", t("import"));
        document.getElementById("preset-save").setAttribute("aria-label", t("saveAs"));
        document.getElementById("preset-prev").disabled = model.surface === "import";
        document.getElementById("preset-next").disabled = model.surface === "import";
        document.getElementById("preset-import").disabled = model.surface === "import";
        document.getElementById("preset-save").disabled = model.surface === "import";
        updateLandscapeRail();
        updateCompactRoute();
      }

      function syncPendingActionState() {
        var shell = document.querySelector(".shell");
        if (shell) shell.setAttribute("aria-busy", pendingAction ? "true" : "false");
        var controls = document.querySelectorAll("[data-preview-action],[data-select-preset],[data-import-action],[data-library-section],#preset-save,#preset-import");
        for (var i = 0; i < controls.length; i++) controls[i].setAttribute("aria-disabled", pendingAction ? "true" : "false");
      }

      function resizeCanvas(canvas) { if (!canvas) return null; var rect = canvas.getBoundingClientRect(); var ratio = Math.min(2, window.devicePixelRatio || 1); var width = Math.max(1, Math.floor(rect.width * ratio)); var height = Math.max(1, Math.floor(rect.height * ratio)); if (canvas.width !== width || canvas.height !== height) { canvas.width = width; canvas.height = height; } var ctx = canvas.getContext("2d"); ctx.setTransform(ratio, 0, 0, ratio, 0, 0); return { ctx: ctx, width: rect.width, height: rect.height }; }
      function canvasStyle(ctx) { ctx.clearRect(0, 0, 4096, 4096); ctx.strokeStyle = "#E4E1D4"; ctx.lineWidth = 1.5; ctx.fillStyle = "#E4E1D4"; }
      function drawWaveFor(index, canvasId) {
        var canvas = document.getElementById(canvasId); var c = resizeCanvas(canvas); if (!c || c.width < 1 || c.height < 1) return;
        canvasStyle(c.ctx); var p = "osc" + index; var mode = choiceIndex(param(p + ".mode"), def("", "", "choice", "", [1,2,3]));
        var label = "OSC " + (index === 1 ? "A" : "B") + " / " + t(mode === 0 ? "waveDiagram" : "parameterMap");
        var caption = canvas.parentNode.querySelector(".visual-label"); if (caption) caption.textContent = label;
        canvas.setAttribute("role", "img"); canvas.setAttribute("aria-label", label + " / " + valueText(param(p + ".mode")));
        if (mode !== 0) {
          // The bridge supplies parameters, not wavetable samples or FM output.
          // Show the actual parameter structure without inventing an audio trace.
          var rows = mode === 1
            ? [["userSlot", ".wavetable.slot"], ["position", ".wavetable.position"], ["warp", ".wavetable.warp"], (choiceIndex(param(p + ".wavetable.crossMode"), def("", "", "choice", "", ["Off", "FM", "AM", "RM"])) > 0 ? ["crossMode", ".wavetable.crossMode"] : ["warpMode", ".wavetable.warpMode"])]
            : [["frequencyRatio", ".fm.ratio"], ["index", ".fm.index"], ["feedback", ".fm.feedback"], ["fmBranchLevel", ".fm.level"]];
          var stackedReadouts = c.height >= 56;
          var rowHeight = Math.min(stackedReadouts ? 32 : 24, c.height / 2);
          var top = Math.max(0, (c.height - rowHeight * 2) / 2); var cellWidth = c.width / 2;
          for (var r = 0; r < rows.length; r++) {
            var x = (r % 2) * cellWidth + 8; var y = top + Math.floor(r / 2) * rowHeight;
            var value = valueText(param(p + rows[r][1]));
            var valueWidth = stackedReadouts ? cellWidth - 16 : Math.min(cellWidth * .5, cellWidth - 24);
            var baseline = stackedReadouts ? 10 : (rowHeight + 10) / 2;
            c.ctx.fillStyle = "#E4E1D4"; c.ctx.font = "10px 'Fusion Pixel ZH', monospace"; c.ctx.textAlign = "left";
            c.ctx.fillText(t(rows[r][0]), x, y + baseline, stackedReadouts ? cellWidth - 16 : cellWidth - valueWidth - 24);
            c.ctx.fillStyle = "#7A9CFF"; c.ctx.font = "12px 'FAD Mono', monospace";
            c.ctx.textAlign = stackedReadouts ? "left" : "right";
            c.ctx.fillText(value, stackedReadouts ? x : x + cellWidth - 16, y + (stackedReadouts ? 26 : baseline), valueWidth);
          }
          c.ctx.textAlign = "left";
          return;
        }
        var wave = choiceIndex(param(p + ".analog.wave"), def("", "", "choice", "", [1,2,3,4]));
        var pulse = clamp01(param(p + ".analog.pulseWidth").normalized); var shape = clamp01(param(p + ".analog.shape").normalized);
        if (caption) caption.textContent = label + " · " + valueText(param(p + ".analog.wave"));
        c.ctx.strokeStyle = "rgba(228,225,212,.22)"; c.ctx.beginPath(); c.ctx.moveTo(0, c.height / 2); c.ctx.lineTo(c.width, c.height / 2); c.ctx.stroke();
        c.ctx.strokeStyle = "#7A9CFF"; c.ctx.beginPath();
        for (var i = 0; i < 256; i++) {
          var phase = -Math.PI + i / 255 * Math.PI * 2; var value;
          if (wave === 0) value = Math.sin(phase);
          else if (wave === 1) value = 2 * ((phase / (Math.PI * 2)) - Math.floor(phase / (Math.PI * 2) + .5));
          else if (wave === 2) value = Math.sin(phase) >= (pulse - .5) * 1.5 ? .82 : -.82;
          else value = (2 / Math.PI) * Math.asin(Math.sin(phase));
          value = Math.tanh(value * (1 + shape * 2.4)) / Math.tanh(1 + shape * 2.4);
          var px = i / 255 * c.width; var py = c.height / 2 - value * c.height * .35;
          if (i === 0) c.ctx.moveTo(px, py); else c.ctx.lineTo(px, py);
        }
        c.ctx.stroke();
      }
      function drawWave() { if (document.getElementById("osc-canvas-1")) { drawWaveFor(1, "osc-canvas-1"); drawWaveFor(2, "osc-canvas-2"); } else drawWaveFor(selectedOsc, "osc-canvas"); }
      function drawFilter() { var canvas = document.getElementById("filter-canvas"); var c = resizeCanvas(canvas); if (!c) return; canvasStyle(c.ctx); if(importedFilterActive()){c.ctx.fillStyle="#E4E1D4";c.ctx.font="12px monospace";c.ctx.fillText(valueText(param("filter1.nativeModel")),8,c.height*.45,c.width-16);c.ctx.fillText(valueText(param(mainFilterCutoffParameter()))+" / "+valueText(param("filter1.stereoOffset")),8,c.height*.7,c.width-16);return;} var cutoff = clamp01(param(mainFilterCutoffParameter()).normalized); var resonance = clamp01(param("filter1.resonance").normalized); var mode = choiceIndex(param("filter1.mode"), def("", "", "choice", "", [1,2,3])); c.ctx.beginPath(); for (var x = 0; x <= c.width; x++) { var nx = x / c.width; var delta = (nx - cutoff) * 15; var response = mode === 0 ? 1 / (1 + Math.exp(delta)) : mode === 2 ? 1 / (1 + Math.exp(-delta)) : Math.exp(-Math.abs(delta)); response += resonance * Math.exp(-Math.pow(delta, 2) * 3) * .35; var wet = param("filter1.enabled").normalized >= .5 ? clamp01(param("filter1.mix").normalized) : 0; response = 1 - wet + wet * response; var y = c.height - 8 - response * (c.height - 16); if (x === 0) c.ctx.moveTo(x, y); else c.ctx.lineTo(x, y); } c.ctx.stroke(); }
      function envelopeCurveShape(t,k) {
        t=Math.fround(Math.max(0,Math.min(1,Number(t)||0)));k=Math.fround(Math.max(-100,Math.min(100,isFinite(Number(k))?Number(k):0)));
        if(Math.abs(k)<1.e-5||t===0||t===1)return t;
        var end=Math.fround(Math.exp(-Math.abs(k))),scale=Math.fround(1/Math.fround(1-end));
        var exponent=Math.fround(k*(k>0?Math.fround(t-1):t)),e=Math.fround(Math.exp(exponent));
        return Math.fround(Math.fround(k>0?e-end:1-e)*scale);
      }
      function envelopeCurvature(prefix,stage) {
        var meta=model.parameters[prefix+"."+stage+"Curve"];
        return meta?Math.fround(Math.fround(clamp01(meta.normalized)*200)-100):0;
      }
      function envelopeDiagramGeometry(prefix) {
        var a=clamp01(envelopeCurveValue(prefix+".attack")),d=clamp01(envelopeCurveValue(prefix+".decay")),r=clamp01(envelopeCurveValue(prefix+".release"));
        var s=clamp01(param(prefix+".sustain").normalized),h=model.parameters[prefix+".hold"]?clamp01(envelopeCurveValue(prefix+".hold")):0;
        var ax=8+a*20,dx=ax+10+d*18,y=82-s*64;
        return {start:{x:3,y:82},attack:{x:ax,y:18},hold:{x:ax+(dx-ax)*.6*h,y:18},decay:{x:dx,y:y},releaseStart:{x:72,y:y},release:{x:Math.min(98,80+r*18),y:82},end:{x:98,y:82}};
      }
      function envelopeSegmentPoints(prefix,geometry,stage) {
        var from=stage==="attack"?geometry.start:stage==="decay"?geometry.hold:geometry.releaseStart,to=geometry[stage],k=envelopeCurvature(prefix,stage),points=[];
        for(var i=0;i<=48;i++){var t=i/48,shape=envelopeCurveShape(t,k);points.push({x:from.x+(to.x-from.x)*t,y:from.y+(to.y-from.y)*shape});}return points;
      }
      function drawEnvelope(prefix,canvasId) {
        prefix=prefix||"env.amp";var canvas=document.getElementById(canvasId||"env-canvas"),c=resizeCanvas(canvas);if(!c)return;canvasStyle(c.ctx);
        var geometry=envelopeDiagramGeometry(prefix),points=envelopeSegmentPoints(prefix,geometry,"attack").concat([geometry.hold],envelopeSegmentPoints(prefix,geometry,"decay"),[geometry.releaseStart],envelopeSegmentPoints(prefix,geometry,"release"),[geometry.end]);
        c.ctx.beginPath();points.forEach(function(point,index){var x=c.width*point.x/100,y=c.height*point.y/100;if(index)c.ctx.lineTo(x,y);else c.ctx.moveTo(x,y);});c.ctx.stroke();
        var selected=envelopeCurveSelection[prefix]||"attack",mid=envelopeSegmentPoints(prefix,geometry,selected)[24];
        c.ctx.fillStyle="#7A9CFF";c.ctx.fillRect(c.width*mid.x/100-3,c.height*mid.y/100-3,6,6);
        document.querySelectorAll('[data-envelope-curve-tab-value^="'+prefix+'."]').forEach(function(node){var stage=node.dataset.envelopeCurveTabValue.split('.').pop();node.textContent=envelopeCurvature(prefix,stage).toFixed(1);});
      }
      function envelopeSegmentAtPoint(display,event) {
        var prefix=display.dataset.envelopeCurveDisplay,canvas=display.querySelector("canvas"),r=canvas.getBoundingClientRect();if(!r.width||!r.height)return "";
        var x=event.clientX-r.left,y=event.clientY-r.top,geometry=envelopeDiagramGeometry(prefix),best=23,selected="";
        ["attack","decay","release"].forEach(function(stage){
          var points=envelopeSegmentPoints(prefix,geometry,stage);
          for(var i=1;i<points.length;i++){
            var a={x:points[i-1].x*r.width/100,y:points[i-1].y*r.height/100},b={x:points[i].x*r.width/100,y:points[i].y*r.height/100},dx=b.x-a.x,dy=b.y-a.y;
            var t=dx*dx+dy*dy?clamp01(((x-a.x)*dx+(y-a.y)*dy)/(dx*dx+dy*dy)):0;
            var distance=Math.hypot(x-a.x-t*dx,y-a.y-t*dy);if(distance<best){best=distance;selected=stage;}
          }
        });return selected;
      }
      document.addEventListener("click",function(event){
        var button=event.target.closest("[data-envelope-curve-select]");if(button){event.preventDefault();selectEnvelopeCurve(button.dataset.envelopeCurveSelect,button.dataset.curveStage);return;}
        var display=event.target.closest("[data-envelope-curve-display]");if(display&&event.target.tagName==="CANVAS"){var stage=envelopeSegmentAtPoint(display,event);if(stage){event.preventDefault();selectEnvelopeCurve(display.dataset.envelopeCurveDisplay,stage);}}
      });
      document.addEventListener("dblclick",function(event){
        var button=event.target.closest("[data-envelope-curve-select]");if(button){event.preventDefault();event.stopImmediatePropagation();reset(button.dataset.envelopeCurveSelect+"."+button.dataset.curveStage+"Curve");}
      });
      function drawLfoFor(index, canvasId) {
        var canvas = document.getElementById(canvasId); var c = resizeCanvas(canvas); if (!c || c.width < 1 || c.height < 1) return;
        canvasStyle(c.ctx); var custom = importedLfoCurve(index); var p = "lfo" + index; var depth = clamp01(param(p + ".depth").normalized);
        var shape = choiceIndex(param(p + ".shape"), def("", "", "choice", "", [1,2,3,4,5]));
        var label = "LFO " + index + " / " + (custom ? t("importedCurve") : valueText(param(p + ".shape"))) + " · " + t(custom ? "curveDiagram" : shape === 4 ? "randomDiagram" : "lfoDiagram");
        var caption = canvas.parentNode.querySelector(".visual-label"); if (caption) caption.textContent = label;
        canvas.setAttribute("role", "img"); canvas.setAttribute("aria-label", label);
        c.ctx.strokeStyle = "rgba(228,225,212,.22)"; c.ctx.beginPath(); c.ctx.moveTo(0, c.height / 2); c.ctx.lineTo(c.width, c.height / 2); c.ctx.stroke();
        c.ctx.strokeStyle = "#7A9CFF"; c.ctx.beginPath();
        for (var i = 0; i < 256; i++) {
          var phase = i / 255 * Math.PI * 4;
          // Random is an explicitly labelled fixed example, never fake telemetry.
          var value = shape === 0 ? Math.sin(phase)
            : shape === 1 ? (2 / Math.PI) * Math.asin(Math.sin(phase))
            : shape === 2 ? 2 * ((phase / (Math.PI * 2)) - Math.floor(phase / (Math.PI * 2) + .5))
            : shape === 3 ? (Math.sin(phase) >= 0 ? 1 : -1)
            : Math.sin(Math.floor(i / 32) * 12.9898 + 4.17);
          var scaled = value * depth;
          if (custom) { scaled = custom.samples[Math.round((choiceIndex(param(p+".triggerMode"))===2 ? i/255 : i/255*2%1)*(custom.samples.length-1))]; scaled=(custom.unipolar ? 2*scaled-1 : scaled)*depth; }
          var x = i / 255 * c.width; var y = c.height / 2 - scaled * c.height * .38;
          if (i === 0) c.ctx.moveTo(x, y); else c.ctx.lineTo(x, y);
        }
        c.ctx.stroke();
      }
      function drawLfo() {
        if (wideLfoComparison) for (var index = 1; index <= 8; index++) drawLfoFor(index, "lfo-canvas-" + index);
        else drawLfoFor(selectedLfo, "lfo-canvas");
      }
      function drawFx() {
        var canvas = document.getElementById("fx-canvas"); var c = resizeCanvas(canvas); if (!c || c.width < 1 || c.height < 1) return;
        canvasStyle(c.ctx); var slots = model.fxSlots || []; if (!slots.length) return;
        var slot = slots[Math.min(selectedFx, slots.length - 1)]; var enabled = param(slot.enabledId).normalized >= .5;
        var state = enabled ? t("enabled") : t("bypass"); var label = tv(slot.name) + " / " + state;
        var caption = canvas.parentNode.querySelector(".fx-visual-label"); if (caption) caption.textContent = t("signalPath") + " · " + two(selectedFx + 1) + " / " + slots.length;
        canvas.setAttribute("role", "img"); canvas.setAttribute("aria-label", t("signalPath") + ": IN → " + label + " → OUT");
        var horizontal = c.width >= 280; var nodeWidth = horizontal ? Math.min(160, (c.width - 80) / 3) : Math.min(220, c.width - 24);
        var nodeHeight = Math.min(48, horizontal ? c.height - 24 : (c.height - 48) / 3); var gap = horizontal ? 24 : 16;
        var total = horizontal ? nodeWidth * 3 + gap * 2 : nodeHeight * 3 + gap * 2;
        var start = horizontal ? (c.width - total) / 2 : (c.height - total) / 2;
        var labels = ["IN", tv(slot.name), "OUT"];
        c.ctx.font = "12px 'Fusion Pixel ZH', monospace"; c.ctx.textAlign = "center"; c.ctx.textBaseline = "middle";
        for (var i = 0; i < 3; i++) {
          var x = horizontal ? start + i * (nodeWidth + gap) : (c.width - nodeWidth) / 2;
          var y = horizontal ? (c.height - nodeHeight) / 2 : start + i * (nodeHeight + gap);
          c.ctx.strokeStyle = i === 1 && !enabled ? "#AC4B2C" : "#7A9CFF"; c.ctx.strokeRect(x, y, nodeWidth, nodeHeight);
          c.ctx.fillStyle = "#E4E1D4"; c.ctx.fillText(labels[i], x + nodeWidth / 2, y + nodeHeight / 2 - (i === 1 ? 7 : 0), nodeWidth - 12);
          if (i === 1) { c.ctx.fillStyle = enabled ? "#7A9CFF" : "#E4E1D4"; c.ctx.font = "10px 'Fusion Pixel ZH', monospace"; c.ctx.fillText(state, x + nodeWidth / 2, y + nodeHeight / 2 + 10); c.ctx.font = "12px 'Fusion Pixel ZH', monospace"; }
          if (i < 2) {
            c.ctx.strokeStyle = "#7A9CFF"; c.ctx.beginPath();
            if (horizontal) { var ax = x + nodeWidth + gap - 4; var ay = y + nodeHeight / 2; c.ctx.moveTo(x + nodeWidth, ay); c.ctx.lineTo(ax, ay); c.ctx.moveTo(ax - 4, ay - 3); c.ctx.lineTo(ax, ay); c.ctx.lineTo(ax - 4, ay + 3); }
            else { var bx = x + nodeWidth / 2; var by = y + nodeHeight + gap - 4; c.ctx.moveTo(bx, y + nodeHeight); c.ctx.lineTo(bx, by); c.ctx.moveTo(bx - 3, by - 4); c.ctx.lineTo(bx, by); c.ctx.lineTo(bx + 3, by - 4); }
            c.ctx.stroke();
          }
        }
      }
      var visualDirty = { all: true, waves: {}, filter: false, envelopes: {}, lfos: {}, fx: false };
      var renderSuspended = false;
      function drawVisuals() {
        if (!runtimeActive || renderSuspended || document.hidden || guideOpen || model.surface === "import") return;
        var dirty=visualDirty;
        visualDirty={all:false,waves:{},filter:false,envelopes:{},lfos:{},fx:false};
        if(dirty.all)drawWave();
        else if(document.getElementById("osc-canvas-1")){
          for(var osc=1;osc<=2;osc++)if(dirty.waves[osc])drawWaveFor(osc,"osc-canvas-"+osc);
        }else if(dirty.waves[selectedOsc])drawWaveFor(selectedOsc,"osc-canvas");
        if(dirty.all || dirty.filter)drawFilter();
        if(dirty.all || dirty.envelopes.amp)drawEnvelope();
        if(dirty.all || dirty.envelopes.filter)drawEnvelope("env.filter", "filter-env-canvas");
        if(dirty.all || dirty.envelopes.mod)drawEnvelope("env.mod", "mod-env-canvas");
        if(dirty.all)drawLfo();
        else if(wideLfoComparison){
          for(var lfo=1;lfo<=8;lfo++)if(dirty.lfos[lfo])drawLfoFor(lfo,"lfo-canvas-"+lfo);
        }else if(dirty.lfos[selectedLfo])drawLfoFor(selectedLfo,"lfo-canvas");
        if(dirty.all || dirty.fx)drawFx();
      }
      function requestVisualDraw(id) {
        if(typeof id!=="string")visualDirty.all=true;
        else{
          var match;
          if((match=/^osc([12])\.(mode|timbre|analog|wavetable|fm)/.exec(id)))visualDirty.waves[Number(match[1])]=true;
          else if(/^filter1\./.test(id))visualDirty.filter=true;
          else if((match=/^env\.(amp|filter|mod)\./.exec(id)))visualDirty.envelopes[match[1]]=true;
          else if(id==="global.amplitudeModel")visualDirty.envelopes={amp:true,filter:true,mod:true};
          else if((match=/^lfo([1-8])\./.exec(id)))visualDirty.lfos[Number(match[1])]=true;
          else if(model.fxSlots && model.fxSlots[selectedFx] && id===model.fxSlots[selectedFx].enabledId)visualDirty.fx=true;
          else return;
        }
        if (visualFrame || !runtimeActive || renderSuspended || document.hidden || guideOpen || model.surface === "import") return;
        visualFrame = requestAnimationFrame(function () { visualFrame = 0; drawVisuals(); });
      }

      function updateOscillatorEngineBank(id) {
        var index = Number(id.charAt(3));
        var first = document.querySelector('.osc-engine-grid [data-control-id^="osc' + index + '."]');
        if (!first) return;
        var bank = first.parentNode;
        var definitions = oscillatorEngine(index, !!bank.closest(".osc-pane"));
        var ids = definitions.map(function (definition) { return definition.id; });
        var cells = Array.prototype.slice.call(bank.children);
        var focusRemoved = false;
        for (var i = 0; i < cells.length; i++) {
          var cell = cells[i];
          if (ids.indexOf(cell.getAttribute("data-control-id")) >= 0) continue;
          focusRemoved = focusRemoved || cell.contains(document.activeElement);
          var pointers = Object.keys(knobDrags);
          for (var p = 0; p < pointers.length; p++) {
            var drag = knobDrags[pointers[p]];
            if (drag && cell.contains(drag.target))
              finishKnob({ pointerId: pointers[p], preventDefault: function () {} });
          }
          // Ending the last gesture may apply a deferred full-state render.
          if (!document.contains(bank)) return;
          bank.removeChild(cell);
        }
        for (var d = 0; d < definitions.length; d++) {
          if (!bank.querySelector('[data-control-id="' + definitions[d].id + '"]'))
            bank.insertAdjacentHTML("beforeend", renderControl(definitions[d]));
        }
        if (focusRemoved) {
          var modeControl = document.querySelector('[data-param-select="' + id + '"]')
            || document.querySelector('[data-param-choice="' + id + '"].is-active');
          if (modeControl) modeControl.focus({ preventScroll: true });
        }
      }

      function updateParamDom(id) {
        if(typeof refreshInlineModDepth==="function")refreshInlineModDepth(id);
        if(id==='noise.phase')document.querySelectorAll('.noise-sample-display svg').forEach(function(svg){var phase=Number(param(id).normalized)||0;phase-=Math.floor(phase);var line=svg.querySelector('.noise-start-line');if(line)line.setAttribute('d','M'+(phase*512).toFixed(2)+',0V80');});
        if (/^lfo[1-8]\.rate$/.test(id) && model.parameters[id.replace(/\.rate$/, ".extendedRate")])
          updateParamDom(id.replace(/\.rate$/, ".extendedRate"));
        if (/^lfo[1-8]\.(rate|extendedRate)$/.test(id) && model.parameters[id.replace(/\.(rate|extendedRate)$/, ".freeRate")])
          updateParamDom(id.replace(/\.(rate|extendedRate)$/, ".freeRate"));
        if (/^lfo[1-8]\.(rate|extendedRate|freeRate)$/.test(id) && model.parameters[id.replace(/\.(rate|extendedRate|freeRate)$/, ".wideRate")])
          updateParamDom(id.replace(/\.(rate|extendedRate|freeRate)$/, ".wideRate"));
        if(/^osc[12]\.(mode|analog\.wave)$/.test(id))refreshOscillatorControlStates();
        if(/^osc[12]\.pitchTracking$/.test(id)||id==="global.nativeMonoRetrigger")syncInstrumentControls();
        var meta = param(id); var value = valueText(meta); var values = document.querySelectorAll('[data-value-for="' + CSS.escape(id) + '"]'); for (var i = 0; i < values.length; i++) values[i].textContent = value;
        var knobs = document.querySelectorAll('[data-knob-param="' + CSS.escape(id) + '"]'); for (var k = 0; k < knobs.length; k++) { var progress = clamp01(meta.normalized) * 270; knobs[k].style.setProperty("--progress", progress + "deg"); knobs[k].setAttribute("aria-valuenow", clamp01(meta.normalized).toFixed(3)); knobs[k].setAttribute("aria-valuetext", value); var indicator = knobs[k].querySelector(".knob-indicator"); if (indicator) indicator.style.transform = "rotate(" + (-135 + progress) + "deg)"; }
        var toggles = document.querySelectorAll('[data-param-toggle="' + CSS.escape(id) + '"]'); for (var tIndex = 0; tIndex < toggles.length; tIndex++) toggles[tIndex].setAttribute("aria-checked", meta.normalized >= .5 ? "true" : "false");
        var selects = document.querySelectorAll('[data-param-select="' + CSS.escape(id) + '"]'); for (var s = 0; s < selects.length; s++) selects[s].value = String(choiceIndex(meta, def(id, "", "choice")));
        var choices = document.querySelectorAll('[data-param-choice="' + CSS.escape(id) + '"]'); for (var c = 0; c < choices.length; c++) { var activeChoice = Number(choices[c].getAttribute("data-choice-index")) === choiceIndex(meta, def(id, "", "choice")); choices[c].classList.toggle("is-active", activeChoice); choices[c].setAttribute("aria-pressed", activeChoice ? "true" : "false"); }
        if (/^osc[12]\.mode$/.test(id)) updateOscillatorEngineBank(id);
        var routeMatch = /^mod([1-9]|[12][0-9]|3[0-2])\.(source|destination|amount|widePitchDepth|audioRate|nativeTarget|nativeSource|nativeAuxSource|nativeFlags|enabled)$/.exec(id);
        if (routeMatch) {
          var row = document.querySelector('.route-row[data-route-select="' + routeMatch[1] + '"]');
          if (row) {
            var summary = routeSummary(Number(routeMatch[1]));
            row.querySelector(".route-path").textContent = summary.path;
            row.querySelector(".route-amount").textContent = summary.amount;
          }
        }
        requestVisualDraw(id);
      }

      function setLocal(id, value) { var routing = /^(mod[0-9]+\.|osc[12]\.wavetable\.crossMode)/.test(id), before = routing ? rateAndUnisonSignature() : fxControlSignature(), meta = param(id); model.parameters[id] = meta; meta.normalized = clampParameterNormalized(id, value); updateLocalEnvelope(meta); updateLocalFreeLfoRate(meta);updateLocalWide(meta); updateParamDom(id); if (before !== (routing ? rateAndUnisonSignature() : fxControlSignature())) renderAfterGestures = true; }
      var pendingGestureSync = {}, gestureSyncToken = 0;
      var gestureGeneration = "1", gestureSerial = 0, gestureTokens = {};
      var numberDialog=null,numberRequestSerial=0;
      function beginGesture(id) { if (!nativeConnected) return; delete pendingGestureSync[id]; var count = Number(activeGestures[id] || 0); activeGestures[id] = count + 1; if (!count) { gestureTokens[id] = ++gestureSerial; dispatchNative("param-begin|" + id + "|" + gestureGeneration + "|" + gestureTokens[id]); } }
      function queueSet(id, value) {
        pendingSets[id] = clampParameterNormalized(id, value);
        if (!setTimer) setTimer = setTimeout(flushPendingSets, 17);
      }
      // Blur/hide must FLUSH: the last value the user saw has to reach the
      // host before gestures close, or declared and audible state diverge.
      // Explicit aborts (native cancelGestures, state replacement) do not
      // flush - native resends authoritative state immediately after.
      function flushPendingSets() {
        if (setTimer) { clearTimeout(setTimer); setTimer = 0; }
        var keys = Object.keys(pendingSets), commands = [];
        for (var i = 0; i < keys.length; i++) {
          var key = keys[i];
          commands.push("param-set|" + key + "|" + pendingSets[key] + "|" + gestureGeneration + "|" + gestureTokens[key]);
        }
        if (commands.length) dispatchNative(commands);
        pendingSets = {};
      }
      function renderDeferredWorkspace() { if (!renderAfterGestures || Object.keys(activeGestures).length) return; renderAfterGestures = false; renderWorkspace(); }
      function endGesture(id) { var count = Number(activeGestures[id] || 0); if (!count) return; if (count > 1) { activeGestures[id] = count - 1; return; } if (pendingSets[id] != null) { dispatchNative("param-set|" + id + "|" + pendingSets[id] + "|" + gestureGeneration + "|" + gestureTokens[id]); delete pendingSets[id]; } delete activeGestures[id]; var token = ++gestureSyncToken; pendingGestureSync[id] = token; dispatchNative("param-end|" + id + "|" + token + "|" + gestureGeneration + "|" + gestureTokens[id]); if (typeof renderDeferredWorkspace === "function") renderDeferredWorkspace(); }
      function commit(id, value) { if (!nativeConnected) return; value = clampParameterNormalized(id, value); setLocal(id, value); dispatchNative("param-commit|" + id + "|" + value + "|" + gestureGeneration); renderDeferredWorkspace(); }
      function numberValueEditable(id) {
        var meta=model.parameters[id];if(!meta||meta.editable===false||meta.readOnly||(meta.kind!=="continuous"&&meta.kind!=="integer"))return false;
        var osc=/^(osc[12])\.(analog|wavetable|fm)\./.exec(id);
        if(osc&&choiceIndex(param(osc[1]+".mode"))!=={analog:0,wavetable:1,fm:2}[osc[2]])return false;
        return Number.isFinite(meta.editValue)&&Number.isFinite(meta.editMinimum)&&Number.isFinite(meta.editMaximum);
      }
      function closeNumberDialog() {
        var edit=numberDialog;if(!edit)return;
        numberDialog=null;if(edit.timer)window.clearTimeout(edit.timer);edit.overlay.remove();
        edit.inert.forEach(function(saved){saved.node.inert=saved.inert;if(saved.aria===null)saved.node.removeAttribute("aria-hidden");else saved.node.setAttribute("aria-hidden",saved.aria);});
        var target=edit.focus&&edit.focus.isConnected?edit.focus:document.querySelector('[data-value-for="'+CSS.escape(edit.id)+'"]');
        if(target&&target.focus)target.focus();
      }
      function openNumberDialog(target) {
        var id=target.getAttribute("data-number-param"),meta=model.parameters[id];
        if(!nativeConnected||!runtimeActive||model.workspace==="library"||!numberValueEditable(id)||oscillatorControlState(id)
            ||target.closest('[aria-disabled="true"],:disabled'))return false;
        flushPendingSets();cancelGestures();closeNumberDialog();
        var overlay=document.createElement("div");overlay.className="touch-number-overlay";overlay.id="touch-number-dialog";
        overlay.setAttribute("role","dialog");overlay.setAttribute("aria-modal","true");overlay.setAttribute("aria-labelledby","touch-number-title");
        overlay.innerHTML='<form class="touch-number-window" id="touch-number-form"><h2 id="touch-number-title">'+esc(t("numberTitle"))+'</h2><label data-localization="literal">'+esc(meta.name||id)+'</label><div class="touch-number-value"><input type="text" inputmode="decimal" id="touch-number-input" autocomplete="off" spellcheck="false" maxlength="64" aria-label="'+esc(t("numberTitle"))+'"><span data-localization="literal">'+esc(meta.editUnit||"")+'</span></div><p class="touch-number-range" data-localization="literal">'+esc(meta.editMinimum+' – '+meta.editMaximum)+'</p><p class="touch-number-error" id="touch-number-error" role="status" aria-live="polite"></p><div class="touch-number-actions"><button type="button" data-number-close>'+esc(t("numberCancel"))+'</button><button type="submit" class="primary" id="touch-number-apply">'+esc(t("numberSet"))+'</button></div></form>';
        numberDialog={id:id,generation:String(gestureGeneration),epoch:String(pageEpoch),request:"",pending:false,composing:false,imeSettling:false,stale:false,overlay:overlay,focus:target,inert:[],timer:0};
        var edit=numberDialog;document.body.appendChild(overlay);
        Array.prototype.forEach.call(document.body.children,function(node){if(node!==overlay&&node.tagName!=="SCRIPT"&&node.tagName!=="STYLE"){edit.inert.push({node:node,inert:node.inert,aria:node.getAttribute("aria-hidden")});node.inert=true;node.setAttribute("aria-hidden","true");}});
        var input=overlay.querySelector("#touch-number-input");
        edit.initialValue=meta.editValue;edit.initialText=String(Number(Number(meta.editValue).toPrecision(7)));
        input.value=edit.initialText;
        input.addEventListener("compositionstart",function(){edit.composing=true;});
        input.addEventListener("compositionend",function(){edit.composing=false;edit.imeSettling=true;window.setTimeout(function(){edit.imeSettling=false;},0);});
        overlay.querySelector("[data-number-close]").onclick=closeNumberDialog;
        overlay.querySelector("form").onsubmit=function(event){event.preventDefault();submitNumberDialog();};
        overlay.onkeydown=function(event){
          if(event.isComposing||edit.composing||event.keyCode===229)return;
          if(event.key==="Escape"){event.preventDefault();event.stopPropagation();closeNumberDialog();return;}
          if(event.key==="Tab"){var nodes=Array.from(overlay.querySelectorAll("input,button")).filter(function(node){return !node.disabled;});var index=nodes.indexOf(document.activeElement);
            if(event.shiftKey&&index<=0){event.preventDefault();nodes[nodes.length-1].focus();}else if(!event.shiftKey&&index===nodes.length-1){event.preventDefault();nodes[0].focus();}}
        };
        input.focus();input.select();if(model.viewport)receiveViewport(model.viewport);return true;
      }
      function submitNumberDialog() {
        var edit=numberDialog;if(!edit||edit.pending||edit.composing||edit.imeSettling)return;
        var error=edit.overlay.querySelector("#touch-number-error"),input=edit.overlay.querySelector("#touch-number-input"),text=input.value.trim(),meta=model.parameters[edit.id];
        if(edit.stale||edit.generation!==String(gestureGeneration)||edit.epoch!==String(pageEpoch)||!runtimeActive||!numberValueEditable(edit.id)||oscillatorControlState(edit.id)){
          edit.stale=true;error.textContent=t("numberStale");edit.overlay.querySelector("#touch-number-apply").disabled=true;dispatchNative("refresh");return;
        }
        if(!/^[+-]?(?:\d+\.?\d*|\.\d+)(?:e[+-]?\d+)?$/i.test(text)||!Number.isFinite(Number(text))){error.textContent=t("numberInvalid");return;}
        if(Number(text)<meta.editMinimum||Number(text)>meta.editMaximum){error.textContent=t("numberRange");return;}
        edit.request=String(++numberRequestSerial);edit.pending=true;
        edit.overlay.querySelector("#touch-number-apply").disabled=true;error.textContent=t("numberWaiting");
        var submitted=text===edit.initialText?String(edit.initialValue):text;
        if(!dispatchNative("param-text|"+encodeURIComponent(edit.id)+"|"+encodeURIComponent(submitted)+"|"+edit.generation+"|"+edit.request)){
          edit.pending=false;edit.overlay.querySelector("#touch-number-apply").disabled=false;error.textContent=t("interfaceDisconnected");return;
        }
        edit.timer=window.setTimeout(function(){if(numberDialog!==edit||!edit.pending)return;edit.pending=false;edit.stale=true;error.textContent=t("numberUnconfirmed");dispatchNative("refresh");},10000);
      }
      function receiveNumberEditResult(reply) {
        var edit=numberDialog;if(!edit||!edit.pending||!reply||reply.id!==edit.id||String(reply.generation)!==edit.generation||String(reply.request)!==edit.request)return;
        if(edit.timer)window.clearTimeout(edit.timer);
        if(reply.parameter&&reply.parameter.id)receiveParameters([reply.parameter]);
        if(reply.applied){closeNumberDialog();return;}
        edit.pending=false;edit.stale=true;edit.overlay.querySelector("#touch-number-error").textContent=t("numberRejected");
      }
      function parameterResetId(target) {
        if (!target || !target.closest || target.closest("input:not([type='range']), textarea, [contenteditable], :disabled, [aria-disabled='true']")) return "";
        var control = target.closest("[data-control-id], [data-knob-param], [data-param-id], [data-param-toggle], [data-param-choice], [data-param-select], [data-param-step], [data-mode-param], [data-value-for]");
        if (!control) return "";
        return control.getAttribute("data-control-id") || control.getAttribute("data-knob-param")
          || control.getAttribute("data-param-id") || control.getAttribute("data-param-toggle")
          || control.getAttribute("data-param-choice") || control.getAttribute("data-param-select")
          || control.getAttribute("data-param-step") || control.getAttribute("data-mode-param")
          || control.getAttribute("data-value-for") || "";
      }
      function reset(id) {
        if (!nativeConnected || !id || !model.parameters[id]) return;
        delete pendingSets[id];
        Object.keys(knobDrags).forEach(function(pointerId) {
          if (knobDrags[pointerId].id === id) finishKnob({pointerId:Number(pointerId), preventDefault:function(){}});
        });
        while (activeGestures[id]) endGesture(id);
        delete pendingGestureSync[id];
        setLocal(id, param(id).defaultNormalized);
        dispatchNative("param-reset|" + id + "|" + gestureGeneration);
        renderDeferredWorkspace();
      }
      function cancelGestures(skipDeferredRender, nativeCancelled) { if (setTimer) { clearTimeout(setTimer); setTimer = 0; } pendingSets = {}; var keys = Object.keys(activeGestures); activeGestures = {}; knobDrags = {}; if (typeof document !== "undefined") { var dragging = document.querySelectorAll(".knob-hit.is-dragging"); for (var d = 0; d < dragging.length; d++) dragging[d].classList.remove("is-dragging"); } for (var i = 0; !nativeCancelled && i < keys.length; i++) { var token = ++gestureSyncToken; pendingGestureSync[keys[i]] = token; dispatchNative("param-end|" + keys[i] + "|" + token + "|" + gestureGeneration + "|" + gestureTokens[keys[i]]); } if (!skipDeferredRender && typeof renderDeferredWorkspace === "function") renderDeferredWorkspace(); }
      function receiveGestureCancellation(generation) {
        var next = String(generation || gestureGeneration);
        if (Number(next) < Number(gestureGeneration)) return;
        var previousGeneration=gestureGeneration;gestureGeneration = next;
        if(next!==previousGeneration&&typeof cancelGlideInteraction==="function")cancelGlideInteraction();
        if(numberDialog&&numberDialog.generation!==next){numberDialog.stale=true;numberDialog.overlay.querySelector("#touch-number-apply").disabled=true;numberDialog.overlay.querySelector("#touch-number-error").textContent=t("numberStale");}
        cancelGestures(true, true);
        gestureTokens = {};
        pendingGestureSync = {};
      }
      function clearActionWatchdog() {
        if (actionWatchdog) window.clearTimeout(actionWatchdog);
        actionWatchdog = 0;
      }
      function armActionWatchdog() {
        clearActionWatchdog();
        if (!pendingAction || renderSuspended || !runtimeActive || document.hidden) return;
        actionWatchdog = window.setTimeout(function () {
          actionWatchdog = 0;
          if (!pendingAction) return;
          pendingAction.checking = true;
          updateChrome();
          // Query the receipt, never repeat the state-changing command. Native
          // reserves unknown ids before releasing us, so a late command cannot
          // commit after the user starts a replacement operation.
          dispatchNative("action-status|" + pendingAction.id);
          armActionWatchdog();
        }, actionReceiptTimeoutMs);
      }
      function dispatchStateAction(action) {
        cancelGestures();
        if (!/^(preset-(save|import)|preview-(apply|revert)|library-(section|load)|import-choose)/.test(action))
          return dispatchNative(action);
        if (pendingAction) return false;
        var operationId = nextActionOperationId++;
        pendingAction = { id: operationId, action: action, focus: captureSemanticFocus() };
        model.actionError = "";
        syncPendingActionState();
        updateChrome();
        if (!dispatchNative(action + "|" + operationId)) {
          var failedFocus = pendingAction.focus;
          pendingAction = null;
          model.actionError = t("interfaceDisconnected");
          syncPendingActionState();
          updateChrome();
          restoreSemanticFocus(failedFocus);
          return false;
        }
        armActionWatchdog();
        return true;
      }

      function receiveActionResult(result) {
        if (!pendingAction || !result || Number(result.operationId) !== pendingAction.id) return;
        if (result.pending === true) {
          pendingAction.waitingForFile = /^(preset-(save|import)|import-choose)/.test(pendingAction.action);
          updateChrome();
          armActionWatchdog();
          return;
        }
        var completedFocus = pendingAction.focus;
        if (!result.succeeded && pendingAction.action.indexOf("library-section|") === 0)
          pendingLibrarySection = "";
        clearActionWatchdog();
        pendingAction = null;
        model.actionError = result.succeeded ? "" : (result.error || "The action did not complete.");
        renderWorkspace(completedFocus);
      }

      function requestLibrarySection(section) {
        if (pendingAction || pendingLibrarySection) return;
        var previousLibrary = model.library;
        pendingLibrarySection = section;
        selectedPresetId = "";
        model.library = { section: section, selectedId: "", entries: [] };
        if (!dispatchStateAction("library-section|" + section)) {
          pendingLibrarySection = "";
          model.library = previousLibrary;
        }
        renderWorkspace();
      }

      function startKnob(target, event) {
        if (event.pointerType === "mouse" && event.button !== 0) return;
        var pointerKey = String(event.pointerId);
        if (knobDrags[pointerKey]) return;
        var id = target.getAttribute("data-knob-param");
        var inlineRoute=target.getAttribute("data-inline-route");if(inlineRoute){selectedRoute=Number(inlineRoute);refreshInlineModDepth();}
        knobDrags[pointerKey] = { id: id, target: target, lastY: event.clientY };
        target.classList.add("is-dragging");
        if (target.setPointerCapture) target.setPointerCapture(event.pointerId);
        beginGesture(id);
        event.preventDefault();
      }
      function moveKnob(event) {
        var pointerKey = String(event.pointerId);
        var drag = knobDrags[pointerKey];
        if (!drag) return;
        var delta = drag.lastY - event.clientY;
        drag.lastY = event.clientY;
        var fine = !!(event.shiftKey || event.altKey);
        var pointers = Object.keys(knobDrags);
        for (var p = 0; !fine && p < pointers.length; p++)
          fine = pointers[p] !== pointerKey && knobDrags[pointers[p]].id === drag.id;
        if (delta !== 0) {
          var next = clamp01(param(drag.id).normalized + delta / (fine ? 1600 : 320));
          setLocal(drag.id, next);
          queueSet(drag.id, next);
        }
        event.preventDefault();
      }
      function finishKnob(event) { if (!event) return; var pointerKey = String(event.pointerId); var drag = knobDrags[pointerKey]; if (!drag) return; delete knobDrags[pointerKey]; var stillDraggingTarget = false; var remaining = Object.keys(knobDrags); for (var d = 0; d < remaining.length; d++) if (knobDrags[remaining[d]].target === drag.target) { stillDraggingTarget = true; break; } if (!stillDraggingTarget) drag.target.classList.remove("is-dragging"); endGesture(drag.id); event.preventDefault(); }

      function isFocusedTouchLayout() {
        return window.innerWidth <= 900
          || window.innerHeight <= 420;
      }

      function setWorkspace(workspace, notify) { if (["sound", "modulation", "effects", "library"].indexOf(workspace) < 0 || model.surface === "import") return; flushPendingSets(); cancelGestures(); model.workspace = workspace; if (notify !== false) dispatchNative("workspace|" + workspace); renderWorkspace(); }
      function applyFullState(payload, connected) {
        var next = payload || model;
        if (connected && Number(next.authoritativeRevision || 0) < lastAppliedRevision) return;
        if (connected) lastAppliedRevision = Number(next.authoritativeRevision || lastAppliedRevision);
        if (connected && next.gestureGeneration && String(next.gestureGeneration) !== gestureGeneration)
          receiveGestureCancellation(next.gestureGeneration);
        var previous = model;
        var incomingParameters = paramsToMap(next.parameters || []);
        var activeIds = Object.keys(activeGestures);
        for (var i = 0; i < activeIds.length; i++) {
          var activeId = activeIds[i];
          if (previous.parameters[activeId])
            incomingParameters[activeId] = previous.parameters[activeId];
        }
        nativeConnected = !!connected;
        setRuntimeActive(next.runtimeActive !== false);
        document.body.setAttribute("data-authoritative", nativeConnected ? "true" : "false");
        if (next.viewport) receiveViewport(next.viewport);
        applyTextScale(next.textScale);
        language = next.language === "zh" ? "zh" : "en";
        next.workspace = next.workspace || previous.workspace || "sound";
        next.surface = next.surface || previous.surface || "perform";
        next.parameters = incomingParameters;
        next.fxSlots = next.fxSlots || [];
        next.availableFxTypes = next.availableFxTypes || [];
        next.commerce = next.commerce || previous.commerce || { visible: false, active: false, trial: false, permanent: false, trialExpiresAt: 0, purchaseAvailable: false, error: "" };
        next.library = next.library || previous.library || { section: "factory", entries: [] };
        if (pendingLibrarySection) {
          if (next.library.section === pendingLibrarySection) pendingLibrarySection = "";
          else next.library = previous.library;
        }
        next.actionError = previous.actionError || "";
        model = next;
        if (model.library.selectedId) selectedPresetId = model.library.selectedId;
        if (activeIds.length) {
          renderAfterGestures = true;
          updateChrome();
          syncPendingActionState();
          var ids = Object.keys(incomingParameters);
          for (var p = 0; p < ids.length; p++) updateParamDom(ids[p]);
          if (nativeConnected && next.authoritativeRevision) dispatchNative("full-state-applied|" + next.authoritativeRevision);
          return;
        }
        renderAfterGestures = false;
        renderWorkspace();
        if (nativeConnected && next.authoritativeRevision) dispatchNative("full-state-applied|" + next.authoritativeRevision);
      }
      function receiveInstrumentControls(payload) {
        if(!payload || payload.version!==1)return;
        model.instrumentControls=payload;
        if(typeof syncInstrumentControls==='function')syncInstrumentControls();
        if(typeof syncGlideControls==='function')syncGlideControls();
      }
      function receiveFullState(payload) { if (payload && Number(payload.authoritativeRevision || 0) < lastAppliedRevision) return; pendingGestureSync = {}; applyFullState(payload, true); if(payload && payload.noiseImportStatus){noiseStatus=payload.noiseImportStatus;refreshNoisePresentation();} }
      function stopHeartbeat() { if (heartbeatTimer && typeof clearTimeout === "function") clearTimeout(heartbeatTimer); heartbeatTimer = 0; }
      function armHeartbeat() { stopHeartbeat(); }
      function setRuntimeActive(active) { runtimeActive = !!active && !assetEditorVisible; if (!runtimeActive) { if(typeof cancelGlideInteraction==="function")cancelGlideInteraction();closeNumberDialog();stopHeartbeat();clearActionWatchdog(); if (visualFrame) { cancelAnimationFrame(visualFrame); visualFrame = 0; } cancelGestures(); } else { armHeartbeat();armActionWatchdog();requestVisualDraw(); } }
      function setRenderSuspended(suspended) {
        renderSuspended=suspended===true;
        if(renderSuspended){
          flushPendingSets();cancelGestures();stopHeartbeat();clearActionWatchdog();
          if(visualFrame){cancelAnimationFrame(visualFrame);visualFrame=0;}
          if(typeof cancelGlideInteraction==="function")cancelGlideInteraction();
          closeNumberDialog();
        }else if(runtimeActive){renderDeferredWorkspace();requestVisualDraw();armActionWatchdog();}
      }
      function rateAndUnisonSignature() { var key=mainFilterCutoffParameter()+octaveParameter("osc1")+octaveParameter("osc2")+String(importedFilterActive())+subShapeParameter()+unisonParameter("osc1", "voices")+unisonParameter("osc2", "voices"); for(var i=1;i<=8;i++)key+=lfoRateParameter("lfo"+i); for(var r=1;r<=32;r++)key+=","+nativeFxTargetValue(r)+wideControlId("mod"+r+".amount")+String(param("mod"+r+".audioRate").audioRateAvailable); for(var o=1;o<=2;o++)key+=","+choiceIndex(param("osc"+o+".wavetable.crossMode")); return key+fxControlSignature()+nativeRoutingSignature(); }
      function receiveGestureEnd(payload) {
        if (!payload || !payload.parameter) return;
        var id = payload.parameter.id;
        if (activeGestures[id] || pendingGestureSync[id] !== Number(payload.token)) return;
        delete pendingGestureSync[id]; receiveParameters([payload.parameter]);
      }
      function receiveParameters(rows) {
        var before = rateAndUnisonSignature();
        for (var i = 0; i < rows.length; i++) {
          var incoming = rows[i];
          if (activeGestures[incoming.id] || pendingGestureSync[incoming.id]) continue;
          model.parameters[incoming.id] = incoming; updateParamDom(incoming.id);
        }
        if (before !== rateAndUnisonSignature()) { renderAfterGestures = true; renderDeferredWorkspace(); }
      }

      document.addEventListener("pointerdown", function (event) { var knob = event.target.closest("[data-knob-param]"); if (knob&&(knob.hasAttribute("data-inline-route")||!knob.closest('[aria-disabled="true"]'))) startKnob(knob, event); });
      document.addEventListener("pointermove", moveKnob, { passive: false });
      document.addEventListener("pointerup", finishKnob, { passive: false });
      document.addEventListener("pointercancel", finishKnob, { passive: false });
      document.addEventListener("lostpointercapture", finishKnob, true);
      window.addEventListener("blur", function () { flushPendingSets(); cancelGestures(); });
      document.addEventListener("visibilitychange", function () { if (document.hidden) { closeNumberDialog();stopHeartbeat(); flushPendingSets(); cancelGestures(); } else armHeartbeat(); });
      window.addEventListener("pagehide", function () { stopHeartbeat(); clearActionWatchdog(); });
      window.addEventListener("pageshow", armActionWatchdog);
      window.addEventListener("fadappearancechange", function () { applyTextScale(model.textScale); });
      // CSS can clamp an internal scroll offset before the resize event runs.
      // Keep only the current task's offsets while its panes temporarily hide.
      var viewportScrollContext = "";
      var viewportScrollPositions = Object.create(null);
      function currentViewportScrollContext() {
        return model.workspace + ":" + (model.workspace === "sound" ? soundTask + ":" + selectedOsc
          : model.workspace === "modulation" ? modTask + ":" + selectedLfo + ":" + selectedRoute
          : model.workspace === "effects" ? effectsTask + ":" + selectedFx : libraryTask);
      }
      function syncViewportScrollContext() {
        var context = currentViewportScrollContext();
        if (context !== viewportScrollContext) {
          viewportScrollContext = context;
          viewportScrollPositions = Object.create(null);
        }
      }
      function viewportScrollKey(node) {
        if (!node || !node.closest || !node.closest("#stage")) return "";
        if (node.classList.contains("frame-body")) return node.id;
        if (node.classList.contains("fx-slot-list")) return ".fx-slot-list";
        if (node.classList.contains("preset-list")) return ".preset-list";
        return "";
      }
      document.addEventListener("scroll", function (event) {
        var node = event.target; var key = viewportScrollKey(node);
        if (!key || node.clientHeight <= 0 || node.scrollHeight <= node.clientHeight + 1) return;
        syncViewportScrollContext();
        viewportScrollPositions[key] = [node.scrollTop, node.scrollLeft];
      }, true);
      function touchLayoutSignature() {
        var width = window.innerWidth, height = window.innerHeight;
        return [width <= 360, width <= 480, width <= 600, width <= 900,
          width >= 1100, width >= 1180, width >= 1200, width >= 1360,
          height <= 420, height <= 620, height <= 700, height >= 740].join(":");
      }
      var previousTouchLayoutSignature = touchLayoutSignature();
      window.addEventListener("resize", function () {
        // A moving viewport invalidates pointer coordinates. Publish the last
        // visible value and close the host gesture before replacing any DOM.
        flushPendingSets();
        cancelGestures(true);
        syncViewportScrollContext();
        var nextWideCompare = useWideOscillatorCompare();
        var nextLayoutSignature = touchLayoutSignature();
        var rebuild = nextLayoutSignature !== previousTouchLayoutSignature || renderAfterGestures
          || (model.workspace === "sound" && nextWideCompare !== wideOscillatorCompare)
          || (model.workspace === "modulation" && useWideLfoComparison() !== wideLfoComparison);
        previousTouchLayoutSignature = nextLayoutSignature;
        renderAfterGestures = false;
        if (rebuild) {
          var scrollPositions = [];
          document.querySelectorAll("#stage [id]").forEach(function (node) {
            if (node.scrollTop || node.scrollLeft) scrollPositions.push([node.id, node.scrollTop, node.scrollLeft]);
          });
          renderWorkspace();
          scrollPositions.forEach(function (position) {
            var node = document.getElementById(position[0]);
            if (node) { node.scrollTop = position[1]; node.scrollLeft = position[2]; }
          });
        } else requestVisualDraw();
        Object.keys(viewportScrollPositions).forEach(function (key) {
          var node = key.charAt(0) === "." ? document.querySelector("#stage " + key) : document.getElementById(key);
          if (node && node.clientHeight > 0 && node.scrollHeight > node.clientHeight + 1) {
            var position = viewportScrollPositions[key];
            node.scrollTop = position[0]; node.scrollLeft = position[1];
          }
        });
      });
      document.addEventListener("click", function (event) {
        var readout = event.target.closest('[data-number-param]');
        if (!readout || event.defaultPrevented || readout.closest('[aria-disabled="true"]')) return;
        event.preventDefault();
        openNumberDialog(readout);
      });
      document.addEventListener("dblclick", function (event) {
        if (event.button !== 0) return;
        var readout=event.target.closest('.control-value[data-value-for],.stepper output[data-value-for]');
        if(readout){event.preventDefault();event.stopImmediatePropagation();if(readout.hasAttribute("data-number-param"))openNumberDialog(readout);return;}
        var id = parameterResetId(event.target);
        if (!id) return;
        event.preventDefault();
        reset(id);
      });
      // Numeric readouts open the actual-unit editor; knob/label double-click
      // keeps reset. The host-native parameter menu remains a separate action.
      document.addEventListener("contextmenu", function (event) { if (event.target.closest("input, select, textarea")) return; var knob = event.target.closest("[data-knob-param]"); if (knob) dispatchNative("param-context|" + encodeURIComponent(knob.getAttribute("data-knob-param"))); event.preventDefault(); });
      document.addEventListener("keydown", function (event) {
        if (["ArrowLeft", "ArrowRight", "Home", "End"].indexOf(event.key) < 0) return;
        var tab = event.target.closest('[role="tab"]'); if (!tab) return;
        var list = tab.closest('[role="tablist"]'); if (!list) return;
        var tabButtons = Array.prototype.slice.call(list.querySelectorAll('[role="tab"]'));
        var index = tabButtons.indexOf(tab); if (index < 0 || !tabButtons.length) return;
        event.preventDefault();
        var nextIndex = event.key === "Home" ? 0 : event.key === "End" ? tabButtons.length - 1 : (index + (event.key === "ArrowRight" ? 1 : tabButtons.length - 1)) % tabButtons.length;
        var next = tabButtons[nextIndex]; if (!next || next === tab) return;
        var selector = '[role="tab"]';
        for (var a = 0; a < next.attributes.length; a++) if (next.attributes[a].name.indexOf("data-") === 0) selector += '[' + next.attributes[a].name + '="' + next.attributes[a].value + '"]';
        next.click();
        var revived = document.querySelector(selector);
        if (revived) revived.focus(); else if (document.contains(next)) next.focus();
      });
      document.addEventListener("keydown", function(event){var readout=event.target.closest('[data-number-param]');if(readout&&(event.key==="Enter"||event.key===" ")){event.preventDefault();openNumberDialog(readout);}});
      document.addEventListener("keydown", function (event) { var knob = event.target.closest("[data-knob-param]"); if (!knob || knob.closest('[aria-disabled="true"]') || ["ArrowUp", "ArrowRight", "ArrowDown", "ArrowLeft", "Home", "End"].indexOf(event.key) < 0) return; var id = knob.getAttribute("data-knob-param"); var value = clamp01(param(id).normalized); if (event.key === "Home") value = 0; else if (event.key === "End") value = 1; else value += (event.key === "ArrowUp" || event.key === "ArrowRight" ? 1 : -1) * (/^env\.(amp|filter|mod)\.(attack|decay|release)Curve$/.test(id) ? (event.shiftKey ? .0005 : .005) : (event.shiftKey ? .005 : .02)); commit(id, value); event.preventDefault(); });
      document.addEventListener("keydown", function (event) {
        if (!guideOpen) return;
        if (event.key === "Escape") { closeQuickStart(); event.preventDefault(); return; }
        if (event.key !== "Tab") return;
        var items = Array.prototype.slice.call(document.querySelectorAll("#quick-start-overlay button:not(:disabled)"));
        if (!items.length) return;
        var first = items[0], last = items[items.length - 1];
        if (event.shiftKey && document.activeElement === first) { last.focus(); event.preventDefault(); }
        else if (!event.shiftKey && document.activeElement === last) { first.focus(); event.preventDefault(); }
      });
      document.addEventListener("keydown", function (event) {
        if (!document.getElementById("panic-report-prompt").hidden && event.key === "Escape") {
          document.getElementById("panic-report-prompt").hidden = true;
          document.getElementById("panic").focus();
          event.preventDefault();
          event.stopImmediatePropagation();
          return;
        }
        if (model.surface !== "import") return;
        if (event.key === "Escape") { dispatchStateAction("import-cancel"); event.preventDefault(); return; }
        if (event.key !== "Tab") return;
        var dialog = document.querySelector('.import-sheet[role="dialog"]'); if (!dialog) return;
        var focusable = Array.prototype.slice.call(dialog.querySelectorAll("button:not(:disabled),select,input,[tabindex]")).filter(function (node) { return node.tabIndex >= 0 && !node.disabled && node.getBoundingClientRect().width > 0 && node.getBoundingClientRect().height > 0 && getComputedStyle(node).visibility !== "hidden"; });
        if (!focusable.length) return;
        var first = focusable[0], last = focusable[focusable.length - 1];
        if (!dialog.contains(document.activeElement)) { first.focus(); event.preventDefault(); return; }
        if (event.shiftKey && document.activeElement === first) { last.focus(); event.preventDefault(); }
        else if (!event.shiftKey && document.activeElement === last) { first.focus(); event.preventDefault(); }
      });

      document.addEventListener("change", function (event) {
        if(event.target.id==="new-mod-source"){newModSource=event.target.value;return;}
        if(event.target.id==="new-mod-target"){newModTarget=event.target.value;renderWorkspace();return;}
        if (event.target.id === "compact-workspace-select") { setWorkspace(event.target.value, true); return; }
        if (event.target.id === "compact-task-select") {
          if (model.workspace === "sound") soundTask = event.target.value;
          else if (model.workspace === "modulation") modTask = event.target.value;
          else if (model.workspace === "effects") effectsTask = event.target.value;
          else libraryTask = event.target.value;
          renderWorkspace(); return;
        }
        if (event.target.id === "compact-context-select") {
          if (model.workspace === "sound") selectedOsc = Number(event.target.value);
          else if (model.workspace === "modulation" && modTask === "lfo") selectedLfo = Number(event.target.value);
          else if (model.workspace === "modulation" && modTask === "routes") selectedRoute = Number(event.target.value);
          else if (model.workspace === "effects") selectedFx = Number(event.target.value);
          renderWorkspace(); return;
        }
        if(event.target.matches("[data-native-route]")){var index=event.target.getAttribute("data-native-route"),field=event.target.getAttribute("data-native-field"),raw=Number(event.target.value);commit("mod"+index+"."+field,(raw+(field==="nativeSource"?1:0))/(field==="nativeFlags"?3:field==="nativeSource"?32:31));renderWorkspace();return;}
        if (event.target.matches("[data-native-fx-target]")) { var route=event.target.getAttribute("data-native-fx-target");commit("mod"+route+".nativeTarget",(Number(event.target.value)+1)/512);renderWorkspace();return; }
        if (event.target.matches("[data-param-select]")) { var id = event.target.getAttribute("data-param-select"); var count = Math.max(1, event.target.options.length); commit(id, count > 1 ? Number(event.target.value) / (count - 1) : 0); }
      });
      function renderLibrarySearchResults() {
        var entries = filteredPresets(); var selected = selectedPreset(entries);
        var list = document.querySelector(".library-list-frame .preset-list");
        var inspector = document.querySelector(".library-inspector-frame .frame-body");
        var count = document.querySelector(".library-list-frame .frame-meta");
        if (!list || !inspector || !count) return;
        list.innerHTML = renderPresetRows(entries);
        inspector.innerHTML = renderPresetInspector(selected);
        count.textContent = entries.length + " " + t("count");
      }
      function sendLibraryFilter(){clearTimeout(libraryFilterTimer);if(!nativeConnected){renderLibrarySearchResults();return;}libraryFilterTimer=setTimeout(function(){dispatchNative('library-filter|'+encodeURIComponent(JSON.stringify({search:librarySearch,category:libraryCategory})));},160);}
      document.addEventListener('change',function(e){if(e.target.id==='library-category'){libraryCategory=e.target.value;sendLibraryFilter();}});
      var librarySearchComposing = false;
      document.addEventListener("compositionstart", function(event) { if (event.target.id === "library-search") librarySearchComposing = true; });
      document.addEventListener("compositionend", function(event) { if (event.target.id !== "library-search") return; librarySearchComposing = false; librarySearch = event.target.value; sendLibraryFilter(); });
      document.addEventListener("input", function (event) { if (event.target.id !== "library-search") return; librarySearch = event.target.value; if (!event.isComposing && !librarySearchComposing) sendLibraryFilter(); });

      document.addEventListener("click", function (event) {
        var target = event.target.closest("button"); if (!target) return;
        if (target.hasAttribute("data-library-page")) {
          dispatchNative("library-page|" + target.getAttribute("data-library-page") + "|" + (model.library.generation || "0")); return;
        }
        if(target.hasAttribute('data-noise-source-open')){flushPendingSets();cancelGestures();noiseSourceReturnFocus=target;noiseSourceOpen=true;soundTask='source';renderWorkspace();var choice=document.querySelector('[data-noise-choose]');if(choice)choice.focus();return;}
        if(target.hasAttribute('data-noise-source-close')){flushPendingSets();cancelGestures();noiseSourceOpen=false;renderWorkspace();var back=document.querySelector('[data-noise-source-open]');if(back)back.focus();return;}

        if(target.hasAttribute("data-clear-library")){librarySearch="";libraryCategory="";document.getElementById("library-search").value="";document.getElementById("library-category").value="";sendLibraryFilter();return;}
        if (target.id === "guide-open") { openQuickStart(); return; }
        if (target.id === "audition-toggle" || target.id === "guide-audition") { dispatchNative(model.auditionPlaying ? "audition-stop" : "audition-play"); return; }
        var guideAction = target.getAttribute("data-guide-action");
        if (guideAction) {
          if(guideAction==="library"){closeQuickStart();setWorkspace("library",true);return;}
          if (guideAction === "skip" || (guideAction === "next" && guideStep === 2)) closeQuickStart();
          else { guideStep = Math.max(0, Math.min(2, guideStep + (guideAction === "back" ? -1 : 1))); renderQuickStart(); }
          return;
        }
        var commerceAction = target.getAttribute("data-commerce-action"); if (commerceAction) { cancelGestures(); dispatchNative("commerce-" + commerceAction); return; }
        var workspace = target.getAttribute("data-workspace"); if (workspace) { setWorkspace(workspace, true); return; }
        if (target.id === "preset-prev") { dispatchStateAction("preset-prev"); return; }
        if (target.id === "preset-next") { dispatchStateAction("preset-next"); return; }
        if(target.hasAttribute('data-library-preset-action')){dispatchStateAction(target.dataset.libraryPresetAction==='save'?'preset-save':'preset-import');return;}
        if (target.id === "preset-import") { dispatchStateAction("preset-import"); return; }
        var panicReportAction = target.getAttribute("data-panic-report");
        if (panicReportAction) {
          document.getElementById("panic-report-prompt").hidden = true;
          if (panicReportAction === "send") dispatchNative("debug-report-panic");
          document.getElementById("panic").focus();
          return;
        }
        if (target.id === "panic") {
          cancelGestures();
          dispatchNative("panic");
          var panicPrompt = document.getElementById("panic-report-prompt");
          panicPrompt.hidden = false;
          panicPrompt.querySelector('[data-panic-report="dismiss"]').focus();
          return;
        }
        if (target.id === "debug-report") { dispatchNative("debug-report"); return; }
        if (target.id === "system-open") { dispatchNative("open-system"); return; }
        if (target.id === "preset-save") { dispatchStateAction("preset-save"); return; }
        var previewAction = target.getAttribute("data-preview-action"); if (previewAction) { dispatchStateAction("preview-" + previewAction); return; }
        var reverbMode = target.getAttribute("data-reverb-mode"); if (reverbMode != null) { commit(target.getAttribute("data-mode-param"), Number(reverbMode)); return; }
        var toggle = target.getAttribute("data-param-toggle"); if (toggle) { commit(toggle, param(toggle).normalized >= .5 ? 0 : 1); return; }
        var choice = target.getAttribute("data-param-choice"); if (choice) { var choiceButtons = target.parentNode.querySelectorAll("[data-choice-index]"); commit(choice, choiceButtons.length > 1 ? Number(target.getAttribute("data-choice-index")) / (choiceButtons.length - 1) : 0); return; }
        var stepId = target.getAttribute("data-param-step"); if (stepId) { if(target.disabled||target.closest('[aria-disabled="true"]'))return;var meta = param(stepId); var steps = Math.max(2, meta.steps || 9); commit(stepId, meta.normalized + Number(target.getAttribute("data-step")) / (steps - 1)); return; }
        var oscSelect = target.getAttribute("data-osc-select"); if (oscSelect) { selectedOsc = Number(oscSelect); renderWorkspace(); return; }
        var oscPageNext = target.getAttribute("data-osc-page"); if (oscPageNext) { oscPage = oscPageNext; renderWorkspace(); return; }
        var soundNext = target.getAttribute("data-sound-task"); if (soundNext) { soundTask = soundNext; renderWorkspace(); return; }
        var modNext = target.getAttribute("data-mod-task"); if (modNext) { modTask = modNext; renderWorkspace(); return; }
        var effectsNext = target.getAttribute("data-effects-task"); if (effectsNext) { effectsTask = effectsNext; dispatchNative("effects-context|" + effectsTask + "|" + selectedFx); renderWorkspace(); return; }
        var libraryNext = target.getAttribute("data-library-task"); if (libraryNext) { libraryTask = libraryNext; renderWorkspace(); return; }
        var lfo = target.getAttribute("data-lfo-select"); if (lfo) { selectedLfo = Number(lfo); renderWorkspace(); return; }
        var route = target.getAttribute("data-route-select"); if (route) { selectedRoute = Number(route); renderWorkspace(); return; }
        var fxSelect = target.getAttribute("data-select-fx"); if (fxSelect != null) { selectedFx = Number(fxSelect); effectsTask = isFocusedTouchLayout() ? "editor" : effectsTask; dispatchNative("effects-context|" + effectsTask + "|" + selectedFx); renderWorkspace(); return; }
        var fxAction = target.getAttribute("data-fx-action"); if (fxAction) { var slots = model.fxSlots || []; if (fxAction === "add") { var add = document.getElementById("fx-add-type"); if (add && add.value) dispatchStateAction("fx-add|" + add.value); } else if (slots.length) { var slot = slots[selectedFx]; if (fxAction === "remove") dispatchStateAction("fx-remove|" + slot.slotIndex); if (fxAction === "up" && selectedFx > 0) { dispatchStateAction("fx-move|" + selectedFx + "|" + (selectedFx - 1)); selectedFx--; } if (fxAction === "down" && selectedFx < slots.length - 1) { dispatchStateAction("fx-move|" + selectedFx + "|" + (selectedFx + 1)); selectedFx++; } } return; }
        var section = target.getAttribute("data-library-section");
        if (section) { requestLibrarySection(section); return; }
        var presetId = target.getAttribute("data-select-preset"); if (presetId) { loadLibraryPreset(presetId); return; }
        var importAction = target.getAttribute("data-import-action"); if (importAction) { dispatchStateAction("import-" + importAction); return; }
      });

      function demoState() {
        var rows = [];
        var ids = ["env.amp.hold","env.filter.hold","env.mod.hold","osc1.enabled","osc1.mode","osc1.level","osc1.timbre","osc1.pan","osc2.enabled","osc2.mode","osc2.level","osc2.timbre","osc2.pan","filter1.enabled","filter1.mix","filter1.route.osc1","filter1.route.osc2","filter1.route.sub","filter1.route.noise","filter1.mode","filter1.cutoff","filter1.resonance","filter1.drive","filter1.keyTrack","filter1.envAmount","sub.type","sub.level","sub.octave","noise.level","global.amplitudeModel","global.presetGain","global.output","global.voiceMode","global.pitchBendRange","global.glideTime","global.glideMode"];
        for (var n = 1; n <= 2; n++) ids = ids.concat(["osc"+n+".octave","osc"+n+".semitone","osc"+n+".fine","osc"+n+".detune","osc"+n+".unison.voices","osc"+n+".unison.stereo","osc"+n+".unison.blend","osc"+n+".unison.rand","osc"+n+".phase","osc"+n+".drift","osc"+n+".analog.wave","osc"+n+".analog.shape","osc"+n+".analog.pulseWidth","osc"+n+".wavetable.position","osc"+n+".wavetable.warp","osc"+n+".wavetable.slot","osc"+n+".wavetable.warpMode","osc"+n+".wavetable.crossMode","osc"+n+".fm.ratio","osc"+n+".fm.index","osc"+n+".fm.feedback","osc"+n+".fm.level"]);
        ["amp","filter","mod"].forEach(function (env) { ["attack","decay","sustain","release"].forEach(function (stage) { ids.push("env."+env+"."+stage); }); });
        for (var l = 1; l <= 8; l++) ids = ids.concat(["lfo"+l+".curveSlot","lfo"+l+".wideRate","lfo"+l+".freeRate","lfo"+l+".extendedRate","lfo"+l+".cycleBeats","lfo"+l+".triggerMode","lfo"+l+".anchor","lfo"+l+".nativeTiming","lfo"+l+".rate","lfo"+l+".depth","lfo"+l+".shape","lfo"+l+".sync"]);
        for (var r = 1; r <= 32; r++) ids = ids.concat(["mod"+r+".source","mod"+r+".destination","mod"+r+".amount","mod"+r+".nativeTarget","mod"+r+".nativeSource","mod"+r+".nativeAuxSource","mod"+r+".nativeFlags","mod"+r+".enabled"]);
        for (var macro = 1; macro <= 8; macro++) ids.push("macro."+macro);
        ids=ids.concat(["osc1.pitchTracking","osc2.pitchTracking","global.nativeMonoRetrigger"]);
        ids.forEach(function (id, index) { var meta = inferMeta(id); meta.normalized = index % 7 === 0 ? .72 : index % 5 === 0 ? .28 : .5; if (/^lfo[1-8]\.(curveSlot|wideRate|freeRate|extendedRate|cycleBeats|triggerMode)$/.test(id)) meta.normalized=0; if (/^lfo[1-8]\.anchor$/.test(id)||/^osc[12]\.pitchTracking$/.test(id)) meta.normalized=1; if(id==="global.nativeMonoRetrigger")meta.normalized=0;if(/^osc[12]\.fm\.level$/.test(id))meta.normalized=.5; if (meta.kind === "toggle") meta.text = meta.normalized >= .5 ? "On" : "Off"; else if (meta.choices.length) meta.text = meta.choices[Math.round(meta.normalized * (meta.choices.length - 1))]; else if (meta.kind === "integer") { var steps = Math.max(2, meta.steps || 9); var integerValue = /octave|semitone/.test(id) ? Math.round((meta.normalized - .5) * (steps - 1)) : Math.round(meta.normalized * (steps - 1)); meta.text = String(integerValue); } else meta.text = Math.round(meta.normalized * 100) + "%"; rows.push(meta); });
        for (var f = 0; f < 3; f++) { rows.push({id:"fx.slot"+f+".enabled",name:"Enabled",kind:"toggle",normalized:1,defaultNormalized:0,text:"On",choices:[]}); for (var p = 0; p < 5; p++) rows.push({id:"fx.slot"+f+".param"+p,name:"Param "+(p+1),kind:"continuous",normalized:.35+p*.1,defaultNormalized:.5,text:Math.round((.35+p*.1)*100)+"%",choices:[]}); }
        return { version: "__FAD_TOUCH_DISPLAY_VERSION__", language: "zh", container: "standalone", workspace: "sound", surface: "perform", importStage: "picker", presetName: "Init", previewActive: false, commerce: { visible: false, active: false, trial: false, permanent: false, trialExpiresAt: 0, purchaseAvailable: false, error: "" }, parameters: rows,
          fxSlots: [
            {slotIndex:0,visualIndex:0,order:0,type:1,name:"Drive",enabledId:"fx.slot0.enabled",parameters:[{id:"fx.slot0.param0",label:"Amount"},{id:"fx.slot0.param1",label:"Tone"},{id:"fx.slot0.param2",label:"Mix"},{id:"fx.slot0.param3",label:"Mode"}]},
            {slotIndex:1,visualIndex:1,order:1,type:3,name:"Delay",enabledId:"fx.slot1.enabled",parameters:[{id:"fx.slot1.param0",label:"Time"},{id:"fx.slot1.param1",label:"Feedback"},{id:"fx.slot1.param2",label:"Hi Cut"},{id:"fx.slot1.param3",label:"Lo Cut"},{id:"fx.slot1.param4",label:"Mix"}]},
            {slotIndex:2,visualIndex:2,order:2,type:4,name:"Reverb",enabledId:"fx.slot2.enabled",parameters:[{id:"fx.slot2.param0",label:"Size"},{id:"fx.slot2.param1",label:"Damping"},{id:"fx.slot2.param2",label:"Wet"},{id:"fx.slot2.param3",label:"Width"},{id:"fx.slot2.param4",label:"Hi Cut"}]}
          ],
          availableFxTypes:[{value:1,name:"Drive"},{value:2,name:"Chorus"},{value:3,name:"Delay"},{value:4,name:"Reverb"},{value:6,name:"Compressor"},{value:13,name:"Limiter"}],
          library:{section:"factory",selectedId:"fad-01",entries:[{id:"fad-01",index:0,name:"Paper Current",category:"Pad",author:"FAD Records",fileName:"Paper Current.fadpreset"},{id:"fad-02",index:1,name:"Indigo Relay",category:"Bass",author:"FAD Records",fileName:"Indigo Relay.fadpreset"},{id:"fad-03",index:2,name:"Pine Circuit",category:"Keys",author:"FAD Records",fileName:"Pine Circuit.fadpreset"},{id:"fad-04",index:3,name:"Dry Memory",category:"Lead",author:"FAD Records",fileName:"Dry Memory.fadpreset"}]}
        };
      }

      function selfTest() {
        var targets = Array.prototype.slice.call(document.querySelectorAll("button,select,input,summary,[role=slider],[role=button]")).map(function (node) { var rect = node.getBoundingClientRect(); return rect.width > 0 && rect.height > 0 ? Math.min(rect.width, rect.height) : null; }).filter(function (value) { return value != null; });
        var dialog = document.querySelector('.import-sheet[role="dialog"]');
        return {
          constitution: document.querySelector('meta[name="fad-ui-design-constitution"]') ? 1 : 0,
          workspaces: ["sound","modulation","effects","library"],
          languageControlPresent: !!document.querySelector("[data-language]"),
          rootOverflow: document.documentElement.scrollHeight > document.documentElement.clientHeight || document.documentElement.scrollWidth > document.documentElement.clientWidth,
          minimumTarget: targets.length ? Math.min.apply(Math, targets) : 0,
          nativeConnected: nativeConnected,
          workspace: model.workspace,
          task: model.workspace === "sound" ? soundTask : model.workspace === "modulation" ? modTask : model.workspace === "effects" ? effectsTask : libraryTask,
          surface: model.surface,
          dialogSemantics: !dialog || (dialog.getAttribute("aria-modal") === "true" && !!dialog.getAttribute("aria-labelledby"))
        };
      }

      document.addEventListener("click",function(event){if(event.target.closest("[data-mod-connect]"))connectModulation();});
      window.FADTouch = {
        receiveInstrumentControls: receiveInstrumentControls,
        receiveGlideEditResult: receiveGlideEditResult,
        receiveAssetEditResult: function(reply){if(window.FADCurveFiles&&window.FADCurveFiles.receive(reply))return;if(window.FADAssetEditor)window.FADAssetEditor.receive(reply);},
        receiveWarpEditResult: function(reply){if(window.FADAssetEditor)window.FADAssetEditor.receiveWarp(reply);},
        receiveNoiseImport: receiveNoiseImport,
        receiveFullState: receiveFullState,
        receiveViewport: receiveViewport,
        receiveLfoCurves: function(rows) { var previous=model.lfoCurves||[];model.lfoCurves=rows||[];for(var index=0;index<8;index++)if(JSON.stringify(previous[index])!==JSON.stringify(model.lfoCurves[index]))requestVisualDraw("lfo"+(index+1)+".curveSlot"); },
        receiveParameters: receiveParameters,
        receiveModulationResult: receiveModulationResult,
        receiveModulationTargets: function(rows){if(JSON.stringify(rows)!==JSON.stringify(model.modulationParameterTargets)){model.modulationParameterTargets=rows;renderAfterGestures=true;renderDeferredWorkspace();}},
        receiveGestureEnd: receiveGestureEnd,
        receiveNumberEditResult: receiveNumberEditResult,
        receiveActionResult: receiveActionResult,
        setRuntimeActive: setRuntimeActive,
        setRenderSuspended: setRenderSuspended,
        ping: ping,
        cancelGestures: cancelGestures,
        receiveGestureCancellation: receiveGestureCancellation,
        selfTest: selfTest,
        snapshotForTesting: function () { return JSON.parse(JSON.stringify(model)); },
        setWorkspace: function (workspace) { setWorkspace(workspace, false); },
        setLanguage: function (next) { language = /^zh/.test(next) ? "zh" : "en";window.FADI18n.useLocale(language);renderWorkspace(); }
      };
      window.__FAD_ASSET_EDIT_CONFIG__={send:dispatchNative,parameters:function(){return model.parameters;},pointAt:function(owner,x,y,height){if(owner===10){var magnitude=height>16?(height-8-y*height)/(height-16):1;y=importedFilterActive()?.5:.5+20*Math.log10(Math.max(1e-6,magnitude))/48;}else if(owner<2)y=.5+(.5-y)/.7;else{var index=owner-1,depth=param('lfo'+index+'.depth').normalized;y=.5+(.5-y)/(.76*(depth>1e-6?depth:1));if(!(importedLfoCurve(index)&&choiceIndex(param('lfo'+index+'.triggerMode'))===2))x=x*2%1;}return {x:Math.max(0,Math.min(1,x)),y:Math.max(0,Math.min(1,y))};},geometry:function(owner){if(owner<2)return {samples:(model.oscillatorPreviews||[])[owner]||[0,1,0,-1,0]};var row=(model.lfoCurves||[])[owner-2];if(row&&row.samples&&row.samples.length)return {samples:row.samples};var meta=model.parameters['lfo'+(owner-1)+'.shape'],shape=meta?Math.round(meta.normalized*4):0;return {samples:Array.from({length:129},function(_,i){var x=i/128,a=x*2*Math.PI,v=shape===0?Math.sin(a):shape===1?1-4*Math.abs(x-.5):shape===2?2*x-1:shape===3?(Math.sin(a)>=0?1:-1):Math.sin(a*2.17)*Math.sin(a*.73);return .5+.5*v;})};},sampleRate:function(){return Number((model.instrumentControls||{}).sampleRate)||Number(model.sampleRate)||48000;},begin:beginGesture,end:endGesture,set:function(id,v){setLocal(id,v);queueSet(id,v);},controls:function(){return model.instrumentControls||{};},draft:function(){return model.assetEditor||{};},
        library:function(target){dispatchNative("library-kind|lfo");dispatchNative("library-curve-target|"+target);setWorkspace("library",true);},
        runtime:function(active){assetEditorVisible=!active;setRuntimeActive(model.runtimeActive!==false);},
        notice:function(message){model.actionError=message;updateChrome();},
        warpResult:function(reply){if(reply.status==='applied'){model.instrumentControls.warps=reply.warps;renderWorkspace();}else {model.actionError=window.FADI18n.text('asset.error.'+reply.status);updateChrome();}}};
      function selectedCurve(){return (model.library.entries||[]).find(function(e){return e.id===selectedPresetId;});}
      document.addEventListener('click',function(e){var target=e.target.closest&&e.target.closest('[data-library-kind],[data-curve-target],[data-curve-apply],[data-curve-import]');if(!target)return;if(target.hasAttribute('data-library-kind')){selectedPresetId='';dispatchNative('library-kind|'+target.dataset.libraryKind);}else if(target.hasAttribute('data-curve-target'))dispatchNative('library-curve-target|'+target.dataset.curveTarget);else if(target.hasAttribute('data-curve-import'))window.FADCurveFiles.choose(-1);else{var entry=selectedCurve(),chosen=Number(model.library.curveTarget);if(entry)window.FADAssetEditor.beforeImport(chosen).then(function(result){if(result.allowed)dispatchNative('library-curve-apply|'+encodeURIComponent(entry.id)+'|'+chosen+'|'+entry.contentHash+'|'+encodeURIComponent(result.context||(model.instrumentControls||{}).assetContext));});}});
      document.addEventListener('pointerdown',function(e){var n=e.target.closest&&e.target.closest('[data-curve-export]');if(!n||e.button>0)return;var entry=selectedCurve();if(!entry)return;n.setPointerCapture(e.pointerId);n.onpointermove=function(p){if(p.pointerId===e.pointerId&&Math.hypot(p.clientX-e.clientX,p.clientY-e.clientY)>5){n.onpointermove=null;dispatchNative('library-curve-drag|'+encodeURIComponent(entry.id)+'|'+model.library.curveTarget+'|'+entry.contentHash);}};});
      function fileTarget(node){var target=node.closest&&node.closest('[data-curve-target]');if(target)return Number(target.dataset.curveTarget);var strip=node.closest&&node.closest('.visual-strip'),canvas=strip&&strip.querySelector('canvas[id^="lfo-canvas"]');if(canvas)return canvas.id==='lfo-canvas'?selectedLfo-1:Number(canvas.id.slice(11))-1;var asset=node.closest&&node.closest('.asset-editor');if(asset&&window.FADAssetEditor){var draft=window.FADAssetEditor.snapshotForTesting();if(draft.kind==='lfo')return draft.target;}return null;}
      document.addEventListener('dragover',function(e){e.preventDefault();});
      document.addEventListener('drop',function(e){e.preventDefault();var transfer=e.dataTransfer;if(!transfer)return;var target=fileTarget(e.target);if(target==null&&model.workspace==='library'&&model.library.kind==='lfo')target=-1;if(target!=null&&transfer.files.length)window.FADCurveFiles.import(transfer.files,target);});
      function refreshTouchLanguage(next){window.FADTouch.setLanguage(next);}
var unsubscribeLanguage=window.FADI18n.onChange(refreshTouchLanguage,"touch");
window.addEventListener("pagehide",function(){unsubscribeLanguage();});
window.addEventListener("pageshow",function(event){if(event.persisted)unsubscribeLanguage=window.FADI18n.onChange(refreshTouchLanguage,"touch");});
      if (document.fonts && document.fonts.ready) document.fonts.ready.then(requestVisualDraw);
      document.body.setAttribute("data-authoritative", "false");
      (function connect(attempt) {
        if (dispatchNative("ready")){noiseWire("query-noise-import",[""]);return;}
        if (attempt < 50) window.setTimeout(function () { connect(attempt + 1); }, 100);
        else window.__FADTouchBridgeUnavailable = true;
      }(0));
    }());
  
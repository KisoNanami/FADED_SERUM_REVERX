(function (global) {
  "use strict";

  if (global.FADDitherEngine) return;

  var N = 256;
  var TAU = Math.PI * 2;
  var T_LOOP = 14.4;
  var OMEGA = TAU / T_LOOP;
  var INTRO_DUR = 2.0;
  var INTRO_SPREAD = 1.1;
  var FRAME_INTERVAL = 1000 / 24;
  var STILL_TIME = T_LOOP * 0.30;
  var DEFAULT_COLORS = ["#1c1b14", "#3d4a78", "#ac4b2c", "#8c6f3e"];
  var FONT_STACK = "'FAD Mono','Menlo','SF Mono','DejaVu Sans Mono','Segoe UI Symbol',monospace";
  var playbackActive = false;
  var POINT_FIELDS = ["x", "y", "distance", "emboss", "wave1", "wave2", "planeX", "planeY",
    "unit1X", "unit1Y", "unit2X", "unit2Y", "wind", "bayer", "random", "shimmer",
    "textureHash", "variant", "accent", "scatterX", "scatterY", "delay"];

  var DOT_RAMP = [
    null,
    { ch: "\u00b7", fs: 0.85, al: 0.42 },
    { ch: "\u2219", fs: 0.80, al: 0.62 },
    { ch: "\u2022", fs: 0.74, al: 0.80 },
    { ch: "\u25cf", fs: 0.56, al: 0.92 },
    { ch: "\u25cf", fs: 0.78, al: 1.00 }
  ];
  var BRAILLE = {
    l2: ["\u2801", "\u2802", "\u2804", "\u2820"],
    l3: ["\u2803", "\u2818", "\u2814", "\u2821"],
    l4: ["\u281e", "\u2827", "\u2839", "\u283c"],
    aura: ["\u2801", "\u2802", "\u2810", "\u2820"]
  };

  var BAYER8 = (function () {
    var matrix = [[0]];
    for (var size = 1; size < 8; size <<= 1) {
      var next = [];
      for (var y = 0; y < size * 2; y++) {
        next[y] = [];
        for (var x = 0; x < size * 2; x++) {
          var quadrant = (y < size ? 0 : 2) + (x < size ? 0 : 1);
          next[y][x] = matrix[y % size][x % size] * 4 + [0, 2, 3, 1][quadrant];
        }
      }
      matrix = next;
    }
    var flat = new Float32Array(64);
    for (var row = 0; row < 8; row++) {
      for (var column = 0; column < 8; column++)
        flat[row * 8 + column] = (matrix[row][column] + 0.5) / 64;
    }
    return flat;
  }());

  var SINLUT = new Float32Array(4096);
  for (var sineIndex = 0; sineIndex < 4096; sineIndex++)
    SINLUT[sineIndex] = Math.sin(sineIndex * TAU / 4096);
  var SIN_K = 4096 / TAU;
  var SIN_OFF = 512 * TAU;

  var EXPLUT = new Float32Array(257);
  for (var expIndex = 0; expIndex <= 256; expIndex++) {
    var expDistance = (expIndex - 128) / 8;
    EXPLUT[expIndex] = Math.exp(-expDistance * expDistance / 24);
  }

  var sourceSdfCache = typeof global.WeakMap === "function" ? new global.WeakMap() : null;
  var sourceSdfFallback = [];
  var brailleSupported = null;

  function clamp(value, minimum, maximum) {
    return Math.max(minimum, Math.min(maximum, value));
  }

  function nowMillis() {
    return global.performance && typeof global.performance.now === "function"
      ? global.performance.now()
      : Date.now();
  }

  function easeOutCubic(value) {
    var inverse = 1 - value;
    return 1 - inverse * inverse * inverse;
  }

  function cubicCoordinate(t, first, second) {
    var inverse = 1 - t;
    return 3 * inverse * inverse * t * first
      + 3 * inverse * t * t * second
      + t * t * t;
  }

  function cubicBezierYForX(value, x1, y1, x2, y2) {
    var lower = 0;
    var upper = 1;
    var t = value;
    for (var iteration = 0; iteration < 12; iteration++) {
      t = (lower + upper) * 0.5;
      if (cubicCoordinate(t, x1, x2) < value) lower = t;
      else upper = t;
    }
    return cubicCoordinate(t, y1, y2);
  }

  function hash2(x, y) {
    var hash = (x * 374761393 + y * 668265263) | 0;
    hash = Math.imul(hash ^ (hash >>> 13), 1274126177);
    hash ^= hash >>> 16;
    return (hash >>> 0) / 4294967296;
  }

  function sinL(value) {
    return SINLUT[((value + SIN_OFF) * SIN_K) & 4095];
  }

  function edgeL(distance) {
    var index = (distance * 8 + 128.5) | 0;
    return EXPLUT[index < 0 ? 0 : index > 256 ? 256 : index];
  }

  function edt1d(input, output, vertices, boundaries, length) {
    var k = 0;
    vertices[0] = 0;
    boundaries[0] = -1e20;
    boundaries[1] = 1e20;
    for (var q = 1; q < length; q++) {
      var separation = ((input[q] + q * q)
        - (input[vertices[k]] + vertices[k] * vertices[k]))
        / (2 * q - 2 * vertices[k]);
      while (separation <= boundaries[k]) {
        k--;
        separation = ((input[q] + q * q)
          - (input[vertices[k]] + vertices[k] * vertices[k]))
          / (2 * q - 2 * vertices[k]);
      }
      k++;
      vertices[k] = q;
      boundaries[k] = separation;
      boundaries[k + 1] = 1e20;
    }
    k = 0;
    for (var position = 0; position < length; position++) {
      while (boundaries[k + 1] < position) k++;
      var delta = position - vertices[k];
      output[position] = delta * delta + input[vertices[k]];
    }
  }

  function edt2d(binary) {
    var infinity = 1e20;
    var distances = new Float64Array(N * N);
    for (var index = 0; index < N * N; index++)
      distances[index] = binary[index] ? 0 : infinity;

    var input = new Float64Array(N);
    var output = new Float64Array(N);
    var vertices = new Int32Array(N);
    var boundaries = new Float64Array(N + 1);
    var x;
    var y;
    for (x = 0; x < N; x++) {
      for (y = 0; y < N; y++) input[y] = distances[y * N + x];
      edt1d(input, output, vertices, boundaries, N);
      for (y = 0; y < N; y++) distances[y * N + x] = output[y];
    }
    for (y = 0; y < N; y++) {
      for (x = 0; x < N; x++) input[x] = distances[y * N + x];
      edt1d(input, output, vertices, boundaries, N);
      for (x = 0; x < N; x++) distances[y * N + x] = output[x];
    }
    return distances;
  }

  function buildSDF(bits) {
    var inverse = new Uint8Array(N * N);
    for (var index = 0; index < N * N; index++) inverse[index] = 1 - bits[index];
    var inside = edt2d(bits);
    var outside = edt2d(inverse);
    var sdf = new Float32Array(N * N);
    for (index = 0; index < N * N; index++) {
      sdf[index] = bits[index]
        ? -Math.sqrt(outside[index]) + 0.5
        : Math.sqrt(inside[index]) - 0.5;
    }
    return sdf;
  }

  function sampleSDF(sdf, x, y) {
    x = clamp(x, 0, N - 1.001);
    y = clamp(y, 0, N - 1.001);
    var x0 = x | 0;
    var y0 = y | 0;
    var fx = x - x0;
    var fy = y - y0;
    var index = y0 * N + x0;
    var a = sdf[index];
    var b = sdf[index + 1];
    var c = sdf[index + N];
    var d = sdf[index + N + 1];
    return a + (b - a) * fx + (c - a) * fy + (a - b - c + d) * fx * fy;
  }

  function sourceSDF(source) {
    var cached;
    if (sourceSdfCache) {
      cached = sourceSdfCache.get(source);
      if (cached) return cached;
    } else {
      for (var index = 0; index < sourceSdfFallback.length; index++) {
        if (sourceSdfFallback[index].source === source)
          return sourceSdfFallback[index].sdf;
      }
    }

    var sample = document.createElement("canvas");
    sample.width = N;
    sample.height = N;
    var context = sample.getContext("2d", { willReadFrequently: true });
    if (!context) return null;
    context.clearRect(0, 0, N, N);
    context.drawImage(source, 0, 0, N, N);
    var pixels = context.getImageData(0, 0, N, N).data;
    sample.width = sample.height = 0;
    var bits = new Uint8Array(N * N);
    for (index = 0; index < N * N; index++)
      bits[index] = pixels[index * 4 + 3] >= 128 ? 1 : 0;
    cached = buildSDF(bits);
    if (sourceSdfCache) sourceSdfCache.set(source, cached);
    else sourceSdfFallback.push({ source: source, sdf: cached });
    return cached;
  }

  function probeBraille() {
    try {
      var canvas = document.createElement("canvas");
      canvas.width = 24;
      canvas.height = 24;
      var context = canvas.getContext("2d", { willReadFrequently: true });
      if (!context) return false;
      context.font = "20px " + FONT_STACK;
      context.fillStyle = "#000";
      context.fillText("\u283f", 2, 20);
      var pixels = context.getImageData(0, 0, 24, 24).data;
      canvas.width = canvas.height = 0;
      var lit = 0;
      for (var index = 3; index < pixels.length; index += 4) {
        if (pixels[index] > 40) lit++;
      }
      return lit >= 4;
    } catch (error) {
      return false;
    }
  }

  function breath(time) {
    var phase = 2 * OMEGA * time;
    return Math.sin(phase + 0.55 * Math.sin(phase));
  }

  function normalizeColors(colors) {
    var selected = colors && colors.length ? colors : DEFAULT_COLORS;
    return [
      selected[0] || DEFAULT_COLORS[0],
      selected[1] || selected[0] || DEFAULT_COLORS[1],
      selected[2] || selected[1] || selected[0] || DEFAULT_COLORS[2],
      selected[3] || selected[2] || selected[1] || selected[0] || DEFAULT_COLORS[3]
    ];
  }

  function DitherController(canvas, source, options) {
    this.canvas = canvas;
    this.source = source;
    this.options = options || {};
    this.context = canvas && canvas.getContext
      ? canvas.getContext("2d", { alpha: true })
      : null;
    this.colors = document.documentElement.dataset.fadAppearance === "dark"
      ? ["#a8b9ef", "#c1ccec", "#9bb4ff", "#e8e5db"] : normalizeColors(this.options.colors);
    this.active = false;
    this.destroyed = false;
    this.suspended = false;
    this.inViewport = true;
    this.requestedActive = false;
    this.ready = false;
    this.dirty = true;
    this.bitmapDirty = true;
    this.needsFrame = false;
    this.frameId = 0;
    this.lastFrameAt = 0;
    this.startedAt = 0;
    this.mode = "static";
    this.width = 0;
    this.height = 0;
    this.dpr = 1;
    this.atlasScale = 2;
    this.cell = 4;
    this.count = 0;
    this.columns = 0;
    this.logoScale = 1;
    this.logoOffsetX = 0;
    this.logoOffsetY = 0;
    this.centerX = 0;
    this.centerY = 0;
    this.scene = this.options.scene === "hero" || this.options.breathing === true
      ? "hero" : "default";
    this.sceneAnchor = "right";
    this.sceneDensity = 1;
    this.sceneAlpha = 1;
    this.transition = null;
    this.transitionDx = 0;
    this.transitionDy = 0;
    this.sdf = null;
    this.atlas = null;
    this.atlasTile = 0;
    this.densityK = 1;
    this.governorEma = 8;
    this.governorCooldown = 0;
    this.brailleProbability = clamp(
      Number(this.options.braille == null ? 0.30 : this.options.braille), 0, 1);
    this.fill = clamp(Number(this.options.fill == null ? 0 : this.options.fill), 0, 1);
    this.dotScale = clamp(Number(this.options.dot || 1), 0.6, 1.5);

    this.x = null;
    this.y = null;
    this.distance = null;
    this.emboss = null;
    this.wave1 = null;
    this.wave2 = null;
    this.planeX = null;
    this.planeY = null;
    this.unit1X = null;
    this.unit1Y = null;
    this.unit2X = null;
    this.unit2Y = null;
    this.wind = null;
    this.bayer = null;
    this.random = null;
    this.shimmer = null;
    this.textureHash = null;
    this.variant = null;
    this.accent = null;
    this.scatterX = null;
    this.scatterY = null;
    this.delay = null;

    this.reducedMotion = global.matchMedia
      ? global.matchMedia("(prefers-reduced-motion: reduce)")
      : null;

    var self = this;
    this.onResize = function () {
      if (self.destroyed) return;
      self.dirty = true;
      self.bitmapDirty = true;
      if (self.transition) self.transition.initialized = false;
      if (!self.suspended && self.mode !== "exited") {
        self.needsFrame = true;
        self.schedule();
      }
    };
    this.onVisibility = function () {
      if (self.destroyed) return;
      if (document.hidden) self.releaseSurface();
      else if (!self.suspended && self.mode !== "exited") {
        self.needsFrame = true;
        self.schedule();
      }
    };
    this.onSourceLoad = function () {
      if (self.destroyed) return;
      self.sdf = null;
      self.dirty = true;
      self.bitmapDirty = true;
      if (!self.suspended && self.mode !== "exited") {
        self.needsFrame = true;
        self.schedule();
      }
    };
    this.onMotionChange = function () {
      if (self.destroyed) return;
      self.colors = document.documentElement.dataset.fadAppearance === "dark" ? ["#a8b9ef", "#c1ccec", "#9bb4ff", "#e8e5db"] : normalizeColors(self.options.colors);
      self.releaseRenderData();
      self.bitmapDirty = true;
      self.cancel();
      if (self.suspended || self.mode === "exited") return;
      if (playbackActive) { self.freeze(); return; }
      if (self.mode === "exit") {
        self.startedAt = nowMillis();
        self.active = true;
        self.schedule();
      } else if (self.transition && self.isReducedMotion()) {
        self.completeSceneTransition(false, nowMillis());
        self.needsFrame = true;
        self.schedule();
      } else if (self.isReducedMotion()) {
        self.active = false;
        self.mode = "static";
        self.needsFrame = true;
        self.schedule();
      } else if (self.requestedActive) {
        self.replay();
      } else if (self.mode !== "exited") {
        self.freeze();
      }
    };
    this.onPlaybackChange = function () {
      if (playbackActive && !self.destroyed && !self.suspended) self.freeze();
    };

    global.addEventListener("resize", this.onResize);
    document.addEventListener("visibilitychange", this.onVisibility);
    global.addEventListener("fadappearancechange", this.onMotionChange);
    global.addEventListener("fadplaybackchange", this.onPlaybackChange);
    if (this.reducedMotion) {
      if (this.reducedMotion.addEventListener)
        this.reducedMotion.addEventListener("change", this.onMotionChange);
      else if (this.reducedMotion.addListener)
        this.reducedMotion.addListener(this.onMotionChange);
    }
    if (source) source.addEventListener("load", this.onSourceLoad);

    if (global.IntersectionObserver) {
      this.visibilityObserver = new global.IntersectionObserver(function (entries) {
        if (self.destroyed) return;
        if (self.canvas.isConnected === false) { self.destroy(); return; }
        for (var index = 0; index < entries.length; index++) {
          if (entries[index].target !== self.canvas) continue;
          var visible = entries[index].isIntersecting;
          if (visible === self.inViewport) continue;
          self.inViewport = visible;
          if (!visible) self.releaseSurface();
          else if (!self.suspended && self.mode !== "exited") {
            self.needsFrame = true;
            self.schedule();
          }
        }
      });
      this.visibilityObserver.observe(canvas);
    }

    if (this.options.active) this.setActive(true);
    else this.freeze();
  }

  DitherController.prototype.isReducedMotion = function () {
    return document.documentElement.dataset.fadMotion === "reduce" || !!(this.reducedMotion && this.reducedMotion.matches);
  };

  DitherController.prototype.cancel = function () {
    if (this.frameId) global.cancelAnimationFrame(this.frameId);
    this.frameId = 0;
  };

  DitherController.prototype.schedule = function () {
    if (this.destroyed || this.suspended || !this.inViewport || document.hidden || !this.context)
      return;
    if (this.canvas.isConnected === false) { this.destroy(); return; }
    // Static redraws are one synchronous paint, never an idle RAF loop.
    if (!this.active) {
      if (this.needsFrame) this.draw(nowMillis());
      return;
    }
    if (playbackActive) { this.freeze(); return; }
    if (this.frameId) return;
    var self = this;
    this.frameId = global.requestAnimationFrame(function (now) { self.draw(now); });
  };

  DitherController.prototype.setActive = function (active) {
    if (this.destroyed) return;
    if (active === false) {
      this.freeze();
      return;
    }
    if (this.requestedActive) {
      if (!this.isReducedMotion()) this.active = true;
      this.schedule();
      return;
    }
    this.replay();
  };

  DitherController.prototype.replay = function () {
    if (this.destroyed) return;
    this.suspended = false;
    if (playbackActive) { this.freeze(); return; }
    this.cancel();
    this.transition = null;
    this.requestedActive = true;
    this.lastFrameAt = 0;
    this.startedAt = this.ready ? nowMillis() : 0;
    this.needsFrame = false;
    if (this.isReducedMotion()) {
      this.active = false;
      this.mode = "static";
      this.needsFrame = true;
    } else {
      this.active = true;
      this.mode = "intro";
    }
    this.schedule();
  };

  DitherController.prototype.freeze = function () {
    if (this.destroyed) return;
    this.cancel();
    this.transition = null;
    this.suspended = false;
    this.requestedActive = false;
    this.active = false;
    this.mode = "static";
    this.lastFrameAt = 0;
    this.needsFrame = false;
    // Keep the last visible bitmap. A new/static logo needs only one paint.
    if (!this.suspended && !document.hidden && this.inViewport
        && this.bitmapDirty && this.prepare()) {
      this.drawLivingFrame(STILL_TIME, null, 0, true, 0, 0, 0);
    }
    this.releaseRenderData();
  };

  DitherController.prototype.releaseRenderData = function () {
    if (this.atlas) this.atlas.width = this.atlas.height = 0;
    this.atlas = null;
    this.atlasTile = 0;
    for (var index = 0; index < POINT_FIELDS.length; index++) this[POINT_FIELDS[index]] = null;
    this.count = 0;
    this.dirty = true;
  };

  DitherController.prototype.releaseSurface = function () {
    this.cancel();
    this.releaseRenderData();
    if (this.canvas && (this.canvas.width || this.canvas.height))
      this.canvas.width = this.canvas.height = 0;
    this.bitmapDirty = true;
  };

  DitherController.prototype.suspend = function () {
    if (this.destroyed || this.suspended) return;
    this.suspended = true;
    this.active = false;
    this.requestedActive = false;
    this.needsFrame = false;
    this.transition = null;
    this.mode = "static";
    this.releaseSurface();
  };

  DitherController.prototype.exit = function () {
    if (this.destroyed || !this.context) return;
    if (playbackActive) { this.suspend(); this.mode = "exited"; return; }
    this.suspended = false;
    this.cancel();
    this.transition = null;
    this.requestedActive = false;
    this.active = true;
    this.needsFrame = false;
    this.mode = "exit";
    this.startedAt = nowMillis();
    this.lastFrameAt = 0;
    this.schedule();
  };

  DitherController.prototype.applyScene = function (scene, anchor, density) {
    this.scene = scene === "corner" ? "corner" : "hero";
    this.sceneAnchor = anchor === "left" ? "left" : "right";
    this.sceneDensity = this.scene === "corner"
      ? clamp(Number(density || 0.82), 0.35, 1.2)
      : 1;
    this.sceneAlpha = this.scene === "corner" ? 0.46 : 1;
    this.transition = null;
    this.transitionDx = 0;
    this.transitionDy = 0;
    this.dirty = true;
    this.bitmapDirty = true;
  };

  DitherController.prototype.completeSceneTransition = function (replayIntro, at) {
    if (!this.transition) return;
    var target = this.transition;
    this.applyScene(target.targetScene, target.anchor, target.density);
    this.lastFrameAt = 0;
    this.startedAt = replayIntro ? (at || nowMillis()) : 0;
    this.requestedActive = this.options.breathing === true;
    this.active = replayIntro && !this.isReducedMotion();
    this.mode = this.active ? "intro" : "static";
    this.needsFrame = !this.active;
  };

  DitherController.prototype.beginSceneTransition = function (scene, anchor, density, scatterSeconds) {
    if (this.destroyed || this.scene === "default") return;
    var wasSuspended = this.suspended;
    this.suspended = false;
    var targetScene = scene === "corner" ? "corner" : "hero";
    var targetAnchor = anchor === "left" ? "left" : "right";
    var targetDensity = targetScene === "corner"
      ? clamp(Number(density || 0.82), 0.35, 1.2)
      : 1;
    var duration = scatterSeconds == null
      ? 0.55
      : Math.max(0, Number(scatterSeconds) || 0);

    if (this.transition && this.transition.targetScene === targetScene) return;
    if (this.scene === targetScene) {
      if (this.transition) this.replay();
      else if (wasSuspended) this.freeze();
      return;
    }
    if (playbackActive || this.isReducedMotion() || duration === 0) {
      this.cancel();
      this.applyScene(targetScene, targetAnchor, targetDensity);
      this.requestedActive = this.options.breathing === true;
      this.active = false;
      this.mode = "static";
      this.lastFrameAt = 0;
      this.startedAt = 0;
      this.needsFrame = true;
      this.schedule();
      return;
    }

    this.cancel();
    this.transition = {
      targetScene: targetScene,
      anchor: targetAnchor,
      density: targetDensity,
      startedAt: 0,
      duration: duration * 1000,
      initialized: false
    };
    this.transitionDx = 0;
    this.transitionDy = 0;
    this.requestedActive = true;
    this.active = true;
    this.needsFrame = false;
    this.mode = "transition";
    this.lastFrameAt = 0;
    this.schedule();
  };

  DitherController.prototype.wakeTo = function (anchor, density, scatterSeconds) {
    this.beginSceneTransition("corner", anchor, density, scatterSeconds);
  };

  DitherController.prototype.restoreHero = function (scatterSeconds) {
    this.beginSceneTransition("hero", "right", 1, scatterSeconds);
  };

  DitherController.prototype.bakeAtlas = function () {
    if (this.atlas) this.atlas.width = this.atlas.height = 0;
    if (brailleSupported == null) brailleSupported = probeBraille();
    var tile = Math.max(4, Math.ceil(this.cell * this.dpr * this.atlasScale));
    var entries = [];
    for (var level = 1; level <= 5; level++) entries.push(DOT_RAMP[level]);
    var index;
    if (brailleSupported) {
      for (index = 0; index < 4; index++) entries.push({ ch: BRAILLE.l2[index], fs: 1.28, al: 0.66 });
      for (index = 0; index < 4; index++) entries.push({ ch: BRAILLE.l3[index], fs: 1.28, al: 0.82 });
      for (index = 0; index < 4; index++) entries.push({ ch: BRAILLE.l4[index], fs: 1.28, al: 0.95 });
      for (index = 0; index < 4; index++) entries.push({ ch: BRAILLE.aura[index], fs: 1.22, al: 0.42 });
    } else {
      for (index = 0; index < 4; index++) entries.push({ ch: "\u00b7", fs: 0.80, al: 0.60 });
      for (index = 0; index < 4; index++) entries.push({ ch: "\u2219", fs: 0.78, al: 0.78 });
      for (index = 0; index < 4; index++) entries.push({ ch: "\u2022", fs: 0.72, al: 0.92 });
      for (index = 0; index < 4; index++) entries.push({ ch: "\u00b7", fs: 0.70, al: 0.40 });
    }

    var atlas = document.createElement("canvas");
    atlas.width = tile * entries.length;
    atlas.height = tile * this.colors.length;
    var context = atlas.getContext("2d");
    if (!context) return;
    context.textAlign = "center";
    context.textBaseline = "middle";
    for (var row = 0; row < this.colors.length; row++) {
      context.fillStyle = this.colors[row];
      var sizeMultiplier = this.dotScale * (row ? 1.12 : 1);
      for (var column = 0; column < entries.length; column++) {
        var entry = entries[column];
        context.font = Math.max(4, Math.round(tile * entry.fs * sizeMultiplier))
          + "px " + FONT_STACK;
        context.globalAlpha = row ? Math.min(1, entry.al * 1.3) : entry.al;
        context.fillText(entry.ch,
          column * tile + tile * 0.5,
          row * tile + tile * 0.54);
      }
    }
    context.globalAlpha = 1;
    this.atlas = atlas;
    this.atlasTile = tile;
  };

  DitherController.prototype.prepare = function () {
    if (this.destroyed || this.suspended || !this.context || !this.canvas || !this.source || !this.source.complete
        || !this.source.naturalWidth) return false;

    var width = Math.round(this.canvas.clientWidth || this.canvas.getBoundingClientRect().width);
    var height = Math.round(this.canvas.clientHeight || this.canvas.getBoundingClientRect().height);
    if (width < 2 || height < 2) return false;

    var maxDpr = clamp(Number(this.options.maxDpr || 1.25), 1, 3);
    var dpr = clamp(global.devicePixelRatio || 1, 1, maxDpr);
    // A large first-run hero follows display density while bounding its bitmap.
    dpr = Math.max(1, Math.min(dpr, Math.sqrt(4 * 1024 * 1024 / (width * height))));
    if (!this.sdf) this.sdf = sourceSDF(this.source);
    if (!this.sdf) return false;
    if (!this.dirty && this.width === width && this.height === height && this.dpr === dpr)
      return this.ready;

    this.width = width;
    this.height = height;
    this.dpr = dpr;
    this.canvas.width = Math.max(2, Math.round(width * dpr));
    this.canvas.height = Math.max(2, Math.round(height * dpr));

    var shortestSide = Math.min(width, height);
    var box;
    var centerX;
    var centerY;
    var minColumns;
    var columnBase;
    var columnDensity;
    if (this.scene === "hero") {
      box = shortestSide * 0.46;
      centerX = width * (width <= 860 ? 0.50 : 0.28);
      centerY = height * (width <= 860 ? 0.28 : 0.44);
      minColumns = 72;
      columnBase = Math.min(150, Math.max(minColumns, box / 5.3));
      columnDensity = this.densityK;
    } else if (this.scene === "corner") {
      box = shortestSide * 0.86;
      centerX = this.sceneAnchor === "left" ? box * 0.38 : width - box * 0.38;
      centerY = height - box * 0.28;
      minColumns = 58;
      columnBase = Math.min(132, Math.max(minColumns, box / 5.3));
      columnDensity = this.densityK * this.sceneDensity;
    } else {
      box = shortestSide * clamp(Number(this.options.scale || 0.84), 0.1, 1);
      centerX = width * 0.5;
      centerY = height * 0.5;
      columnBase = clamp(Math.round(Math.min(Number(this.options.columns || 72), box / 4)), 16, 96);
      columnDensity = this.densityK;
    }
    var columns = clamp(Math.round(columnBase * columnDensity), this.scene === "hero" || this.scene === "corner" ? 24 : 16, 96);
    var cell = box / columns;
    var logoScale = N / box;
    var logoOffsetX = centerX - box * 0.5;
    var logoOffsetY = centerY - box * 0.5;
    var padding = Math.ceil(8 / (cell * logoScale));
    var gridStart = -padding;
    var gridEnd = columns + padding;
    var points = [];
    var firstCenterX = 0.32 * N;
    var firstCenterY = 0.30 * N;
    var secondCenterX = 0.74 * N;
    var secondCenterY = 0.70 * N;

    for (var gridY = gridStart; gridY < gridEnd; gridY++) {
      for (var gridX = gridStart; gridX < gridEnd; gridX++) {
        var x = logoOffsetX + (gridX + 0.5) * cell;
        var y = logoOffsetY + (gridY + 0.5) * cell;
        if (x < -14 || x > width + 14 || y < -14 || y > height + 14) continue;
        var u = (x - logoOffsetX) * logoScale;
        var v = (y - logoOffsetY) * logoScale;
        var signedDistance = sampleSDF(this.sdf, u, v);
        if (signedDistance > 8) continue;
        points.push({
          gridX: gridX,
          gridY: gridY,
          x: x,
          y: y,
          u: u,
          v: v,
          distance: signedDistance
        });
      }
    }

    this.cell = cell;
    this.columns = columns;
    this.centerX = centerX;
    this.centerY = centerY;
    this.logoScale = logoScale;
    this.logoOffsetX = logoOffsetX;
    this.logoOffsetY = logoOffsetY;
    this.count = points.length;
    this.x = new Float32Array(this.count);
    this.y = new Float32Array(this.count);
    this.distance = new Float32Array(this.count);
    this.emboss = new Float32Array(this.count);
    this.wave1 = new Float32Array(this.count);
    this.wave2 = new Float32Array(this.count);
    this.planeX = new Float32Array(this.count);
    this.planeY = new Float32Array(this.count);
    this.unit1X = new Float32Array(this.count);
    this.unit1Y = new Float32Array(this.count);
    this.unit2X = new Float32Array(this.count);
    this.unit2Y = new Float32Array(this.count);
    this.wind = new Float32Array(this.count);
    this.bayer = new Float32Array(this.count);
    this.random = new Float32Array(this.count);
    this.shimmer = new Float32Array(this.count);
    this.textureHash = new Float32Array(this.count);
    this.variant = new Uint8Array(this.count);
    this.accent = new Uint8Array(this.count);
    this.scatterX = new Float32Array(this.count);
    this.scatterY = new Float32Array(this.count);
    this.delay = new Float32Array(this.count);

    var maxRadius = Math.hypot(N * 0.5, N * 0.5);
    for (var pointIndex = 0; pointIndex < this.count; pointIndex++) {
      var point = points[pointIndex];
      this.x[pointIndex] = point.x;
      this.y[pointIndex] = point.y;
      this.distance[pointIndex] = point.distance;

      var gradientStep = 1.2;
      var gradientX = sampleSDF(this.sdf, point.u + gradientStep, point.v)
        - sampleSDF(this.sdf, point.u - gradientStep, point.v);
      var gradientY = sampleSDF(this.sdf, point.u, point.v + gradientStep)
        - sampleSDF(this.sdf, point.u, point.v - gradientStep);
      var gradientLength = Math.hypot(gradientX, gradientY) || 1;
      this.emboss[pointIndex] = (gradientX + gradientY) / gradientLength * 0.0707;

      var delta1X = point.u - firstCenterX;
      var delta1Y = point.v - firstCenterY;
      var radius1 = Math.hypot(delta1X, delta1Y) || 1;
      this.wave1[pointIndex] = radius1 * 0.165;
      this.unit1X[pointIndex] = delta1X / radius1;
      this.unit1Y[pointIndex] = delta1Y / radius1;

      var delta2X = point.u - secondCenterX;
      var delta2Y = point.v - secondCenterY;
      var radius2 = Math.hypot(delta2X, delta2Y) || 1;
      this.wave2[pointIndex] = radius2 * 0.19;
      this.unit2X[pointIndex] = delta2X / radius2;
      this.unit2Y[pointIndex] = delta2Y / radius2;
      this.wind[pointIndex] = (point.u + point.v) * 0.045;

      var centeredX = point.u - N * 0.5;
      var centeredY = point.v - N * 0.5;
      this.planeX[pointIndex] = centeredX * 0.14;
      this.planeY[pointIndex] = centeredY * 0.14;
      this.bayer[pointIndex] = BAYER8[((point.gridY & 7) << 3) | (point.gridX & 7)];
      this.random[pointIndex] = hash2(point.gridX, point.gridY);
      this.shimmer[pointIndex] = hash2(point.gridX + 911, point.gridY + 337) * TAU;
      this.textureHash[pointIndex] = hash2(point.gridX + 1733, point.gridY + 71);
      this.variant[pointIndex] = (hash2(point.gridX + 421, point.gridY + 1259) * 4) | 0;

      var accentHash = hash2(point.gridX + 57, point.gridY + 2803);
      var edgeDistance = Math.abs(point.distance);
      var accentProbability = 0.030 + 0.095 * Math.exp(-edgeDistance * edgeDistance / 7);
      this.accent[pointIndex] = accentHash < accentProbability
        ? 1 + (((accentHash * 1000) | 0) % 3)
        : 0;

      var radius = Math.hypot(centeredX, centeredY);
      var angle = Math.atan2(centeredY, centeredX) + (this.random[pointIndex] - 0.5) * 1.3;
      var scatterDistance = (26 + this.random[pointIndex] * 64) / logoScale;
      this.scatterX[pointIndex] = Math.cos(angle) * scatterDistance;
      this.scatterY[pointIndex] = Math.sin(angle) * scatterDistance;
      this.delay[pointIndex] = (radius / maxRadius) * INTRO_SPREAD * 0.72
        + this.textureHash[pointIndex] * INTRO_SPREAD * 0.28;
    }

    this.bakeAtlas();
    this.dirty = false;
    if (!this.ready) {
      this.ready = true;
      if (!this.startedAt && this.active) this.startedAt = nowMillis();
      if (typeof this.options.onReady === "function") this.options.onReady(this);
    }
    return !this.destroyed;
  };

  DitherController.prototype.drawLivingFrame = function (
      time, introTime, exitEase, opacityOnly, sceneScatterEase, transitionDx, transitionDy) {
    var context = this.context;
    var dpr = this.dpr;
    var tile = this.atlasTile;
    var breathValue = breath(time);
    var swell = 3.4 * breathValue;
    var gain = 1 + 0.09 * breathValue;
    var morph = 0.5 + 0.5 * breathValue;
    var scaleK = 1 + 0.011 * breathValue;
    var sizeK = 1 + 0.11 * breathValue;
    var phase3 = 3 * OMEGA * time;
    var phase4 = 4 * OMEGA * time;
    var phase5 = 5 * OMEGA * time;
    var phase9 = 9 * OMEGA * time;
    var windPhase = 2 * OMEGA * time + 0.9;
    var planeCosine = Math.cos(OMEGA * time);
    var planeSine = Math.sin(OMEGA * time);
    var auraGain = 0.5 + 0.5 * breathValue;
    var auraK = 0.30 * (0.25 + 0.75 * auraGain);
    var waveK = 0.065 * (0.55 + 0.45 * Math.sin(OMEGA * time - Math.PI * 0.5));
    var displacement = this.cell * 0.42
      * (0.62 + 0.38 * Math.sin(OMEGA * time + 1.3));
    var gustX = this.cell * 1.30 * 0.84;
    var gustY = this.cell * 1.30 * 0.54;
    var depthDrop = 0.40 - 0.35 * this.fill;
    var hasIntro = typeof introTime === "number"
      && introTime < INTRO_SPREAD + INTRO_DUR;
    var tileCss = tile / (dpr * this.atlasScale);
    var drawSize = tileCss * sizeK;
    var halfSize = drawSize * 0.5;
    var accentPulse1 = 0.50 + 0.50 * Math.sin(2 * OMEGA * time + 2.1);
    var accentPulse2 = 0.50 + 0.50 * Math.sin(2 * OMEGA * time + 4.19);
    var accentPulse3 = 0.50 + 0.50 * Math.sin(2 * OMEGA * time + 6.28);

    context.setTransform(dpr, 0, 0, dpr, 0, 0);
    context.clearRect(0, 0, this.width, this.height);

    for (var index = 0; index < this.count; index++) {
      var signedDistance = this.distance[index] - swell;
      var radialWave1 = sinL(this.wave1[index] - phase3);
      var radialWave2 = sinL(this.wave2[index] + phase5);
      var gust = sinL(this.wind[index] - windPhase);
      var gustBand = gust > 0 ? gust * gust * gust : 0;
      var tone;
      var aura = false;

      if (signedDistance > 1.4) {
        tone = (auraK + 0.11 * gustBand) * edgeL(signedDistance * 0.84);
        aura = true;
      } else {
        var depth = clamp(-signedDistance * 0.0833, 0, 1);
        var cover = Math.min(1, (1.4 - signedDistance) * 0.4167);
        tone = (0.97 - depthDrop * depth * depth * (3 - 2 * depth)) * cover;
        tone += this.emboss[index] * edgeL(signedDistance);
        var wave = radialWave1 + radialWave2
          + sinL(this.planeX[index] * planeCosine
            + this.planeY[index] * planeSine - phase4);
        tone += wave * waveK * cover;
        tone += 0.04 * sinL(phase9 + this.shimmer[index]) + 0.05 * gustBand;
        tone *= gain;
      }

      if (tone <= 0.02) continue;
      tone = Math.min(1, tone);
      var threshold = this.bayer[index] * (1 - morph) + this.random[index] * morph;
      var levelValue = tone * 5;
      var level = levelValue | 0;
      if (levelValue - level > threshold) level++;
      if (level <= 0) continue;
      level = Math.min(5, level);

      var slot;
      if (aura) slot = 17 + this.variant[index];
      else if (level >= 2 && level <= 3
          && this.textureHash[index] < this.brailleProbability) {
        slot = (level === 2 ? 5 : 9) + (this.variant[index] & 3);
      } else {
        slot = level - 1;
      }

      var accent = this.accent[index];
      var waveAmplitude = aura ? displacement * 1.9 : displacement;
      var gustScale = aura ? 1.6 : 0.55;
      var flutter = 0.75 + 0.25 * sinL(phase9 + this.shimmer[index]);
      var x = this.centerX + (this.x[index] - this.centerX) * scaleK
        + (radialWave1 * this.unit1X[index]
          + 0.8 * radialWave2 * this.unit2X[index]) * waveAmplitude
        + gustBand * gustX * gustScale * flutter;
      var y = this.centerY + (this.y[index] - this.centerY) * scaleK
        + (radialWave1 * this.unit1Y[index]
          + 0.8 * radialWave2 * this.unit2Y[index]) * waveAmplitude
        + gustBand * gustY * gustScale * flutter;
      var alpha = this.sceneAlpha;

      if (sceneScatterEase > 0) {
        x += this.scatterX[index] * sceneScatterEase * 1.35
          + transitionDx * sceneScatterEase * sceneScatterEase;
        y += this.scatterY[index] * sceneScatterEase * 1.35
          + transitionDy * sceneScatterEase * sceneScatterEase;
        alpha *= 1 - sceneScatterEase;
        if (alpha < 0.02) continue;
      }

      if (hasIntro) {
        var intro = clamp((introTime - this.delay[index]) / INTRO_DUR, 0, 1);
        var introEase = easeOutCubic(intro);
        x += this.scatterX[index] * (1 - introEase);
        y += this.scatterY[index] * (1 - introEase);
        alpha *= Math.sqrt(introEase);
        if (alpha < 0.02) continue;
      }

      if (exitEase > 0) {
        if (!opacityOnly) {
          x += this.scatterX[index] * exitEase;
          y += this.scatterY[index] * exitEase;
        }
        alpha *= 1 - exitEase;
        if (alpha < 0.02) continue;
      }

      if (accent === 1) alpha *= 0.42 + 0.58 * accentPulse1;
      else if (accent === 2) alpha *= 0.42 + 0.58 * accentPulse2;
      else if (accent === 3) alpha *= 0.42 + 0.58 * accentPulse3;

      context.globalAlpha = alpha;
      context.drawImage(this.atlas,
        slot * tile, accent * tile, tile, tile,
        x - halfSize, y - halfSize, drawSize, drawSize);
    }
    context.globalAlpha = 1;
    this.bitmapDirty = false;
  };

  DitherController.prototype.recordFrameCost = function (milliseconds) {
    this.governorEma += (milliseconds - this.governorEma) * 0.05;
    if (this.governorCooldown > 0) {
      this.governorCooldown--;
      return;
    }
    if (this.governorEma > 12.5 && this.densityK > 0.55) {
      this.densityK = Math.max(0.55, this.densityK * 0.85);
      this.governorCooldown = 120;
      this.governorEma = 8;
      this.dirty = true;
    }
  };

  DitherController.prototype.draw = function (now) {
    this.frameId = 0;
    if (this.destroyed || this.suspended || !this.inViewport || document.hidden
        || (!this.active && !this.needsFrame)) return;
    if (this.canvas.isConnected === false) { this.destroy(); return; }
    if (playbackActive && this.active) { this.freeze(); return; }

    var renderOnce = this.needsFrame;
    this.needsFrame = false;
    if (!this.prepare()) {
      this.needsFrame = renderOnce;
      return;
    }

    var reduced = this.isReducedMotion();
    if (this.active && !reduced && this.lastFrameAt
        && now - this.lastFrameAt < FRAME_INTERVAL) {
      if (renderOnce) this.needsFrame = true;
      this.schedule();
      return;
    }
    this.lastFrameAt = now;
    if (!this.startedAt) this.startedAt = now;

    var frameStartedAt = nowMillis();
    var time = (now * 0.001) % T_LOOP;
    var keepRunning = false;

    if (this.mode === "transition" && this.transition) {
      if (!this.transition.startedAt) this.transition.startedAt = now;
      if (!this.transition.initialized) {
        var targetBox = Math.min(this.width, this.height)
          * (this.transition.targetScene === "corner" ? 0.86 : 0.46);
        var targetCenterX;
        var targetCenterY;
        if (this.transition.targetScene === "corner") {
          targetCenterX = this.transition.anchor === "left"
            ? targetBox * 0.38
            : this.width - targetBox * 0.38;
          targetCenterY = this.height - targetBox * 0.28;
        } else {
          var compact = this.width <= 860;
          targetCenterX = this.width * (compact ? 0.50 : 0.28);
          targetCenterY = this.height * (compact ? 0.28 : 0.44);
        }
        this.transitionDx = (targetCenterX - this.centerX) * 0.22;
        this.transitionDy = (targetCenterY - this.centerY) * 0.22;
        this.transition.initialized = true;
      }
      var transitionProgress = clamp(
        (now - this.transition.startedAt) / this.transition.duration, 0, 1);
      if (transitionProgress >= 1) {
        this.completeSceneTransition(true, now);
        if (this.prepare()) this.drawLivingFrame(time, 0, 0, false, 0, 0, 0);
        keepRunning = true;
      } else {
        var scatterEase = transitionProgress * transitionProgress;
        this.drawLivingFrame(
          time, null, 0, false, scatterEase, this.transitionDx, this.transitionDy);
        keepRunning = true;
      }
    } else if (this.mode === "exit") {
      var exitDuration = reduced ? 160 : 240;
      var exitProgress = clamp((now - this.startedAt) / exitDuration, 0, 1);
      var exitEase = cubicBezierYForX(exitProgress, 0.23, 1, 0.32, 1);
      this.drawLivingFrame(STILL_TIME, null, exitEase, reduced, 0, 0, 0);
      if (exitProgress < 1) {
        keepRunning = true;
      } else {
        this.active = false;
        this.mode = "exited";
        this.releaseSurface();
      }
    } else if (reduced) {
      this.drawLivingFrame(STILL_TIME, null, 0, true, 0, 0, 0);
      this.active = false;
      this.mode = "static";
    } else if (this.mode === "intro") {
      var introTime = Math.max(0, (now - this.startedAt) * 0.001);
      if (introTime < INTRO_SPREAD + INTRO_DUR) {
        this.drawLivingFrame(time, introTime, 0, false, 0, 0, 0);
        keepRunning = true;
      } else if (this.options.breathing === true) {
        this.mode = "breathing";
        this.drawLivingFrame(time, null, 0, false, 0, 0, 0);
        keepRunning = true;
      } else {
        this.drawLivingFrame(STILL_TIME, null, 0, false, 0, 0, 0);
        this.active = false;
        this.requestedActive = false;
        this.mode = "static";
      }
    } else if (this.mode === "breathing" && this.requestedActive
        && this.options.breathing === true) {
      this.drawLivingFrame(time, null, 0, false, 0, 0, 0);
      keepRunning = true;
    } else {
      this.drawLivingFrame(STILL_TIME, null, 0, false, 0, 0, 0);
      this.active = false;
      this.mode = "static";
    }

    if (this.active && !reduced) this.recordFrameCost(nowMillis() - frameStartedAt);
    if (keepRunning) {
      this.active = true;
      this.schedule();
    } else if (this.needsFrame) {
      this.schedule();
    } else {
      this.releaseRenderData();
    }
  };

  DitherController.prototype.destroy = function () {
    if (this.destroyed) return;
    this.destroyed = true;
    this.cancel();
    this.active = false;
    this.requestedActive = false;
    this.transition = null;
    this.needsFrame = false;
    this.mode = "destroyed";
    this.releaseSurface();
    if (this.visibilityObserver) this.visibilityObserver.disconnect();
    this.visibilityObserver = null;
    global.removeEventListener("resize", this.onResize);
    document.removeEventListener("visibilitychange", this.onVisibility);
    global.removeEventListener("fadappearancechange", this.onMotionChange);
    global.removeEventListener("fadplaybackchange", this.onPlaybackChange);
    if (this.source) this.source.removeEventListener("load", this.onSourceLoad);
    if (this.reducedMotion) {
      if (this.reducedMotion.removeEventListener)
        this.reducedMotion.removeEventListener("change", this.onMotionChange);
      else if (this.reducedMotion.removeListener)
        this.reducedMotion.removeListener(this.onMotionChange);
    }
    if (this.canvas && this.canvas.__fadDitherController === this)
      delete this.canvas.__fadDitherController;
    if (sourceSdfCache && this.source) sourceSdfCache.delete(this.source);
    for (var index = sourceSdfFallback.length - 1; index >= 0; index--) {
      if (sourceSdfFallback[index].source === this.source) sourceSdfFallback.splice(index, 1);
    }
    this.sdf = null;
    this.context = null;
    this.canvas = null;
    this.source = null;
    this.options = null;
    this.reducedMotion = null;
  };

  global.FADDitherEngine = {
    mount: function (canvas, source, options) {
      if (!canvas || !source || !canvas.getContext) return null;
      if (canvas.__fadDitherController) canvas.__fadDitherController.destroy();
      var controller = new DitherController(canvas, source, options || {});
      if (!controller.destroyed) canvas.__fadDitherController = controller;
      return controller;
    },
    setPlaying: function (isPlaying) {
      var playing = isPlaying === true;
      if (playbackActive === playing) return;
      playbackActive = playing;
      global.dispatchEvent(new global.Event("fadplaybackchange"));
    }
  };
}(window));

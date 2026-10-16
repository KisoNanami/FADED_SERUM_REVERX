(function(root){
  'use strict';
  var clamp=function(x,a,b){return Math.max(a,Math.min(b,x));};
  function copy(x){return JSON.parse(JSON.stringify(x));}
  function sample(points,x){
    if(!points.length)return 0;
    var endpoint=points.findIndex(function(p){return p.x>=1;});if(endpoint<0)endpoint=points.length-1;
    if(x>=1)return points[endpoint].y;
    var left=0,right=endpoint;
    while(left+1<right){var mid=left+Math.floor((right-left)/2);if(points[mid].x<=x)left=mid;else right=mid;}
    var a=points[left],b=points[right],u=b.x>a.x?clamp((x-a.x)/(b.x-a.x),0,1):1;
    return a.y+(b.y-a.y)*(Math.abs(a.c)<1e-5?u:Math.expm1(a.c*u)/Math.expm1(a.c));
  }
  function sampled(values,x,endpoint,exclusive){
    if(x>=1)return endpoint==null?values[values.length-1]:endpoint;
    if(endpoint==null)endpoint=values[values.length-1];
    var pos=clamp(x,0,1)*(exclusive?values.length:values.length-1),i=Math.min(Math.floor(pos),values.length-1);
    return values[i]+((i+1<values.length?values[i+1]:endpoint)-values[i])*(pos-i);
  }
  function simplify(points,tolerance){
    var keep=new Set([0,points.length-1]),stack=[[0,points.length-1]];
    while(stack.length){var range=stack.pop(),a=points[range[0]],b=points[range[1]],worst=tolerance,index=-1;
      for(var i=range[0]+1;i<range[1];i++){var u=(points[i].x-a.x)/(b.x-a.x),error=Math.abs(points[i].y-(a.y+(b.y-a.y)*u));if(error>worst){worst=error;index=i;}}
      if(index>=0){keep.add(index);stack.push([range[0],index],[index,range[1]]);}
    }
    return points.filter(function(_,i){return keep.has(i);});
  }
  function Session(adapter){this.adapter=adapter;this.undoStack=[];this.redoStack=[];this.stroke=null;this.tool='draw';this.previousTool='step';this.grid=16;this.zoom=1;this.frame=0;this.disposed=false;this.timeFrames=[];this.timeCursor=0;this.timeBytes=0;this.timeLimit=30000;this.timeBudget=16*1024*1024;this.timeEnabled=adapter.kind==='lfo'||adapter.kind==='waveform'||adapter.kind==='filter';if(this.timeEnabled)this.timeCapture(true);}
  // Drawing time advances only between input samples in the same stroke.
  // Long gaps and the time between strokes contribute no idle history.
  function packState(state){var meta=copy(state),points=meta.points||[],samples=meta.samples||[];delete meta.points;delete meta.samples;return {meta:meta,points:new Float64Array(points.flatMap(function(p){return [p.x,p.y,p.c,p.xb,p.yb,p.slot==null?-1:p.slot,p.cb==null?-1:p.cb,p.cp==null?.5:p.cp];})),samples:new Float64Array(samples)};}
  function unpackState(frame){var state=Object.assign({points:[],samples:Array.from(frame.samples)},copy(frame.meta));for(var i=0;i<frame.points.length;i+=8){var p={x:frame.points[i],y:frame.points[i+1],c:frame.points[i+2],xb:frame.points[i+3],yb:frame.points[i+4]};if(frame.points[i+5]>=0)p.slot=frame.points[i+5];if(frame.points[i+6]>=0){p.cb=frame.points[i+6];p.cp=frame.points[i+7];}state.points.push(p);}return state;}
  Session.prototype.timeBranch=function(){while(this.timeFrames.length&&this.timeFrames[this.timeFrames.length-1].at>this.timeCursor)this.timeBytes-=this.timeFrames.pop().bytes;};
  Session.prototype.timeCapture=function(force){
    if(!this.timeEnabled)return;var last=this.timeFrames[this.timeFrames.length-1];if(!force&&last&&this.timeCursor-last.at<100)return;
    var frame={at:this.timeCursor,state:packState(this.adapter.get()),partial:null},stroke=this.stroke;
    if(stroke&&stroke.scratch&&stroke.high>=stroke.low)frame.partial={low:stroke.low,high:stroke.high,scratch:new Float64Array(stroke.scratch),steps:Array.from(stroke.steps),tool:this.tool,grid:this.grid};
    frame.bytes=frame.state.points.byteLength+frame.state.samples.byteLength+512+(frame.partial?frame.partial.scratch.byteLength+frame.partial.steps.length*16:0);
    if(last&&last.at===frame.at)this.timeBytes-=this.timeFrames.pop().bytes;
    this.timeFrames.push(frame);this.timeBytes+=frame.bytes;
    while(this.timeFrames.length>1&&(frame.at-this.timeFrames[0].at>this.timeLimit||this.timeBytes>this.timeBudget))this.timeBytes-=this.timeFrames.shift().bytes;
  };
  Session.prototype.timeBegin=function(e){if(!this.timeEnabled)return;this.timeBranch();this.timeCapture(true);this.timeStart=this.timeCursor;this.timeBaseline=this.timeFrames[this.timeFrames.length-1];this.timeStamp=Number(e.timeStamp);this.timePosition=null;};
  Session.prototype.timeInput=function(e){
    if(!this.timeEnabled)return;var stamp=Number(e.timeStamp),position=[e.clientX,e.clientY],moved=!this.timePosition||position[0]!==this.timePosition[0]||position[1]!==this.timePosition[1],delta=stamp-this.timeStamp;
    if(moved&&Number.isFinite(delta)&&delta>0&&delta<=1000)this.timeCursor+=delta;
    if(Number.isFinite(stamp))this.timeStamp=stamp;this.timePosition=position;this.timeCapture(false);
  };
  Session.prototype.timeEnd=function(){if(!this.timeEnabled)return;if(this.timeCursor===this.timeStart)this.timeCursor+=1;this.timeCapture(true);this.timePosition=null;};
  Session.prototype.timeCancel=function(){if(!this.timeEnabled)return;this.timeCursor=this.timeStart;this.timeBranch();if(this.timeBaseline){var last=this.timeFrames[this.timeFrames.length-1];if(!last||last.at!==this.timeBaseline.at){this.timeFrames.push(this.timeBaseline);this.timeBytes+=this.timeBaseline.bytes;}}this.timePosition=null;};
  Session.prototype.recordEdit=function(){if(!this.timeEnabled)return;var last=null;for(var i=this.timeFrames.length-1;i>=0;i--)if(this.timeFrames[i].at<=this.timeCursor){last=this.timeFrames[i];break;}if(last&&!last.partial&&JSON.stringify(unpackState(last.state))===JSON.stringify(this.adapter.get()))return;this.timeBranch();this.timeCursor+=1;this.timeCapture(true);};
  Session.prototype.timeRange=function(){return {start:this.timeFrames.length?this.timeFrames[0].at:0,end:this.timeFrames.length?this.timeFrames[this.timeFrames.length-1].at:0,cursor:this.timeCursor,bytes:this.timeBytes};};
  Session.prototype.seekTime=function(at){
    if(!this.timeEnabled||!this.timeFrames.length)return false;var range=this.timeRange();at=clamp(at,range.start,range.end);
    // A browser range may serialize value with fewer digits than its max.
    // Resolve that roundoff to the final frame, rather than a partial stroke.
    if(range.end-at<=16*Number.EPSILON*Math.max(1,Math.abs(range.end)))at=range.end;
    var frame=this.timeFrames[0];for(var i=1;i<this.timeFrames.length&&this.timeFrames[i].at<=at;i++)frame=this.timeFrames[i];
    if(at===this.timeCursor&&!this.stroke)return false;var before=copy(this.adapter.get()),stroke=this.stroke;
    try{this.adapter.set(unpackState(frame.state));if(frame.partial)this.adapter.compile({low:frame.partial.low,high:frame.partial.high,scratch:Array.from(frame.partial.scratch),steps:new Map(frame.partial.steps)},frame.partial);}
    catch(error){this.adapter.set(before);this.adapter.error(error.message);return false;}
    // Finalize an interrupted stroke's ordinary Undo baseline, never the rewind.
    if(stroke)this.remember(stroke.before);this.stroke=null;this.timeCursor=at;this.timePosition=null;this.adapter.paint();return true;
  };
  Session.prototype.rewindSecond=function(){return this.seekTime(this.timeCursor-1000);};
  Session.prototype.remember=function(before){this.undoStack.push(before||copy(this.adapter.get()));if(this.undoStack.length>48)this.undoStack.shift();this.redoStack=[];};
  Session.prototype.undo=function(redo){if(this.stroke)this.cancel('undo');var from=redo?this.redoStack:this.undoStack,to=redo?this.undoStack:this.redoStack;if(!from.length)return false;to.push(copy(this.adapter.get()));if(to.length>48)to.shift();this.adapter.set(from.pop());return true;};
  Session.prototype.begin=function(e,rect,range){
    if(this.stroke||this.disposed||e.button>0||!(rect.width>0&&rect.height>0))return false;
    this.stroke={pointer:e.pointerId,before:copy(this.adapter.get()),rect:{left:rect.left,top:rect.top,width:rect.width,height:rect.height},range:range||1,previous:null,low:1,high:0,scratch:null,steps:new Map()};
    if(this.adapter.kind==='lfo'){var s=this.stroke;s.scratch=Array.from({length:2049},function(_,i){return this.adapter.sample(i/2048);},this);}
    this.timeBegin(e);this.consume(e);return !!this.stroke;
  };
  Session.prototype.events=function(e){
    var events=[];try{if(typeof e.getCoalescedEvents==='function')events=e.getCoalescedEvents()||[];}catch(_){}
    // Consume immediately, retaining no event queue. Parent endpoint is included once.
    if(events.length>4096){this.cancel('budget');this.adapter.error('budgetExceeded');return [];}events.push(e);var seen=new Set();return events.filter(function(p){var key=[p.timeStamp,p.clientX,p.clientY].join(':');if(seen.has(key))return false;seen.add(key);return true;});
  };
  Session.prototype.consume=function(e){
    if(!this.stroke||e.pointerId!==this.stroke.pointer)return false;
    this.events(e).forEach(function(p){
      if(!Number.isFinite(p.clientX)||!Number.isFinite(p.clientY))return;
      var s=this.stroke,r=s.rect,x=clamp((p.clientX-r.left)/r.width,0,1),y=this.adapter.kind==='waveform'?clamp((.5-(p.clientY-r.top)/r.height)*s.range/.42,-1,1):clamp(.5+(.5-(p.clientY-r.top)/r.height)*s.range,0,1);
      var a=s.previous||{x:x,y:y},n=this.adapter.kind==='lfo'?2048:this.adapter.values().length-1,low=Math.round(Math.min(a.x,x)*n),high=Math.round(Math.max(a.x,x)*n);
      s.low=Math.min(s.low,low/n);s.high=Math.max(s.high,high/n);
      if(this.tool==='step'){var first=clamp(Math.floor(Math.min(a.x,x)*this.grid),0,this.grid-1),last=clamp(Math.floor(Math.max(a.x,x)*this.grid),0,this.grid-1);for(var cell=first;cell<=last;cell++)s.steps.set(cell,y);s.low=Math.min(s.low,first/this.grid);s.high=Math.max(s.high,(last+1)/this.grid);}
      var values=this.adapter.kind==='lfo'?s.scratch:this.adapter.values();
      for(var i=low;i<=high;i++){var u=Math.abs(x-a.x)<1e-12?1:clamp((i/n-a.x)/(x-a.x),0,1);values[i]=a.y+(y-a.y)*u;}
      if(this.tool==='step')s.steps.forEach(function(value,cell){for(var j=Math.ceil(cell*n/this.grid);j<=Math.min(n,Math.floor((cell+1)*n/this.grid));j++)values[j]=value;},this);
      s.previous={x:x,y:y};this.timeInput(p);
    },this);this.adapter.paint();return true;
  };
  Session.prototype.finish=function(e){
    if(!this.stroke||e.pointerId!==this.stroke.pointer)return false;this.consume(e);if(!this.stroke)return false;var stroke=this.stroke;this.stroke=null;
    try{if(this.adapter.kind==='lfo')this.adapter.compile(stroke,this);this.remember(stroke.before);this.timeEnd();this.adapter.changed();}
    catch(error){this.adapter.set(stroke.before);this.timeCancel();this.adapter.error(error.message);}
    this.adapter.paint();return true;
  };
  Session.prototype.cancel=function(reason){if(!this.stroke)return false;var before=this.stroke.before;this.stroke=null;this.adapter.set(before);this.timeCancel();this.adapter.paint();return true;};
  Session.prototype.toggleTool=function(){var next=this.tool==='draw'?this.previousTool:'draw';if(this.tool!=='draw')this.previousTool=this.tool;this.tool=next;};
  Session.prototype.dispose=function(){this.cancel('teardown');this.disposed=true;if(this.frame)root.cancelAnimationFrame(this.frame);};
  function sampledGeometry(state){
    var points=state.samples.map(function(y,i){return {x:i/(state.sampleGrid==='exclusive'?state.samples.length:state.samples.length-1),y:y,c:0,xb:-1,yb:-1};});
    if(points[points.length-1].x<1)points.push({x:1,y:state.endpoint,c:0,xb:-1,yb:-1});
    var loop=-1,x=state.loopStart;if(Number.isFinite(x)&&x>=0&&x<1){loop=points.findIndex(function(p){return p.x===x;});if(loop<0){var anchor={x:x,y:sampled(state.samples,x,state.endpoint,state.sampleGrid==='exclusive'),c:0,xb:-1,yb:-1};points.push(anchor);points.sort(function(a,b){return a.x-b.x;});loop=points.indexOf(anchor);}}
    return {points:points,loop:loop};
  }
  function compileLfo(stroke,state,session){
    var low=stroke.low,high=stroke.high,points=state.points||[],loop=state.loop;
    if(high<low)return;
    if(!points.length&&state.loopStart>=0){var original=sampledGeometry(state);points=original.points;loop=original.loop;}
    if(high===low){low=Math.max(0,low-1/2048);high=Math.min(1,high+1/2048);}
    points.forEach(function(p,i){if((p.x>=low&&p.x<=high||i===loop&&p.x<low&&i+1<points.length&&points[i+1].x>low)&&(p.xb>=0||p.yb>=0||p.cb>=0||i===loop))throw Error('protectedNode');
      if(i+1<points.length&&p.x<high&&points[i+1].x>low&&(p.xb>=0||p.yb>=0||p.cb>=0||points[i+1].xb>=0||points[i+1].yb>=0||points[i+1].cb>=0))throw Error('protectedNode');});
    var oldSample=function(x){return points.length?sample(points,x):sampled(state.samples,x,state.endpoint,state.sampleGrid==='exclusive');};
    // Split exponential segments analytically. Untouched portions retain the exact curve.
    var left=points.filter(function(p){return p.x<low;}).map(copy),right=points.filter(function(p){return p.x>high;}).map(copy);
    if(!points.length){var original=state.samples.map(function(y,i){return {x:i/(state.sampleGrid==='exclusive'?state.samples.length:state.samples.length-1),y:y,c:0,xb:-1,yb:-1};});if(original[original.length-1].x<1)original.push({x:1,y:state.endpoint,c:0,xb:-1,yb:-1});left=original.filter(function(p){return p.x<low;});right=original.filter(function(p){return p.x>high;});}
    function coefficientAt(x){for(var i=0;i+1<points.length;i++)if(points[i].x<=x&&points[i+1].x>x)return points[i].c*(points[i+1].x-x)/(points[i+1].x-points[i].x);return 0;}
    if(left.length){var a=left[left.length-1],index=points.reduce(function(last,p,i){return p.x<low?i:last;},-1),next=points[index+1];if(next&&next.x>a.x)a.c*= (low-a.x)/(next.x-a.x);left.push({x:low,y:oldSample(low),c:0,xb:-1,yb:-1});}
    else if(low>0){left=[{x:0,y:oldSample(0),c:0,xb:-1,yb:-1},{x:low,y:oldSample(low),c:0,xb:-1,yb:-1}];}
    var drawn=[];
    if(session.tool==='step'){
      for(var cell=Math.floor(low*session.grid);cell<Math.min(session.grid,Math.ceil(high*session.grid));cell++){
        var start=cell/session.grid,end=(cell+1)/session.grid,y=stroke.steps.has(cell)?stroke.steps.get(cell):oldSample(start);
        drawn.push({x:start,y:y,c:0,xb:-1,yb:-1},{x:end,y:y,c:0,xb:-1,yb:-1});}
    }else{
      for(var k=Math.round(low*2048);k<=Math.round(high*2048);k++)drawn.push({x:k/2048,y:stroke.scratch[k],c:0,xb:-1,yb:-1});
      drawn=simplify(drawn,.001);
    }
    if(right.length)right.unshift({x:high,y:oldSample(high),c:coefficientAt(high),xb:-1,yb:-1});
    else if(high<1)right=[{x:high,y:oldSample(high),c:0,xb:-1,yb:-1},{x:1,y:oldSample(1),c:0,xb:-1,yb:-1}];
    var result=left.concat(drawn,right);if(result.length>480)throw Error('pointLimit');
    if(result[0].x!==0||result[result.length-1].x!==1)throw Error('invalid');
    if(loop>=0){var anchor=points[loop];loop=result.findIndex(function(p){return p.x===anchor.x&&p.y===anchor.y&&p.c===anchor.c&&p.xb===anchor.xb&&p.yb===anchor.yb;});if(loop<0)throw Error('protectedNode');}
    if(session.tool!=='step')for(var j=Math.round(low*2048);j<=Math.round(high*2048);j++)if((j/2048<high||high===1)&&Math.abs(sample(result,j/2048)-stroke.scratch[j])>.00101)throw Error('pointLimit');
    state.points=result;state.loop=loop;state.conversionRequired=false;
  }
  root.FADCurveEditor={Session:Session,sample:sample,sampled:sampled,simplify:simplify,compileLfo:compileLfo,copy:copy,sampledGeometry:sampledGeometry};
  if(typeof module!=='undefined')module.exports=root.FADCurveEditor;
})(typeof window!=='undefined'?window:globalThis);

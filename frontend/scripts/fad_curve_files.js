(function(root){
  'use strict';
  var active=null,sequence=0,prefix=Math.random().toString(36).slice(2,10),pending=null;
  function config(){return root.__FAD_ASSET_EDIT_CONFIG__||{};}
  function notice(message){var c=config();if(c.notice)c.notice(message);}
  function text(key){return root.FADI18n.text('asset.error.'+key);}
  function command(operation,values){
    var c=config(),cmd=Object.assign({version:1,request:prefix+'-'+(++sequence),operation:operation,context:active&&active.context||(c.controls&&c.controls().assetContext)||''},values||{});
    pending={cmd:cmd,resolve:null,timer:0,started:performance.now()};
    return new Promise(function(resolve){pending.resolve=resolve;
      function send(){if(!pending||pending.cmd!==cmd)return;if(performance.now()-pending.started>=30000){var timed=pending;pending=null;timed.resolve({status:'timeout'});return;}if(!c.send||!c.send('asset-edit|'+encodeURIComponent(JSON.stringify(cmd)))){var done=pending;pending=null;done.resolve({status:'nativeUnavailable'});return;}pending.timer=setTimeout(send,5000);}
      send();
    });
  }
  async function importFiles(files,target){
    if(active||pending){notice(text('fileBusy'));return false;}
    files=Array.from(files||[]);if(!files.length||files.length>32||files.reduce(function(n,f){return n+f.size;},0)>16*1024*1024){notice(text('budgetExceeded'));return false;}
    if(target>=0&&files.length!==1){notice(text('oneCurve'));return false;}
    var decision=root.FADAssetEditor?await root.FADAssetEditor.beforeImport(target):{allowed:true};if(!decision.allowed)return false;
    active={cancelled:false,results:[],context:decision.context||(config().controls&&config().controls().assetContext)||''};var batch=active;
    var panel=document.createElement('div');panel.className='curve-import-progress';panel.innerHTML='<output></output><button>'+root.FADI18n.escape(root.FADI18n.text('asset.cancel'))+'</button>';document.body.appendChild(panel);panel.querySelector('button').onclick=function(){batch.cancelled=true;};
    for(var file of files){
      if(batch.cancelled)break;panel.querySelector('output').textContent=file.name;
      if(!/\.fadcurve$/i.test(file.name)||file.size<1||file.size>1024*1024){batch.results.push({name:file.name,status:'formatUnsupported'});continue;}
      var token=prefix+'-'+(++sequence),reply=await command('upload-begin',{token:token,name:file.name.replace(/\.fadcurve$/i,''),size:file.size,target:target});
      if(reply.status!=='ok'){batch.results.push({name:file.name,status:reply.status});continue;}
      var failed='';
      try{for(var offset=0,index=0;offset<file.size;offset+=49152,index++){
        if(batch.cancelled){failed='cancelled';break;}
        var bytes=new Uint8Array(await file.slice(offset,Math.min(file.size,offset+49152)).arrayBuffer()),binary='';
        for(var i=0;i<bytes.length;i++)binary+=String.fromCharCode(bytes[i]);
        reply=await command('upload-chunk',{token:token,chunk:index,data:btoa(binary)});if(reply.status!=='ok'){failed=reply.status;break;}
      }
      }catch(_){failed='permissionDenied';}
      if(failed)await command('upload-cancel',{token:token});
      if(!failed){reply=await command('upload-end',{token:token});failed=reply.status;}
      batch.results.push({name:file.name,status:failed||'ok'});
    }
    active=null;panel.remove();
    notice(batch.results.map(function(r){return r.name+' · '+(r.status==='ok'?root.FADI18n.text('asset.saved'):text(r.status));}).join('\n'));
    return !batch.cancelled&&batch.results.length===files.length&&batch.results.every(function(r){return r.status==='ok';});
  }
  root.FADCurveFiles={import:importFiles,
    receive:function(reply){if(!pending||!reply||reply.request!==pending.cmd.request)return false;var done=pending;pending=null;clearTimeout(done.timer);if(active&&reply.context)active.context=reply.context;done.resolve(reply);return true;},
    choose:function(target){var input=document.createElement('input');input.type='file';input.accept='.fadcurve';input.multiple=target<0;input.hidden=true;document.body.appendChild(input);input.onchange=function(){var files=Array.from(input.files||[]);input.remove();importFiles(files,target);};input.oncancel=function(){input.remove();};input.click();},
    cancel:function(){if(active)active.cancelled=true;}
  };
})(window);

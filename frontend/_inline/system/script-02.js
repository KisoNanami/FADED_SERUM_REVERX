(function(){
'use strict';
function tr(key,parameters){return window.FADI18n.text(key,null,parameters);}



function translateSystem(value){return window.FADI18n.value(value);}
var token='__FAD_SYSTEM_TOKEN__',sequence=0,pending=0,pendingTimer=0,connected=false;
var currentPage='__FAD_SYSTEM_PAGE__',selectedCheckpoint='',entriesKey='',assetsKey='',lastInstallVersion='',dither=null,ditherActive=false,ditherTimer=0,panicReportPreviousFocus=null;


var debugClickCount=0,debugClickAt=0;
var state={preferences:{},account:{},updates:{},recovery:{entries:[],assets:[]},audio:{},visible:true};
function el(id){return document.getElementById(id);}function text(id,value){var node=el(id),next=String(value==null?'—':value);if(node&&node.textContent!==next)node.textContent=next;if(node&&id==='status-message')node.title=next;}
function show(id,visible){el(id).hidden=!visible;}function can(id,enabled){el(id).disabled=!enabled;}
function date(value){if(!value)return '—';var d=new Date(Number(value));return isNaN(d.getTime())?'—':d.toLocaleString(document.documentElement.lang||'zh-CN',{year:'numeric',month:'2-digit',day:'2-digit',hour:'2-digit',minute:'2-digit'});}
function bytes(value){return value>=1048576?(value/1048576).toFixed(1)+' MB':Math.ceil(value/1024)+' KB';}
function bridgeAvailable(){var j=window.__JUCE__,f=j&&j.initialisationData&&j.initialisationData.__juce__registeredGlobalEventIds;return !!(j&&j.backend&&j.backend.emitEvent&&f&&f.indexOf('fadNativeCommand')>=0);}
function request(action,extra){
 if(!bridgeAvailable()){if(action!=='ready'&&action!=='ui-diagnostic')text('status-message',tr("common.native_connection_unavailable_the_action_did_not_run"));return false;}
 if(action!=='ready'&&!connected)return false;
 var payload=Object.assign({action:action,token:token,id:++sequence},extra||{});
 if(action!=='ui-diagnostic'){pending=payload.id;
 if(pendingTimer)clearTimeout(pendingTimer);
 pendingTimer=setTimeout(function(){if(pending===payload.id){pending=0;text('status-message',tr("common.the_device_has_not_confirmed_the_action_try_again"));}},10000);}
 window.__JUCE__.backend.emitEvent('fadNativeCommand',JSON.stringify(payload));return true;
}
function setPage(page,notify){
 if(['account','preferences','audio','updates','recovery','about','debug'].indexOf(page)<0)return;
 if(page==='debug'&&!(state.debug&&state.debug.enabled))return;
 var changed=page!==currentPage;currentPage=page;el('mobile-page').value=page;
 document.querySelectorAll('.page').forEach(function(node){node.hidden=node.id!=='page-'+page;});
 document.querySelectorAll('.nav [data-page]').forEach(function(button){var active=button.dataset.page===page;button.setAttribute('aria-selected',active?'true':'false');button.tabIndex=active?0:-1;});
 if(changed)el('main').scrollTop=0;
 syncDither();if(notify)request('page',{page:page});
}
function tapDebugVersion(now){
 if(!connected){debugClickCount=0;return false;}
 if(debugClickCount===0||now-debugClickAt>1200||now<debugClickAt)debugClickCount=0;
 debugClickAt=now;
 if(++debugClickCount<3)return false;
 debugClickCount=0;return request('debug-enable');
}
function renderDebug(){
 var debug=state.debug||{},enabled=!!debug.enabled;
 show('debug-tab',enabled);show('debug-option',enabled);el('debug-option').disabled=!enabled;
 if(!enabled&&currentPage==='debug')setPage('preferences',false);
 text('debug-recording',debug.historyEnabled?tr("common.recording"):tr("common.not_recorded"));
 text('debug-history-state',debug.historyEnabled?tr("common.recorded")+Math.floor(Number(debug.observedMs||0)/1000)+tr("common.seconds_last_5_minutes"):tr("common.off_2"));
 text('debug-send-state',debug.sendAllowed?tr("common.allowed"):tr("common.not_allowed"));text('debug-report-id',debug.reportId||'—');
 text('debug-local-state',debug.hasLocalBundle?tr("common.saved"):tr("common.none_2"));text('debug-report-status',debug.message||tr("common.no_feedback_yet"));
 el('debug-report-status').classList.toggle('error',!!debug.error);
 can('debug-send',connected&&!debug.busy);can('bug-anonymous',connected&&!debug.busy);
 can('bug-history-enable',connected&&!debug.historyEnabled);can('bug-history-disable',connected&&!!debug.historyEnabled);
 can('bug-revoke',connected&&!!debug.sendAllowed);can('bug-retry',connected&&!!debug.sendAllowed&&!debug.busy);
 can('bug-local-open',connected&&!!debug.hasLocalBundle);can('bug-clear-local',connected&&!debug.busy);
 can('export-debug-bundle',connected&&!state.fileDialog);
}
function diagnosticErrorKind(error){
 var kind=error&&error.name;
 return ['Error','TypeError','ReferenceError','SyntaxError','RangeError','URIError','EvalError'].indexOf(kind)>=0?kind:'UnhandledRejection';
}
function syncDither(){
 var active=currentPage==='about'&&state.visible&&!state.fileDialog&&!document.hidden;
 if(active&&!dither&&window.FADDitherEngine)dither=window.FADDitherEngine.mount(el('about-dither'),el('dither-source'),{columns:40,maxDpr:1});
 if(dither&&active!==ditherActive){ditherActive=active;if(ditherTimer)clearTimeout(ditherTimer);ditherTimer=0;if(active){dither.setActive(true);ditherTimer=setTimeout(function(){ditherTimer=0;dither.freeze();},1400);}else dither.suspend();}
}
function renderWindowScale(){
 var select=el('window-size-select'),percent=Math.round(Number(state.windowScale||100)),value=String(percent);
 var custom=select.querySelector('[data-current-scale]');if(custom)custom.remove();
 if(!Array.from(select.options).some(function(option){return option.value===value;})){var option=document.createElement('option');option.value=value;option.textContent=value+'%';option.dataset.currentScale='1';option.disabled=true;select.append(option);}
 select.value=value;select.disabled=!connected;
}
function renderMidi(){
 var midi=state.midi||{},enabled=el('mpe-enabled'),range=el('mpe-bend-range');
 enabled.checked=!!midi.mpeEnabled;enabled.disabled=!connected;
 if(document.activeElement!==range)range.value=String(midi.mpePitchBendRange||48);
 range.disabled=!connected||!midi.mpeEnabled;
}
function midiChange(input){
 var value=input.type==='checkbox'?(input.checked?1:0):Number(input.value);
 if(input.dataset.midi==='global.mpePitchBendRange'&&(!Number.isInteger(value)||value<1||value>96)){renderMidi();return false;}
 return request('midi-parameter',{parameter:input.dataset.midi,value:value});
}
function renderRecovery(){
 var recovery=state.recovery||{},entries=recovery.entries||[],key=JSON.stringify(entries);
 if(key!==entriesKey){entriesKey=key;var list=el('recovery-list');list.replaceChildren();
 if(!entries.some(function(item){return item.id===selectedCheckpoint;}))selectedCheckpoint=entries.length?entries[0].id:'';
 entries.forEach(function(item){var li=document.createElement('li'),b=document.createElement('button'),copy=document.createElement('span'),label=document.createElement('span'),sub=document.createElement('small'),size=document.createElement('span');
 b.className='checkpoint';b.type='button';b.dataset.checkpoint=item.id;label.textContent=date(item.time);label.className='mono';sub.textContent=tr("common.instance")+item.id.split('/')[0].slice(0,8);size.textContent=bytes(item.size);size.className='mono muted';copy.append(label,sub);b.append(copy,size);li.append(b);list.append(li);});}
 document.querySelectorAll('[data-checkpoint]').forEach(function(b){b.setAttribute('aria-pressed',b.dataset.checkpoint===selectedCheckpoint?'true':'false');});
 show('recovery-empty',entries.length===0);can('preview-recovery',connected&&!!selectedCheckpoint&&!recovery.preview&&!recovery.otherPreview&&!state.fileDialog);
 var assets=recovery.assets||[],assetKey=JSON.stringify(assets);
 if(assetKey!==assetsKey){assetsKey=assetKey;var area=el('asset-list');area.replaceChildren();assets.forEach(function(item){var row=document.createElement('div'),name=document.createElement('strong'),copy=document.createElement('div'),label=document.createElement('span'),note=document.createElement('small'),button=document.createElement('button');row.className='asset-row';name.textContent=item.oscillator===0?'OSC A':'OSC B';label.textContent=item.slot===0?tr("common.built_in_wavetable"):tr("common.user_slot_2")+item.slot;note.textContent=item.slot===0?tr("common.included_with_the_software"):item.loaded?tr("common.material_loaded_it_can_move_with_the_full_sound_state"):tr("common.material_missing_relink_it");if(!item.loaded)note.style.color='var(--rust)';button.textContent=tr("common.relink");button.dataset.relink=String(item.oscillator);button.dataset.slot=String(item.slot);copy.append(label,note);row.append(name,copy,button);area.append(row);});}
 document.querySelectorAll('[data-relink]').forEach(function(b){b.disabled=!connected||Number(b.dataset.slot)===0||recovery.preview||recovery.otherPreview||state.fileDialog;});
 ['export-sound','import-sound'].forEach(function(id){can(id,connected&&!recovery.preview&&!recovery.otherPreview&&!state.fileDialog);});
 show('recovery-bar',!!recovery.preview);text('recovery-notice',recovery.error|| (recovery.otherPreview?tr("common.another_sound_preview_is_active_keep_or_discard_it_before"):tr("common.restore_first_opens_an_undoable_preview_keep_commits_it_to")));el('recovery-notice').classList.toggle('error',!!recovery.error);
}
function renderMacStore(){
 var catalog=state.macStore||state.iosStore,iosPending=!!state.iosStore&&['loadingProduct','purchasing','restoring','deferred'].indexOf(String(state.account&&state.account.commerceOperation))>=0,visible=!!catalog&&!!state.standalone,english=document.documentElement.dataset.fadLanguage==='en';
 show('mas-storefront',visible);if(!visible)return;
 var heading=state.iosStore?'mobile.store.full_unlock':'common.choose_your_edition',scope=state.iosStore?'mobile.store.unlock_scope':'common.the_app_store_provides_product_details_and_pricing_check_the';
 el('mas-product-heading').dataset.i18n=heading;text('mas-product-heading',tr(heading));el('mas-product-scope').dataset.i18n=scope;text('mas-product-scope',tr(scope));show('mas-manage',!state.iosStore);
 var signature=JSON.stringify([catalog,state.account&&state.account.active,state.account&&state.account.plans,iosPending,connected,document.documentElement.dataset.fadLanguage]);
 var container=el('mas-products');
 if(container.dataset.signature!==signature){
 container.dataset.signature=signature;container.replaceChildren();
 (catalog.products||[]).forEach(function(product){
 var row=document.createElement('div');row.className='row';
 var copy=document.createElement('div');copy.className='row-copy';
 var name=document.createElement('strong');name.dataset.localization='literal';name.textContent=product.name;
 var description=document.createElement('small');description.dataset.localization='literal';description.textContent=product.description;
 var price=document.createElement('span');price.className='mono';price.dataset.localization='literal';
 var units=(document.documentElement.dataset.fadLanguage==='en'?['day(s)','week(s)','month(s)','year(s)']:[tr("common.days"),tr("common.weeks"),tr("common.months"),tr("common.years")]);
 price.textContent=product.price+(product.subscription?' / '+product.periodCount+' '+units[product.periodUnit]:'');
 copy.append(name,description,price);
 if(product.id.endsWith('.cid.monthly')){var credits=document.createElement('small');credits.textContent=tr("common.1_000_shared_credits_month_sol_per_1m_tokens_input");copy.append(credits);}
 if(product.subscription){var renewal=document.createElement('small');renewal.textContent=tr("common.renews_automatically_manage_or_cancel_in_your_app_store_account");copy.append(renewal);}
 var button=document.createElement('button');button.className='primary';button.dataset.product=product.id;
 var plans=String(state.account&&state.account.plans||'').replace(/^plans:/,'').split(',');var owned=!!(state.account&&state.account.active)&&(state.iosStore?true:product.id.endsWith('.full')?plans.indexOf('synth_buyout')>=0:product.id.endsWith('.cid.monthly')?plans.indexOf('fadlab_arena')>=0:plans.indexOf('synth_monthly')>=0);
 button.textContent=owned?(tr("common.current_plan")):(tr("common.purchase"));button.disabled=!connected||!!catalog.loading||!!catalog.busy||iosPending||owned;
 row.append(copy,button);container.append(row);
 });}
 text('mas-message',window.FADI18n.value((state.iosStore&&(state.account||{}).commerceError)||(state.iosStore&&(state.account||{}).commerceOperation==='deferred'?tr('mobile.store.awaiting_approval'):'')||(catalog.loading?tr('mobile.store.loading'):'')||(state.account&&state.account.active?tr("common.this_device_s_access_is_verified_continue_creating"):catalog.message)||(catalog.products&&catalog.products.length?tr("common.review_the_product_details_before_continuing"):tr("common.product_unavailable_try_again"))));
 can('mas-reload',connected&&!catalog.loading&&!catalog.busy&&!iosPending);can('mas-restore',connected&&!catalog.busy&&!iosPending);
}
function render(){
 var account=state.account||{},prefs=state.preferences||{},updates=state.updates||{},audio=state.audio||{},store=!!state.storeManaged;
 var accountName=account.name&&!account.email?translateSystem(account.name):account.name;
 renderMacStore();renderDebug();
 document.querySelectorAll('[data-action="close"]').forEach(function(button){button.disabled=!connected;});
 show('ai-consent-sheet',!!state.aiConsentRequired);text('ai-consent-state',state.aiConsent?tr("common.ai_cloud_processing_allowed"):tr("common.not_allowed_no_ai_requests_are_sent"));text('ai-decline',state.aiConsent?tr("common.withdraw_consent"):tr("common.not_now_2"));can('ai-allow',connected&&!state.aiConsent);can('ai-decline',connected);
 show('directory-grant-row',!!state.directoryGrantsAvailable);
 text('preset-directory-paths',(state.presetDirectories||[]).join('\n'));
 can('grant-preset-directory',connected&&!!state.directoryGrantsAvailable&&!state.fileDialog);
 document.querySelectorAll('[data-bind="version"]').forEach(function(n){n.textContent=state.version||'—';});
 text('identity-name',accountName||'FAD Synth');text('identity-status',!account.loaded?tr("common.read_account_status"):account.entitlementStatus==='refund_pending'?tr("common.refund_in_progress"):account.trial?tr("common.term_license"):account.verified?tr("common.access_valid"):tr("common.verification_required"));el('account-lamp').classList.toggle('active',!!account.verified);
 text('channel-label',store?'APP STORE':'DIRECT EDITION');
 text('account-name',accountName||tr("common.this_device"));text('account-email',account.email||'');show('account-email',!!account.email);show('account-profile-note',!account.email);text('account-profile-note',store?tr("common.apple_manages_purchases_and_access"):account.verified?tr("common.no_email_provided_open_the_account_panel_for_details"):tr("common.connect_an_account_to_view_user_details"));text('account-device',account.deviceCode|| (store?tr("common.shared_app_store_access"):tr("common.no_connections")));
 text('account-channel',store?'App Store':tr("common.app_store"));text('account-badge',!account.loaded?tr("common.loading_3"):account.entitlementStatus==='refund_pending'?tr("common.refund_in_progress"):account.trial?tr("common.term_license"):account.verified?tr("common.verified"):tr("common.unverified"));el('account-badge').classList.toggle('active',!!account.verified);
 text('account-plan',account.plan||'—');text('account-expiry',!account.loaded?tr("common.load_access_status_to_view_its_expiry"):account.entitlementStatus==='refund_pending'?tr("common.refund_in_progress"):account.synthPermanent&&account.expiresAt?tr('common.access_permanent_with_alt_expiry',{date:date(account.expiresAt)}):account.permanent||account.synthPermanent?tr("common.permanent_access"):account.expiresAt?tr("common.valid_until")+date(account.expiresAt):tr("common.no_expiry_specified"));
 text('account-notice',!account.loaded?tr("common.reading_device_access_status"):account.error?account.error+(account.errorCode?' ['+account.errorCode+']':''):account.verified?'':tr("common.access_verification_is_incomplete"));
 show('account-notice',!account.loaded||!!account.error||!account.verified);
 el('account-notice').classList.toggle('error',!!account.loaded&&!!account.hasError);
 var paidExpiry=['FAD-CHK-SUBSCRIPTION-EXPIRED','FAD-AUTH-SUBSCRIPTION-EXPIRED'].indexOf(account.errorCode||'')>=0;
 var accessExpired=paidExpiry&&account.subscriptionExpiryVerifiedThisProcess===true
   || ['FAD-CHK-TRIAL-EXPIRED','FAD-AUTH-TRIAL-EXPIRED','FAD-MAS-TRANSACTION-EXPIRED'].indexOf(account.errorCode||'')>=0;
 var expiresAt=Number(account.expiresAt)||0,graceUntil=Number(account.graceUntil)||0,now=Date.now();
 var accessGrace=account.verified&&expiresAt>0&&expiresAt<=now&&graceUntil>now;
 var accessExpiring=account.verified&&expiresAt>now&&expiresAt-now<=7*86400000&&!account.permanent;
 var renewalKind=accessExpired?'expired':accessGrace?(account.synthPermanent?'alt_grace':'grace'):accessExpiring?(account.synthPermanent?'alt_expiring':'expiring'):'';
 show('account-renewal-notice',!!renewalKind);
 if(renewalKind){text('account-renewal-title',tr('common.access_'+renewalKind+'_title'));text('account-renewal-copy',tr('common.access_'+renewalKind+'_copy',{date:new Date(expiresAt).toLocaleDateString(document.documentElement.lang)}));}
 show('renew-plan',!!renewalKind&&!store);can('renew-plan',connected&&!store);
 el('renew-plan').dataset.action=account.synthPermanent?'recharge':'renew-plan';
 text('renew-plan',tr(account.synthPermanent?'common.access_recharge_cta':'common.access_plan_cta'));
 can('refresh-account',connected&&account.loaded&&!account.refreshing);text('refresh-account',account.refreshing?tr("common.refreshing"):tr("common.refresh_status"));show('direct-account-actions',!store);show('manage-plan',!store);show('account-store-note',store);show('purchase',!state.macStore&&!state.iosStore&&!!account.purchaseAvailable&&!account.active);show('restore-purchases',!state.macStore&&!state.iosStore&&!!account.restoreAvailable);
 el('direct-account-actions').querySelectorAll('button').forEach(function(b){b.disabled=!connected||!account.loaded;});
 show('quota',!!account.quotaAvailable);text('quota-value',account.remaining+' / '+account.quota);el('quota-meter').style.width=Math.max(0,Math.min(100,Number(account.remaining||0)/Math.max(1,Number(account.quota||0))*100))+'%';
 can('point-recharge',connected&&account.loaded&&!store);show('point-balance',!store&&!!account.verified);show('point-balance-status',!account.fadPoints);var points=account.fadPoints||{},weekly=points.weekly,prepaid=points.prepaid;
 ['weekly-points','prepaid-points','prepaid-spent','prepaid-held'].forEach(function(id,index){var balance=index===0?weekly:prepaid,key=index===2?'spentUnits':index===3?'reservedUnits':'remainingUnits',units=balance&&balance[key];text(id,Number.isSafeInteger(units)&&units>=0?(units/30000).toFixed(4).replace(/\.?0+$/,''):'—');});
 var weeklyUnits=weekly&&weekly.remainingUnits,prepaidUnits=prepaid&&prepaid.remainingUnits;
 var pointKnown=Number.isSafeInteger(weeklyUnits)&&weeklyUnits>=0||Number.isSafeInteger(prepaidUnits)&&prepaidUnits>=0;
 var pointEmpty=!!account.verified&&pointKnown&&(Number(weeklyUnits)||0)+(Number(prepaidUnits)||0)===0;
 show('point-empty-notice',pointEmpty);el('point-balance').dataset.pointsEmpty=pointEmpty?'true':'false';
 document.querySelectorAll('[data-pref="appearance"]').forEach(function(b){b.setAttribute('aria-pressed',prefs.appearance===b.dataset.value?'true':'false');b.disabled=!connected;});
 document.querySelectorAll('[data-preference]').forEach(function(input){var value=prefs[input.dataset.preference];if(input.type==='checkbox')input.checked=!!value;else if(document.activeElement!==input)input.value=value||'system';input.disabled=!connected;});
 document.querySelectorAll('[data-privacy]').forEach(function(input){input.checked=!!prefs[input.dataset.privacy];input.disabled=!connected||(input.dataset.privacy==='tasteUpload'&&!prefs.taste);});
 show('privacy-sheet',state.analyticsAvailable!==false);show('privacy-unavailable',state.analyticsAvailable===false);
 show('size-row',!!state.windowSizing);renderWindowScale();
 show('audio-connection',!!state.standalone);renderMidi();
 text('audio-owner',state.standalone?tr("common.standalone_app"):tr("common.managed_by_host"));text('audio-status',audio.status||tr("common.read_device_status"));text('audio-description',state.standalone?tr("common.reconnect_after_device_changes_or_open_audio_settings"):tr("common.set_audio_midi_and_buffer_options_in_your_daw_host"));text('sample-rate',audio.sampleRate?Number(audio.sampleRate).toLocaleString()+' Hz':tr("common.not_started"));text('block-size',audio.blockSize?audio.blockSize+' samples':'—');can('audio-settings',connected&&state.standalone);can('retry-audio',connected&&state.standalone);can('undo',connected&&audio.canUndo);can('redo',connected&&audio.canRedo);
 text('current-version','v'+(state.version||'—'));text('update-title',store?tr("common.update_through_the_app_store"):updates.busy?updates.message:updates.available?tr('common.update_to_version',{version:updates.version}):updates.fresh?tr('common.update_current'):updates.message||tr("common.updates_have_not_been_checked"));text('update-meta',store?tr("common.apple_s_distribution_channel_provides_updates"):tr("common.current_version")+(state.version||'—')+' · '+(updates.fresh?tr('common.update_metadata_verified'):updates.lastCheck?tr("common.last_checked")+date(updates.lastCheck):tr("common.no_check_history")));
 show('check-updates',!store);can('check-updates',connected&&updates.downloadSupported!==false&&!updates.busy);show('store-update-note',store);

 text('about-platform',state.platform||'—');text('about-format',state.format||'—');text('diagnostic',state.diagnostic||tr("common.waiting_for_device_state"));
 text('status-message',translateSystem(state.message)|| (state.fileDialog?tr("common.complete_the_action_in_the_system_file_window"):connected?'':tr("common.connecting_to_device_state")));text('connection-label',connected?'LOCAL':'CONNECTING');el('connection-lamp').style.background=connected?'var(--pine)':'var(--brass)';
 renderRecovery();syncDither();
}

function receive(next){
 if(!next||next.schemaVersion!==1)return;
 if(connected&&pending&&Number(next.ack)<pending)return;
 var returnDebugFocus=!!(state.debug&&state.debug.enabled&&next.debug&&!next.debug.enabled&&el('page-debug').contains(document.activeElement));
 connected=next.connected===true;state=next;
 var prefs=next.preferences||{},root=document.documentElement;
 if(prefs.appearanceResolved&&root.dataset.fadAppearance!==prefs.appearanceResolved){root.dataset.fadAppearance=prefs.appearanceResolved;window.dispatchEvent(new Event('fadappearancechange'));}
 if(prefs.languageResolved&&root.dataset.fadLanguage!==prefs.languageResolved&&window.FADApplyLanguage)window.FADApplyLanguage(prefs.languageResolved);
 if(Number(next.ack)>=pending){pending=0;if(pendingTimer)clearTimeout(pendingTimer);}
 if(next.page)setPage(next.page,false);render();
 if(returnDebugFocus&&el('debug-unlock').offsetParent!==null)el('debug-unlock').focus();
}
document.addEventListener('click',function(event){var b=event.target.closest('button');if(!b||b.disabled)return;
 var panicReportAction=b.dataset.panicReport;
 if(panicReportAction){el('panic-report-prompt').hidden=true;if(panicReportPreviousFocus&&panicReportPreviousFocus.isConnected)panicReportPreviousFocus.focus();if(panicReportAction==='send')request('debug-report-panic');return;}
 if(b.dataset.page){setPage(b.dataset.page,true);return;}
 if(b.dataset.pref){request('preference',{key:b.dataset.pref,value:b.dataset.value});return;}
 if(b.dataset.checkpoint){selectedCheckpoint=b.dataset.checkpoint;renderRecovery();return;}
 if(b.dataset.relink){request('relink',{oscillator:Number(b.dataset.relink)});return;}
 if(b.dataset.product){if(state.iosStore)request('purchase');else request('mas-purchase',{productId:b.dataset.product});return;}
 var action=b.dataset.action;if(!action)return;
 if(action==='debug-tap'){tapDebugVersion(Date.now());return;}
 if(action==='ai-allow'||action==='ai-decline'){request('ai-consent',{value:action==='ai-allow'});return;}
 if(action==='panic'){panicReportPreviousFocus=b;if(request('panic')){el('panic-report-prompt').hidden=false;el('panic-report-prompt').querySelector('[data-panic-report="dismiss"]').focus();}return;}
 var extra={};if(action==='preview-recovery')extra.checkpoint=selectedCheckpoint;
 request(action,extra);
});
document.addEventListener('change',function(event){var input=event.target;
 if(input.id==='mobile-page'){setPage(input.value,true);return;}
 if(input.dataset.preference)request('preference',{key:input.dataset.preference,value:input.type==='checkbox'?(input.checked?'1':'0'):input.value});
 else if(input.dataset.privacy)request('privacy',{key:input.dataset.privacy,value:input.checked});
 else if(input.dataset.midi)midiChange(input);
 else if(input.id==='window-size-select'&&input.value)request('window-size',{size:input.value});
});
document.addEventListener('keydown',function(event){
 if(event.key==='Escape'&&!el('panic-report-prompt').hidden){el('panic-report-prompt').hidden=true;if(panicReportPreviousFocus&&panicReportPreviousFocus.isConnected)panicReportPreviousFocus.focus();event.preventDefault();return;}
 if(event.key==='Escape'&&event.target.tagName!=='SELECT'){event.preventDefault();request('close');return;}
 if(event.target.matches('.nav [data-page]')&&['ArrowDown','ArrowUp','ArrowRight','ArrowLeft','Home','End'].indexOf(event.key)>=0){event.preventDefault();var tabs=Array.from(document.querySelectorAll('.nav [data-page]')).filter(function(tab){return !tab.hidden;}),i=tabs.indexOf(event.target);i=event.key==='Home'?0:event.key==='End'?tabs.length-1:(i+(['ArrowDown','ArrowRight'].indexOf(event.key)>=0?1:tabs.length-1))%tabs.length;tabs[i].focus();setPage(tabs[i].dataset.page,true);}
 if(event.key==='Tab'){var focusable=Array.from(document.querySelectorAll('button:not(:disabled),input:not(:disabled),select:not(:disabled),summary')).filter(function(n){return n.offsetParent!==null&&n.tabIndex>=0;});var first=focusable[0],last=focusable[focusable.length-1];if(event.shiftKey&&document.activeElement===first){event.preventDefault();last.focus();}else if(!event.shiftKey&&document.activeElement===last){event.preventDefault();first.focus();}}
});
document.addEventListener('contextmenu',function(event){if(!event.target.closest('input,pre,.selectable'))event.preventDefault();});
document.addEventListener('dragstart',function(event){event.preventDefault();});document.addEventListener('visibilitychange',syncDither);window.addEventListener('fadappearancechange',syncDither);
window.addEventListener('error',function(event){request('ui-diagnostic',{code:'FAD-WEB-SCRIPT-ERROR',line:Math.max(0,Math.min(1000000,Number(event.lineno)||0)),column:Math.max(0,Math.min(1000000,Number(event.colno)||0)),errorKind:diagnosticErrorKind(event.error)});});
window.addEventListener('unhandledrejection',function(event){request('ui-diagnostic',{code:'FAD-WEB-UNHANDLED-REJECTION',errorKind:diagnosticErrorKind(event.reason)});});
window.FADSystem={translate:translateSystem,receive:receive,setRuntimeActive:function(active){state.visible=!!active;if(!active){debugClickCount=0;el('panic-report-prompt').hidden=true;}if(!active&&pendingTimer){clearTimeout(pendingTimer);pending=0;}syncDither();},setPage:function(page){setPage(page,false);}};
function refreshSystemLanguage(next){render();}
var unsubscribeLanguage=window.FADI18n.onChange(refreshSystemLanguage,"system");
window.addEventListener("pagehide",function(){unsubscribeLanguage();});
window.addEventListener("pageshow",function(event){if(event.persisted)unsubscribeLanguage=window.FADI18n.onChange(refreshSystemLanguage,"system");});
setPage(currentPage,false);render();
(function connect(attempt){if(bridgeAvailable()){window.__JUCE__.backend.addEventListener('__juce__complete',function(result){if(result.promiseId===pending&&result.result===false){pending=0;render();text('status-message',tr("common.action_did_not_run_retry_or_check_the_current_state"));}});request('ready');return;}if(attempt<100)setTimeout(function(){connect(attempt+1);},100);}(0));
}());

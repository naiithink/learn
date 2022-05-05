<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">

<html>

<head>
<title>Document Conventions</title>
<meta http-equiv="Description" content="Document conventions for Keil on-line product manuals.">
<meta name="Description" content="Document conventions for Keil on-line product manuals.">
<meta name="KeilToolSet" content="Generic">
<meta name="Keywords" content="document, manual, user, guide, conventions">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"><script type="text/javascript">window.NREUM||(NREUM={});NREUM.info = {"beacon":"bam.nr-data.net","errorBeacon":"bam.nr-data.net","licenseKey":"c4afc5d5b0","applicationID":"38150566","transactionName":"Y1FVbUUFDBAAU0xeXVobeVZFCQMPCEpdUx0e","queueTime":0,"applicationTime":41,"ttGuid":"A2DB1EFB7C0AA381","agent":""}</script><script type="text/javascript">(window.NREUM||(NREUM={})).init={ajax:{deny_list:["bam.nr-data.net"]}};(window.NREUM||(NREUM={})).loader_config={licenseKey:"c4afc5d5b0",applicationID:"38150566"};window.NREUM||(NREUM={}),__nr_require=function(t,e,n){function r(n){if(!e[n]){var i=e[n]={exports:{}};t[n][0].call(i.exports,function(e){var i=t[n][1][e];return r(i||e)},i,i.exports)}return e[n].exports}if("function"==typeof __nr_require)return __nr_require;for(var i=0;i<n.length;i++)r(n[i]);return r}({1:[function(t,e,n){function r(){}function i(t,e,n,r){return function(){return s.recordSupportability("API/"+e+"/called"),o(t+e,[u.now()].concat(c(arguments)),n?null:this,r),n?void 0:this}}var o=t("handle"),a=t(10),c=t(11),f=t("ee").get("tracer"),u=t("loader"),s=t(4),d=NREUM;"undefined"==typeof window.newrelic&&(newrelic=d);var p=["setPageViewName","setCustomAttribute","setErrorHandler","finished","addToTrace","inlineHit","addRelease"],l="api-",v=l+"ixn-";a(p,function(t,e){d[e]=i(l,e,!0,"api")}),d.addPageAction=i(l,"addPageAction",!0),d.setCurrentRouteName=i(l,"routeName",!0),e.exports=newrelic,d.interaction=function(){return(new r).get()};var m=r.prototype={createTracer:function(t,e){var n={},r=this,i="function"==typeof e;return o(v+"tracer",[u.now(),t,n],r),function(){if(f.emit((i?"":"no-")+"fn-start",[u.now(),r,i],n),i)try{return e.apply(this,arguments)}catch(t){throw f.emit("fn-err",[arguments,this,t],n),t}finally{f.emit("fn-end",[u.now()],n)}}}};a("actionText,setName,setAttribute,save,ignore,onEnd,getContext,end,get".split(","),function(t,e){m[e]=i(v,e)}),newrelic.noticeError=function(t,e){"string"==typeof t&&(t=new Error(t)),s.recordSupportability("API/noticeError/called"),o("err",[t,u.now(),!1,e])}},{}],2:[function(t,e,n){function r(t){if(NREUM.init){for(var e=NREUM.init,n=t.split("."),r=0;r<n.length-1;r++)if(e=e[n[r]],"object"!=typeof e)return;return e=e[n[n.length-1]]}}e.exports={getConfiguration:r}},{}],3:[function(t,e,n){var r=!1;try{var i=Object.defineProperty({},"passive",{get:function(){r=!0}});window.addEventListener("testPassive",null,i),window.removeEventListener("testPassive",null,i)}catch(o){}e.exports=function(t){return r?{passive:!0,capture:!!t}:!!t}},{}],4:[function(t,e,n){function r(t,e){var n=[a,t,{name:t},e];return o("storeMetric",n,null,"api"),n}function i(t,e){var n=[c,t,{name:t},e];return o("storeEventMetrics",n,null,"api"),n}var o=t("handle"),a="sm",c="cm";e.exports={constants:{SUPPORTABILITY_METRIC:a,CUSTOM_METRIC:c},recordSupportability:r,recordCustom:i}},{}],5:[function(t,e,n){function r(){return c.exists&&performance.now?Math.round(performance.now()):(o=Math.max((new Date).getTime(),o))-a}function i(){return o}var o=(new Date).getTime(),a=o,c=t(12);e.exports=r,e.exports.offset=a,e.exports.getLastTimestamp=i},{}],6:[function(t,e,n){function r(t){return!(!t||!t.protocol||"file:"===t.protocol)}e.exports=r},{}],7:[function(t,e,n){function r(t,e){var n=t.getEntries();n.forEach(function(t){"first-paint"===t.name?l("timing",["fp",Math.floor(t.startTime)]):"first-contentful-paint"===t.name&&l("timing",["fcp",Math.floor(t.startTime)])})}function i(t,e){var n=t.getEntries();if(n.length>0){var r=n[n.length-1];if(u&&u<r.startTime)return;var i=[r],o=a({});o&&i.push(o),l("lcp",i)}}function o(t){t.getEntries().forEach(function(t){t.hadRecentInput||l("cls",[t])})}function a(t){var e=navigator.connection||navigator.mozConnection||navigator.webkitConnection;if(e)return e.type&&(t["net-type"]=e.type),e.effectiveType&&(t["net-etype"]=e.effectiveType),e.rtt&&(t["net-rtt"]=e.rtt),e.downlink&&(t["net-dlink"]=e.downlink),t}function c(t){if(t instanceof y&&!w){var e=Math.round(t.timeStamp),n={type:t.type};a(n),e<=v.now()?n.fid=v.now()-e:e>v.offset&&e<=Date.now()?(e-=v.offset,n.fid=v.now()-e):e=v.now(),w=!0,l("timing",["fi",e,n])}}function f(t){"hidden"===t&&(u=v.now(),l("pageHide",[u]))}if(!("init"in NREUM&&"page_view_timing"in NREUM.init&&"enabled"in NREUM.init.page_view_timing&&NREUM.init.page_view_timing.enabled===!1)){var u,s,d,p,l=t("handle"),v=t("loader"),m=t(9),g=t(3),y=NREUM.o.EV;if("PerformanceObserver"in window&&"function"==typeof window.PerformanceObserver){s=new PerformanceObserver(r);try{s.observe({entryTypes:["paint"]})}catch(h){}d=new PerformanceObserver(i);try{d.observe({entryTypes:["largest-contentful-paint"]})}catch(h){}p=new PerformanceObserver(o);try{p.observe({type:"layout-shift",buffered:!0})}catch(h){}}if("addEventListener"in document){var w=!1,b=["click","keydown","mousedown","pointerdown","touchstart"];b.forEach(function(t){document.addEventListener(t,c,g(!1))})}m(f)}},{}],8:[function(t,e,n){function r(t,e){if(!i)return!1;if(t!==i)return!1;if(!e)return!0;if(!o)return!1;for(var n=o.split("."),r=e.split("."),a=0;a<r.length;a++)if(r[a]!==n[a])return!1;return!0}var i=null,o=null,a=/Version\/(\S+)\s+Safari/;if(navigator.userAgent){var c=navigator.userAgent,f=c.match(a);f&&c.indexOf("Chrome")===-1&&c.indexOf("Chromium")===-1&&(i="Safari",o=f[1])}e.exports={agent:i,version:o,match:r}},{}],9:[function(t,e,n){function r(t){function e(){t(c&&document[c]?document[c]:document[o]?"hidden":"visible")}"addEventListener"in document&&a&&document.addEventListener(a,e,i(!1))}var i=t(3);e.exports=r;var o,a,c;"undefined"!=typeof document.hidden?(o="hidden",a="visibilitychange",c="visibilityState"):"undefined"!=typeof document.msHidden?(o="msHidden",a="msvisibilitychange"):"undefined"!=typeof document.webkitHidden&&(o="webkitHidden",a="webkitvisibilitychange",c="webkitVisibilityState")},{}],10:[function(t,e,n){function r(t,e){var n=[],r="",o=0;for(r in t)i.call(t,r)&&(n[o]=e(r,t[r]),o+=1);return n}var i=Object.prototype.hasOwnProperty;e.exports=r},{}],11:[function(t,e,n){function r(t,e,n){e||(e=0),"undefined"==typeof n&&(n=t?t.length:0);for(var r=-1,i=n-e||0,o=Array(i<0?0:i);++r<i;)o[r]=t[e+r];return o}e.exports=r},{}],12:[function(t,e,n){e.exports={exists:"undefined"!=typeof window.performance&&window.performance.timing&&"undefined"!=typeof window.performance.timing.navigationStart}},{}],ee:[function(t,e,n){function r(){}function i(t){function e(t){return t&&t instanceof r?t:t?u(t,f,a):a()}function n(n,r,i,o,a){if(a!==!1&&(a=!0),!l.aborted||o){t&&a&&t(n,r,i);for(var c=e(i),f=m(n),u=f.length,s=0;s<u;s++)f[s].apply(c,r);var p=d[w[n]];return p&&p.push([b,n,r,c]),c}}function o(t,e){h[t]=m(t).concat(e)}function v(t,e){var n=h[t];if(n)for(var r=0;r<n.length;r++)n[r]===e&&n.splice(r,1)}function m(t){return h[t]||[]}function g(t){return p[t]=p[t]||i(n)}function y(t,e){l.aborted||s(t,function(t,n){e=e||"feature",w[n]=e,e in d||(d[e]=[])})}var h={},w={},b={on:o,addEventListener:o,removeEventListener:v,emit:n,get:g,listeners:m,context:e,buffer:y,abort:c,aborted:!1};return b}function o(t){return u(t,f,a)}function a(){return new r}function c(){(d.api||d.feature)&&(l.aborted=!0,d=l.backlog={})}var f="nr@context",u=t("gos"),s=t(10),d={},p={},l=e.exports=i();e.exports.getOrSetContext=o,l.backlog=d},{}],gos:[function(t,e,n){function r(t,e,n){if(i.call(t,e))return t[e];var r=n();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(t,e,{value:r,writable:!0,enumerable:!1}),r}catch(o){}return t[e]=r,r}var i=Object.prototype.hasOwnProperty;e.exports=r},{}],handle:[function(t,e,n){function r(t,e,n,r){i.buffer([t],r),i.emit(t,e,n)}var i=t("ee").get("handle");e.exports=r,r.ee=i},{}],id:[function(t,e,n){function r(t){var e=typeof t;return!t||"object"!==e&&"function"!==e?-1:t===window?0:a(t,o,function(){return i++})}var i=1,o="nr@id",a=t("gos");e.exports=r},{}],loader:[function(t,e,n){function r(){if(!P++){var t=M.info=NREUM.info,e=g.getElementsByTagName("script")[0];if(setTimeout(u.abort,3e4),!(t&&t.licenseKey&&t.applicationID&&e))return u.abort();f(O,function(e,n){t[e]||(t[e]=n)});var n=a();c("mark",["onload",n+M.offset],null,"api"),c("timing",["load",n]);var r=g.createElement("script");0===t.agent.indexOf("http://")||0===t.agent.indexOf("https://")?r.src=t.agent:r.src=v+"://"+t.agent,e.parentNode.insertBefore(r,e)}}function i(){"complete"===g.readyState&&o()}function o(){c("mark",["domContent",a()+M.offset],null,"api")}var a=t(5),c=t("handle"),f=t(10),u=t("ee"),s=t(8),d=t(6),p=t(2),l=t(3),v=p.getConfiguration("ssl")===!1?"http":"https",m=window,g=m.document,y="addEventListener",h="attachEvent",w=m.XMLHttpRequest,b=w&&w.prototype,E=!d(m.location);NREUM.o={ST:setTimeout,SI:m.setImmediate,CT:clearTimeout,XHR:w,REQ:m.Request,EV:m.Event,PR:m.Promise,MO:m.MutationObserver};var x=""+location,O={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-1215.min.js"},T=w&&b&&b[y]&&!/CriOS/.test(navigator.userAgent),M=e.exports={offset:a.getLastTimestamp(),now:a,origin:x,features:{},xhrWrappable:T,userAgent:s,disabled:E};if(!E){t(1),t(7),g[y]?(g[y]("DOMContentLoaded",o,l(!1)),m[y]("load",r,l(!1))):(g[h]("onreadystatechange",i),m[h]("onload",r)),c("mark",["firstbyte",a.getLastTimestamp()],null,"api");var P=0}},{}],"wrap-function":[function(t,e,n){function r(t,e){function n(e,n,r,f,u){function nrWrapper(){var o,a,s,p;try{a=this,o=d(arguments),s="function"==typeof r?r(o,a):r||{}}catch(l){i([l,"",[o,a,f],s],t)}c(n+"start",[o,a,f],s,u);try{return p=e.apply(a,o)}catch(v){throw c(n+"err",[o,a,v],s,u),v}finally{c(n+"end",[o,a,p],s,u)}}return a(e)?e:(n||(n=""),nrWrapper[p]=e,o(e,nrWrapper,t),nrWrapper)}function r(t,e,r,i,o){r||(r="");var c,f,u,s="-"===r.charAt(0);for(u=0;u<e.length;u++)f=e[u],c=t[f],a(c)||(t[f]=n(c,s?f+r:r,i,f,o))}function c(n,r,o,a){if(!v||e){var c=v;v=!0;try{t.emit(n,r,o,e,a)}catch(f){i([f,n,r,o],t)}v=c}}return t||(t=s),n.inPlace=r,n.flag=p,n}function i(t,e){e||(e=s);try{e.emit("internal-error",t)}catch(n){}}function o(t,e,n){if(Object.defineProperty&&Object.keys)try{var r=Object.keys(t);return r.forEach(function(n){Object.defineProperty(e,n,{get:function(){return t[n]},set:function(e){return t[n]=e,e}})}),e}catch(o){i([o],n)}for(var a in t)l.call(t,a)&&(e[a]=t[a]);return e}function a(t){return!(t&&t instanceof Function&&t.apply&&!t[p])}function c(t,e){var n=e(t);return n[p]=t,o(t,n,s),n}function f(t,e,n){var r=t[e];t[e]=c(r,n)}function u(){for(var t=arguments.length,e=new Array(t),n=0;n<t;++n)e[n]=arguments[n];return e}var s=t("ee"),d=t(11),p="nr@original",l=Object.prototype.hasOwnProperty,v=!1;e.exports=r,e.exports.wrapFunction=c,e.exports.wrapInPlace=f,e.exports.argsToArray=u},{}]},{},["loader"]);</script>
<meta http-equiv="Content-Language" content="en-us">
<meta http-equiv="Content-Style-Type" content="text/css">
<meta name="Author" content="ARM Ltd and ARM Germany GmbH">
<meta name="Copyright" content="Copyright (c) 2022, ARM Ltd and ARM Germany GmbH.  All rights reserved.">
<link rel="meta" href="/labels.xml" type="application/rdf+xml" title="ICRA labels">

<!--[if IE]>

<![endif]-->
<link rel="stylesheet" type="text/css" href="/_css/t6_ncm.min.css">
<link rel="stylesheet" type="text/css" href="/_css/t5_man.css">
<!--[if lt IE 7]>
<script src="/_js/t6_supersleight.js" type="text/javascript"></script>
<![endif]-->
<link rel="stylesheet" type="text/css" href="/css/popups.min.css?v=20161005">
<link rel="stylesheet" type="text/css" href="/content/fonts/ss-standard.css">
<link rel="stylesheet" type="text/css" href="/content/css/refresh.min.css?v=20161228">
<link rel="stylesheet" type="text/css" href="/Scripts/bootstrap3.3.4/css/bootstrap.min.css">
<script type="text/javascript" src="//code.jquery.com/jquery-1.11.0.min.js"></script><script type="text/javascript" src="//code.jquery.com/jquery-migrate-1.2.1.min.js"></script><script type="text/javascript" src="/Content/Script/selectivizr-min.js"></script><script src="/Content/Script/jquery.placeholderpatch.js" type="text/javascript"></script><script type="text/javascript">var NREUMQ = NREUMQ || []; NREUMQ.push(["mark", "firstbyte", new Date().getTime()]);</script><script type="text/javascript" src="/Scripts/jquery.keil.js?v=20161005"></script><script type="text/javascript" src="/Scripts/angular.min.js"></script><script type="text/javascript" src="/Scripts/angular-sanitize.min.js"></script><script type="text/javascript" src="/Scripts/ui-bootstrap/ui-bootstrap-tpls-0.13.0.min.js"></script><script type="text/javascript" src="/Scripts/angularGrid/angularGrid.min.js"></script><script type="text/javascript" src="/app/src/app.js"></script>
</head>

<body>

<table class="Main" border="0" cellpadding="0" cellspacing="0">
  <tr>
    <td class="Top" colspan="2">
			<table style="border-collapse: collapse">

				<tr><!-- header -->
					<td colspan=2 style="padding: 0;">
						<table class="header">
							<tr>
                                <td>
                                    <a href="/">
                                        <img alt="Keil Logo" src="/Content/images/Arm_KEIL_horizontal_white_LG.png" style="height:45px"/></a>
                                </td>
							</tr>
						</table>
					</td>
                    </tr>
                    <!-- end of .header -->


        <tr class="Menu">
          <td class="LMenu" style="vertical-align:top; width:50%">
<a title="Visit the Keil Home Page" href="/" class="current ss-home"></a><a title="Get Information About Keil Products" href="/product/">Products</a>
<a title="Download Keil products and files" href="/download/">Download</a>
<a title="Upcoming Trade Shows, Workshops, and Seminars" href="/events/">Events</a>
<a title="Get Technical Support for Keil Products" href="/support/">Support</a>
<a title="Videos" href="http://www2.keil.com/video">Videos</a>

          </td>
          <td class="RMenu" style="vertical-align:top; width:50%">
<form name="keilsrchfm" id="keilsrchfm" method="get" action="javascript:redirect();" id="ng-app" data-ng-app="keilapp" data-ng-controller="AdvancedSearchFormController">    <div class="col-sm-12" style="margin-top:5px;margin-bottom:0px;padding-right:0px;">        <div class="col-sm-10" align="right" style="padding-right:0px;">            <label class="ss-search search-icon" for="search">&nbsp;</label>            <input type="text" id="search" placeholder="Search Keil..." style="color:#999;width:300px;" data-ng-model="searchTerm">            <input type="hidden" name="searchTerm" value={{searchTerm}} />            <input type="hidden" name="productFamily" value={{productFamily}} />            <input type="hidden" name="modifiedDays" value={{modifiedDays}} />            <input type="hidden" name="site" value={{getSite()}} />        </div>        <div class="col-sm-2" data-ng-cloak>            <input type="button" data-ng-click="toggleAdvancedOptions()" value={{advancedOptionsBtnText}} class="button" style="width:32px;">            <input type="Submit" value="Go" class="button" style="width:32px;">        </div>    </div>    <div data-ng-show="advancedOptions" class="col-sm-12 ng-hide" style="margin-top:0px;margin-bottom:0px;padding-right:0px;">        <div class="col-sm-10" align="right" style="margin-top:3px;margin-bottom:0px;padding-right:0px;">            <select class="form-control" id="productFamily" data-ng-model="productFamily" style="font-size:14px;border:none;height:20px;width:300px;padding-top:2px;padding-right:2px;padding-bottom:2px;padding-left:20px;">                <option selected value="">All Product Families</option>                <option value="ARM7">ARM7, ARM9, and Cortex-M3 Products</option>                <option value="166">C16x, XC16x, and ST10 Products</option>                <option value="251">C251 and 80C251 Products</option>                <option value="8051">Cx51 and 8051 Products</option>            </select>        </div>        <div class="col-sm-10" align="right" style="margin-top:5px;margin-bottom:5px;padding-right:0px;">            <select class="form-control" id="modifiedDays" data-ng-model="modifiedDays" style="font-size:14px;border:none;height:20px;width:300px;padding-top:2px;padding-right:2px;padding-bottom:2px;padding-left:20px;">                <option selected value="">Modified Anytime</option>                <option value="7">In the Last 7 Days</option>                <option value="14">In the Last 14 Days</option>                <option value="30">In the Last 30 Days</option>                <option value="90">In the Last 90 Days</option>                <option value="180">In the Last 6 Months</option>            </select>        </div>    </div></form><script src="/app/src/search/controllers/AdvancedSearchFormController.js"></script><script type="text/javascript">    function redirect() {        var newUrl = decodeURI(window.location.href.split('/').pop());        window.history.pushState('object or string', 'Title', newUrl);        var srcTerm = $('#search').val();        if (srcTerm.trim()) {			   window.location.replace('https://developer.arm.com/search/#q=' + srcTerm + '&sort=relevancy&f:@navigationhierarchiesproducts=[Tools%20and%20Software,Keil%20Products]');        }    }</script>

          </td>
        </tr>
      </table>
    </td>
  </tr>

  <tr>

    <td class="Bar">
      <div id="vm">
<p>Technical Support</p>
<ul>
<li><a href="/support/">Overview</a></li>
<li><a href="/home/searchhelp">Search</a></li>
<li><a href="/support/contact.asp">Contact</a></li>
<li><a href="/support/request.asp">Assistance Request</a></li>
<li><a href="/support/feedback.asp">Feedback</a></li>
</ul>
<p>Support Resources</p>
<ul>
<li><a href="/support/knowledgebase.asp">Support Knowledgebase</a><ul>
<li><a href="/support/topics.asp">Article Index</a></li>
<li><a href="/support/topten.asp">Top 10 Articles</a></li>
</ul>
</li>
<li><a href="/support/man/">Product Manuals</a><ul>
<li><a href="/support/man_arm.htm">ARM Product Manuals</a></li>
<li><a href="/support/man_c166.htm">C166 Product Manuals</a></li>
<li><a href="/support/man_c251.htm">C251 Product Manuals</a></li>
<li><a href="/support/man_c51.htm">C51 Product Manuals</a></li>
</ul>
</li>
<li><a href="/appnotes/">Application Notes</a></li>
<li><a href="/download/">Downloads</a></li>
<li><a href="/update/">Product Updates</a></li>
<li><a href="/forum/">Discussion Forum</a></li>
<li><a href="/books/">Books</a></li>
</ul>
<p>Product Information</p>
<ul>
<li><a href="/product/">Software &amp; Hardware Products</a><ul>
<li><a href="/arm/">Arm Development Tools</a><li><a href="/c166/">C166 Development Tools</a><li><a href="/c51/">C51 Development Tools</a><li><a href="/c251/">C251 Development Tools</a><li><a href="/ulink/">Debug Adapters</a><li><a href="/boards2/">Evaluation Boards</a></ul>
</li>
<li><a href="/product/brochures.asp">Product Brochures</a></li>
<li><a href="/product/newsletters.asp">Newsletters</a></li>
</ul>

      </div>
    </td>

    <td class="Bdy">
      <div class="Bdy">
      <div class="breadcrumb"><a href="/">Home</a>&nbsp;&nbsp;&#47;&nbsp;&nbsp;On-Line Manuals</div>



<h2>Document Conventions</h2>

<p>
Keil Software product manuals use the following style conventions:</p>

<table border="0" cellpadding="0" cellspacing="0" class="kt_nowidth">
  <tr class="kt">
    <th class="kt" nowrap>Convention</th>
    <th class="kt">Description</th>
  </tr>

  <tr class="kt">
    <td class="kt" nowrap><b>README.TXT</b></td>
    <td class="kt">
      Bold, capitalized text is used for the names of executable programs,
      data files, source files, environment variables, and commands.
      This text usually represents commands you must input.  For example:
      
      <div style="text-align: center; font-weight: bold; margin: 12px 0;">
      <span>COPY</span>
      <span style="margin: 0 36px;">DIR</span>
      <span>L166.EXE</span>
      </div>
      
      <p class="note">Note</p>
      You are not required to enter these commands using all capital letters.</td>
  </tr>

  <tr class="kt">
    <td class="kt" nowrap><b><font face="Courier New">Courier</font></b></td>
    <td class="kt">
      This typeface is used to represent command line, listing file,
      or source code.
    </td>
  </tr>

  <tr class="kt">
    <td class="kt" nowrap><i>Variables</i></td>
    <td class="kt">
      Text in italics represents information you must provide.  For example,
      <i>project-file</i> in a syntax string means you must supply the actual
      project filename.
    </td>
  </tr>
  
  <tr class="kt">
    <td class="kt" nowrap>Repeating elements...</td>
    <td class="kt">Ellipses (...) are used in examples to indicate an item may repeat.</td>
  </tr>
  
  <tr class="kt">
    <td class="kt" nowrap>Omitted Code<br>.<br>.<br>.</td>
    <td class="kt">
      Vertical ellipses are used in source code examples and listings to indicate a
      fragment of the program or listing is omitted.  For example:
      <pre>void main (void)
{
.
.
.
while (1);</pre>
    </td>
  </tr>
  
  <tr class="kt">
    <td class="kt" nowrap>&#x301a;<i>Optional Items</i>&#x301b;</td>
    <td class="kt">
      Optional arguments in command line and option fields are indicated by brackets.
      For example:
      <pre>A166 TEST.A66 PRINT <span style="font-family: verdana;">&#x301a;</span>(<i>filename</i>)<span style="font-family: verdana;">&#x301b;</span></pre>
    </td>
  </tr>
  
  <tr class="kt">
    <td class="kt" nowrap>{ <i>Option1</i> | <i>Option2</i> }</td>
    <td class="kt">
      Text contained in braces and separated by a vertical bar represents a group of items
      where one must be chosen.  The braces enclose all of the choices and the vertical
      bars separate the choices.
    </td>
  </tr>
  
  <tr class="kt">
    <td class="kt" nowrap><b>Keys</b></td>
    <td class="kt">
      Text in this typeface represents keys on the keyboard.  For example,
      "Press <b>Enter</b> to continue."
    </td>
  </tr>
</table>


</div> </td> </tr>

<tr>
    <td class="Bot" colspan="2">
        <table>
    <tr class="Menu">
        <td>
            <h4><a href="/product/">Products</a></h4>
            <h5>Development Tools</h5>
            <ul>
                <li><a href="/Arm/">Arm</a></li>
                <li><a href="/c166/">C166</a></li>
                <li><a href="/c51/">C51</a></li>
                <li><a href="/c251/">C251</a></li>
                <li><a href="/uvision/">&micro;Vision IDE and Debugger</a></li>
            </ul>
        </td>
        <td>
            <h4><a href="#">&nbsp;</a></h4>
            <h5>Hardware &amp; Collateral</h5>
            <ul>
                <li><a href="/ulink/">ULINK Debug Adaptors</a></li>
                <li><a href="/boards2/">Evaluation Boards</a></li>
                <li><a href="/product/brochures.asp">Product Brochures</a></li>
                <li><a href="/dd2/">Device Database</a></li>
                <li><a href="/distis/">Distributors</a></li>
            </ul>
        </td>
        <td>
            <h4><a href="/download/">Downloads</a></h4>
            <ul>
                <li><a href="/demo/eval/arm.htm">MDK-Arm</a></li>
                <li><a href="/demo/eval/c51.htm">C51</a></li>
                <li><a href="/demo/eval/c166.htm">C166</a></li>
                <li><a href="/demo/eval/c251.htm">C251</a></li>
                <li><a href="/download/file/">File downloads</a></li>
            </ul>
        </td>
        <td>
            <h4><a href="/support/">Support</a></h4>
            <ul>
                <li><a href="/support/knowledgebase.asp">Knowledgebase</a></li>
                <li><a href="/forum/">Discussion Forum</a></li>
                <li><a href="/support/man/">Product Manuals</a></li>
                <li><a href="/appnotes/">Application Notes</a></li>
            </ul>
        </td>
        <td>
            <h4>Contact</h4>
            <ul>
                <li><a href="/distis/">Distributors</a></li>
                <li><a href="/product/prices.asp" onclick="_gaq.push(['_trackEvent', 'Quotes', 'Page Hit', 'Request a Quote Footer',1,true]);">Request a Quote</a></li>
                <li><a href="/company/contact/">Sales Contacts</a></li>
            </ul>
        </td>

    </tr>
    <tr class="boilerplate">
        <td>&nbsp;
        </td>
        <td colspan="3">
            <p class="footerlinks"><a href="/company/cookiesettings">Cookie Settings</a> | <a href="/company/terms" target="_blank">Terms of Use</a> | <a href="/company/privacy" target="_blank">Privacy</a> | <a href="/company/accessibility" target="_blank">Accessibility</a> | <a href="https://www.arm.com/company/policies/trademarks">Trademarks</a> | <a href="/company/contact/">Contact Us</a> | <a href="/support/feedback.asp">Feedback</a></p>
            <p class="footerlinks"><a href="/company/terms" target="_blank">Copyright</a> &copy; 2005-2019 <a href="/company">Arm Limited</a> (or its affiliates). All rights reserved.</p>
        </td>
        <td style="text-align: right;"><img src="/content/images/Arm_logo_white_150LG.png" alt="Arm logo" height="32" /></td> 
    </tr>

</table>


        <!--			<script src="/_js/t6_ptg.js" type="text/javascript"></script>
			<noscript>
				<div><img src="/_images/ptg.gif?js=0" height=1 width=1 alt="" title="" style="border:none"> </div>
			</noscript>
        <script type="text/javascript">var _gaq = _gaq || []; _gaq.push(['_setAccount', 'UA-3800502-2']); _gaq.push(['_setDomainName', 'keil.com']); _gaq.push(['_trackPageview']); (function () { var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true; ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js'; var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s); })();</script>-->
    </td>

</tr>
</table>
<!--Cookie policy html-->
<div id="cookiemodule">
    <div class="modouter">
        <div class="modinner">
            <h5>Important information</h5>
            <div class="modcontent">
                <div class="intro">
                    <p>This site uses cookies to store information on your computer. By continuing to use our site, you consent to our <a href="/company/cookiepolicy" target="_blank">cookies</a>.</p>
                </div>
                <button class="accept" id="">Don't show this message again</button>
                <p>
                    <a href="/company/cookiesettings/" class="change-settings">Change Settings</a>
                </p>
            </div>
        </div>
    </div>
</div>
<div id="privacymodule">
    <div class="modouter">
        <div class="modinner">
            <h5>Privacy Policy Update</h5>
            <div class="modcontent">
                <div class="intro">
                    <p>Arm’s Privacy Policy has been updated. By continuing to use our site, you consent to Arm’s Privacy Policy. Please review our <a href="/company/privacy" target="_blank">Privacy Policy</a> to learn more about our collection, use and transfers <br /> of your data.</p>
                </div>
                <button class="acceptpolicy" id="">Accept and hide this message</button>
            </div>
        </div>
    </div>
</div>
<script type="text/javascript" src="/Scripts/Zendesk.js?v=20191122"></script>

<script type="text/javascript">
    if ((read('acceptCookie') == null) || (read('acceptCookie') == '2') || (read('acceptCookie') == '3')) {
        var _gaq = _gaq || [];
        _gaq.push(['_setAccount', 'UA-3800502-2']);
        _gaq.push(['_setDomainName', 'keil.com']);
        _gaq.push(['_trackPageview']);

        (function () {
            var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
            ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
            var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
        })();
    }
</script>
<script type="text/javascript">
    if ((read('acceptCookie') == null) || (read('acceptCookie') == '3')) {
        $.getScript('https://munchkin.marketo.net/munchkin.js', function () {
            mktoMunchkin("312-SAX-488");
        });
    }
</script>

<span id="real-url-span" style="display: none;">/support/man/conventions.asp</span>

</body>
</html>

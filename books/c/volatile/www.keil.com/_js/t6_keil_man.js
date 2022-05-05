var kmNoteImg = "/support/man/docs/images/note.gif"; var kmExpandImg = "/support/man/docs/images/plus.gif"; var kmCollapseImg = "/support/man/docs/images/minus.gif"; var kmKnowledgebaseImg = "/iconexp/16x16/plain/lightbulb_on.png"; var kmPGUP = 33; var kmPGDN = 34; window.onload = kmHandleOnLoad; document.onclick = kmHandleOnClick; function kmHandleOnLoad ()
{ kmFixupTags();}
function kmFixupTags ()
{ var i
var oTags
oTags = document.getElementsByTagName("P"); for (i = 0; i < oTags.length; i++)
{ if (oTags[i].className.toLowerCase() == "kbart")
oTags[i].innerHTML = "<img src='" + kmKnowledgebaseImg + "'> Related Knowledgebase Articles"; else if (oTags[i].className.toLowerCase() == "note")
oTags[i].innerHTML = "<img src='" + kmNoteImg + "'> Note"; else if (oTags[i].className.toLowerCase() == "wh")
oTags[i].innerHTML = "Where"; else if (oTags[i].className.toLowerCase() == "res")
oTags[i].innerHTML = "<img src='" + kmNoteImg + "'> Restriction"; else if (oTags[i].className.toLowerCase() == "expand")
{ oTags[i].title = "Expand/Collapse"; oTags[i].innerHTML = "<img src='" + kmExpandImg + "' class='expand'> " + oTags[i].innerHTML;}
}
oTags = document.getElementsByTagName("DIV"); for (i = 0; i < oTags.length; i++)
{ if (oTags[i].className.toLowerCase() == "col2")
kmMakeMultiColumnList(oTags[i], 2); else if (oTags[i].className.toLowerCase() == "col3")
kmMakeMultiColumnList(oTags[i], 3); else if (oTags[i].className.toLowerCase() == "col4")
kmMakeMultiColumnList(oTags[i], 4);}
}
function kmHandleOnClick (e)
{ var oElement; var e1; if (!e) e1 = window.event; else e1 = e; if (e1.target)
oElement = e1.target; else if (e1.srcElement)
oElement = e1.srcElement; if (oElement.nodeType == 3)
oElement = oElement.parentNode; for (var i = 0; i < 5; i++)
{ if (!oElement)
break
if (oElement.tagName)
if (oElement.tagName.toLowerCase() == "p" && oElement.className.toLowerCase() == "expand")
break; oElement = oElement.parentNode;}
if (oElement)
if (oElement.className.toLowerCase() == "expand")
kmAnchorExpand (oElement);}
function kmAnchorExpand (oElement)
{ var oExp = kmGetExpandDiv(oElement); var oImg = kmGetChildImage(oElement); if (oExp.style.display.toLowerCase() == "block")
{ oExp.style.display = "none"; oImg.src = kmExpandImg;}
else
{ oExp.style.display = "block"; oImg.src = kmCollapseImg;}
}
function kmGetExpandDiv (oElement)
{ var oTag = oElement; var oDiv; var i
for (i = 1; i < 5; i++)
{ oDiv = oTag.nextSibling; if (oDiv && oDiv.tagName)
if (oDiv.tagName.toLowerCase() == "div" && oDiv.className.toLowerCase() == "expand")
break; oTag = oTag.parentNode; if (!oTag)
break;}
return oDiv;}
function kmGetChildImage (oElement)
{ var i; for (i = 1; i < 5; i++)
{ if (oElement.tagName.toLowerCase() == "img")
break; oElement = oElement.childNodes[0];}
return (oElement);}
function kmSetupPaging ()
{ document.onkeydown = kmHandlePaging; if (document.layers)
{ document.captureEvents (Event.KEYDOWN); kmPGUP = Event.PGUP; kmPGDN = Event.PGDN;}
else
{ kmPGUP = 33; kmPGDN = 34;}
}
function kmHandlePaging(e)
{ var e1; var kp; kp = 0; if (!e) e1 = window.event; else e1 = e; if (e1.keyCode)
{ if (e1.altKey)
kp = e1.keyCode;}
else if (e1.which)
{ if (e1.modifiers == Event.ALT_MASK)
kp = e1.which;}
if ((kp == kmPGUP) && (kmPrevPage.length > 0))
{ window.location = kmPrevPage; return false;}
if ((kp == kmPGDN) && (kmNextPage.length > 0))
{ window.location = kmNextPage; return false;}
return true;}
function kmNavButtons()
{ if (kmNextPage.length == 0)
document.write ('<img align="right" src="/iconexp/16x16/shadow/nav_plain_blue.png" border="0" height="16" width="16" align="middle" alt="" title="">'); else
{ document.write ('<a href="' + kmNextPage + '">'); document.write ('<img align="right" src="/iconexp/16x16/shadow/nav_right_blue.png" border="0" height="16" width="16" align="middle" alt="' + kmNextPageTitle + '" title="' + kmNextPageTitle + '">'); document.write ('</a>');}
if (kmPrevPage.length == 0)
{ document.write ('<img align="right" src="/iconexp/16x16/shadow/nav_plain_blue.png" border="0" height="16" width="16" align="middle" alt="" title="">'); document.write ('<img align="right" src="/iconexp/16x16/shadow/nav_plain_blue.png" border="0" height="16" width="16" align="middle" alt="" title="">');}
else
{ document.write ('<a href="default.htm">'); document.write ('<img align="right" src="/iconexp/16x16/shadow/nav_up_blue.png" border="0" height="16" width="16" align="middle" alt="Home" title="Home">'); document.write ('</a>'); document.write ('<a href="' + kmPrevPage + '">'); document.write ('<img align="right" src="/iconexp/16x16/shadow/nav_left_blue.png" border="0" height="16" width="16" align="middle" alt="' + kmPrevPageTitle + '" title="' + kmPrevPageTitle + '">'); document.write ('</a>');}
}
function kmNavBreadCrumbs()
{ document.write (kmBreadCrumbs);}
function kmRecurseGetListItems(aRay, oRoot, nLevel) { if (oRoot.tagName=="LI")
aRay[aRay.length]=oRoot.innerHTML; for (var i = 0; i < oRoot.childNodes.length; i++)
{ kmRecurseGetListItems(aRay, oRoot.childNodes[i], nLevel+1);}
}
function kmMakeMultiColumnList(aDiv, nCols)
{ var arrItems = new Array(); var nColWidth=100/nCols; var strBuffer=""; kmRecurseGetListItems(arrItems,aDiv,0); var nIndex=0; var nRows = Math.floor(arrItems.length / nCols); var nMods = arrItems.length % nCols; var nRowsThisCol=0; for(var i=0;i<nCols;i++)
{ strBuffer += "<td valign=\"top\" width=\""+nColWidth+"%\"><ul>"; if (i < nMods)
nRowsThisCol = nRows+1; else
nRowsThisCol = nRows; for (var i2 = 0; (i2 < nRowsThisCol) && (nIndex < arrItems.length); i2++)
{ strBuffer+="<li>"+arrItems[nIndex++]+"</li>";}
strBuffer+="</ul></td>";}
aDiv.innerHTML="<table width=\"100%\" border=0><tr>" + strBuffer + "</tr></table>";}

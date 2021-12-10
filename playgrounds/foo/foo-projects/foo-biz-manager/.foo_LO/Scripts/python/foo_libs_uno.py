# -*- coding: utf-8 -*-

import sys, os

runningOS = sys.platform
if runningOS.startswith("linux"):
    sys.path.append("/usr/lib/libreoffice/program/")
elif runningOS.startswith("darwin"):
    sys.path.append("/Applications/LibreOffice.app/Contents/Resources/") #edit
else:
    sys.exit("OS not supported. ({})\nSupported OSs:\n- Linux\n- macOS".format(runningOS))

import uno


# Create instance

CTX = uno.getComponentContext()
SM = CTX.getServiceManager()

def create_instance(name, with_context=False):
    if with_context:
        instance = SM.createInstanceWithContext(name, CTX)
    else:
        instance = SM.createInstance(name)
    return instance


# Desktop

desktop = XSCRIPTCONTEXT.getDesktop()


# Call dispatch

def call_dispatch(doc, url, args=()):
    frame = doc.getCurrentController().getFrame()
    dispatch = create_instance("com.sun.star.frame.DispatchHelper")
    dispatch.executeDispatch(frame, url, "", 0, args)
    return


# Message box

from com.sun.star.awt import MessageBoxButtons as MSG_BUTTONS


def msgbox(message, title="LibreOffice", buttons=MSG_BUTTONS.BUTTONS_OK, type_msg="infobox"):
    """ Create message box
        type_msg: infobox, warningbox, errorbox, querybox, messbox
        https://api.libreoffice.org/docs/idl/ref/interfacecom_1_1sun_1_1star_1_1awt_1_1XMessageBoxFactory.html
    """
    toolkit = create_instance("com.sun.star.awt.Toolkit")
    parent = toolkit.getDesktopWindow()
    mb = toolkit.createMessageBox(parent, type_msg, buttons, title, str(message))
    return mb.execute()


# Execute in other thread

import threading

def run_in_thread(fn):
    def run(*k, **kw):
        t = threading.Thread(target=fn, args=k, kwargs=kw)
        t.start()
        return t
    return run


# Dict to properties

from com.sun.star.beans import PropertyValue
def dict_to_property(values, uno_any=False):
    ps = tuple([PropertyValue(Name=n, Value=v) for n, v in values.items()])
    if uno_any:
        ps = uno.Any("[]com.sun.star.beans.PropertyValue", ps)
    return ps


# Get color

def get_color(red, green, blue):
    color = (red << 16) + (green << 8) + blue
    return color


# Get the document type

def get_type_doc(doc):
    TYPE_DOC = {
        "calc": "com.sun.star.sheet.SpreadsheetDocument",
        "writer": "com.sun.star.text.TextDocument",
        "impress": "com.sun.star.presentation.PresentationDocument",
        "draw": "com.sun.star.drawing.DrawingDocument",
        "base": "com.sun.star.sdb.DocumentDataSource",
        "math": "com.sun.star.formula.FormulaProperties",
        "basic": "com.sun.star.script.BasicIDE",
    }
    for k, v in TYPE_DOC.items():
        if doc.supportsService(v):
            return k
    return ""
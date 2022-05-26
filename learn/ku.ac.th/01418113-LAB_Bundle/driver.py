# -*- coding: utf-8 -*-

from genericpath import exists
import os
import sys

PWD = os.getcwd()

astDirName = "assets"
stylesheetFile = "mystyle.css"
ASTDIR = os.path.join(PWD, astDirName)
STYLFILE = os.path.join(ASTDIR, stylesheetFile)

sys.path.append(ASTDIR)

def assetReq(f):
    def checkAssetFiles():
        if os.path.exists(stylesheetFile):
            f()
        else:
            sys.stderr.write(f"{__file__}: Error: Stylesheet file does not exist.")
    return checkAssetFiles

class Asset:
    def __init__(self):
        assetDir = ASTDIR
        stylefile = STYLFILE
        cworkdir = PWD
    
    @assetReq
    def loadStyle(self):
        return 
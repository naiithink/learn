# -*- coding: utf-8 -*-

import json

with open(".foo_LO/foo_metadata/foo_import.json", "r") as _:
    modules = json.load(_)
    _.close()
    for i in modules:
        cmd = "".join("import", )

import foo_libs


# Declare LO object variables

desktop = XSCRIPTCONTEXT.getDesktop()
currentSheet = Doc.getCurrentController.ActiveSheet()


# Define all required functions

def getLastCell(sheetName, coor):
    inSheet = desktop.Sheets.getByName(sheetName)

    # Error logging

    if coor not in ["col", "row"]:
        reportDraft = {
            "Got an error at getLastCell mo8"
        }
        with open("", "w") as _:
            _.json.dump(reportDraft, coding="utf-8")
            _.close()
        sys.exit()
    return
    


# Check doc components


def checkDoc():
    Doc = 
    
    return
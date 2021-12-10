# -*- coding: utf-8 -*-

import json, os, shutil, sys, time
from foo_files import *


# Try to import "uno.py"

def try_importing_uno(round=0):
    try:
        import uno
    except ModuleNotFoundError:
        if round > 0:
            foo_report_draft = {
                "ModuleNotFoundError": "uno.py"                                     ###
            }
            with open(foo_error_report, "w") as _:
                json.dump(foo_report_draft, indent=4)
                _.close()
            sys.exit()

        with open(foo_json_path_) as _:
            uno_path = json.load(_)[running_OS]["uno"]
            _.close()
        for path in current_sys_path:
            if path.find(uno_path) != -1:
                needs_uno_path = False
            if needs_uno_path:
                sys.path.append(os.path.join(foo_root_path, "foo_metadata/"))
        try_importing_uno(round=1)
    
    return # Update checkpoint

"""     # Try importing again, if the error still occurs, write report within ".foo_LO/foo_metadata/foo_error_report.json" then terminate.

        try:
            import uno
        except ModuleNotFoundError:
            foo_report_draft = {
                "ModuleNotFoundError": "uno.py"
            }
            with open(foo_error_report, "w") as _:
                json.dump(foo_report_draft, indent=4)
                _.close()
            sys.exit()
"""

try_importing_uno()


# Check file elements

class foo_check:
    def file_elements():
        
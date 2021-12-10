# -*- coding: utf-8 -*-

import json, os, shutil, sys, time


# Get system and required information

running_OS = sys.platform
current_sys_path = sys.path
foo_root_path = os.getcwd()
needs_uno_path = True


# Declare dependent files

foo_metadata_dir_path = os.path.join(foo_root_path, ".foo_LO/foo_metadata/")
foo_json_path_ = os.path.join(foo_root_path, ".foo_LO/foo_metadata/foo_path.json")
foo_json_dependency_ = os.path.join(foo_root_path, ".foo_LO/foo_metadata/foo_dependency.json")
foo_error_report = os.path.join(foo_root_path, ".foo_LO/foo_metadata/foo_error_report.json")
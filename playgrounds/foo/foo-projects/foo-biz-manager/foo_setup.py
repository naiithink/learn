# -*- coding: utf-8 -*-

import json, os, shutil, sys, time


running_OS = sys.platform
current_sys_path = sys.path
foo_root_path = os.getcwd()
needs_some_path = True
# install_path = input()

foo_metadata_dir_path = os.path.join(foo_root_path, "foo_LO/foo_metadata/")
foo_json_path_ = os.path.join(foo_root_path, "foo_LO/foo_metadata/foo_path.json")
foo_json_dependency_ = os.path.join(foo_root_path, "foo_LO/foo_metadata/foo_dependency.json")

try:
    import uno
except ModuleNotFoundError:
    if running_OS.startswith("linux"):
        for path in current_sys_path:
            if path.find("foo-biz-manager/foo_LO/foo_metadata/") != -1:
                needs_some_path = False
        if needs_some_path:
            sys.path.append(os.path.join(foo_root_path, "/foo_metadata/"))
    elif running_OS.startswith("darwin"):
        for path in current_sys_path:
            if path.find("foo-biz-manager/foo_LO/foo_metadata/") != -1:
                needs_some_path = False
        if needs_some_path:
            sys.path.append(os.path.join(foo_root_path, "/foo_metadata/"))


# Finishing up installation

sys.path.append(os.path.join(foo_root_path, ".foo_LO/Scripts/python/"))

os.chdir(foo_root_path)
os.chdir(".foo_LO/add_to_root/")
shutil.copyfile("*", foo_root_path)
os.chdir("../..")
os.rename("foo_setup", ".foo_setup")


# All done.
# -*- coding: utf-8 -*-

import codecs, json, os, sys, time

def append_s (object):
    if len(object) == 1:
        return '\0'
    else:
        return 's'
from __future__ import annotations
from __future__ import print_function
from __future__ import with_statement

import signal
import sys
import time

from tenses import *


eventHandler = _events.TheHandler()

signal.signal(signal.SIGINT, eventHandler.sigint)

print("Hello.\n")
time.sleep(1.2)

getStarted = input("Start now? [Y/n]: ")
if getStarted in Context.Context["DECLINE"]:
    print("See you soon!")
    sys.exit(0)

print("Let's gooo")
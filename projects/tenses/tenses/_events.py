from __future__ import annotations
from __future__ import print_function
from __future__ import with_statement

import signal
import sys
import time

from tenses import Context


def askSaveProgress(function):
    """doSaveProgress(function) -> int

    This decorator asks user to save the current progress to a file.

    RETURN VALUES
        This decorator returns 0 if the progress had not been saved.
    """
    def wrapper():
        sys.stderr.write("Do you want to save your progress?")
        ans = input()
        if (ans not in "\n\r" and not ans) or (ans in Context.Context["DECLINED"]):
            sys.stderr.write("No progress had been saved.")
        else:
            # do something
            pass
        function()
    return wrapper


class TheHandler:
    def __init__(self) -> None:
        self.static = 0

    @askSaveProgress
    def sigint(signum, frame) -> None:
        sys.stderr.write("See you soon!")
        sys.exit(2)


if __name__ == "__main__":
    sys.stderr.write("This module should not be run directly.")
    sys.exit(1)
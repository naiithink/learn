from __future__ import annotations
from __future__ import print_function
from __future__ import with_statement

import sys


Context = {
    "ACCEPT": ["y", "Y", "yes", "Yes"],
    "DECLINE": ["N", "n", "O", "o", "0", "!"]
}


if __name__ == "__main__":
    sys.stderr.write("This module should not be run directly.")
    sys.exit(1)
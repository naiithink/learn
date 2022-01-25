# ** encoding: utf-8 **

import os, sys, subprocess

PS1 = "{:s} ".format(b'\xf0\x9f\x92\xa9'.decode())
PS2 = "> "
PWD = os.getcwd()
PATH = os.get_exec_path()
PATH.remove(PATH[0])
LOGIN_NAME = os.getenv("LOGNAME")
RECENT_EXIT = None
ARGV = None
ARGV_START = 0
ANSI = {
    "reset": "\033[0;39m",
    "red": "\033[0;31m",
    "orange": "\033[0;32m",
    "yellow": "\033[0;33m",
    "green": "\033[0;34m",
    "blue": "\033[0;35m",
    "light-green": "\033[0;92m",
    "ever-green": "\033[0;96m",
    "bg-white": "\033[0;47m"
}
done_exec = False

while True:
    ARGV_START = 0
    done_exec = False

    user_command = input("{:s}{:s}@{:s}{:s} {:s}{:s}".format(ANSI["light-green"], LOGIN_NAME, ANSI["ever-green"], PWD, ANSI["reset"], PS1))
    RECENT_EXIT = None

    if not user_command:
        continue
    else:
        ARGV_CURR = ARGV_START
        ARGV = user_command.split(" ")

    for path in PATH:
        for bin in os.listdir(path):
            if user_command == bin:
                subprocess.run(bin)
                done_exec = True
                break
        if done_exec:
            break

    if not done_exec:
        print("`{:s}\': command not found.\n\
ยังไม่รองรับ switch และ flag เด้อ, ลองดู `argv`, `fork`, `pipe`".format(ARGV[0]))
        RECENT_EXIT = 1
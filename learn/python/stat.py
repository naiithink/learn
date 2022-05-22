import os
import sys
import stat

this = os.stat("/Users/naiithink/projects/private")
print(stat.S_ISDIR(this.st_mode))
# print(this.S_ISDIR())

del this
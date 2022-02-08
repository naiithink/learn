#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

static int exit_status;

char **
readDirSyncScript(char *scriptFilePath, char **dirv);

int
main(int argc, char **argv)
{
    int ok = -1;
    char **dirv;

    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

char **
readDirSyncScript(char *scriptFilePath, char **dirv)
{
    FILE *scriptFile;

    scriptFile = fopen(scriptFilePath, "r");
}
#include <stdio.h>
#include <sys/stat.h>

#include "yep.h"

/*
int get_file_type(char *path)
{
    int res = -1;
    struct stat buf;

    stat(path, &buf);
    
    res = YEP_FILE_TYPE(buf.st_mode&S_IFMT);
    return res;
}
*/

int main(int argc, char **argv)
{
    int i, j, n;

    for (i = 0; i < 11; i++) {
        for (j = 0; j < 10; j++) {
            n = 10 * i + j;
            if (n > 107) break;
            printf("\033[%dm %3d\033[m", n, n);
        }
        printf("\n");
    }

    return 0;
}
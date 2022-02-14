#include <stdio.h>

typedef struct
{
    int type;
    char *name;
    char *parent_dir;
    char *owner;
    struct
    {
        int r;
        int w;
        int x;
    }
    permission;
    int yep_inspected;
}
a_file;

int main(void)
{
    a_file f;
    f.permission.r = 1;
    f.permission.w = 1;
    f.permission.x = 1;

    if (f.permission.w)
        printf("yes.\n");
    else
        printf("nope.\n");
}
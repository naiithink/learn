#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 1)
        return 1;

    char *app, *url;
    app = argv[1];
    url = argv[2];

    exec();
    printf("");

    return 0;
}
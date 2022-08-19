#include <stdio.h>
#include <stdlib.h>

#define BUFFER_LEN 64

int main(int argc, char **argv)
{
    if (argc == 1)
        return 1;

    FILE *fp = NULL;
    char *const path = argv[1];
    char content[BUFFER_LEN];

    fpos_t cur;

    fp = fopen(path, "r");

    fread(content, 38, 1, fp);

    if (fgetpos(fp, &cur) != 0)
    {
        fclose(fp);
        exit(1);
    }

    printf("cur: %lld\n", cur);
    printf("content: %s\n", content);

    fclose(fp);

    return 0;
}

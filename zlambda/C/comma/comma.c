#include <stdio.h>

int
main(int argc, char **argv)
{
    printf(">> %d\n", argc);
    FILE *file;
    char s1[10], s2[10], s3[10];
    int n = 0;
    float f = 0;

    file = fopen(argv[1], "r");

    fscanf(file, "%[^,],%[^,],%s\n", s1, s2, s3);

    fclose(file);

    printf("%s\n\
%s\n\
%s\n",s1, s2, s3);

    return 0;
}
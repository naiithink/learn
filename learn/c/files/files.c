#include <stdio.h>

int main(int argc, char **argv)
{
    const char *file_1_name = "test1.txt";
    FILE *file_1 = NULL;
    char buff1[64];
    char buff2[64];
    int read = 0;

    file_1 = fopen(file_1_name, "r");

    read = fread(buff1, sizeof(char), 63, file_1);
    printf("%d: %s\n", read, buff1);

    read = fread(buff2, sizeof(char), 63, file_1);
    printf("%d: %s\n", read, buff2);

    fclose(file_1);

    printf(">>> %d: %s\n", read, buff1);
    printf(">>> %d: %s\n", read, buff2);
    return 0;
}

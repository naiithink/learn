#include <stdio.h>
#include <time.h>

typedef struct
{
    char *os;
    char *arch;
    enum {os, arch, END} *error;
}
platform;

int main(void)
{
    clock_t start, end;

    printf("jf %% fj");

    /*
    platform *ison;

    ison->error = "eiei";
    ison->os = "mac";

    start = clock();

    if (ison->os == NULL || ison->arch == NULL)
    {
        for (int i = os; i < END; i++)
        {
            ison->error = i;
            if ()
            ison->error = ;
        }
    }

    if (ison->error != NULL)
    {
        printf("error is not null\n");
        printf("%s\n", ison->error);
    }
    else
    {
        printf("error is NULL\n");
    }
    */

    end = clock();
    double elapsed = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f\n", elapsed);

    return 0;
}
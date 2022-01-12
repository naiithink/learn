#include <stdio.h>
#define ARRAY_SIZE 98

int main()
{

    int i, j;
    int A[ARRAY_SIZE] = {0};

    for (i = 2; i < ARRAY_SIZE; i++)
        A[i] = 1;

    for (/*  */ int ALL[95] = {0}, i = 0, j = 2, z = 0; i < 98; i++, j++ /*  */) {
        if (i == 0) {
            for (int a = 2; a < 99; a++) {
                ALL[a-2] = a;
            }
        }

        if (!(ALL[i] % j))
            ALL[i] = 0;

        for (int k = 0; k < 99; k++) {
            if (ALL[i]) {
                A[z] = ALL[i];
                z++;
            }
        }
    }

    for (i = 2; i < ARRAY_SIZE; i++)
        /*  */
        if (A[i] != 0)
        /*  */
            printf("%d", /*  */ A[i] /*  */);
    
    printf("\n");

    return 0;
}
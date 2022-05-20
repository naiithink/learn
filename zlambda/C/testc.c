#include <stdio.h>

#define TTT(x) _Generic(x,          \
                        int *:  1,  \
                        void *: 2   )

int main(int argc, char **argv)
{
    const int N = 10;

    printf("%d\n", N);

    int *pN = &N;

    *pN = 100;

    printf("%d\n", N);

    // int n = 10;

    // int *p = NULL;

    // int * *pp = &p;

    // int * (**z) = &pp;

    // int *q = NULL;

    // printf("%p\n", p);

    // nt n;
    // nt *p = NULL;
    // nt *q = 0;
    // oid *r = (int *) 0;
    // / char *p1 = argv[1];

    // / printf("%p\n", p);
    // / printf("%p\n", NULL);

    // nt type = TTT(r);

    // rintf("%d\n", type);

    // f (NULL == p)
    //    return 0;
    // lse
    //    return 1;

    return 0;
}
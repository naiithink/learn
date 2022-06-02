#include <stdio.h>
#include <time.h>
#include <unistd.h>

typedef int (*PFI)(char *);

int strlen(char *);
int echo1(char *);
int echo2(char *);
int hash(int *, PFI, char *, int *, PFI, char *);

int
main(int argc, char **argv)
{
    if (argc == 1)
        return 1;

    int val1 = 0;
    int val2 = 0;
    PFI f1 = &echo1;
    PFI f2 = &echo2;

    hash(&val1, f1, argv[1], &val2, f2, argv[2]);

    if (val1 == val2)
        printf("yes\n");
    else
        printf("nope\n");

    return 0;
}

int
hash(int *rtn1, PFI f1, char *f1_arg,
     int *rtn2, PFI f2, char *f2_arg)
{
    int res;
    int tmp1;
    int tmp2;

    tmp1 = f(val1);

    return res;
}

int
strlen(char *s)
{
    if (s == NULL)
        return -1;

    int res
    
    while ((*s)++ != NULL)

}

// #include <stdio.h>

int printf(const char * restrict format, ...);

int addOne (const int x)
{
    int temp = x;
    temp += 1;
    return x;
}

#define SIZE 5

int main(void)
{
    int n = 10;
    int *p;
    // int *p;
    // int p[];

    int arr[SIZE] = { 1, 2, 3, 4, 5 };

    

    // int arr[4] = { 1, 2, 3, 4 };
    // arr = &arr[0];
    // int *ptr = ;

    char *str = "hello, world";

    char *s = "HI!";

    addOne (&n);
    
    p = &n;
    *p = 100;

    int **q;
    q = &p;


    int ***r;
    r = &q;

    printf ("%p\n", p);
    printf ("%p\n", &p);
    printf ("%p\n", q);
    printf ("%p\n", &q);
    printf ("%p\n", r);









    int list[3] = { 1, 2, 3 };
    list[3] = 4;

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int notes[] = {50, 20, 5, 1};
    int neg = -1;
    printf("%p\n", &notes[0]);
    printf("%p\n", &notes[1]);
    printf("%p\n", &notes[2]);
    printf("%p\n", &notes[3]);
    printf("= %p\n", &notes[4]);
    printf("= %p\n", &notes[5]);
    printf("= %p\n", &notes[6]);
    printf("= %p\n", &notes[7]);
    printf("%i\n", notes[0]);
    printf("%i\n", notes[1]);
    printf("%i\n", notes[2]);
    printf("%i\n", notes[3]);
    printf("= %i\n", notes[4]);
    printf("= %i\n", notes[5]);
    printf("= %i\n", notes[6]);
    printf("= %i\n", notes[7]);

    int ar[] = {0, 1, 2, 3};
    printf("%i %i\n", ar[0], *&ar[0]);
    printf("%i %i\n", ar[1], *&ar[1]);
    printf("%i %i\n", ar[2], *&ar[2]);
    printf("%i %i\n", ar[3], *&ar[3]);
    printf("%i %i\n", ar[4], *&ar[4]);
    printf("%i %i\n", ar[5], *&ar[5]);
    printf("%i %i\n", ar[6], *&ar[6]);
    printf("%i %i\n", ar[7], *&ar[7]);

    // int system();
    int status = system("echo $?");
    // scanf("%i\n", status);
    printf("0: %i\n", status);
    sleep(1);

    printf("--\n");
    int status = system("echo $?");
    printf("1: %i\n", status);    
}
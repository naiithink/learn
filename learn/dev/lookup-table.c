/*
 * An array is a LUT if
 * 1. We are indexing into it directly.
 * 2. We are replacing computation.
 */

#include <stdio.h>

const char *messages[] = {
    "Not a party. You are alone.",
    "One is the lonelinest number.",
    "Not lonely, but not a party.",
    "Now we are talking.",
    "Now we are talking.",
    "Ah, yeah ...",
    "Whoa. violated fire code!"
};

const int NUM_MESSAGES = (sizeof(messages) / sizeof(char *));

void printPartySizeInfo(size_t);

int main(void)
{
    printPartySizeInfo(0);
    printPartySizeInfo(1);
    printPartySizeInfo(2);
    printPartySizeInfo(3);
    printPartySizeInfo(4);
    printPartySizeInfo(5);
    printPartySizeInfo(7);
    printPartySizeInfo(35);

    return 0;
}

// so ugly, even if using switch-case -- lots of breaks
// a lot of computation -- if-else
// so slow
/*
void printPartySizeInfo(size_t people)
{
    if (people == 0)
        printf("Not a party. You are alone.\n");
    else if (people == 1)
        printf("One is the lonelinest number.\n");
    else if (people == 2)
        printf("Not lonely, but not a party.\n");
    else if (people <= 4)
        printf("Now we are talking.\n");
    else if (people <= 7)
        printf("Ah, yeah ...\n");
    else
        printf("Whoa. violated fire code!\n");
}
*/

void printPartySizeInfo(size_t people)
{
    if (people > NUM_MESSAGES-1)
        printf("%s\n", messages[NUM_MESSAGES-1]);
    else
        printf("%s\n", messages[people]);
}

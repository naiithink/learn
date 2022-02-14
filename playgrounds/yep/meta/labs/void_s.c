#include <stdio.h>
#include <stdlib.h>

#include "yep.h"

#define ASCII_OF_NOUGHT '0'

char *int_to_charptr (int n);

int main(void)
{
    int num = 127;
    printf("%s\n", int_to_charptr(num));
}

char *
int_to_charptr (int n)
{
    void *res;

    if (n && YEP_TYPE(n) >= 1 && YEP_TYPE(n) <= 11)
    {
        if (n >= 0 && n <= 9)
        {
            char *res = calloc (1, sizeof(YEP_TYPE_CHAR_PTR) * 2);
            if (res != NULL)
            {
                res[0] = n - ASCII_OF_NOUGHT;
                res[1] = '\0';
            }
        }
        else
        {
            int n_copy0 = n, n_copy1 = n, digit_count = 0, sign_char = 0;
            
            while (n_copy0)
            {
                n_copy0 /= 10;
                digit_count++;
            }

            if (n < 0)
                sign_char = 1;

            int rem = 0;
            char reversed[digit_count];
            char *res = calloc (1, (sizeof(YEP_TYPE_CHAR_PTR) * digit_count) + (sizeof(YEP_TYPE_CHAR_PTR) * sign_char));

            if (res != NULL)
            {
                { /* LOCAL */
                    int i = digit_count;
                    res[digit_count-1] = '\0';
                    do
                    {
                        reversed[i] = (n_copy1 % 10) - ASCII_OF_NOUGHT;
                        n_copy1 /= 10;
                        i--;
                    }
                    while (i > 0);
                /* LOCAL */ }
            }
        }
    }

    return res;
}
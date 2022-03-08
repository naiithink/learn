#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char n_str[6];
    register unsigned short int n = 0, fi = 0;

    fgets(n_str, sizeof(n_str), stdin);
    if ( (n=atoi(n_str)) <= 0 || n > 1000 )
        return 1;

    char A_str[13];
    int A = 0, m, M;
    while (n)
    {
        // if (fgets(A_str, sizeof(A_str), stdin) == NULL)
        //     return 1;

        fgets(A_str, sizeof(A_str), stdin);
        A = atoi(A_str);
        
        if (!fi)
        {
            m = A;
            M = A;
            fi++;
        }

        if (A < m)
            m = A;
        else if (A > M)
            M = A;
        n--;
    }

    printf("%i\n%i\n", m, M);

    return 0;
}
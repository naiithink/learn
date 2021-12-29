#include <stdio.h>
#include <stdlib.h>

int c_in_str(char c, char *s)
{
    if (!c || !s)
        return -1;
    int i = 0, res = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            res++;
    }
    return res;
}

int main(void)
{
    char m_str[5], n_str[5];
    register unsigned short int m = 0, n = 0;

    fgets(m_str, sizeof(m_str), stdin);
    fgets(n_str, sizeof(n_str), stdin);

    if ( (m=atoi(m_str)) < 1 || m > 100 || (n=atoi(n_str)) < 1 || n > 100 )
        return 1;

    char srl_str[37];
    unsigned short int rows = m, i_breaks = rows - 1, indx = 0, i = 0;
    int A[m*n], B[m*n];

    while (rows)
    {
        fgets(srl_str, sizeof(srl_str), stdin);
        if (c_in_str(32, srl_str) != i_breaks)
            return 1;
        while (srl_str[indx] != '\0')
        {
            if (srl_str[indx] != 32)
                A[i] = srl_str[indx];
                if (srl_str[indx+1] == 32)
                    A[i+1] = '\0';
            else
                i++;
        }
        rows--;
    }

    return 0;
}
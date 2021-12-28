#include <stdio.h>
#include <stdlib.h>

static int indx, **res;

int **str_to_irow(char *str)
{
    if (str[indx] == '\0')
        return res;
    else if (str[indx] == 32)
        return ;
    else
        return str_to_irow();
}

int main(void)
{
    char m_str[5], n_str[5];
    register unsigned short int m = 0, n = 0;

    fgets(m_str, sizeof(m_str), stdin);
    fgets(n_str, sizeof(n_str), stdin);

    if ( (m=atoi(m_str)) < 1 || m > 100 || (n=atoi(n_str)) < 1 || n > 100 )
        return 1;

    char srl_str[37], **str_list;
    int A[m][n], B[m][n], i = 0, j = 0;

    while (m)
    {
        fgets(srl_str, sizeof(srl_str), stdin);
        if ((A[i][j]==))

        m--;
    }

    return 0;
}
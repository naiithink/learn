#include <stdio.h>

int main(void)
{
    int splitat = 0;
    char *n = "hello world";
    char s1[10], s2[10];

    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == 32)
        {
            splitat = i;
            break;
        }
    }
    
    for (int i = 0; i < splitat; i++)
    {
        s1[i] = n[i];
    }
    s1[splitat] = '\0';

    for (int i = splitat+1; n[i] != '\0'; i++)
    {
        s2[i] = n[i];
        if (n[i+1] == '\0')
            s2[i+1] = '\0';
    }
    
    printf("s1: %s\n\
s2: %s\n", s1, s2);

    return 0;
}
#include <stdio.h>

int main(void)
{
    char sbuff[255];
    char svowl[255];
    char s = '\0';
    int vowel[] = { 65, 69, 73, 79, 85 };
    int found[5] = { 0 };
    int count = 0;
    int k = 0;

    printf("String (without a space): ");
    scanf("%s", sbuff);

    for (int i = 0; sbuff[i] != '\0'; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sbuff[i] == vowel[j] || sbuff[i] - 32 == vowel[j])
            {
                svowl[k] = sbuff[i];
                k++;
                if (!found[j])
                {
                    found[j] = 1;
                    count++;
                    if (count > 1)
                        s = 's';
                }
            }
        }
    }
    svowl[k+1] = '\0';

    for (int i = 0; svowl[i] != '\0'; i++)
    {
        // if (found[i])
        //     printf("%c ", vowel[i] + 32);
        printf("%c ", svowl[i]);
    }
    printf("\n");
    printf("This string contains %d vowel%c.\n", count, s);

    return 0;
}
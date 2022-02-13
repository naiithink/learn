#include <stdio.h>

const int str_size = 255;
char sbuff[str_size];
char wasfound[str_size+1];

int main(void)
{
    char s = '\0';
    int found[255] = { 0 };
    // int vowel[5] = { 65, 69, 73, 79, 85 };
    // int Vowel[5] = { 97, 101, 105, 111, 117 };
    int vowel[10] = { 65, 69, 73, 79, 85, 97, 101, 105, 111, 117 };
    int wasfound_i = 0;
    int count = 0;

    printf("String (without a space): ");
    scanf("%s", sbuff);

    for (int i = 0; sbuff[i] != '\0'; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (sbuff[i] == vowel[j])
            {
                found[j] = 1;
                wasfound[wasfound_i] = sbuff[i];
                wasfound[++wasfound_i] = 32;
                wasfound_i++;
                count++;
                if (count > 1)
                    s = 's';
            }
        }
    }
    wasfound[wasfound_i+1] = '\0';

    for (int i = 0; i < str_size; i++)
    {
        printf("%c ", wasfound[i]);
    }
    printf("\n");
    printf("This string contains %d vowel%c.\n", count, s);

    return 0;
}
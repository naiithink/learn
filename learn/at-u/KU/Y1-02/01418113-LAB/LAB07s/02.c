#include <stdio.h>

int remove_vowel(char *str)
{
    size_t size = sizeof(str);
    char temp[size];
    int temp_ind = 0;
    int vowel[] = { 65, 69, 73, 79, 85, 97, 101, 105, 111, 117 };

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0, n = sizeof(vowel)/sizeof(int), found = 0; j < n && !found; j++)
        {
            if (str[i] == vowel[j])
                continue;
            else
            {
                temp[temp_ind] = str[i];
                temp_ind++;
                found = 1;
            }
        }
    }
    temp[temp_ind] = '\0';

    printf(">> %s\n", temp);

    return 0;
}

int main()
{
    char str[80];

    printf(" Input: ");
    gets(str);

    remove_vowel(str);
    printf("Output: %s\n", str);

    return 0;
}
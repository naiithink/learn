#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    int oi = 0;

    for (int i = 0, grep = 1, curr = 0, prev = 0, sum = 0; input[i] != '\0'; i++)
    {
        switch (input[i])
        {
            case 'I':
                curr = 1;
                break;
            case 'V':
                curr = 5;
                break;
            case 'X':
                curr = 10;
                break;
            default:
                grep = 0;
        }

        grep *= curr;

        if (grep || input[i+1] == '\0')
        {
            if (!prev)
                prev = curr;
            if (curr > sum)
            {
                if (sum == 1)
                    sum = curr - sum;
                else
                {
                    output[oi++] = sum + 48;
                    sum = 0;
                    grep = 1;
                }
            }
            else if (curr)
                sum += curr;
            else

        }
        else if (sum)
        {
            output[oi++] = sum + 48;
            sum = 0;
            grep = 1;
        }
        else
            output[oi++] = input[i];
    }
    output[oi] = '\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}
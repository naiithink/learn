#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    int oi = 0;

    for (int i = 0, grep = 1, curr = 0, sum = 0, ni = 0, nv = 0; input[i] != '\0'; i++, grep = 1)
    {
        switch (input[i])
        {
            case 'I':
                curr = 1;
                ni++;
                break;
            case 'V':
                curr = 5;
                nv++;
                break;
            case 'X':
                curr = 10;
                break;
            default:
                grep = 0;
        }

        if (grep)
        {
            if (curr > sum || ni > 3 || nv > 1)
            {
                if (sum == 1)
                    sum = curr - sum;
                else
                {
                    output[oi++] = sum + 48;
                    sum = curr;
                }
            }
            else
                sum += curr;
            if (input[i+1] == '\0')
            {
                if (sum)
                    output[oi++] = sum + 48;
                else
                    output[oi++] = input[i];
            }
        }
        else if (sum)
        {
            output[oi++] = sum + 48;
            output[oi++] = input[i];
            sum = 0;
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
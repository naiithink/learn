#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    int grep = 0;
    int vdating = 1;

    for (int i = 0, o = 0, prev = 0, curr = 0, sum = 0; input[i] != '\0'; i++)
    {
        switch (input[i])
        {
            case 32:
                if (!vdating)
                    vdating = !vdating;
                if (grep)
                    grep = !grep;
                if (sum)
                {
                    output[o++] = sum + 48;
                    output[o++] = 32;
                    curr = 0;
                    sum = 0;
                    prev = 0;
                }
                else
                    output[o++] = input[i];
                break;
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
                output[o++] = input[i];
        }

        if (vdating && curr)
            grep = 1;
        else
            vdating = !vdating;
        
        if (grep)
        {
            if (!prev)
                prev = curr;
            if (curr > prev)
                sum = curr - sum;
            else
                sum += curr;
            prev = curr;
            curr = 0;
        }

        if (input[i+1] == '\0' && sum)
        {
            output[o++] = sum + 48;
            output[o] = '\0';
        }
    }
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}
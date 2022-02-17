#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    char ch = '\0';
    char buf[80];
    int grep = 1;
    int prev = 0;
    int curr = 0;
    int sum = 0;

    for (int i = 0, bufi = 0, oi = 0; input[i] != '\0'; i++)
    {
        ch = input[i];

        if (ch == 32 || input[i+1] == '\0')
        {
            buf[bufi++] = ch;
            buf[bufi] = '\0';
            printf(":: %s\n", buf);
            if (!grep)
            {
                for (int j = 0; j < bufi; j++)
                    output[oi++] = buf[j];
                bufi = 0;
            }
            else
            {
                printf(">> %d\n", sum);
                output[oi++] = sum + 48;
                grep = !grep;
                sum = 0;
            }
            if (input[i+1] == '\0')
            {
                // if (!grep)
                //     output[oi++] = ch;
                output[oi] = '\0';
                break;
            }
            // output[oi++] = 32;
            buf[0] = '\0';
            grep = 1;
        }
        else
        {
            switch (ch)
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
                    if (grep)
                        grep = !grep;
                    buf[bufi++] = ch;
            }

            if (grep)
            {
                if (!prev)
                    prev = curr;
                if (curr > prev)
                    sum = curr - sum;
                else
                    sum += curr;
            }

            // buf[bufi++] = ch;
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
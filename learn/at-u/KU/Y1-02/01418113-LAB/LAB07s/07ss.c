#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    char buf[80];
    int oi = 0;

    for (int i = 0, size = 0, bufi = 0, sum = 0, len = 0; input[i] != '\0'; i++, sum = 0)
    {
        if (input[i] == 32 || input[i+1] == '\0')
        {
            buf[bufi++] = input[i];
            buf[bufi] = '\0';
            size = bufi;
            len = size - 1;

            if (input[i+1] == '\0')
                len++;

            for (int bufi = 0, curr = 0, prev = 0, ctrl = 1, ni = 0, nv = 0; bufi < len; bufi++)
            {
                switch (buf[bufi])
                {
                    case 'I':
                        curr = 1;
                        ni++;
                        break;
                    case 'V':
                        nv++;
                        curr = 5;
                        break;
                    case 'X':
                        curr = 10;
                        break;
                    default:
                        ctrl = 0;
                }

                if (!prev)
                    prev = curr;
                if (curr > prev)
                {
                    if (sum < 2)
                        sum = curr - sum;
                    else
                        ctrl = 0;
                }
                else if (ni <= 3 && nv <= 1)
                    sum += curr;
                else
                    ctrl = 0;
                sum *= ctrl;
            }

            if (sum && sum <= 9)
            {
                output[oi++] = sum + 48;
                    output[oi++] = 32;
            }
            else
            {
                for (int j = 0; j < size; j++)
                    output[oi++] = buf[j];
            }

            bufi = 0;
        }
        else
        {
            buf[bufi++] = input[i];
        }
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
#include <stdio.h>

#define YEP_ISSUE_REPORT "https://github.com/naiithink/foo-i/issues"

int
strlen (char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int
strcmp (char *a, char *b)
{
    int result;
    if (strlen(a) != strlen(b))
    {
        result = -1;
    }
    else
    {
        for (int i = 0, n = strlen(a); i < n; i++)
        {
            if (a[i] != b[i])
            {
                result = -1;
                break;
            }
            result = 0;
        }
    }

    return result;
}

void
testargc (char **input)
{
    printf(input[0]);
    printf(input[1]);
}

int
main (int argc, char **argv)
{

                    fputs("\
yep: ไม่สามารถระบุชื่อของระบบปฏิบัติการณ์ได้\n\
    --\n\
    yep ไม่สามารถทำงานได้เนื่องจากไม่ทราบชื่อของระบบปฏิบัติการณ์\n\
    โปรดรายงานของผิดพลาดนี้ให้กับผู้พัฒนาที่\
", stdout);
                    printf("%s\n", YEP_ISSUE_REPORT);

    // if (! SUPPORTED_PLATFORM)
    // {
        fputs ("\
yep ไม่สามารถระบุระบบปฏิบัติการณ์ที่คุณใช้ได้\n\
    --\n\
    คุณสามารถลองบอกใบ้ชื่อระบบปฏิบัติการของคุณให้ yep ได้\n\
    เช่น `linux`, `mac`, windows`\n\
    หากคุณไม่ทราบ ให้กด Enter\n\
    --\n\
    พิมพ์ที่นี่: ", stdout);

        char user_input_os[strlen(stdin)+1];
        scanf("%s", user_input_os);

        if (user_input_os == NULL)
        {
            printf("null\n");
        }
        else
        {
            if (! strcmp(user_input_os, "linux"))
            {
                printf("yeah\n");
            }
            else
            {
                printf("%s\n", user_input_os);
            }
        }

        /*
        if (user_input_os == NULL)
        {
            puts ("test");
        }
        */
    // }
    testargc ("test one two" "euei");
}
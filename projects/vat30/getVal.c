#include <stdio.h>
#include <uchar.h>
#include <wchar.h>

int toUnicode (const wchar_t *des, const wchar_t *src);

int
main (int argc, char **argv)
{
    int len = 0;
    wchar_t *str = L"สวัสดี";

    for (; str[len++] != '\0'; ++len)
    {
        wprintf(L"%c\n", str[len]);
    }

    printf("%s\n", len);
    fwprintf(stdout, L"%ls\n", str);

    return 0;
}

int
toUnicode (const wchar_t *des, const wchar_t *src)
{
    
}
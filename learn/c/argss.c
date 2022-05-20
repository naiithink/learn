#include <stdarg.h>
#include <locale.h>
#include <uchar.h>
#include <stdio.h>

#define __STDC_UTF_32__

void echof(const char *fmt, ...)
{
    va_list ap, ap2;
    char32_t prefix = '฿';
    char c, *s;
    int d;
    
    va_start(ap, fmt);

    while(*fmt)
    {
        if (*fmt == prefix)
        {
            switch (*++fmt)
            {
                case 's':
                    s = va_arg(ap, char *);
                    printf("%s", s);
                    break;
                case 'd':
                    d = va_arg(ap, int);
                    printf("%d", d);
                    break;
                case 'c':
                    c = va_arg(ap, int);
                    printf("%c", c);
                    break;
            }
        }
        else
        {
            printf("%c", *fmt++);
        }
    }
    printf("\n");

    va_end(ap);
}

int main(void)
{
    echof("฿s ฿d", "hello", 123);

    return 0;
}
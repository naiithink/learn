#include <cs50.h>
#include <stdio.h>
#include <string.h>

string tee(string in);
string cat(string s0, string s1, int n);

int main(void)
{
    string a = tee("nai\reiei");


    int n = strlen(a);
    string x = "foo bar";
    string y = "foo\rbar";    

    string foo = "4321";
    string bar = "21";
    string baz = ("%s\r%s", foo, bar);

    int fb = strlen(foo) + strlen(bar) + 1;

    string cmbnd = cat(foo, bar, fb);

    printf("right here >>> %s\n", baz);
    return 0;

    /////////////////////////


    char r = '\r';
    printf("here %i\n", r);
    printf("abcd .(%c)\n", 13);

    if (!strcmp("\0", "\r"))
    {
        printf("true\n");
        return 0;
    }
    printf("false\n");
    return 1;

    printf("%i is at %p\n", n, &n);
    printf("%c is at %p\n", x[0], &x[0]);
    printf("%c is at %p\n", x[1], &x[1]);
    printf("%c is at %p\n", x[2], &x[2]);
    printf("%c is at %p\n", x[3], &x[3]);

    printf("%c is at %p\n", y[0], &y[0]);
    printf("%c is at %p\n", y[1], &y[1]);
    printf("%c is at %p\n", y[2], &y[2]);
    printf("%c is at %p\n", y[3], &y[3]);
    printf("%c is at %p\n", y[4], &y[4]);
    printf("%c is at %p\n", y[5], &y[5]);
    printf("%c is at %p\n", y[6], &y[6]);
    printf("\"\\0\" (%c) is at %p\n", y[7], &y[7]);

    printf("\n");
    printf("\n");
    printf("\n");

    printf("a[0] > %c\n", a[0]);
    printf("a[\r] > %c\n", a[3]);
    for (int i = 0; i < 20; i++)
    {
        printf("| %c", a[n+i]);
    }
    printf("\n");
    printf("here > %i\n", n);
}

string tee(string in)
{   
    string out = in;
    return out;
}

string cat(string s0, string s1, int n)
{
    string result[n-1];
    for (int i = 0; i < n; i++)
    {
        result[i] = s[i];
    }
    return result;
}
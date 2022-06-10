#include <stdio.h>
#include <stdlib.h>

#if defined NDEBUG
#define TRACE(fmt, ...)
#else
#define TRACE(msg) fprintf (stderr, "%s:%s:%d: %s\n", __FILE__, __FUNCTION__, __LINE__, msg)
#endif

#define FOO 1

#if !__STDC__
#error "unsupported C compiler"
#endif

struct hello
{
    int n1;
    int n2;
};

void dodone(void)
{
    struct hello *pn = malloc(sizeof(struct hello));

    pn->n1 = 10;
    pn->n2 = 20;

    printf("%i\n", pn->n1);
    printf("%i\n", pn->n2);

    free(pn);

    TRACE("hello");
}

int main(void)
{
    dodone();

    printf("%li\n", __STDC_VERSION__);

    return 0;
}

#error "guarded"

#include <locale.h>
#include <stdio.h>

int main(void)
{
    char *before = setlocale(LC_ALL, NULL);

    printf("%s\n", before);

    const struct lconv *const before_locale = localeconv();

    if (before_locale != NULL)
        printf("Current currenct symbol: %s\n", before_locale->currency_symbol);

    setlocale(LC_ALL, "");

    printf("%s\n", setlocale(LC_ALL, NULL));

    const struct lconv *const currentlocale = localeconv();

    if (currentlocale != NULL)
        printf("Current currenct symbol: %s\n", currentlocale->currency_symbol);

    return 0;
}

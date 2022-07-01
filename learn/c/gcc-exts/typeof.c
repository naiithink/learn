#include <stdio.h>

#define TYPEOF(X) _Generic((X),                     \
                            int:        "int",      \
                            default:    "unknown"   )

int main(void)
{
    int n = 10;
    typeof (n) m;

    printf("%");

    return 0;
}

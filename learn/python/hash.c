#include <stdio.h>
#include <gcrypt.h>

int main(void)
{
    printf("%s\n", gcry_check_version(NULL));
    printf("hello, world\n");
    return 0;
}
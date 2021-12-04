#include <stdio.h>

int main(void)
{
    char* command[] = {"echo", "$PATH"};
    printf("%s %s\n", command[0], command[1]);
    return 1;
}
// echo "gcc `basename $0` -i `basename $0 | cut -d . -f 1` -ggdb -ldl"
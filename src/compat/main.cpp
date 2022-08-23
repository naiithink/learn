#include <iostream>

#include "malloc_me.h"

using namespace std;

int main(void)
{
    Eiei *eiei_ptr = NULL;

    eiei_ptr = malloc_me(11);

    cout << eiei_ptr->value << endl;

    return 0;
}

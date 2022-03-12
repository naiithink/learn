#include <iostream>
#include "aboutxml/anxml.h"

int
main (int argc, char **argv)
{
    if (argc == 1)
        return 1;
    
    MyXML foo (argv[1]);

    foo.fprintTree (1);

    foo.closeDoc ();
    
    return 0;
}
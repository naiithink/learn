#include <iostream>
#include <cstdio>
// #include "aboutxml/anxml.h"
#include <libxml2/libxml/nanohttp.h>

#ifndef _WINSOCKAPI_
#define _WINSOCKAPI_
#endif

int
main (int argc, char **argv)
{
    if (argc == 1)
        return 1;



    // int xmlNanoHTTPFetch (const char * URL, 
    //                       const char * filename, 
    //                       char ** contentType)

    char *type = NULL;
    const char *outfile = "out.txt";
    int status = 0;
    
    status = xmlNanoHTTPFetch (argv[1], outfile, &type);

    std::cout << status << std::endl;




    // MyXML foo (argv[1]);

    // foo.fprintTree (stdout, 1);

    // foo.closeDoc ();

    // This function is causing memory leak.
    // char *type;
    // fetchFile (argv[2], "out.txt", &type);
    // printf("%s\n", type);
    
    return 0;
}
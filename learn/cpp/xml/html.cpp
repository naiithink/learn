// #include <libxml2/libxml/chvalid.h>
// #include <libxml2/libxml/HTMLparser.h>
// #include <libxml2/libxml/parser.h>
// #include <libxml2/libxml/tree.h>
#include <libxml/chvalid.h>
#include <libxml/HTMLparser.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xmlreader.h>
#include <iostream>
// #include <stdlib.h>

// typedef enum {
// HTML_PARSE_RECOVER  = 1<<0, /* Relaxed parsing */
// HTML_PARSE_NODEFDTD = 1<<2, /* do not default a doctype if not found */
// HTML_PARSE_NOERROR	= 1<<5,	/* suppress error reports */
// HTML_PARSE_NOWARNING= 1<<6,	/* suppress warning reports */
// HTML_PARSE_PEDANTIC	= 1<<7,	/* pedantic error reporting */
// HTML_PARSE_NOBLANKS	= 1<<8,	/* remove blank nodes */
// HTML_PARSE_NONET	= 1<<11,/* Forbid network access */
// HTML_PARSE_NOIMPLIED= 1<<13,/* Do not add implied html/body... elements */
// HTML_PARSE_COMPACT  = 1<<16,/* compact small text nodes */
// HTML_PARSE_IGNORE_ENC=1<<21 /* ignore internal document encoding hint */
// } htmlParserOption;

int
main (int argc, char **argv)
{
    if (argc == 1)
    {
        fprintf (stderr, "No input file.\n");
        return 1;
    }

    int count = 0;
    // xmlAttrPtr filee;
    xmlDocPtr doc;
    xmlTextReaderPtr reader;
    xmlC
    const char *filename;

    filename = argv[1];

    // filee = htmlReadFile (filename, NULL, HTML_PARSE_RECOVER);
    doc = xmlReadFile (filename, NULL, 0);

    reader = xmlReaderForDoc (doc);

    std::cout << text << std::endl;

    if (xmlTextReaderClose(doc))
        std::cerr << "Error closing file." << std::endl;

    return 0;
}
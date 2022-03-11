/**
 * @file rw.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * clang -g -v rw.c -o rw -I/usr/include/libxml2 -lxml2
 */

#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { false, true } ProgStatus;

static int exit_status;

void
readXML (const xmlDocPtr docPtr, const xmlNodePtr nodePtr);

int
main (int argc, char **argv)
{
    ProgStatus ok = true;

    if (argc == 1)
    {
        fprintf (stderr, "No input file.\n");
        ok = false;
    }

    if (ok)
    {
        const char *filename = argv[1];
        char *value;
        xmlDocPtr doc_p;
        xmlNodePtr node_p;

        doc_p = xmlParseFile (filename);
        node_p = xmlDocGetRootElement (doc_p);

        readXML (doc_p, node_p);

        xmlCleanupMemory ();

        xmlFreeNodeList (node_p);
        xmlFreeDoc (doc_p);
    }

    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

void
readXML (const xmlDocPtr docPtr, const xmlNodePtr nodePtr)
{
    char *name;
    xmlChar *value;
    xmlDocPtr doc_p = docPtr;
    const xmlNodePtr root_p = nodePtr;
    xmlNodePtr node_p = nodePtr;
    xmlNodePtr parent_p;

    while (node_p != NULL)
    {
        if (node_p->children != NULL)
        {
            parent_p = node_p;
            name = (char *) parent_p->name;
            node_p = node_p->children;
            value = xmlNodeListGetString (doc_p, node_p, 0);

            if (parent_p == root_p)
            {
                printf("%s \t:\n", name);
            }
            else if (strcmp (name, "word"))
            {
                printf("\t%s \t:\n ", name);
            }
            else
            {
                printf("\t\t%s -> %s", name, (char *) value);

                if (!strcmp (name, "word"))
                {
                    printf("\n");
                }
            }

            /* value = (xmlChar *) check; */
        }
        else if (node_p->next != NULL)
        {
            node_p = node_p->next;
        }
        else if (node_p->next == NULL)
        {
            node_p = node_p->parent;
            node_p = node_p->next;
        }

        xmlCleanupMemory ();
        xmlFree (value);
    }

    xmlFreeDoc (doc_p);
}
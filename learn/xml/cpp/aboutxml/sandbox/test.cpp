#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/tree.h>
#include <iostream>

using namespace std;

int main(void)
{
    xmlDocPtr doc = xmlParseFile("test.xml");
    xmlNodePtr root = xmlDocGetRootElement(doc);
    xmlNodePtr node = root;
    char *name;

    while (node != NULL)
    {
        if (node->children != NULL)
        {
            name = (char *) node->name;
            printf("%s :", (char *) name);
            xmlFreeNode(node);
            node = node->children;
        }
        else if (node->next != NULL)
        {
            name = (char *) node->name;
            printf("%s\n", name);
            xmlFreeNode(node);
            node = node->next;
        }
        else
        {
            name = (char *) node->name;
            printf("%s\n", name);
            // node = node->parent;
            xmlFreeNode(node);
            node = node->next;
        }
    }

    xmlCleanupParser();
    // xmlFreeNodeList(root);
    // xmlFreeDoc (doc);
    return 0;
}
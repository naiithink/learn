#include <iostream>
#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/tree.h>

int main(int argc, char **argv)
{
    xmlDocPtr doc = xmlParseFile(argv[1]);
    xmlNodePtr root = doc->children;
    xmlNodePtr node = root->children;
    xmlElementType type;

    type = node->type;

    if (type == )

    printf("%s\n", (char *) node->children);
    // xmlElemDump(stdout, doc, root);

    // xmlFreeNode(node);
    // xmlFreeNodeList(root);
    xmlFreeDoc(doc);

    return 0;
}
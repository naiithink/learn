#include <cstring>
#include <iostream>
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/tree.h>

using namespace std;

int
containChar (char *str)
{
    int res;
    int len = strlen (str);

    for (int i = 0; i < len; ++i)
    {
        if (str[i] >= 33 && str[i] <= 126)
        {
            res = 1;
            break;
        }
    }

    return res;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        return 1;
    
    xmlDocPtr doc = xmlParseFile(argv[1]);
    xmlNodePtr root = xmlDocGetRootElement(doc);
    xmlNodePtr node = root;
    xmlElementType nodeType;
    char *name;
    char *content;
    char *foundWhiteSpaces;
    char *foundNewLine;
    int foundChar;

    while (node != NULL)
    {
        if (node->children != NULL)
        {
            node = node->children;

            if (!strcmp ((char *) node->name, "text"))
            {
                printf("%s : ", (char *) node->parent->name);
            }

            content = (char *) xmlNodeGetContent (node);
            foundWhiteSpaces = strstr (content, " ");
            foundNewLine = strstr (content, "\n");
            foundChar = containChar (content);

            if (!foundChar && (foundWhiteSpaces || foundNewLine))
            {
                printf("\n");
            }
            else if (foundChar)
            {
                printf("%s.\n", (char *) content);
            }
        }
        else if (node->next != NULL)
        {
            node = node->next;
        }
        else
        {
            node = node->parent;
            node = node->next;
        }

        // printf(">> %s\n", (char *) xmlGetNodePath(node));
    }

    xmlFreeDoc (doc);
    return 0;
}
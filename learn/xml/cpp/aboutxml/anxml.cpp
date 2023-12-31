#include <cstdio>
#include <cstring>
#include <iostream>
#include <libxml2/libxml/nanohttp.h>
#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/tree.h>
#include "anxml.h"

// enum xmlElementType
// {
//     XML_ELEMENT_NODE         =  1
//     XML_ATTRIBUTE_NODE       =  2
//     XML_TEXT_NODE            =  3
//     XML_CDATA_SECTION_NODE   =  4
//     XML_ENTITY_REF_NODE      =  5
//     XML_ENTITY_NODE          =  6
//     XML_PI_NODE              =  7
//     XML_COMMENT_NODE         =  8
//     XML_DOCUMENT_NODE        =  9
//     XML_DOCUMENT_TYPE_NODE   = 10
//     XML_DOCUMENT_FRAG_NODE   = 11
//     XML_NOTATION_NODE        = 12
//     XML_HTML_DOCUMENT_NODE   = 13
//     XML_DTD_NODE             = 14
//     XML_ELEMENT_DECL         = 15
//     XML_ATTRIBUTE_DECL       = 16
//     XML_ENTITY_DECL          = 17
//     XML_NAMESPACE_DECL       = 18
//     XML_XINCLUDE_START       = 19
//     XML_XINCLUDE_END         = 20
//     XML_DOCB_DOCUMENT_NODE   = 21
// };

// Utils
int
containChar (const char *str)
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

int
fetchFile (const char * URL,
           const char * filename,
           char ** contentType)
{
    int res = 0;
    res = xmlNanoHTTPFetch (URL,
                            filename,
                            contentType);
    return res;
}

// MyTree
MyTree::MyTree (int initMode)
{
    this->initMode = initMode;
}

MyTree::MyTree (int initMode,
                unsigned long levelCount,
                unsigned long nodeCount_max)
{
    if (initMode == 1)
    {
        if (0 == initTree (this->pTreeRoot,
                           levelCount,
                           nodeCount_max))
        {
            freeTree ();
            std::cerr << "Error: cannot init tree." << std::endl;
        }
        // else {}
    }
    // else {}
}

int
MyTree::initTree (Tree::Node *pTreeRoot,
                  const unsigned long levelCount,
                  const unsigned long nodeCount_max)
{
    int ok = 0;
    Tree::Node *pTreeRoot_temp;

    pTreeRoot_temp = (Tree::Node *) malloc (sizeof (Tree::Node));

    if (pTreeRoot_temp == NULL)
    {
        ok = 0;
    }
    else
    {
        ok = 1;
        pTreeRoot_temp->elem = NULL;
        pTreeRoot_temp->attr = NULL;
        pTreeRoot_temp->parent = NULL;
        pTreeRoot_temp->child = NULL;
        pTreeRoot_temp->next = NULL;

        pTreeRoot = pTreeRoot_temp;
    }

    free (pTreeRoot_temp);
    return ok;
}

unsigned long
MyTree::childCount (Tree::Node *pTreeNode)
{
    // ?
    return 1;
    // ?
}

int
MyTree::freeTree (void)
{
    int ok = 0;
    unsigned long       childCount = 0;
    const unsigned long arity = MyTree::childCount (pTreeRoot);
    unsigned long       remainArity = arity;
    Tree::Node          *pNode = pTreeRoot;

    while (pNode != NULL)
    {
        childCount = this->childCount (pNode);
        while (remainArity)
        {
            // 
        }
    }

    return ok;
}

// MyXML
MyXML::MyXML (const char *filepath)
{
    this->filepath = filepath;
    this->pDoc = initDoc (filepath);
    this->pRootNode = getRootNodePtr (this->pDoc);
    this->arity = xmlChildElementCount (this->pRootNode);
}

xmlDocPtr
MyXML::initDoc (const char *filepath)
{
    xmlDocPtr pDoc_res;

    pDoc_res = xmlParseFile (filepath);

    // xmlFreeDoc (pDoc_res);
    return pDoc_res;
}

xmlNodePtr
MyXML::getRootNodePtr (const xmlDocPtr pDoc)
{
    xmlNodePtr pRootNode_res;

    xmlDocGetRootElement (pDoc);

    // xmlFreeNode (pRootNode_res);
    // xmlFreeDoc (pDoc);
    return pRootNode_res;
}

// preorder traversal
void
MyXML::fprintNode (FILE * __restrict __stream,
                   xmlNodePtr pNode,
                   const int indent)
{
    xmlNodePtr pCur;
    char *name;
    char *content;
    char *foundNewLine;
    char *foundWhiteSpace;
    int foundChar = 0;
    int depth = 0;

    if (pNode == NULL)
    {
        pCur = pRootNode;
    }
    else
    {
        pCur = pNode;
    }

    if (pCur == pNode)
    {
        if (pCur->children != NULL)
        {
            pCur = pCur->children;
        }
        else
        {
            return ;
        }
        fprintf (__stream, "%s :\n", (char *) pCur->name);

        if (pCur->children != NULL)
        {
            pCur = pCur->children;
        }
    }

    while (pCur != NULL)
    {
        if (pCur->children != NULL)
        {
            
            depth++;
            name = (char *) pCur->name;
            pCur = pCur->children;

            for (int i = 0; indent && i < depth; ++i)
            {
                fprintf (__stream, "\t");
            }
            
            content = (char *) xmlNodeGetContent (pCur);
            foundNewLine = strstr (content, "\n");
            foundWhiteSpace = strstr (content, " ");
            foundChar = containChar (content);

            if (!strcmp ((char *) pCur->parent->name, "text"))
            {
                fprintf (__stream, "%s : ", name);
                if (!foundChar && (foundNewLine || foundWhiteSpace))
                {
                    fprintf (__stream, "\n");
                }
                else if (foundChar)
                {
                    if (!foundChar && (foundNewLine || foundWhiteSpace))
                    {
                        fprintf (__stream, "%s\n", content);
                    }
                    else if (pCur->next == NULL)
                    {
                        fprintf (__stream, "\n");
                    }
                }
            }

            xmlFree (content);
        }
        else if (pCur->children == NULL)
        {
            name = (char *) pCur->name;

            for (int i = 0; indent && i < depth; ++i)
            {
                fprintf (__stream, "\t");
            }
            fprintf (__stream, "%s :\n", name);
        }
        
        if (pCur->next != NULL)
        {
            pCur = pCur->next;
        }
        else
        {
            pCur = pCur->parent;
            depth--;
            pCur = pCur->next;
        }
    }
}

void
MyXML::fprintTree (FILE * __restrict __stream,
                   const int indent)
{
    fprintNode (__stream,
                pRootNode,
                indent);
}

void
MyXML::closeDoc (void)
{
    xmlCleanupParser ();
    xmlFreeDoc (this->pDoc);
}

// MyHTML
MyHTML::MyHTML (const char *filepath)
: MyXML (filepath)
{
    // done construction
}
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/tree.h>
#include <cstdio>
#include <cstring>
#include <iostream>
#include "anxml.h"

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
    const unsigned long	arity = MyTree::childCount (pTreeRoot);
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

    if (pCur == pRootNode)
    {
        if (pCur->children != NULL)
        {
            pCur = pCur->children;
            depth++;
        }
        else
        {
            return ;
        }
    }

    while (pCur != NULL)
    {
        if (pCur->children != NULL)
        {
            pCur = pCur->children;
            name = (char *) pCur->parent->name;
            
            if (!strcmp ((char *) pCur->name, "text"))
            {
                fprintf (__stream, "%s :", name);
            }

            content = (char *) xmlNodeGetContent (pCur);
            foundNewLine = strstr (content, "\n");
            foundWhiteSpace = strstr (content, " ");
            foundChar = containChar (content);

            if (!foundChar && (foundNewLine || foundWhiteSpace))
            {
                continue;
            }
            else if (foundChar)
            {
                if (pCur->children == NULL)
                {
                    fprintf (__stream, "\t%s .\n", content);
                }
                else
                {
                    fprintf (__stream, "\t%s :", content);
                }
            }

            xmlFree (content);
        }
        else if (pCur->next != NULL)
        {
            pCur = pCur->next;
        }
        else
        {
            pCur = pCur->parent;
            pCur = pCur->next;
            depth--;
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
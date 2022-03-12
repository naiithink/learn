#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/tree.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "anxml.h"

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

    xmlFreeDoc (pDoc_res);
    return pDoc_res;
}

xmlNodePtr
MyXML::getRootNodePtr (const xmlDocPtr pDoc)
{
    xmlNodePtr pRootNode_res;

    xmlDocGetRootElement (pDoc);

    xmlFreeNode (pRootNode_res);
    xmlFreeDoc (pDoc);
    return pRootNode_res;
}

// preorder traversal
void
MyXML::fprintTree (FILE * __restrict __stream)
{
    FILE *stream;
    xmlNodePtr pNode = pRootNode;
    char *name;
    char *child;
    int depth = 0;

    fprintf (__stream, "%s :\n", (char *) pRootNode->name);

    while (pNode != NULL)
    {
        if (pNode->children != NULL)
        {
            name = (char *) pNode->name;
            fprintf (__stream, "\t%s\t:", name);
            pNode = pNode->children;
            depth++;
        }
        else if (pNode->children == NULL && pNode->next != NULL)
        {
            name = (char *) pNode->name;

            for (int i = 0; i < depth; ++i)
            {
                fprintf (__stream, "\t");
            }
            fprintf (__stream, "%s\n ", name);
            pNode = pNode->next;
        }
        else if (pNode->children == NULL && pNode->next == NULL)
        {
            pNode = pNode->parent;
            depth--;
        }
        else
        {
            pNode = pNode->parent;
            if (pNode->parent == pRootNode)
            {
                break;
            }
        }
    }
}

void
MyXML::fprintNode (FILE * __restrict __stream,
                   const xmlNodePtr pNode)
{
    // ?
}

int
MyXML::closeDoc (void)
{
    int ok = 0;

    xmlFreeDoc (this->pDoc);

    if (this->pDoc == NULL)
    {
        ok = 1;
    }
    else
    {
        ok = 0;
    }

    return ok;
}
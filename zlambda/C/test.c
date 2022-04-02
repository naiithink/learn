#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}
node;

void freeList(node *pRoot)
{
    node *pHead = pRoot;
    node *pPrev = NULL;

    while (pHead->next != NULL)
    {
        pPrev = pHead;
        pHead = pHead->next;
        free(pPrev);
    }
    free(pHead);
}

void printList(node *pList)
{
    for (node *i = pList; i != NULL; i = i->next)
    {
        printf("%d ", i->value);
    }
    printf("\n");
}

void insertNode(node **head, int value)
{
    node *empty_box = malloc(sizeof(node));
    empty_box->value = value;
    empty_box->next = NULL;

    /* insert data at the end linkedlist */
    if (*head == NULL)
    {
        *head = empty_box;
        return;
    }
    node *last_list = *head;

    while (last_list->next != NULL)
    {
        last_list = last_list->next;
    }
    last_list->next = empty_box;

    /* sort linklist */
    node *current = *head, *nextnode = NULL;
    int tempvalue;

    if (*head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            nextnode = current->next;
            while (nextnode != NULL)
            {
                if (current->value > nextnode->value)
                {
                    tempvalue = current->value;
                    current->value = nextnode->value;
                    nextnode->value = tempvalue;
                }
                nextnode = nextnode->next;
            }
            current = current->next;
        }
    }
}

int main(void)
{
    int i, value;
    node *pList = NULL;
    for (i = 0; i < 10; i++)
    {

        scanf("%d", &value);
        insertNode(&pList, value);
    }
    printList(pList);

    freeList(pList);
}
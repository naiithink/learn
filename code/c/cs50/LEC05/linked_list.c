#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list;
    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        (*n).number = 1;                                        // n->number = 1;
        (*n).next = NULL;                                       // n->next = NULL;
        list = n;
    }
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}
node;

int main(void)
{
    node *list = (node *) malloc (sizeof(node));

    list->value = 1;
    list->next = NULL;
    
    node *temp = (node *) malloc (sizeof(node));

    if (temp == NULL)
    {
        fprintf (stderr, "Cannot allocate such a memory\n");
        return 1;
    }

    list->next = temp;

    printf("%d\n", list->value);

    list = list->next;

    free (temp);

    list->value = 2;
    list->next = NULL;

    printf("%d\n", list->value);
    

    free(list);

    return 0;
}
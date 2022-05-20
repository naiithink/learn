/*
 * From The mind behind Linux | Linus Torvalds <https://youtu.be/o8NPllzkFhE>
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    void *value;
    struct node *next;
} node;

void remove_list_entry1(node *entry);
void remove_list_entry2(node *entry);

int main(int argc, char **argv)
{
    return 0;
}

void remove_list_entry1(node *entry)
{
    node *prev = NULL;
    node *walk = head;

    // Walk the list

    while (walk != entry) {
        prev = walk;
        walk = walk->next;
    }

    // Remove the entry by updating the
    // head or the previous entry

    if (!prev)
        head = entry->next;
    else
        prev->next = entry->next;
}

void remove_list_entry2(node *entry)
{
    // The "indirect" pointer points to the
    // *address* of the thing we'll update

    node *indirect = &head;

    // Walk the list, looing for the thing that
    // points to the entry we want to remove

    while ((*indirect) != entry)
        indirect = &(*indirect)->next;
    
    // .. and just remove it
    *indirect = entry->next;
}
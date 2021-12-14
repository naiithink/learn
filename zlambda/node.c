#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}
node;

// int dynamic_alloc (char *c, );

int randomize (int *str);

int
main (int argc, char **argv)
{
    char str[5] = "code";

    int i = 0;
    while (str[i] != '\0')
    {
        printf ("%p\n", &str[i]);
        i++;
    }

    char *newstr = randomize (&str);
    printf("%s\n", newstr);

    i = 0;
    while (str[i] != '\0')
    {
        printf ("%p\n", &str[i]);
        i++;
    }

    /*
    node str;

    fputs("Enter: ", stdout);

    if (argv[1])
    {
        int i = 0;
        int c;
        while (c = fgetc(stdin) != NULL)
        {
            
        }
    }
    */

    /*
    // {
        int n = 0;
    // }
    
    if (1)
    {
        n = 1;
    }

    if (n == 1)
    {
        printf("%i\n", n);
        return 1;
    }
    else if (n == 0)
    {
        printf("%i\n", n);
        return 2;
    }

    printf("%i\n", n);
    */
    return 0;
}

int
randomize (int *str)
{
    if (*str)
    {
        node *new;
        int *p;
        int i = 0;
        while (str[i] != '\0')
        {
            if (i == 0)
            {
                new->data = malloc(sizeof(node));
                p = &new->data;
            }

            new->data = str[i];

            if (str[i+1] == NULL)
            {
                new->next = NULL;
            }
            else
            {
                new->next = malloc(sizeof(node));
            }

            i++;
        }
        return p;
    }
    else
    {
        // Address 0x0
        return 0;
    }
}

/*
int
dynamic_alloc (char *c, )
{
    FILE *p_c, *next;

    if (c == NULL)
    {
        return 1;
    }
    else
    {
        p_c = malloc (2 * sizeof(char));
    }
}
*/
/**
 * @file hash-table.c
 * @author Potsawat Thinkanwatthana (potsawattkw@outlook.com)
 * @brief Implementing a simple hash table.
 * @version 0.0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct
{
    char name[MAX_NAME];
    int age;
}
person;

// Array of `person`
person * hash_table[TABLE_SIZE];

unsigned int hash(char *);
void init_hash_table(void);
void print_table(void);
bool hash_table_insert(person *);
person *hash_table_delete(char *);
person *hash_table_lookup(char *);

int main(void)
{
    init_hash_table();
    print_table();

    person jacob = { .name = "Jacob", .age = 256 };
    person nai = { .name = "Nai", .age = 512 };
    person nine = { .name = "Nine", .age = 512 };
    person think = { .name = "Think", .age = 1024 };

    hash_table_insert(&jacob);
    hash_table_insert(&nai);
    hash_table_insert(&think);
    print_table();

    person *tmp = hash_table_lookup("Nai");

    if (tmp == NULL)
        printf("Not found.\n");
    else
        printf("Found %s.\n", tmp->name);

    tmp = hash_table_lookup("JBL");

    if (tmp == NULL)
        printf("Not found!\n");
    else
        printf("Found %s.\n", tmp->name);

    person *deleted_p = hash_table_delete("Think");
    if (tmp == NULL)
        printf("Not found!\n");
    else
        printf("Found %s.\n", tmp->name);

    print_table();

    // printf("Jacob => %u\n", hash("Jacob"));
    // printf("Nai => %u\n", hash("Nai"));
    // printf("Think => %u\n", hash("Think"));
    // printf("Thin => %u\n", hash("Think"));

    return 0;
}

void init_hash_table(void)
{
    for (int i = 0; i < TABLE_SIZE; ++i)
        hash_table[i] = NULL;
}

void print_table(void)
{
    printf("Start\n");
    for (int i = 0; i < TABLE_SIZE; ++i)
    {
        if (hash_table[i] == NULL)
            printf("\t%i\t---\n", i);
        else
            printf("\t%i\t%s\n", i, hash_table[i]->name);
    }
    printf("End\n");
}

// v1.0.0
person *hash_table_lookup(char *name)
{
    person *res = NULL;
    int index = hash(name);

    if (hash_table[index] != NULL
        && strncmp(hash_table[index]->name, name, TABLE_SIZE) == 0)
        res = hash_table[index];
    else
        res = NULL;
    
    return res;
}

// v1.0.0
person *hash_table_delete(char *name)
{
    person *res = NULL;
    int index = hash(name);

    if (hash_table[index] != NULL
        && strncmp(hash_table[index]->name, name, TABLE_SIZE) == 0)
    {
        person *tmp = hash_table[index];
        hash_table[index] = NULL;
        res = tmp;
    }
    else
        res = NULL;
    
    return res;
}

// v1.0.0
bool hash_table_insert(person *p)
{
    if (p == NULL)
    {
        fprintf(stderr, "Argument is NULL.\n");
        return false;
    }

    bool res;
    int index = hash(p->name);

    if (hash_table[index] != NULL)
    {
        fprintf(stderr, "Index not empty.\n");
        res = false;
    }
    else
    {
        hash_table[index] = p;
        res = true;
    }

    return true;
}

// v2.1.1: fix to fit TABLE_SIZE
unsigned int hash(char *name)
{
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;

    for (int i = 0; i < length; ++i)
    {
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }

    return hash_value;
}

/* // v2.1.0: more complex hash
unsigned int hash(char *name)
{
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;

    for (int i = 0; i < length; ++i)
    {
        hash_value += name[i];
        hash_value = hash_value * name[i];
    }

    return hash_value;
}
*/

/* // v2.0.0: hashing
unsigned int hash(char *name)
{
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;

    for (int i = 0; i < length; ++i)
        hash_value += name[i];

    return hash_value;
}
*/

/* // v1.0.0
unsigned int hash(char *name)
{
    return 5;
}
*/

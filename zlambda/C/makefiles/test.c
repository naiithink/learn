#include <stdio.h>
#include <string.h>

#define STR_SIZE_T 255

typedef struct
{
    char name[STR_SIZE_T];
    
} App;

int main(void)
{
    char name_tmp[STR_SIZE_T];
    int id_tmp;
    Person *a;

    scanf("%s", name_tmp);
    scanf("\n%d", &id_tmp);

    strcpy(a->name, name_tmp);
    a->id = id_tmp;
    printf("%s\n%d\n", a->name, a->id);

    return 0;
}
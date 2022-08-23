#ifndef MALLOC_ME_H
#define MALLOC_ME_H

#ifdef __cplusplus
extern "C" {
#endif


#include <stdlib.h>


typedef struct
{
    int value;
}
Eiei;


void *
malloc_me(int);

int
demalloc_me(void *);


#ifdef __cplusplus
}
#endif

#endif /* MALLOC_ME_H */

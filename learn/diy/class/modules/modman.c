#ifndef _STDIO_H_
#include <stdio.h>
#endif

#include "modman.h"

struct __modman
{
    void (*_init) (const int);
    void (*_printHello) (void);
    void (*_printWorld) (void);
    void (*_br) (void);
    int value;
};

/*
 * typedef struct __modman *modman;
 */

struct modman
{
    int value
};

modman
init (const int value)
{
    modman this;
    this->_printHello = &__printHello;
    return this;
}

void
__br (void)
{
    fputs ("\n", stdout);
}

void
__printHello (void)
{
    fputs ("hello", stdout);
}

void
__printWorld (void)
{
    fputs ("world", stdout);
}
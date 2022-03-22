#ifndef MODMAN
#define MODMAN

typedef enum { public, protected, private } access_mode;
typedef void (*void_f_void) (void);

struct __modman;
typedef struct __modman *modman;

modman
this (const int value);

void
__br (void);

void
__printHello (void);

void
__printWorld (void);

struct modman;

#endif
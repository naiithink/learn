#ifndef FLIGHT
#define FLIGHT

typedef struct
{
    int capacity;
    void (*getCapacity) (void);
    void (*init) (void);
}
Flight;

typedef struct __flightList
{
    Flight *node;
    struct __flightList *next;
    struct __flightList *prev;
}
__flightList;

__flightList __list;
Flight *__flightNodeList;
Flight *createFlight (const int);
int freeFlightNode (Flight *);
int freeFlightTree (void);
void flightFetch (Flight *);
void __init (const int);
void __getCapacity (void);
void __updateRef (void);

#endif
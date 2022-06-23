#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int sigbusn;
int sigsegvn;

struct list
{
    unsigned m:4;
    unsigned n:3;
}__attribute__((packed));

struct nib
{
    // unsigned i:4;
    uint8_t i:4;
}__attribute__((packed));

void got_bus(int signo)
{
    if (!sigbusn)
        sigbusn = 1;
    else
        // return;
        abort();

    printf("\nGOT BUS\n\n");
    exit(101);
}

void got_segv(int signo)
{
    if (!sigsegvn)
        sigsegvn = 1;
    else
        // return;
        abort();

    printf("\nGOT SEGV\n\n");
    exit(102);
}

int main(void)
{
    char *pc = NULL;
    char *pcls = NULL;
    char *pcnib = NULL;
    char *pcpnb = NULL;
    int m = 10;
    int n = 15;
    int *pm = &m;
    int *pn = &n;
    struct list ls = { .m = 15, .n = 3 };
    struct list *pls = &ls;

    signal(SIGBUS, &got_bus);
    signal(SIGSEGV, &got_segv);

    // kill(getpid(), SIGBUS);
    // kill(getpid(), SIGSEGV);

    struct nib *pnb1 = malloc(sizeof *pnb1);
    struct nib *pnb2 = malloc(sizeof *pnb2);
    struct nib *pnb3 = malloc(sizeof *pnb3);

    pnb1->i = 15;
    pnb2->i = 0;
    pnb3->i = 15;

    pcpnb = (char *) pnb1 + 1;

    printf("n(*pnb1):           %lu\n", sizeof *pnb1);
    printf("n(struct nib):      %lu\n", sizeof(struct nib));
    printf("pcnib:              %14p:    % 03i\n", pcnib, *pcnib);

    free(pnb1);
    free(pnb2);
    free(pnb3);

    // exit(11);

    struct nib a = { .i = 15 };
    struct nib b = { .i = 0 };
    struct nib c = { .i = 15 };
    struct nib *pnib = &a;

    pcnib = (char *) pnib + 1;

    printf("n(struct nib):      %lu\n", sizeof(struct nib));
    printf("pcnib:              %14p:    % 03i\n", pcnib, *pcnib);

    printf("n(m):               %lu\n", sizeof m);
    printf("n(ls):              %lu\n", sizeof ls);

    // exit(12);

    pc = (char *) pm + 1;
    pcls = (char *) pls + 1;
    printf("> pcls:             %14p:    % 03i\n", pcls, *pcls);

    pcls = (char *) pls + 1;
    printf("> pcls:             %14p:    % 03i\n", pcls, *pcls);

    printf("pm:                 %14p:    % 03i\n", pm, *pm);
    printf("pn:                 %14p:    % 03i\n", pn, *pn);
    printf("pc:                 %14p:    % 03i\n", pc, *pc);
    printf("pcls:               %14p:    % 03i\n", pcls, *pcls);

    // exit(13);

    printf("gotcha\n");

    return 0;
}

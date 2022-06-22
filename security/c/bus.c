#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int sigbusn;
int sigsegvn;

struct list
{
	unsigned m:4;
	unsigned n:3;
}__attribute__((packed));

struct nib
{
	int i:4;
}__attribute__((packed));

void got_bus(int signo)
{
	if (!sigbusn)
		sigbusn = 1;
	else
		// return;
		abort();

	fprintf(stderr, "\nGOT BUS\n\n");
	// exit(10);
}

void got_segv(int signo)
{
	if (!sigsegvn)
		sigsegvn = 1;
	else
		// return;
		abort();

	fprintf(stderr, "\nGOT SEGV\n\n");
	// exit(9);
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
	// signal(SIGBUS, printf(">>> got bus\n"));
	// signal(SIGSEGV, printf(">>> got segv\n"));

	struct nib *pnb1 = malloc(sizeof *pnb1);
	struct nib *pnb2 = malloc(sizeof *pnb2);
	struct nib *pnb3 = malloc(sizeof *pnb3);

	pnb1->i = 7;
	pnb2->i = 0;
	pnb3->i = 7;

	pcpnb = (char *) pnb1 + 1;

	printf("n(struct nib): 	%lu\n", sizeof(struct nib));
	printf("pcnib: 		%p: %i\n", pcnib, *pcnib);

	struct nib a = { .i = 7 };
	struct nib b = { .i = 0 };
	struct nib c = { .i = 7 };
	struct nib *pnib = &a;

	pcnib = (char *) pnib + 1;

	printf("n(struct nib): 	%lu\n", sizeof(struct nib));
	printf("pcnib: 		%p: %i\n", pcnib, *pcnib);

	printf("n(m):  			%lu\n", sizeof m);
	printf("n(ls): 			%lu\n", sizeof ls);

	pc = (char *) pm + 1;
	pcls = (char *) pls + 1;
	printf("> pcls: 	%p: %i\n", pcls, *pcls);

	pcls = (char *) pls + 1;
	printf("> pcls: 	%p: %i\n", pcls, *pcls);

	printf("pm: 		%p: %i\n", pm, *pm);
	printf("pn: 		%p: %i\n", pn, *pn);
	printf("pc: 		%p: %i\n", pc, *pc);
	printf("pcls: 		%p: %i\n", pcls, *pcls);

	printf("gotcha\n");

	free(pnb1);
	free(pnb2);
	free(pnb3);
	return 0;
}

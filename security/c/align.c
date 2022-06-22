#include <stdio.h>

int main(void)
{
	char *pc = NULL;
	int m = 10;
	int n = 15;
	int *pm = &m;
	int *pn = &n;

	printf("n(m): %lu\n", sizeof m);

	pc = (char *) pm + 1;

	printf("pm: %p: %i\n", pm, *pm);
	printf("pn: %p: %i\n", pn, *pn);
	printf("pc: %p: %i\n", pc, *pc);

	return 0;
}

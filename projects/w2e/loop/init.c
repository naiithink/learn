#include <stdlib.h>

int loopd(void);

void __start(void)
{
	int exit_status;

	exit_status = loopd();

	exit(exit_status);
}
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int x;
	
	for (x = 0; x < 10; x++)
	{
		printf("x = %d\n", x);
		sleep(1);
	}
}

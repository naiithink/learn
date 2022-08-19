#include <stdio.h>
#include <stdint.h>
#include <sys/mman.h>

#define PAGESIZE 4096

int main(void)
{
    uint8_t *first = mmap((void *) 0xABCDEF, PAGESIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    printf("%p\n", first);

    return 0;
}

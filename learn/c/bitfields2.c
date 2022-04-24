/**
 * @file bitfields2.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * Generally, sizeof(counts) may produces 4 bytes.
 * The compiler will align the 
 * But with __attribute__((packed)), 
 */

#include <stdio.h>
#include <unistd.h>

#define NUM_LOOPS 50

struct counters
{
    unsigned int little:2;
    unsigned int medium:4;
    unsigned int large:6;
}__attribute__((packed));

int main(int argc, char **argv)
{

    struct counters counts;
    
    counts.little = 0;
    counts.medium = 0;
    counts.large = 0;

    for (int i = 0; i < NUM_LOOPS; ++i)
    {
        counts.little++;
        counts.medium++;
        counts.large++;
        printf("%u, %u, %u \n", counts.little, counts.medium, counts.large);
    }

    printf("sizeof(counts) == %lu\n", sizeof(counts));

    return 0;
}
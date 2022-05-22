#include <getopt.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MIN 0140        /* 0110 0000 */

#define C   0103        /* 0100 0011 */
#define CS  0143        /* 0110 0011 */
#define D   0104        /* 0100 0100 */
#define DS  0144        /* 0110 0100 */
#define E   0105        /* 0100 0101 */
#define F   0106        /* 0100 0110 */
#define FS  0146        /* 0110 0110 */
#define G   0107        /* 0100 0111 */
#define GS  0146        /* 0110 0111 */
#define A   0101        /* 0100 0001 */
#define AS  0141        /* 0110 0001 */
#define B   0102        /* 0100 0010 */

#define FIND_DEF(x) (x ^ MIN)

struct note
{
    unsigned int pitch:4;
};

static int key;
const int step[] = { 4, 3 };

int main(int argc, char **argv)
{
    if (argc == 1)
        return 1;

    int ch = 0;
    int longindex = 0;

    static struct option longopts[] =
    {
        { "key",	required_argument,	NULL, 	0 },
        { "major", 	no_argument, 		&key, 	0 },
        { "minor", 	no_argument, 		&key, 	1 },
        { 0, 0, 0, 0 }
    };

    while (1)
    {
        ch = getopt_long(argc, argv, "mn",
                         longopts, &longindex);

        if (ch == -1)
            break;
        
        switch (ch)
        {
            case 'm':
                key = 0;
                printf("Major\n");
                break;
            case 'n':
                key = 1;
                printf("Minor\n");
                break;
            default:
                key = 0;
                fprintf(stderr, "Using default: Major\n");
        }
    }
    
    return 0;
}
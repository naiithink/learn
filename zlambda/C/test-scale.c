#include <stdio.h>
#include <stdlib.h>

#define	MIN	0140		/* 0110 0000 */

#define C 	0103		/* 0100 0011 */
#define CS 	0143		/* 0110 0011 */
#define D 	0104		/* 0100 0100 */
#define DS 	0144		/* 0110 0100 */
#define E 	0105		/* 0100 0101 */
#define F 	0106		/* 0100 0110 */
#define FS 	0146		/* 0110 0110 */
#define G 	0107		/* 0100 0111 */
#define GS 	0146		/* 0110 0111 */
#define A 	0101		/* 0100 0001 */
#define AS 	0141		/* 0110 0001 */
#define B 	0102		/* 0100 0010 */

#define FIND_DEF(x) (x ^ MIN

#define INPUT_MXIND 2
#define MJ_STEP_IND 0
#define MN_STEP_IND 1

struct num
{
	unsigned int bin:1;
	unsigned int oct:3;
};

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        fprintf(stderr, "This program requires 1 argument.\n");
        return 1;
    }

    int n_argvc = 0;
    int sstart = 0;
    int sstep = MJ_STEP_IND;
    int step[] = { 4, 3 };
    int half = 0;
    char cstart = '\0';
    char *scale = argv[1];
    double notes[] = { 130.81, 138.59, 146.83, 155.56,
                       164.81, 174.61, 185.00, 196.00,
                       207.65, 220.00, 233.08, 246.94 };
	struct num d;
    
	d.bin = 0;
	d.oct = 0;

    while (*scale)
    {
        if (n_argvc > INPUT_MXIND)
        {
            fprintf(stderr, "Invalid input '%s'.\n", argv[1]);
            return 1;
        }
        
        switch (*scale)
        {
            case 'm':
            case 'M':
                sstep = MN_STEP_IND;
                break;
            case '#':
                half = 1;
                break;
            default:
                if (*scale & 0x98)
                {
                    fprintf(stderr, "Invalid input '%c'.\n", *scale);
                    return 1;
                }
                cstart = *scale;
        }
        
        if (!*++scale)
            break;
        
        n_argvc++;
    }

    if (!cstart)
    {
        fprintf(stderr, "Invalid input '%s'.\n", argv[1]);
        return 1;
    }

    printf("%c, %d, %d\n", cstart, half, sstep);

    exit(0);
	
	while (1)
    {
		// printf("%u\n", d.oct++);
		printf("%f\n", notes[d.bin++]);
    }
	
	return 0;
}
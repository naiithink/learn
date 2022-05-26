#include <getopt.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

/* 0x98		0230		   1001 1000 */
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

#define FIND_DEF(x) (x ^ MIN)

void getHelp (void);
void handler (int err);
int termHandler ();

static int isMajor;
extern int loopn;

static int exit_status;

int main(int argc, char **argv)
{
    int ok = 0;
    FILE *file;
    int ch = 0;
    int optind = 0;
    
    signal (SIGINT, );

    static struct option longopts[] =
    {
        { "help",	no_argument,	    NULL, 	0 },
        { "key",	required_argument,	NULL, 	0 },
        { "major", 	no_argument, 		&key, 	0 },
        { "minor", 	no_argument, 		&key, 	1 },
        { 0, 0, 0, 0 }
    };

    while (1)
    {
        ch = getopt (argc, argv, "hkMm",
                     longopts, &optind);

        if (ch == -1)
            break;
        
        switch (ch)
        {
            case '0':
                /* already print error warn */
                break;
            case 'h':
                getHelp ();
                break;
            case 'k':
                if (*optarg == '\0')
                {
                    /* ? */
                    handler ();
                }
                break;
            case 'M':
                isMajor = 1;
                break;
            case 'm':
                /* ? */
                break;
            default:
                fprintf (stderr, "%s:%s: Error: unknown option '%c'.\n", __FILE__, __LINE__, ch);
                exit (1);
        }
    }



    return exit_status = ok ? EXIT_SUCCESS
                            : EXIT_FAILURE;
}

void
getHelp (void)
{
    /* ? */
    fprintf (stderr, "");
}

void
handler (int err)
{

}

int
termHandler (void)
{
    
}
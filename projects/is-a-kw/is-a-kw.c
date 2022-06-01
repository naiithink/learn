/**
 * @file is-a-kw.c
 * @author Potsawat Thinkanwatthana (potsawattkw@outlook.com)
 * @brief 
 * @version 0.0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <getopt.h>
#include <stdio.h>
#include <string.h>

#include "is-a-kw.h"

akeyword * KW_Table[KW_TABLE_MAX];

int
main (int argc, char **argv)
{
    if (argc == 1)
    {
        fprintf(stderr, "This program requires arguments.\n");
        return 1;
    }

    int ch = 0;
    int opt_index = 0;

    static struct option longopts[] =
    {
        { "help",   no_argument,        NULL,   'h' },
        { "lang",   required_argument,  NULL,   'l' },
        { 0, 0, 0, 0 }
    };

    while (1)
    {
        ch = getopt_long(argc, argv, "hl:",
                         longopts, &opt_index);

        switch (ch)
        {
            case 0:
                if (longopts[opt_index].val)
                    fprintf(stderr, "%s: %i\n", longopts[opt_index].name, longopts[opt_index].val);
                    break;
                else
                    /* already raise */
                    break;
                break;
            case 'h':
            case '?':
                /* already raise */
                break;
            default:
                abort();
        }
    }

    return 0;
}

void
print_help (void)
{
    fprintf(stderr, "");
}

void
init_kw_table (void)
{
    for (int i = 0; i < KW_TABLE_MAX; ++i)
        KW_Table[i] = NULL;
}

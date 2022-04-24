/*
 * upita.c
 *
 * Copyright (C) 2022 naiithink <potsawattkw@outlook.com>.
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include <getopt.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define PROGRAM_NAME "upita"
#define AUTHORS "naiithink"

#define ALL     0xFF

#define GEM     0x01
#define APTGET  0x02
#define DNF     0x04
#define HBREW   0x08
#define WINGET  0x10
#define PIP     0x20
#define PIP3    0x40

#if (defined __APPLE__     \
     && defined __MACH__   )
#define G_MAC (GEM | HBREW | PIP3)
#endif

static int exit_status;
static int target_pkgman;

int
main (int argc, char **argv)
{
    int ok = 0;
    int longopts_ind = 0;
    int ch = -1;

    static struct option longopts[] =
    {
        { "all",    no_argument,    NULL,   'a' },
        { "mac",    no_argument,    NULL,   0 },
        { 0,        0,              0,      0 }
    };

    while (1)
    {
        ch = getopt_long (argc, argv, "a",
                          longopts, &longopts_ind);

        if (ch == -1)
            break;

        switch (ch)
        {
            case 0:
                if (longopts[longopts_ind].flag == NULL)
                    break;
                // else if ()
            case 'a':
                target_pkgman |= ALL;
                break;
            default:
                if (!target_pkgman)
                {
                    fprintf (stderr, "%s: error: no option found.\n", PROGRAM_NAME);
                    exit(1);
                }
        }
    }

    return exit_status = ok ? EXIT_SUCCESS
                            : EXIT_FAILURE;
}
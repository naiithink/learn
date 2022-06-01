/**
 * @file is-a-kw.h
 * @author Potsawat Thinkanwatthana (potsawattkw@outlook.com)
 * @brief 
 * @version 0.0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef IS_A_KW_H
#define IS_A_KW_H

#ifdef _cplusplus
extern "c" {
#endif

#if (defined __linux__)
    #include <sys/limits.h>
#elif (defined __APPLE__ && defined __MACH__)
    #include <limits.h>
#endif

#define KW_TABLE_MAX 1024
#define KW_MAX PATH_MAX

typedef struct akeyword
{
    char name[KW_MAX];
    unsigned int category;
    struct akeyword *next;
}
akeyword;

void print_help (void)
           __attribute__((noreturn));

void init_kw_table (void)
                    __attribute__((noreturn));

#ifdef _cplusplus
}
#endif /* _cplusplus */

#endif /* IS_A_KW_H */

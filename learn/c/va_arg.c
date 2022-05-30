#include <stdio.h>

#define RTRN(X) (X) ? (X) : (X)

typedef enum type { e_int = 1, e_double, e_string } THETYPE;

#define TYPE(X) _Generic((X),			 		\
                        int: 		e_int,		\
                        double:		e_double,	\
                        char *: 	e_string	)

void SWITCH(int);
void (*ESWITCH)(int) = &SWITCH;

#define S_TYPEOF_E(X) (*ESWITCH)(X)

#define ARG_CNT(L) for (int i = 0; )

#define ECHO(...) printf(__VA_ARGS__), printf("\n")

int main(void)
{
    // ECHO("hello");
    // ECHO("hello", "world");
    // ECHO("hello", "eiei");
    // ECHO("hello", "world", "eiei");

    
    THETYPE x = TYPE(1);

    /*
    switch (TYPE(1))
    {
        case (e_int):
            RTRN("int");
            break;
        case (e_double):
            RTRN("double");
            break;
        case (e_string):
            RTRN("string");
            break;
        default:
            RTRN("unknown");
    }
    */

    char *s = RTRN("eiei");
    printf("%s\n", s);

    int n = (*ESWITCH)(X);

    printf("%s\n", S_TYPEOF_E(1));

    return 0;
}

void SWITCH(int x)
{
    switch (x)
    {
        case (e_int):
            RTRN("int");
            break;
        case (e_double):
            RTRN("double");
            break;
        case (e_string):
            RTRN("string");
            break;
        default:
            RTRN("unknown");
    }
}

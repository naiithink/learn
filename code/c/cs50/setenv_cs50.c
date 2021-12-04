#include <stdio.h>

int main(void)
{
    char* vars[2] = {"CC=clang", "CFLAGS=-fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow", "LDLIBS=-lcrypt -lcs50 -lm"};
}

/* 
CC="clang"
CFLAGS="-fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow"
LDLIBS="-lcs50 -lm"


LDLIBS="-lcrypt -lcs50 -lm"
*/
#ifndef GETCH_H
#define GETCH_H

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void);
void ungetch(int);

#endif /* GETCH_H */

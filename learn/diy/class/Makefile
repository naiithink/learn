CC = clang
CFLAGS = -g

make : makeobj
	$(CC) $(CFLAGS) modman.o main.c -o main.out;

makeobj :
	$(CC) -c $(CFLAGS) modules/modman.c ./modules/modman.c;
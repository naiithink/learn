CC = gcc
CFLAGS = -Wall -g

run: main
	mkdir outp
	./test.out < inp/01.txt > outp/01-struct.txt
	./test.out < inp/02.txt > outp/02-struct.txt
	./test.out < inp/03.txt > outp/03-struct.txt

main: clean
	$(CC) $(CFLAGS) -o test.out test.c


clean:
	rm -rf *.o *.out outp/*.txt outp/
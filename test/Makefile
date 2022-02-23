purge : run
	rm -rf eiei.out

run : make
	./eiei.out << in.txt

make :
	clang try.c -o eiei.out
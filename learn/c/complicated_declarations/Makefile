CC := gcc
TARGET := dcl.exe
OBJECT := getch.o

.PHONY: all clean

all: $(TARGET)

%.exe: %.c $(OBJECT)
	$(CC) $(OBJECT) $< -o $@

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f *.o *.exe

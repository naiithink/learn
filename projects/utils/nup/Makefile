CC = clang
BUILDDIR = build

all: nup.h
lib/%.o: CFLAGS := -O0

.PHONY: all clean

%.o: %.c
	$(CC) $(CFLAGS) $^ -o $(BUILDDIR)/$@

config:
	mkdir -p $(BUILDDIR)

clean:
	rm *.c *.o *.so

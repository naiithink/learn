CC = clang
CFLAGS = -g

BIN = tcpclient

all: tcpc

tcpc: tcpclient.c
	$(CC) $(CFLAGS) $< -o $(BIN)

clean:
	$(RM) -rf $(BIN) *.dSYM

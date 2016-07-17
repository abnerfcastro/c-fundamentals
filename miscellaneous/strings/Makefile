CC = gcc
CFLAGS = -Wall -std=c99

all: strings.o
	$(CC) $(CFLAGS) strings.o -o strings

strings.o: strings.c
	$(CC) $(CFLAGS) -c strings.c

clean:
	rm -f *.o *.exe

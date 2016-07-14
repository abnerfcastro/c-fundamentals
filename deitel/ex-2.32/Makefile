CC = gcc
CFLAGS = -Wall -std=c99

all: main.o
	$(CC) $(CFLAGS) main.o -o main

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o *.exe

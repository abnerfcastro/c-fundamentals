CC = gcc
CFLAGS = -Wall -std=c99

all: time_c.o
	$(CC) $(CFLAGS) time_c.o -o time_c

time_c.o: time_c.c
	$(CC) $(CFLAGS) -c time_c.c

clean:
	rm -f *.o *.exe

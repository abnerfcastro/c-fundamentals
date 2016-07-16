CC = gcc
CFLAGS = -Wall -std=c99

# Compiling pointers-basics
basics: pointers-basics.o
	$(CC) $(CFLAGS) pointers-basics.o -o basics

pointers-basics.o: pointers-basics.c
	$(CC) $(CFLAGS) -c pointers-basics.c

# Compiling memory-basics
memory: memory-basics.o
	$(CC) $(CFLAGS) memory-basics.o -o memory

memory-basics.o: memory-basics.c
	$(CC) $(CFLAGS) -c memory-basics.c

# Compiling pointers-structs
structs: pointers-structs.o
	$(CC) $(CFLAGS) pointers-structs.o -o structs

pointers-structs.o: pointers-structs.c
	$(CC) $(CFLAGS) -c pointers-structs.c

clean:
	rm -f *.o *.exe

CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

inventory: inventory.o readline.o
	$(CC) inventory.o readline.o -o inventory

inventory.o: inventory.c inventory.h readline.h
	$(CC) -c $(CC_FLAGS) inventory.c -o inventory.o

readline.o: readline.c readline.h
	$(CC) -c $(CC_FLAGS) readline.c -o readline.o

clean:
	rm -f inventory inventory.o readline.o *~

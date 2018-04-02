CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

inventory: inventory.o readline.o sort.o
	$(CC) inventory.o readline.o sort.o -o inventory

inventory.o: inventory.c inventory.h readline.h sort.h
	$(CC) -c $(CC_FLAGS) inventory.c -o inventory.o

readline.o: readline.c readline.h
	$(CC) -c $(CC_FLAGS) readline.c -o readline.o

sort.o: sort.c sort.h inventory.h
	$(CC) -c $(CC_FLAGS) sort.c -o sort.o

clean:
	rm -f inventory inventory.o readline.o sort.o *~

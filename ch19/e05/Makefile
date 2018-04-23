CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

main: main.o
	$(CC) main.o -o main

main.o: main.c queue.h
	$(CC) -c $(CC_FLAGS) main.c -o main.o

clean:
	rm -f main main.o *~

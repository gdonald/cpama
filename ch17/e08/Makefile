CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

main: main.o stack.o
	$(CC) main.o stack.o -o main

main.o: main.c stack.h
	$(CC) -c $(CC_FLAGS) main.c -o main.o

stack.o: stack.c stack.h
	$(CC) -c $(CC_FLAGS) stack.c -o stack.o

clean:
	rm -f main main.o stack.o *~

CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

main: main.o readline.o
	$(CC) main.o readline.o -o main

main.o: main.c readline.h
	$(CC) -c $(CC_FLAGS) main.c -o main.o

readline.o: readline.c readline.h
	$(CC) -c $(CC_FLAGS) readline.c -o readline.o

clean:
	rm -f main main.o readline.o *~

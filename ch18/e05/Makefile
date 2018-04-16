CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

main: main.o file2.o
	$(CC) main.o file2.o -o main

main.o: main.c
	$(CC) -c $(CC_FLAGS) main.c -o main.o

file2.o: file2.c
	$(CC) -c $(CC_FLAGS) file2.c -o file2.o

clean:
	rm -f main main.o file2.o *~

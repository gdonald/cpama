CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

main: main.o queue.o
	$(CC) main.o queue.o -o main

main.o: main.c queue.h
	$(CC) -c $(CC_FLAGS) main.c -o main.o

queue.o: queue.c queue.h
	$(CC) -c $(CC_FLAGS) queue.c -o queue.o

clean:
	rm -f main main.o queue.o *~

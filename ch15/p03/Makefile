CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

main: main.o quicksort.o
	$(CC) main.o quicksort.o -o main

main.o: main.c quicksort.h
	$(CC) -c $(CC_FLAGS) main.c -o main.o

quicksort.o: quicksort.c quicksort.h
	$(CC) -c $(CC_FLAGS) quicksort.c -o quicksort.o

clean:
	rm -f main main.o quicksort.o *~

CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g
LD_FLAGS = -lm

main: main.o
	$(CC) main.o $(LD_FLAGS) -o main

main.o: main.c
	$(CC) -c $(CC_FLAGS) main.c -o main.o

clean:
	rm -f main main.o *~

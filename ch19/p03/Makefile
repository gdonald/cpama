CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

main: main.o stackADT.o
	$(CC) main.o stackADT.o -o main

main.o: main.c stackADT.h
	$(CC) -c $(CC_FLAGS) main.c -o main.o

stackADT.o: stackADT.c stackADT.h
	$(CC) -c $(CC_FLAGS) stackADT.c -o stackADT.o

clean:
	rm -f main main.o stackADT.o *~

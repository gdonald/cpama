CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

main: main.o queueADT.o
	$(CC) main.o queueADT.o -o main

main.o: main.c queueADT.h
	$(CC) -c $(CC_FLAGS) main.c -o main.o

queueADT.o: queueADT.c queueADT.h
	$(CC) -c $(CC_FLAGS) queueADT.c -o queueADT.o

clean:
	rm -f main main.o queueADT.o *~

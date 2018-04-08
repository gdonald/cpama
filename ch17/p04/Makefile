CC = clang
CC_FLAGS = -Wall -Wextra -std=c99 -O0 -g

justify: justify.o word.o line.o
	$(CC) word.o line.o justify.o -o justify

justify.o: justify.c word.h line.h
	$(CC) -c $(CC_FLAGS) justify.c -o justify.o

word.o: word.c word.h
	$(CC) -c $(CC_FLAGS) word.c -o word.o

line.o: line.c line.h
	$(CC) -c $(CC_FLAGS) line.c -o line.o

clean:
	rm -f justify justify.o word.o line.o *~

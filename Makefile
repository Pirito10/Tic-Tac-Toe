CC	=gcc -Wall

all: main

functions.o: functions.c functions.h
	$(CC) -c functions.c

main: main.c functions.o
	$(CC) functions.o main.c -o Tic-Tac-Toe

clean:
	rm -f Tic-Tac-Toe *.o *~ *.bak
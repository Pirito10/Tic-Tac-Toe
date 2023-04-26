CC	=gcc -Wall

all: main

functions.o: functions.c functions.h
	$(CC) -c functions.c

main: main.c functions.o
	$(CC) functions.o main.c -o Three_In_A_Row

clean:
	rm -f Three_In_A_Row *.o *~ *.bak
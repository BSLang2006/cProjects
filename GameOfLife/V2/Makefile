CC = gcc
CFLAGS = -Wall

all : life.c board.c board.h
	$(CC) $(CFLAGS) life.c board.c -o life.out

life.out : life.o board.c
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c sum.h
	$(CC) $(CFLAGS) -c $<


clean : 
	rm life.out

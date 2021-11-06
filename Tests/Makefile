UNAME=$(shell uname)

CCFLAGS=-Wall -O3 -std=gnu99
CC=gcc

all: functions

functions: main.o functions.o ctest.h tests.o
	$(CC) $(LDFLAGS) main.o functions.o tests.o -o tests -lm

remake: clean all

%.o: %.c ctest.h
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	rm -f tests *.o

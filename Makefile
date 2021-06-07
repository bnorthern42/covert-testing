CC=gcc

all: safe unsafe

safe:	safe.c
			$(CC) -o safe.exe safe.c

unsafe: unsafe.c
			$(CC) -o unsafe.exe unsafe.c

clean:
	rm *.exe

CC = gcc
CFLAGS = -Wall -std=c99 -pedantic

space: Workspace.o
	$(CC) $(CFLAGS) -o space Workspace.o

Workspace.o: Workspace.c
	$(CC) $(CFLAGS) -c Workspace.c

clean:
	-rm *.o
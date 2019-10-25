all: main.o list.o
	gcc -o program main.o list.o

main.o: main.c header.h
	gcc -c main.c

list.o: list.c header.h
	gcc -c list.c

run:
	./program

clean:
	-rm *.o

debug: main.c list.c header.h
	gcc -g main.c list.c

gdb:
	gdb a.exe

valgrind:
	valgrind --leak-check=yes ./a.exe

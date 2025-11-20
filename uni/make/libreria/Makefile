tot.exe: main.o
	gcc main.o libreria.o -o tot.exe

 main.o: main.c libreria.h
	gcc -c main.c -o main.o

libreria.o: libreria.c libreria.h
	gcc -c libreria.c -o libreria.o

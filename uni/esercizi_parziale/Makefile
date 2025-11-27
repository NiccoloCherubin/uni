tot.exe: main.o persona.o
	gcc main.o persona.o -o tot.exe

persona.o: persona.c persona.h enum.h
	gcc -c persona.c -o persona.o

main.o: main.c persona.h enum.h
	gcc -c main.c -o main.o
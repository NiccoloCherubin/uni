tot.exe: main.o figura.o
	gcc main.o figura.o -o tot.exe

main.o: main.c figura.h
	gcc -c main.c -o main.o

figura.o: figura.c figura.h
	gcc -c figura.c -o figura.o
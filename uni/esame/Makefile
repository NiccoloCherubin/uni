medie: main.o listaStudenti.o
	gcc main.o listaStudenti.o -o medie.exe

main.o: main.c listaStudenti.h
	gcc -c main.c listaStudenti.o -o main.o

listaStudenti.o: listaStudenti.c listaStudenti.h
	gcc -c listaStudenti.c -o listaStudenti.o
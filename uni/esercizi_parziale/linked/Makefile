tot.exe: main.o lista.o veicolo.o
	gcc -c main.o lista.o veicolo.o -o tot.exe

main.o: main.c lista.h
	gcc -c main.c -o main.o

lista.o: lista.c lista.h nodo.h veicolo.o
	gcc -c lista.c -o lista.o

veicolo.o: veicolo.c enum.h veicolo.h
	gcc -c veicolo.c -o veicolo.o
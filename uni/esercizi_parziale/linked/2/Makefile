inventario.exe: main.o prodotto.o
	gcc main.o prodotto.o -o inventario.exe

main.o: main.c prodotto.h
	gcc -c main.c -o main.o

prodotto.o: prodotto.c prodotto.h
	gcc -c prodotto.c -o prodotto.o
tot.exe: lista.o linkedList.o
	gcc lista.o linkedList.o -o tot.exe

lista.o: lista.c linkedList.o
	gcc -c lista.c -o lista.o

linkedList.o: linkedList.c lista.h dato.h nodo.h
	gcc -c linkedList.c -o linkedList.o

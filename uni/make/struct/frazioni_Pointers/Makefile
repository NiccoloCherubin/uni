tot.exe: main.o frazione.o
	gcc main.o frazione.o -o tot.exe

main.o: main.c frazione.h
	gcc -c main.c -o main.o

frazione.o: frazione.c frazione.h
	gcc -c frazione.c -o frazione.o
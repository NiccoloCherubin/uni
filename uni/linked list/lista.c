#include "linkedList.c"
#include <stdio.h>

int main(int argc, char **argv)
{
    Lista lista;

    Dato prova;
    prova = 5;

    nuovaLista(&lista);

    inserimentoOrd(&lista, prova);


    stampa(lista);


    return 0;
}
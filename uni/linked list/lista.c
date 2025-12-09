#include "linkedList.c"
#include <bits/types/stack_t.h>
#include <stdio.h>
#define DIM 10

int main(int argc, char **argv)
{
    Lista lista;

    Dato prove[DIM] = {1,5,-3,-8,9,55,2,6565,-88,-147};
    

    nuovaLista(&lista);

    inserimentoTesta(&lista, prove[1]);

    for(int i = 2; i < DIM; i++)
    {
        inserimentoOrd(&lista, prove[i]);
    }    
    

    stampa(lista);
    return 0;
}
#include "lista.h"
#include <stdio.h>
#define DIM 10

int main(int argc, char **argv)
{
    Lista lista, reverseList;

    Dato prove[DIM] = {1,5,-3,-8,9,55,2,6565,-88,-147};
    

    nuovaLista(&lista);

    inserimentoTesta(&lista, prove[1]);

    for(int i = 2; i < DIM; i++)
    {
        inserimentoOrd(&lista, prove[i]);
    }    
    
    printf("Lista ordinata \n");
    stampa(lista);

    printf("Lista reverse \n");
    reverse(lista,&reverseList);
    stampa(reverseList);
    return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include "listaStudenti.h"


int main(int argc, char **argv)
{
    if(argc != 2)
    {
        perror("Errore argomenti funzione \n");
        exit(-1);
    }

    FILE *f = fopen(argv[1], "rb");

    if(f == NULL)
    {
        perror("Errore apertura file \n");
        exit(-1);
    }

    Lista l;
    nuovaLista(&l);

    letturaRecord(f, &l);

    stampaLista(l);



    return 0;
}
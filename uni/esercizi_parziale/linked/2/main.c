#include "prodotto.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        perror("errore argomenti \n");
        exit(-1);
    }

    FILE *sorgente = fopen(argv[1], "rb");

    if(sorgente == NULL)
    {
        perror("Errore apertura file sorgente \n");
        exit(-1);
    }

    FILE *destinazione = fopen(argv[2], "w");

    if(destinazione == NULL)
    {
        perror("Errore apertura file sorgente \n");
        exit(-1);
    }

    Lista l;
    Prodotto prodotto;
    nuovaLista(&l);
    // leggere da file

    while(fread(&prodotto, sizeof(prodotto), 1,sorgente) == 1)
    {
        inserimentoTesta(&l, prodotto);
    }

    stampaLista(l);

    fclose(sorgente);

    int cont = 0;
    //scrivere su file di testo
    while (l!= NULL) {
    fprintf(destinazione, "prodotto %d \n", cont++);
    fprintf(destinazione, "id: %d \n", l->prodotto.id);
    fprintf(destinazione, "descrizione: %s \n", l->prodotto.descrizione);
    fprintf(destinazione, "prezzo: %2.f \n", l->prodotto.prezzo);

    l = l->next;
    }

    fclose(destinazione);

    return 0;
}
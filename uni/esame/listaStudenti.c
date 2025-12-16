#include "listaStudenti.h"
#include <stdio.h>
#include <stdlib.h>

void nuovaLista(Lista *l)
{
    *l = NULL;
}

void inserimentoTesta(Lista *l, Studente s)
{
    Nodo *n = malloc(sizeof(Nodo));
    if (!n) {
        perror("malloc");
        exit(1);
    }

    n->dato = s;
    n->next = *l;
    *l = n;
}


void letturaRecord(FILE *f, Lista *l)
{
    Record *record = (Record*)malloc(sizeof(Record)*200); // creo array di supporto 
    Record *supp = (Record*)malloc(sizeof(Record)); // variabile ausialiaria

    int cont = 0; // conta elementi array
    int matricole[100]; // array di supporto che contiene numero matricole
    int contMatricole; // conta matricole totali

    int esami_superati;
    int somma_voti;

    while (fread(supp, sizeof(Record), 1, f) == 1) {
        record[cont] = *supp;   
        cont++;
    }

contMatricole = 0;

for (int i = 0; i < cont; i++) { // ciclo che trova tutte le matricole diverse
    int trovata = 0;

    for (int j = 0; j < contMatricole; j++) {
        if (record[i].matricola == matricole[j]) {
            trovata = 1;
            break;
        }
    }

    if (!trovata) {
        matricole[contMatricole] = record[i].matricola;
        contMatricole++;
    }
}


    for(int i = 0; i < contMatricole; i++)
    {
          esami_superati = 0;
          somma_voti = 0;
        for(int j = 0; j< cont; j++)
        {
          
            if(record[j].matricola == matricole[i])
            {
                if(record[j].voto >= 18 ) // verifico che abbia superato l'esame
                {
                    esami_superati++;
                    somma_voti += record[j].voto;
                }
            }
        }

        //creo studente di supporto e lo inserisco nella lista
        Studente s;
        s.matricola = matricole[i];
        s.esami_superati = esami_superati;
        s.somma_voti = somma_voti;

        inserimentoTesta(l, s);
        
    }

    // libero la memoria precedentemente occupata
    free(record);
    free(supp);
}

void stampaLista(Lista l)
{
    while (l!= NULL) {
    printf("%d matricola \n", l->dato.matricola);
    printf("%d esami superati \n", l->dato.esami_superati);
    printf("%2.f media voti \n", (float)l->dato.somma_voti/l->dato.esami_superati);

    l = l->next;
    }
}

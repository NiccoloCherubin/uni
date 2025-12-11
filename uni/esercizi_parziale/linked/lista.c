#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void nuovaLista(Lista *l)
{
    l = NULL;
}

int vuota(Lista *l)
{
    return l == NULL;
}

void inserimentoTesta(Lista *l, VeicoloConTipo val)
{
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo)); // alloco la memoria per il nuovo nodo
    aux->veicolo = val;
    aux->next = *l; // aggiorno testa

    *l= aux; // metto in testa alla lista il nuovo elemento
}

void reverse(Lista l1, Lista *l2)
{
    l2 = NULL; // inizializzo nuova lista

    while (l1 != NULL) { // scorro la lista fino alla fine
    inserimentoTesta(l2,l1->veicolo); // inserisco gli elementi in l2
    l1 = l1->next;
    
    }
}

void stampa(Lista l)
{
    printf("const char *, ...");
}

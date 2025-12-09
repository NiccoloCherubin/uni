#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void nuovaLista(Lista *l)
{
    // inizializzo lista
    l = NULL;
}
int vuota(Lista *l)
{
    return l == NULL;
}
void inserimentoTesta(Lista *l, Dato val)
{
    if(vuota(l))
    {
        printf("lista vuota");
        exit(-1);
    }
    
    Nodo *nodo = (Nodo*)malloc(sizeof(Nodo));
    nodo->dato = val;
    nodo->next = *l; // assegno il valore dell'inizio della lista
    *l = nodo; // nuovo inizio
}

Lista* ricerca(Lista *l, Dato val)
{
    while (*l) {
        if((*l)->dato > val) // la lista deve essere in ordine crescente
        {
            break;
        }
        l = &(*l)->next; // puntatore a nodo attuale
    
    }
    return l; 
}

void inserimentoOrd(Lista *l, Dato val)
{
    l = ricerca(l,val);
    inserimentoTesta(l, val); // inserisco il valore minore in testa per avere ordine crescente nella lista
}
void stampa(Lista *l)
{
     while (*l) {
        printf("%d",(*l)->dato);
     }
}
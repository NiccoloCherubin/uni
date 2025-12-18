#include "prodotto.h"

#include <stdio.h>
#include <stdlib.h>

void nuovaLista(Lista *l)
{
    *l = NULL;
}

void inserimentoTesta(Lista *l, Prodotto prodotto)
{
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
    aux->next = *l;
    aux->prodotto = prodotto;

    *l = aux;
}

Lista ricerca(Lista l, Prodotto prodotto)
{
    while (l != NULL) {
        if (l->prodotto.id == prodotto.id) {
            return l;   // nodo trovato
        }
        l = l->next;
    }
    return NULL;
}


void eliminaElemento(Lista *l, Prodotto prodotto)
{
    Nodo *curr = *l;
    Nodo *prev = NULL;

    while (curr != NULL) {
        if (curr->prodotto.id == prodotto.id) {
            if (prev == NULL) {      // primo nodo
                *l = curr->next;
            } else {
                prev->next = curr->next;
            }
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}


void stampaProdotto(Prodotto prodotto)
{
    printf("id: %d \n", prodotto.id);
    printf("descrizione: %s \n", prodotto.descrizione);
    printf("prezzo %2.f \n", prodotto.prezzo);
}

void stampaLista(Lista l)
{
    while (l != NULL) {

        stampaProdotto(l->prodotto);
        l= l->next;
    }
}
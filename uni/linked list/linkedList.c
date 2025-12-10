#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void nuovaLista(Lista *l) {
  // inizializzo lista
  *l = NULL;
}
int vuota(Lista *l) { return *l == NULL; }
void inserimentoTesta(Lista *l, Dato val) {
  Nodo *nodo = malloc(sizeof(Nodo));
  nodo->dato = val;
  nodo->next = *l;
  *l = nodo;
}

Lista *ricerca(Lista *l, Dato val) {
  while (*l) {
    if ((*l)->dato > val) // la lista deve essere in ordine crescente
    {
      break;
    }
    l = &(*l)->next; // puntatore a nodo attuale
  }
  return l;
}

void inserimentoOrd(Lista *l, Dato val) {
  l = ricerca(l, val);
  inserimentoTesta(l, val); // inserisco il valore minore in testa per avere
                            // ordine crescente nella lista
}
void stampa(Lista l) {
  while (l != NULL) {
    printf("%d \n", l->dato);
    l = l->next;
  }
}

void elimina_elemento(Lista *l, Dato val)
{
    Lista tmp = *l;
    *l = (*l)->next;
    free(tmp);
}

void elimina_tutto(Lista *l)
{
    while (*l != NULL) {
        Nodo *tmp = *l;
        *l = (*l)->next;
        free(tmp);
    }
}


int lunghezza(Lista *l) {
  int cont = 0;
    while (l != NULL) {
        cont++;
        *l = (*l)->next;
    }
    return cont;
}

void reverse(Lista l1, Lista *l2)
{
  *l2 = NULL; // inizializzo la lista nuova

  while (l1 != NULL) {
    inserimentoTesta(l2, l1->dato);
    l1 = l1->next;
  }

}

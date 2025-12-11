#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void nuovaLista(Lista *l) { *l = NULL; }

int vuota(Lista *l) { return *l == NULL; }

void inserimentoTesta(Lista *l, VeicoloConTipo val) {
  Nodo *aux =
      (Nodo *)malloc(sizeof(Nodo)); // alloco la memoria per il nuovo nodo
  aux->veicolo = val;
  aux->next = *l; // aggiorno testa

  *l = aux; // metto in testa alla lista il nuovo elemento
}

void reverse(Lista l1, Lista *l2) {
  *l2 = NULL; // inizializzo nuova lista

  while (l1 != NULL) {                 // scorro la lista fino alla fine
    inserimentoTesta(l2, l1->veicolo); // inserisco gli elementi in l2
    l1 = l1->next;
  }
}

void stampa(Lista l) {
     
    while (l!= NULL) {

        if(verificaVeicolo(l->veicolo) == 0) // stampo un auto
        {
            stampaAuto(l->veicolo);
        }   
        else{
            stampaMoto(l->veicolo);
        }

        l = l->next;
    }
    }

void inserimentoCoda(Lista *l, VeicoloConTipo val)
{
    Nodo *aux = malloc(sizeof(Nodo));
    if (!aux) { // controllo possibile errore malloc
        perror("malloc error");
        exit(-1);
    }

    aux->veicolo = val;
    aux->next = NULL;

    // Se la lista è vuota la nuova testa è aux
    if (*l == NULL) {
        *l = aux;
        return;
    }

    // Puntatore temporaneo per scorrere la lista
    Nodo *curr = *l;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = aux;
}


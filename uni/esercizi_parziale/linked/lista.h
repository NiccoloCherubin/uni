#include "nodo.h"

typedef Nodo *Lista;

void nuovaLista(Lista *l);
void inserimentoTesta(Lista *l, VeicoloConTipo val);
void inserimentoOrd(Lista *l,VeicoloConTipo val);
void elimina_elemento(Lista *l, VeicoloConTipo val);
void elimina_tutto(Lista *l);
int lunghezza(Lista l);
void stampa(Lista l);
int vuota(Lista *l);
Lista ricerca(Lista *l,VeicoloConTipo val);
void reverse(Lista l1, Lista *l2);
#include "nodo.h"
typedef Nodo* Lista;

void nuovaLista(Lista *l);
int vuota(Lista *l);
void inserimentoTesta(Lista *l, Dato val);
void inserimentoOrd(Lista *l, Dato val);
Lista* ricerca(Lista *l, Dato val);
void elimina_elemento(Lista *l, Dato val);
void elimina_tutto(Lista *l);
int lunghezza(Lista *l);
void stampa(Lista l);


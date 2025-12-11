#include "nodo.h"

typedef Nodo *Lista;

void nuovaLista(Lista *l);
void inserimentoTesta(Lista *l, Veicolo val);
void inserimentoOrd(Lista *l,Veicolo val);
void elimina_elemento(Lista *l, Veicolo val);
void elimina_tutto(Lista *l);
int lunghezza(Lista l);
void stampa(Lista l);
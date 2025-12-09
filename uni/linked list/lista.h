#include <stdio.h>
#include <stdlib.h>
#define DIM 100

typedef struct{
int n_elementi;
int dati[DIM];
}Lista;

void inizializza_lista(Lista *l);
int vuota(Lista *l);
int piena(Lista *l);
void inserisci_in_testa(Lista *l, int val);
void insOrd(Lista *l, int val);
int ricerca(Lista *l, int val);
void elimina_numero(Lista *l, int val);
void elimina_tutti(Lista *l, int val);
int lunghezza(Lista *l);
void stampa(Lista *l);
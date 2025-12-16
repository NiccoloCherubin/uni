#include <stdio.h>
#include <stdlib.h>

typedef struct{
int matricola;
char nome[40];
int giorno;
int mese;
int anno;
int voto;
}Record;

typedef struct
{
    int matricola;
    int esami_superati;
    int somma_voti;
} Studente;

typedef  struct nodo{

    Studente dato;
    struct nodo *next;
} Nodo;

typedef Nodo* Lista;

void nuovaLista(Lista *l);
void letturaRecord(FILE *f, Lista *l);
void stampaLista(Lista l);
void inserimentoTesta(Lista *l, Studente s);
#include "veicolo.h"
typedef struct nodo
{
    Veicolo veicolo;
    struct nodo *next;
} Nodo;
#include "veicolo.h"
typedef struct nodo {
  VeicoloConTipo veicolo;
  struct nodo *next;
} Nodo;
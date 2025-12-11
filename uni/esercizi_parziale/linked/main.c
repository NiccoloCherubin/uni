#include "lista.h"
#include <stdio.h>

int main() {

  Lista L;
  nuovaLista(&L);

  printf(">>> Test creazione veicoli\n");
  VeicoloConTipo a1 = creaAuto("AA111AA", "Ferrari", 720);
  VeicoloConTipo a2 = creaAuto("BB222BB", "Fiat", 95);
  VeicoloConTipo m1 = creaMoto("CC333CC", "Yamaha", 4, Naked);

  printf("veicoli creati con successo \n");

  printf(">>> Inserimento testa\n");
  inserimentoTesta(&L, a1);
  inserimentoTesta(&L, a2);
  stampa(L);

  printf("\n>>> Inserimento coda\n");
  inserimentoCoda(&L, m1);
  stampa(L);

  printf("\n>>> Reverse lista\n");
  Lista R = NULL;
  reverse(L, &R);
  printf("Lista originale:\n");
  stampa(L);
  printf("Lista invertita:\n");
  stampa(R);

  return 0;
}

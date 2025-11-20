#include <stdio.h>
#include "frazione.h"

int main(int argc, char **argv)
{
    Frazione f1 = crea_frazione(1, 2);
    Frazione f2 = crea_frazione(3, 4);

    printf("Frazione 1: ");
    stampa_frazione(f1);
    printf("Frazione 2: ");
    stampa_frazione(f2);

    Frazione somma = somma_frazioni(f1, f2);
    printf("Somma: ");
    stampa_frazione(somma);

    Frazione differenza = differenza_frazioni(f1, f2);
    printf("Differenza: ");
    stampa_frazione(differenza);

    Frazione prodotto = prodotto_frazioni(f1, f2);
    printf("Prodotto: ");
    stampa_frazione(prodotto);

    Frazione quoziente = quoziente_frazioni(f1, f2);
    printf("Quoziente: ");
    stampa_frazione(quoziente);

    Frazione inverso = inverso_frazione(f1);
    printf("Inverso di Frazione 1: ");
    stampa_frazione(inverso);

    Frazione opposto = opposto_frazione(f1);
    printf("Opposto di Frazione 1: ");
    stampa_frazione(opposto);

    return 0;
}
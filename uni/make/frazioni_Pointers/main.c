#include <stdio.h>
#include "frazione.h"

int main() {

    Frazione f1;
    Frazione f2;

    crea_frazione(&f1, 1, 2);
    crea_frazione(&f2, 3, 4);

    printf("Frazione 1: ");
    stampa_frazione(&f1);

    printf("Frazione 2: ");
    stampa_frazione(&f2);

    Frazione somma;
    somma_frazioni(&somma, &f1, &f2);
    printf("Somma: ");
    stampa_frazione(&somma);

    Frazione differenza;
    differenza_frazioni(&differenza, &f1, &f2);
    printf("Differenza: ");
    stampa_frazione(&differenza);

    Frazione prodotto;
    prodotto_frazioni(&prodotto, &f1, &f2);
    printf("Prodotto: ");
    stampa_frazione(&prodotto);

    Frazione quoziente;
    quoziente_frazioni(&quoziente, &f1, &f2);
    printf("Quoziente: ");
    stampa_frazione(&quoziente);

    Frazione inverso;
    inverso_frazione(&inverso, &f1);
    printf("Inverso di Frazione 1: ");
    stampa_frazione(&inverso);

    Frazione opposto;
    opposto_frazione(&opposto, &f1);
    printf("Opposto di Frazione 1: ");
    stampa_frazione(&opposto);

    return 0;
}

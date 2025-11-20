#include <stdio.h>

typedef struct{
int numeratore;
int denominatore;
} Frazione;

Frazione crea_frazione(int numeratore, int denominatore);

Frazione stampa_frazione(Frazione f);

Frazione somma_frazioni(Frazione f1, Frazione f2);

Frazione differenza_frazioni(Frazione f1, Frazione f2);

Frazione prodotto_frazioni(Frazione f1, Frazione f2);

Frazione quoziente_frazioni(Frazione f1, Frazione f2);

Frazione inverso_frazione(Frazione f);

Frazione opposto_frazione(Frazione f);
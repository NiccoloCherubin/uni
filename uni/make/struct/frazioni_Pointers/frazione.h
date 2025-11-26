#include <stdio.h>

typedef struct{
int numeratore;
int denominatore;
} Frazione;

void crea_frazione(Frazione *frazione,int numeratore, int denominatore);
void stampa_frazione(Frazione *f);
void somma_frazioni(Frazione *somma,Frazione *f1, Frazione *f2);
void differenza_frazioni(Frazione *risultato, Frazione *f1, Frazione *f2);
void prodotto_frazioni(Frazione *risultato, Frazione *f1, Frazione *f2);
void quoziente_frazioni(Frazione *risultato, Frazione *f1, Frazione *f2);
void inverso_frazione(Frazione *risultato, Frazione *f);
void opposto_frazione(Frazione *risultato, Frazione *f);
int mcd(int a, int b);
void semplifica_frazione(Frazione *f);
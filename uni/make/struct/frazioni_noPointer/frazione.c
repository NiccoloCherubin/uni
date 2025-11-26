#include <stdio.h>
#include "frazione.h"

Frazione crea_frazione(int numeratore, int denominatore){
    Frazione f;
    f.numeratore = numeratore;
    f.denominatore = denominatore;
    return f;
}

Frazione stampa_frazione(Frazione f){
    printf("%d/%d\n", f.numeratore, f.denominatore);
    return f;
}

Frazione somma_frazioni(Frazione f1, Frazione f2){
    Frazione risultato;
    if(f1.denominatore == f2.denominatore){
        risultato.numeratore = f1.numeratore + f2.numeratore;
        risultato.denominatore = f1.denominatore;
    } else {
        risultato.numeratore = (f1.numeratore * f2.denominatore) + (f2.numeratore * f1.denominatore);
        risultato.denominatore = f1.denominatore * f2.denominatore;
    }
    return risultato;
}

Frazione differenza_frazioni(Frazione f1, Frazione f2){
    Frazione risultato;
    if(f1.denominatore == f2.denominatore){
        risultato.numeratore = f1.numeratore - f2.numeratore;
        risultato.denominatore = f1.denominatore;
    } else {
        risultato.numeratore = (f1.numeratore * f2.denominatore) - (f2.numeratore * f1.denominatore);
        risultato.denominatore = f1.denominatore * f2.denominatore;
    }
    return risultato;
}

Frazione prodotto_frazioni(Frazione f1, Frazione f2){
    Frazione risultato;
    risultato.numeratore = f1.numeratore * f2.numeratore;
    risultato.denominatore = f1.denominatore * f2.denominatore;
    return risultato;
}

Frazione quoziente_frazioni(Frazione f1, Frazione f2){
    Frazione risultato;
    risultato.numeratore = f1.numeratore * f2.denominatore;
    risultato.denominatore = f1.denominatore * f2.numeratore;
    return risultato;
}

Frazione inverso_frazione(Frazione f){
    Frazione risultato;
    risultato.numeratore = f.denominatore;
    risultato.denominatore = f.numeratore;
    return risultato;
}
Frazione opposto_frazione(Frazione f){
    Frazione risultato;
    risultato.numeratore = -f.numeratore;
    risultato.denominatore = f.denominatore;
    return risultato;
}
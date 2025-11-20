#include <stdio.h>
#include "frazione.h"

void crea_frazione(Frazione *frazione,int numeratore, int denominatore){    
    frazione->numeratore = numeratore;
    frazione->denominatore = denominatore;    
}

void stampa_frazione(Frazione *f){
    semplifica_frazione(f);  // semplifico prima di stampare
    printf("%d/%d\n", f->numeratore, f->denominatore);    
}


void somma_frazioni(Frazione *somma,Frazione *f1, Frazione *f2){
    
    if(f1->denominatore == f2->denominatore){
        somma->numeratore = f1->numeratore + f2->numeratore;
        somma->denominatore = f1->denominatore;
    } else {
        somma->numeratore = (f1->numeratore * f2->denominatore) + (f2->numeratore * f1->denominatore);
        somma->denominatore = f1->denominatore * f2->denominatore;
    }    
}

void differenza_frazioni(Frazione *risultato, Frazione *f1, Frazione *f2){    
    if(f1->denominatore == f2->denominatore){
        risultato->numeratore = f1->numeratore - f2->numeratore;
        risultato->denominatore = f1->denominatore;
    } else {
        risultato->numeratore = (f1->numeratore * f2->denominatore) - (f2->numeratore * f1->denominatore);
        risultato->denominatore = f1->denominatore * f2->denominatore;
    }    
}

void prodotto_frazioni(Frazione *risultato, Frazione *f1, Frazione *f2){
    risultato->numeratore = f1->numeratore * f2->numeratore;
    risultato->denominatore = f1->denominatore * f2->denominatore;    
}

void quoziente_frazioni(Frazione *risultato, Frazione *f1, Frazione *f2){
    
    risultato->numeratore = f1->numeratore * f2->denominatore;
    risultato->denominatore = f1->denominatore * f2->numeratore;
    
}

void inverso_frazione(Frazione *risultato, Frazione *f){
    risultato->numeratore = f->denominatore;
    risultato->denominatore = f->numeratore;    
}
void opposto_frazione(Frazione *risultato, Frazione *f){
    risultato->numeratore = -f->numeratore;
    risultato->denominatore = f->denominatore;    
}
int mcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void semplifica_frazione(Frazione *f) {
    int divisore = mcd(f->numeratore, f->denominatore);
    f->numeratore /= divisore;
    f->denominatore /= divisore;
}
#include <stdio.h>
#include <stdlib.h>
#include "dipendente.c"

int main() {
    Dipendente dipendenti[10];

    FILE *f = fopen("stipendi.dat", "rb");

    if(f == NULL) {
        perror("Errore nell'apertura del file");
        return -1;
    }


    while (fread(dipendenti, sizeof(Dipendente), 1, f) != 0) {
        printf("Nome: %s, Stipendio: %.2f\n", dipendenti[0].nome, dipendenti[0].stipendio);
    
    }

    if(fclose(f) != 0) {
        perror("Errore nella chiusura del file");
        exit(-1);
    }

    return 0;
}
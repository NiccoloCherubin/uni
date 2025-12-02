#include <stdio.h>
#include <stdlib.h>
#include "dipendente.c"

int main() {
    Dipendente dipendenti[] = {
        {"Rossi", 2500.50},
        {"Bianchi", 3000.75},
        {"Verdi", 2800.00},
        {"Neri", 3200.25},
        {"Russo", 2700.80}
    };

    FILE *f = fopen("stipendi.dat", "wb");

    if(f == NULL) {
        perror("Errore nell'apertura del file");
        return -1;
    }

    int num_dipendenti = sizeof(dipendenti) / sizeof(Dipendente);

    for(int i = 0; i < num_dipendenti; i++) {
        fwrite(&dipendenti[i], sizeof(Dipendente), 1, f);
    }

       if(fclose(f) != 0) {
        perror("Errore nella chiusura del file");
        exit(-1);
    }

    return 0;
}
#include <stdio.h>
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

    fclose(f);

    return 0;
}
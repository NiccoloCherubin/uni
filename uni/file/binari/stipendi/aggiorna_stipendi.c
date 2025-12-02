#include <stdio.h>
#include <stdlib.h>
#include "dipendente.c"

int main(int argc, char ** argv)
{
    FILE *f = fopen("stipendi.dat", "r+b"); // apertura in lettura e scrittura

    if (f == NULL) {
        perror("Errore nell'apertura del file");
        exit(-1);
    }

    Dipendente d;

    while(fread(&d, sizeof(Dipendente),1, f) != 0)
    {
        d.stipendio *= 1.10; // aumento del 10%
        fseek(f, -sizeof(Dipendente), SEEK_CUR); // torna indietro di una struttura
        fwrite(&d, sizeof(Dipendente), 1, f); // riscrive la struttura aggiornata
    }

       if(fclose(f) != 0) {
        perror("Errore nella chiusura del file");
        exit(-1);
    }

    return 0;
}
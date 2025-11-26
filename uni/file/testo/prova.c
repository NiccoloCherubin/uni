#include <complex.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fileOrigine;
    FILE *fileDestinazione;
    char buffer[256];

    fileOrigine = fopen("testo.txt", "r");
    
    if (fileOrigine == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    fileDestinazione = fopen("destinazione.txt", "w");

    if(fileDestinazione == NULL) {
        perror("Error opening destination file");
        fclose(fileOrigine);
        return EXIT_FAILURE;
    }

    while (fgets(buffer, sizeof(buffer), fileOrigine) != NULL) {
        fputs(buffer, fileDestinazione);
    }

    fclose(fileOrigine);
    fclose(fileDestinazione);

    return 0;
}   
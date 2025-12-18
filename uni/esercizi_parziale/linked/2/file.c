#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define DIM_DESC 100
#define NUM_PRODOTTI 20   // quanti prodotti generare

typedef struct {
    int id;
    char descrizione[DIM_DESC];
    float prezzo;
} prodotto;

int main() {
    FILE *fp;
    prodotto p;

    // descrizioni di esempio
    const char *descrizioni[] = {
        "Mouse wireless",
        "Tastiera meccanica",
        "Monitor 24 pollici",
        "Hard disk esterno",
        "Chiavetta USB",
        "Webcam HD",
        "Cuffie Bluetooth",
        "Stampante laser",
        "Router WiFi",
        "Microfono USB"
    };

    int num_descrizioni = sizeof(descrizioni) / sizeof(descrizioni[0]);

    srand(time(NULL));

    fp = fopen("prodotti.dat", "wb");
    if (fp == NULL) {
        perror("Errore apertura file");
        exit(1);
    }

    for (int i = 0; i < NUM_PRODOTTI; i++) {
        // ID (volutamente con duplicati)
        p.id = rand() % 100 + 1;   // ID da 1 a 5

        // descrizione casuale
        strcpy(p.descrizione, descrizioni[rand() % num_descrizioni]);

        // prezzo casuale tra 5.00 e 500.00
        p.prezzo = (rand() % 496) + 5;

        fwrite(&p, sizeof(prodotto), 1, fp);
    }

    fclose(fp);

    printf("File binario 'prodotti.dat' creato con %d prodotti.\n", NUM_PRODOTTI);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Funzione che calcola il Julian Day Number a partire da giorno, mese, anno
int calcolaJD(int G, int M, int A) {
    int N0, N1, N2, N3, JD;

    N0 = (M - 14) / 12;
    N1 = 1461 * (A + 4800 + N0) / 4;
    N2 = 367 * (M - 2 - 12 * N0) / 12;
    N3 = 3 * (A + 4900 + N0) / 400;
    JD = G + N1 + N2 - N3 - 32075;

    return JD;
}

int main() {
    int G1, M1, A1;  
    int G2, M2, A2;
    int JD1, JD2, diff;

    printf("Inserisci la prima data:\n");
    printf("Giorno: ");
    scanf("%d", &G1);
    printf("Mese: ");
    scanf("%d", &M1);
    printf("Anno: ");
    scanf("%d", &A1);

    printf("\nInserisci la seconda data:\n");
    printf("Giorno: ");
    scanf("%d", &G2);
    printf("Mese: ");
    scanf("%d", &M2);
    printf("Anno: ");
    scanf("%d", &A2);

    JD1 = calcolaJD(G1, M1, A1);
    JD2 = calcolaJD(G2, M2, A2);

    diff = abs(JD2 - JD1);

    printf("\nJulian Day prima data: %d\n", JD1);
    printf("Julian Day seconda data: %d\n", JD2);
    printf("Differenza in giorni: %d\n", diff);

    return 0;
}

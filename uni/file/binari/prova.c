#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("file.dat", "wb");
    FILE *fr;
    int numeri[] = {10, 20, 30, 40, 50};
    int buffer;


    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // scrivo su file binario
    for (int i = 0; i < 5; i++) {
        if (fwrite(&numeri[i], sizeof(int), 1, fp) != 1) {
            perror("Error writing to file");
            fclose(fp);
            return EXIT_FAILURE;
        }
    }

    fclose(fp);

    fp = fopen("file.dat", "rb");
    if (fp == NULL) {
        perror("Error opening binary file");
        return EXIT_FAILURE;
    }

    fr = fopen("file.txt", "w");
    if (fr == NULL) {
        perror("Error opening text file");
        fclose(fp);
        return EXIT_FAILURE;
    }

    // leggo correttamente da file binario
    while (fread(&buffer, sizeof(int), 1, fp) == 1) {
        fprintf(fr, "%d\n", buffer);
    }

    fclose(fp);
    fclose(fr);

    return 0;
}

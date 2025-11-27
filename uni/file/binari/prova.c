#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  FILE *fp = fopen("file.dat", "wb");
  FILE *fr;
  int numeri[] = {10, 20, 30, 40, 50};
  int result;
  if (fp == NULL) {
    perror("Error opening file");
    return EXIT_FAILURE;
  }

  // scrivo su file binario
  for (int i = 0; i < 5; i++) {
    result = fwrite(&numeri[i], sizeof(int), 1, fp);
    if (result != 1) {
      perror("Error writing to file");
      fclose(fp);
      return EXIT_FAILURE;
    }
  }

  fclose(fp);

  fp = fopen("file.dat", "rb");

  if (fp == NULL) {
    perror("Error opening file");
    return EXIT_FAILURE;
  }

  fr = fopen("file.txt", "w");

  if (fr == NULL) {
    perror("Error opening file for reading");
    fclose(fp);
    return EXIT_FAILURE;
  }
  // prendo da file binario e stampo in file testo

  while (!feof(fp)) {
    result = fread(&result, sizeof(int), 1, fp);
    if (result == 1) {
      fprintf(fr, "%d\n", result);
    }
  }

    fclose(fp);
    fclose(fp);

  return 0;
}
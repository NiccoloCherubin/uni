#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  FILE *fp = fopen("file.txt", "wb");
  int numeri[] = {10, 20, 30, 40, 50};
  int result;
  if (fp == NULL) {
    perror("Error opening file");
    return EXIT_FAILURE;
  }

    for(int i = 0; i < 5; i++) {
        result = fwrite(&numeri[i], sizeof(int), 1, fp);
        if(result != 1) {
            perror("Error writing to file");
            fclose(fp);
            return EXIT_FAILURE;
        }
    }

  

  return 0;
}
#include <ctype.h>
#include <stdio.h>

void mcd(int a, int b, float *risultato) {
  while (a != b) {
    if (a < b) {
      b -= a;
    } else {
      a -= b;
    }
  }
    *risultato = (float)a;
}

int main() {
  int M;
  float risultato;

  do {

    printf("Inserisci un nunero intero positivo: ");
    scanf("%d", &M);
  } while (M <= 0 || isdigit(M));

  for (int i = 1; i <= M; i++) {
    for (int j = 1; j <= M; j++) {
      mcd(i, j, &risultato);

      risultato = 1 / risultato;

      printf("%.3f", risultato);
    }
    printf("\n");
  }
  return 0;
}
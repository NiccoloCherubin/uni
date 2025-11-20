#include <stdio.h>
#include <math.h>

float radiceN(float a, int N) {

  float x = 1.0f;
  float p, i = 0;

  do {
    p = 1.0f;   

    for(i = 0; i < N - 1; i++) {
      p *=x;
    }

    x = ((N - 1) * p * x + a) / (N * p);
  }

  while ((fabsf(p * x - a) / a) > 0.00001);

  return x;
}

int main() {
  float y;
  int M;

  printf("inserisci un numero intero che sarà l'indice della radice: ");
  scanf("%d", &M);

  do {
    printf("Inserisci un numero reale valido di cui calcolare la radice: ");
    scanf("%f", &y);
  } while (((M % 2 == 0) && (y < 0))); // controllo che se la radice è di indice pari, il radicando sia >=0                       

  for(int k = 2;k <= M; k++){
    printf("La radice %d di %.2f è: %.4f\n", k, y, radiceN(y, k));
  }

  return 0;
}
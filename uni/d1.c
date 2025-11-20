#include <stdio.h>

int f(int n) {
  
  if (n > 1)
  {    
    printf("chiamata funzione \n");
    return f(n / 5);
  }
  else
    return 0;
}

int main(void) {
  int M = 214569;  
  M = f(M);  
  printf("%d\n", M);
  return M;
}
#include <stdio.h>

// 1172 - Substitui��o em Vetor I

int main(void) {

  int i, vetor[10];

  for (i=0; i<10; i++)
    scanf ("%d", &vetor[i]);

  for (i=0; i<10; i++){
    if (vetor[i]<=0)
      vetor[i] = 1;
  }

  for (i=0; i<10; i++)
    printf ("X[%d] = %d\n", i, vetor[i]);

  return 0;
}

#include <stdio.h>

int main(void) {

  double soma, M[12][12];
  int i, j, count;
  char O;

  scanf ("%s", &O);

  for (i=0; i<12; i++){
    for (j=0; j<12; j++){
        scanf ("%lf", &M[i][j]);
    }
  }

  soma = 0;
  count = 0;

  for (i=0; i<12; i++){
    for (j=0; j<12; j++){
        if (j > i && j < 11-i){
          soma += M[i][j];
          count++;
        }
    }
  }

  if (O == 'S')
    printf ("%.1lf\n", soma);
  else
    printf ("%.1lf\n", soma/count);

}

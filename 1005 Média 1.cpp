#include <stdio.h>

// URI ONLINE exercício 1005 (Média 1)

int main(void)
{
  float a, b;

  printf ("Valor de A:");
  scanf ("%f", &a);
  printf ("Valor de B:");
  scanf ("%f", &b);

  float media = (a * 3.5 + b * 7.5) / (3.5 + 7.5);

  printf ("MEDIA = %.5f\n", media);

  return 0;
}

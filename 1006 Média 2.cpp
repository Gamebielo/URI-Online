#include <stdio.h>

// URI ONLINE exercício 1006 (Média 2)

int main(void)
{
  float a, b, c;

  printf ("Valor de A:");
  scanf ("%f", &a);
  printf ("Valor de B:");
  scanf ("%f", &b);
  printf ("Valor de C:");
  scanf ("%f", &c);

  float media = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

  printf ("MEDIA = %.1f\n", media);

  return 0;
}

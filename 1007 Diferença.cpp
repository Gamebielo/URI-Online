#include <stdio.h>

// URI ONLINE exerc�cio 1007 (Diferen�a)

int main(void)
{
  int a, b, c, d;

  printf ("Valor de A:");
  scanf ("%i", &a);
  printf ("Valor de B:");
  scanf ("%i", &b);
  printf ("Valor de C:");
  scanf ("%i", &c);
  printf ("Valor de D:");
  scanf ("%i", &d);

  int diferenca = (a * b) - (c * d);

  printf ("DIFERENCA = %i\n", diferenca);

  return 0;
}

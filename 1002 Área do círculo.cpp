#include <stdio.h>

// URI ONLINE exerc�cio 1002 (�rea do C�rculo)

int main(void)
{
  double area, raio;

  printf ("Entre com o valor do raio:");
  scanf ("%lf", &raio);

  area = 3.14159 * raio * raio;

  printf ("A=%.4lf\n", area);

  return 0;
}

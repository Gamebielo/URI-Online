#include <stdio.h>

// URI ONLINE exercício 1002 (Área do Círculo)

int main(void)
{
  double area, raio;

  printf ("Entre com o valor do raio:");
  scanf ("%lf", &raio);

  area = 3.14159 * raio * raio;

  printf ("A=%.4lf\n", area);

  return 0;
}

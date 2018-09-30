#include <stdio.h>

// URI Online --- exercício 1013 (O Maior)

int main(void)
{
  int a, b, c;

  printf ("Entre com 3 numeros para ver o maior. \n");
  scanf ("%d %d %d", &a, &b, &c); printf ("\n");

  if (a > b && a > c)  // && significa "and"
    printf ("%d eh o maior", a);

  if (b > a && b > c)
    printf ("%d eh maior", b);

  else
    printf ("%d eh o maior", c);

  return 0;
}

#include <stdio.h>

// URI Online --- exerc�cio 1010 (C�lculo Simples)

int main(void){

  int cod1, num1, cod2, num2;
  float valor1, valor2 ,x;

  scanf ("%d %d %f", &cod1, &num1, &valor1);
  scanf ("%d %d %f", &cod2, &num2, &valor2);

  x = (num1 * valor1) + (num2 * valor2);

  printf ("VALOR A PAGAR: R$ %.2f\n", x);

  return 0;
}

#include <stdio.h>

// URI ONLINE exerc�cio 1009 (Sal�rio com B�nus)

int main() {

  char nome;
  double salario,vendas,x;

  scanf("%s %lf %lf", &nome, &salario, &vendas);

  x = salario + (15*vendas)/100;

   printf("TOTAL = R$ %.2f\n",x);

    return 0;
}

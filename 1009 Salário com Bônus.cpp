#include <stdio.h>

// URI ONLINE exercício 1009 (Salário com Bônus)

int main() {

  char nome;
  double salario,vendas,x;

  scanf("%s %lf %lf", &nome, &salario, &vendas);

  x = salario + (15*vendas)/100;

   printf("TOTAL = R$ %.2f\n",x);

    return 0;
}

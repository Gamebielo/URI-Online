# include <stdio.h>
// URI Online --- exerc�cio 1014 (Consumo)

int main(void) {

int x = 0; // dist�ncia em km
float total, y = 0; //total e o combust�vel gasto

printf ("Distancia (Km):"); scanf ("%d",&x);
printf ("Total Combustivel (litros):"); scanf ("%f", &y);

total = x / y;

printf ("%.3f km/l", total);

}

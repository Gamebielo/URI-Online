# include <stdio.h>
// URI Online --- exercício 1014 (Consumo)

int main(void) {

int x = 0; // distância em km
float total, y = 0; //total e o combustível gasto

printf ("Distancia (Km):"); scanf ("%d",&x);
printf ("Total Combustivel (litros):"); scanf ("%f", &y);

total = x / y;

printf ("%.3f km/l", total);

}

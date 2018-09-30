#include <stdio.h>
#include <math.h>

// URI Online --- exerc�cio 1015 (Dist�ncia Entre Dois Pontos)

int main(void) {

double x1, y1, x2, y2, distancia;

printf ("X1,Y1:"); scanf("%lf %lf", &x1, &y1);
printf ("X2,Y2:"); scanf("%lf %lf", &x2, &y2);

distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

// sqrt significa raiz quadrada de ...
// pow � pot�ncia de (..., elevado a...)
// Ambas s�o importadas da <math.h>

printf ("%.4lf", distancia);

}

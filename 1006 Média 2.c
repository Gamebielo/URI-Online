#include <stdio.h>

int main(void){

    double a, b, c, MEDIA;

    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);

    MEDIA = (a*2 + b*3 + c*5) / (2+3+5);

    printf ("MEDIA = %.1lf\n", MEDIA);

}

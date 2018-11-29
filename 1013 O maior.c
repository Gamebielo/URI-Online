#include <stdio.h>

int main(void)
{
    int a, b, c;
    int resultado;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d eh o maior\n", a);
    else if (b > a && b > c)
        printf("%d eh o maior\n", b);
    else
        printf("%d eh o maior\n", c);

    return 0;
}

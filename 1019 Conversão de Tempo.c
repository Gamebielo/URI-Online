#include <stdio.h>

int main(void)
{
    int n, convert;
    int h = 0, m = 0, s = 0;

    scanf("%d", &n);

    h = n / 3600;
    m = n % 3600/60;
    s = n % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}

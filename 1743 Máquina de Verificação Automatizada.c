#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, d, e;
    int A, B, C, D, E;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if(a==A || b==B || c==C || d==D || e==E)
        printf("N\n");
    else
        printf("Y\n");

    system("pause");
    return 0;
}

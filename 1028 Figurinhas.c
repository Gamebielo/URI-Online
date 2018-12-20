#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;
    int *v;
    int f1, f2;

    scanf("%d", &n);
    v = malloc(n*sizeof(int));

    for(i=0; i < n; i++){
        scanf("%d %d", &f1, &f2);
        int r = f1 % f2;
        if (r == 0)
            v[i] = f2;
        else{
            while(r != 0){
                f1 = f2;
                f2 = r;
                r = f1 % f2;
            }
            v[i] = f2;
        }
    }

    for(i=0; i < n; i++){
        printf("%d\n", v[i]);
    }

    free(v);
    return 0;
}

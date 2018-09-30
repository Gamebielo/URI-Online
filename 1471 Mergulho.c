#include <stdio.h>
#define MAX 10000       //10 elevado a quarta potência, conforme o problema

int main(){

    int N, R, i, retorno, voltaram[MAX] = {0}; // tirando a sujeira
    while (scanf("%d %d", &N, &R) != EOF){
        for (i=0; i<N; i++){
            voltaram[i] = i+1;      //colocando no vetor todos que foram 1-N (posição N-1)
        }
        for (i=0; i<R; i++){
            scanf ("%d", &retorno);
            voltaram[retorno-1] = 0;        //gravando 0 em quem voltou
        }
        if (N == R){        // caso todos voltem
                printf("*");
            }
            else{
                for (i=0; i<N; i++){
                    if (voltaram[i] != 0){
                        printf("%d ", voltaram[i]);  // printando quem sobrou ( != 0 no vetor)
            }
        }
        }
        printf ("\n");
    }
    return 0;
}

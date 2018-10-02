#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char alfabeto[52], a; //Duas vezes o tamanho do alfabeto
    int N, m, l, i, j;

    scanf("%d", &N);    //Número de caso

    for (i=0; i<N; i++){
        scanf("%s %d", alfabeto, &m); //Ler palavra e quanto ela tem que voltar
        l = strlen(alfabeto); //ler o tamanho da palavra
        for (j = 0; j < l; j++){
            a = alfabeto[j] - m; //retornando 'm' números atrás da letra
            if (a<65) //se o número do caracter de 'letra - m' estiver antes do "A"
                a += 26; //Faz com que volte "A-Z"
            printf("%c", a);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

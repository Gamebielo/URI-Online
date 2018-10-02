#include<stdio.h>
#include<string.h>

void main(){
    char frase[51], substring[51]; //string e substring
    int troca, count, i, j, k;
    int tam_frase, tam_sub; //Para verificar o tamanho da frase e da substring

    while(gets(frase) && gets(substring)){
        tam_frase = strlen(frase);
        tam_sub = strlen(substring);

        count = 0;
        for(i=0;i<tam_frase; i++){          //percorrendo a frase principal
            for(j=0;j<tam_sub ; j++){     //percorrendo substring
                if(frase[i] == substring[j]){
                    troca = 0;
                    k=0;
        //vai percorrendo e verificando até encontrar um caracter diferente
                    while(k+i<tam_frase && k+j<tam_sub){
                        if(frase[k+i]==substring[k+j])
                            troca+=1;
                        else
                            break;
                        k++;
                    }
                    if(troca>count)
                        count = troca;
                }
            }
        }
        printf("%d\n",count);
    }
}

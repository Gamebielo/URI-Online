#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    char a[51][51], b[51][51];
    int T, L, C, P;
    int h, i, j, k, l, c, m;  //contadores
    int tam_p = 0, count = 0, verif = 0;

    scanf("%d", &T);    //Quantos casos de testes?

    for (h = 0; h < T; h++)
    {
        scanf("%d %d", &L, &C);     //Linhas e Colunas

        for (i = 0; i <= L; i++)
        {
            fgets(a[i],sizeof(a[i]),stdin);     //Lendo as palavras
        }

        scanf ("%d", &P);       //Numero de palavras a ser encontrada

        for (j = 0; j < P; j++)
        {
            scanf ("%s", &b);
            tam_p = strlen(b);  //Tamanho da palavra digitada

            if (tam_p == 1)
            {
                for (i = 0; i <= L; i++)
                {
                    for (l = 0; l <= C; l++)
                    {
                        if (b[0][0] == a[i][l])
                        {
                            count ++;
                        }
                    }
                }
                printf("%d\n", count);
                count = 0;
            }

            if (tam_p >= 1)
            {
                //ACHANDO HORIZONTAL
                for (i = 0; i < P; i++) //linha palavra
                {
                    for (k = 0; k <= tam_p; k++)
                    {
                        for (l = 0; l <= L; l++)    //percorrendo linhas
                        {
                            for (c = 0; c <= C; c++)    //percorrendo Colunas
                            {
                                if (b[i][k] == a[l][c])
                                {
                                    m=0;
                                    verif = 0;
                                    while(m+i < tam_p && m+c < C)
                                    {  //achando horizontal
                                        if (b[i][k+m] == a[l][c+m])
                                        {
                                            verif++;
                                        }
                                        else
                                            break;
                                        m++;
                                    }
                                    if (verif == tam_p)
                                        count++;
                                }
                            }
                        }
                    }
                }
                verif = 0;

                //ACHANDO VERTICAL
                for (i = 0; i < P; i++) //linha palavra
                {
                    for (k = 0; k <= tam_p; k++)
                    {
                        for (l = 0; l <= L; l++)    //percorrendo linhas
                        {
                            for (c = 0; c <= C; c++)    //percorrendo Colunas
                            {
                                if (b[i][k] == a[l][c])
                                {
                                    m=0;
                                    verif = 0;
                                    while(m+k < tam_p && m+l <=L)
                                    {
                                        if (b[i][k+m] == a[l+m][c])
                                        {
                                            verif++;
                                        }
                                        else
                                        {
                                            break;
                                        }
                                        m++;
                                    }
                                    if (verif == tam_p)
                                        count++;
                                }
                            }
                        }
                    }
                }
                printf("%d\n", count);
                count = 0;
            }
        }
    }
}

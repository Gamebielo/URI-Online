#include <stdio.h>
#include <string.h>

int achar_horizontal(char palavra[51], char matriz[][51], int linha, int coluna);
int achar_vertical(char palavra[51], char matriz[][51], int linha, int coluna);
//Funções declaradas após o 'int main()'
int main()
{
    char a[51][51], b[51][51];
    int T, L, C, P;
    int i, j, k;
    int tam_b, vezes;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &L, &C);     //lendo Linhas e Colunas da matriz 'a'

        for (j = 0; j <= L; j++)
        {
            gets(a[j]);     //Enchendo o caça palavras
        }

        scanf("%d", &P);
        for (j = 0; j <= P; j++)
        {
            gets(b[j]);     //Palavras a serem procuradas
        }

        for (j = 1; j <= P; j++)
        {
            tam_b = strlen(b[j]);
            if (tam_b == 1)
                vezes = achar_horizontal(b[j], a, L, C);
            else if (tam_b > 1)
            {
                vezes = achar_horizontal(b[j], a, L, C);
                vezes += achar_vertical(b[j], a, L, C);
            }
            printf("%d\n", vezes);
        }
    }
}

int achar_horizontal(char palavra[51], char matriz[][51], int linha, int coluna){

    int i, l, c, m;
    int tam_p, verif, count = 0;

    tam_p = strlen(palavra);

    for (i=0; i<=tam_p; i++) //percorrendo posição da palavra (como vetor)
    {
        for (l=0; l<=linha; l++) //percorrendo linhas da matriz
        {
            for (c=0; c<=coluna; c++)
            {
                if (palavra[i] == matriz[l][c])
                {   //se for igual é bom, significa que achei alguém...
                    m = 0;
                    verif = 0; //zerando para verificar se as proximas pos são iguais
                    while(m+i < tam_p && m+c < coluna)
                    {
                        if (palavra[i+m] == matriz[l][c+m])
                           verif++;     //se as próximas pos forem iguais some mais 1
                        else
                            break;
                        m++;        //para ir verificando as posições futuras
                    }
                    if (verif == tam_p) //Se for do mesmo tamanho que a palavra
                        count++;
                }
            }
        }
    }
    return count;
}

int achar_vertical(char palavra[51], char matriz[][51], int linha, int coluna)
{

    int i, l, c, m;
    int tam_p, verif, count = 0;

    tam_p = strlen(palavra);

    for (i = 0; i <= tam_p; i++) //percorrendo posição da palavra (como vetor)
    {
        for (l = 0; l <= linha; l++) //percorrendo linhas da matriz
        {
            for (c = 0; c <= coluna; c++)
            {
                if (palavra[i] == matriz[l][c])
                {   //se for igual é bom, significa que achei alguém...
                    m=0;
                    verif=0; //zerando para verificar se as proximas pos são iguais
                    while(m+i < tam_p && m+l <= linha)
                    {
                        if (palavra[i+m] == matriz[l+m][c])
                           verif++;     //se as próximas pos forem iguais some mais 1
                        else
                            break;
                        m++;        //para ir verificando as posições futuras
                    }
                    if (verif == tam_p) //Se for do mesmo tamanho que a palavra
                        count++;
                }
            }
        }
    }
    return count;
}

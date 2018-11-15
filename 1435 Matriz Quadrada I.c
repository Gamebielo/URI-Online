#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;    //Contadores
    int n, hn, x, y;

    while(1){   //While True

        scanf("%d", &n);
        if (n==0)   //Se o n for 0, acaba o programa
            break;

        int matriz[n][n];

        hn = n/2;
        if (n%2 == 1)
            hn++;
        x = 0;
        y = n-1;

        for (k = 1; k <= hn; k++)
        {
            for (i = x; i <= y; i++)
            {
                for (j = x; j <= y; j++)
                {
                    matriz[i][j] = k;
                }
            }
            //Dizendo as posições para os numeros aumentarem
            x++;
            y--;
        }

        //PRINTANDO
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                    printf("%3d", matriz[i][j]);
                else
                    printf(" %3d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }

    system("pause");
    return 0;
}

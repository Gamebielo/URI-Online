#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idadeDias = 0;
    int anos = 0, meses = 0, dias = 0;

    scanf("%d", &idadeDias);

    while(idadeDias > 0) {
        if (idadeDias >= 365)
        {
            anos++;
            idadeDias -= 365;
        }

        else if (idadeDias >= 30)
        {
            meses++;
            idadeDias -= 30;
        }

        else
        {
            dias++;
            idadeDias--;
        }
    }

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    //system("pause");
    return 0;
}

#include <stdio.h>

int main (void)
{
    int trabalho, horas, total;

    printf("Onde voce trabalha?\nProducao[1]\nAdministracao[2]");
    scanf("%d", &trabalho);

    printf("Quantas horas foram trabalhadas? ");
    scanf("%d", &horas);
    if (trabalho == 1)
    {
        printf("Voce deve receber %d reais.", 10*horas);
    }
    else
    {
        if (trabalho == 2)
        {
            printf("Voce deve receber %d reais.", 12*horas);
        }
        else
        {
            printf("Opcao invalida.");
            return 1;
        }
    }
    return 0;
}
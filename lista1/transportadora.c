#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (void)
{
    // GET USER INPUT
    char *user_input = malloc(100 * sizeof(char));
    scanf("%99[^\n]", user_input);

    // CONVERT DATA
    const char *delim = " ";
    int day = atoi(strtok(user_input, delim));
    int boxes = atoi(strtok(NULL, delim));

    // CALCULATE DAY COST
    float cost = 0;
    switch (day)
    {
    case 2:
    case 3:
        cost += 25.00;
        break;
    case 4:
    case 5:
    case 6:
        cost += 30.00;
        break;
    case 7:
    case 1:
        cost += 45.00;
        break;
    default:
        printf("Dia invalido!");
        return 1;
        break;
    }

    // CALCULATE m³
    float m3 = boxes * 0.6*0.7*0.8;

    // CALCULATE TOTAL COST
    float total_cost = m3 * cost;
    int truck = ceil(m3/20);

    // PRINT ON SCREEM
    printf("Custo total da mucanca: R$ %.2f\n", total_cost);
    printf("Volume total necessario: %.2f metros cubicos\n", m3);
    printf("Quantidade de caminhao necessario: %i caminhoes\n", truck);

    free(user_input);
    return 0;
}
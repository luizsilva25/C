#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    // GET USER INPUT
    char *user_input = malloc(100 * sizeof(char));
    scanf("%99[^\n]", user_input);
    
    //printf("Teste 1: %s\n", user_input);

    // CONVERT DATA
    char *delim = " ";
    int x = atoi(strtok(user_input, delim));
    int y = atoi(strtok(NULL, delim));
    int z = atoi(strtok(NULL, delim));

    //printf("Teste 2: %i, %i\n", x, z);

    // CALCULATE P.A.

    int pa = x;
    int pa_sum = 0;
    
    printf("Progressao Aritmetica (PA): ");
    
    for (int i = 1; i <= z; i++)
    {
        printf("%i", pa);
        if (i != z)
        {
            printf(", ");
        }
        pa_sum += pa;
        pa += y;
    }
    
    printf("\n");
    printf("Soma da PA: %i\n", pa_sum);

    // CALCULATE P.G.
    int pg = x;
    int pg_sum = 0;

    printf("Progressao Geometrica (PG): ");
    
    for (int i = 1; i <= z; i++)
    {
        printf("%i", pg);
        if (i != z)
        {
            printf(", ");
        }
        pg_sum += pg;
        pg *= y;
    }

    printf("\n");
    printf("Soma da PG: %i\n", pg_sum);
    
    // CALCULATE SUM
    printf("Numero da sorte: %i\n", (pg_sum + pa_sum));

    free(user_input);
    return 0;
}
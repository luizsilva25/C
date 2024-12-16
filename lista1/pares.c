#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    // GET INPUT FROM USER
    char *user_input = malloc(100 * sizeof(char));
    scanf("%99[^\n]", user_input);

    //printf("Teste 1: %s\n", user_input);


    //CONVERT DATA AND SET INTERVAL
    int x, z;
    const char *delim = " ";

    x = atoi(strtok(user_input, delim));
    z = atoi(strtok(NULL, delim));

    //printf("Teste 2: %i, %i\n", x, z);

    //COUNT EVEN NUMBERS
    int even = 0;
    for (int i = x; i <= z; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
    }

    //PRINT EVEN AMOUNT ON SCREEM
    printf("Total de numeros pares entre %i e %i: %i", x, z, even);
}
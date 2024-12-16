#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
   // GET NUMBERS FROM USER
    char *user_input = malloc(100 * sizeof(char));
    scanf("%99[^\n]", user_input);

    // FIX DATA FORMAT
    const char *delim = " ";
    int x, z, y;

    x = atoi(strtok(user_input, delim));
    y = atoi(strtok(NULL, delim));
    z = atoi(strtok(NULL, delim)); 

    // ORDER NUMBERS
    
    int maior, inter, menor;
    maior = x;
    inter = x;
    menor = x;

    if (y > maior)
    {
        maior = y;
    }
    if (z > maior)
    {
        maior = z;
    }

    if (y < menor)
    {
        menor = y;
    }
    if (z < menor)
    {
        menor = z;
    }
    
    if (y < maior && y > menor)
    {
        inter = y;
    }
    if (z < maior && z > menor)
    {
        inter = z;
    }
    

    printf("%i %i %i", menor, inter, maior);

    free(user_input);

    return 0;
}
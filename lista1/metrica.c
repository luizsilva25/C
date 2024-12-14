#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main (void)
{
    // GET USER INPUT
    char *user_input = malloc(100 * sizeof(char));
    scanf("%99[^\n]", user_input);
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    // TREAT USER INPUT
    char *user_data = user_input;
    const char *delim = " ";

    char *operator;
    float x, y, z;

    operator = (strtok(user_data, delim));
    x = atof(strtok(NULL, delim));
    y = atof(strtok(NULL, delim));
    z = atof(strtok(NULL, delim));

    // IF USER CHOOSES P
    if (operator[0] == 'p')
    {
        float p = (x + y) * 2;
        printf("Perimetro do retangulo: %.3fcm\n", p);
    }
    // IF USER CHOOSES A
    else if (operator[0] == 'a')
    {
        float a = x * y;
        printf("Area do retangulo: %.3fcm quadrados\n", a);
    }
    // IF USER CHOOSES V
    else if (operator[0] == 'v')
    {
        float v = x * y * z;
        printf("Volume do paralelepipedo: %.3fcm cubicos\n", v);
    }
    // IF WRONG SELECTOR
    else
    {
        printf("Operador nao existe\n");
        return 1;
    }
    return 0;
}
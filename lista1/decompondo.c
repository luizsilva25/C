#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    // GET INPUT FROM USER
    char *user_input = malloc(100* sizeof(char));
    scanf("%99[^\n]", user_input);

    // PROCESS INPUT
    int size;
    char *number;
    const char *delim = " ";


    size = atoi(strtok(user_input, delim));
    number = (strtok(NULL, delim));

    // DECOMPOSE AND PRINT ON SCREEM
    int n_number = atoi(number);
    printf("Decompondo %i", n_number);

    
    //int len = strlen(number);
    //for (int i = 0; i < len-1; i++)
    //{
    //    if (number[i] != '\n')
    //    {
    //        printf("%c", number[i]);
    //    } 
    //}
    //char last = number[len-1];
    //printf("%c", last);
    
    printf(": ");

    for (int i = 0; i < size; i++)
    {
        int c = number[i] - '0';
        printf("%i ", c);
    }
}
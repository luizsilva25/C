#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_data(void);

int main (void)
{
    char *data = get_data();
    if (data == NULL)
    {
        printf("Usage Error\n");
        return 1;
    }

    int speed, height, temperature, time;

    // DATA SLICING
    char *user_data = data;
    const char *delim = " ";

    speed = atoi(strtok(user_data, delim));
    height = atoi(strtok(NULL, delim));
    temperature = atoi(strtok(NULL, delim));
    time = atoi(strtok(NULL, delim));

    int energy = speed * 10;
    
    // AJUSTES COM BASE EM ALTITUDE
    if (height > 5000)
    {
        energy = energy + ((energy*20)/100);
    }
    
    if (height < 1000)
    {
        energy = energy - ((energy*10)/100);    
    }

    // AJUSTES COM BASE EM TEMPERATURA EXTERNA
    if (temperature > 40 || temperature < -10)
    {
        energy = energy - ((energy*30)/100);
    }

    // EFEITO DO TEMPO DE VOO
    if (time > 120)
    {
        printf("Erro: tempo de voo excedido ou dados invalidos.");
        return 2;
    }

    if (time > 60)
    {
        int tempo_excedente = time - 60;
        for (tempo_excedente; tempo_excedente >= 30; tempo_excedente = tempo_excedente - 30)
        {
            energy = energy + ((energy*10)/100);
        }
    }

    // OUTPUT
    printf("A energia necessaria para o voo eh: %i joules", energy);

    return 0;

}

char *get_data()
{
    char *user_input = malloc(100 * sizeof(char));

    scanf("%99[^\n]", user_input);

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    return user_input; 
}
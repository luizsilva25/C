#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_data(void);
int data_slice(data_s);

int main (void)
{
    char *data = get_data();
    if (data == NULL)
    {
        printf("Usage Error\n");
        return 1;
    }

    int speed, height, temperature, time = data_slice(data);

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

int data_slice(data_s)
{
    int speed_s, height_s, temperature_s, time_s;
    char *user_data = data_s;
    const char *delim = " ";

    speed_s = atoi(strtok(user_data, delim));
    height_s = atoi(strtok(NULL, delim));
    temperature_s = atoi(strtok(NULL, delim));
    time_s = atoi(strtok(NULL, delim));

    printf("%i, %i, %i, %i.\n", speed_s, height_s, temperature_s, time_s);
    return speed_s, height_s, temperature_s, time_s;
}
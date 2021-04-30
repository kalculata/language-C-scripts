#include <stdio.h>
#include "headers/io.h"

// ask user to enter an integer with message (return int)
int inputInt(char *message)
{
    int number;
    printf("%s", message);
    scanf("%i", &number);
    return number;
}

// ask user to enter an integer with message (return flaot)
float inputFloat(char *message)
{
    float number;
    printf("\n%s", message);
    scanf("%f", &number);
    return number;
}

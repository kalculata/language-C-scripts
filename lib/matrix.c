#include <stdio.h>
#include <string.h>
#include "io.c"

void ones_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY]);
void printf_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *title);
void input_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *message);

void ones_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY])
{
    int i, j;
    for (i = 0; i < sizeX; i++)
    {
        for (j = 0; j < sizeY; j++)
        {
            matrix[i][j] = 1;
        }
    }
}

void printf_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *title)
{
    int i, j;

    printf("%s: \n", title);
    for (i = 0; i < sizeX; i++)
    {
        for (j = 0; j < sizeY; j++)
        {
            printf("%i  ", matrix[i][j]);
        }
        printf("\n");
    }
}

void input_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *message)
{
    int i, j;
    char input_message[100];

    printf("%s: \n", message);

    for (i = 0; i < sizeX; i++)
    {
        for (j = 0; j < sizeY; j++)
        {
            sprintf(input_message, "Matrix[%i][%i]: ", i + 1, j + 1);
            matrix[i][j] = inputInt(input_message);
        }
        printf("\n");
    }
}
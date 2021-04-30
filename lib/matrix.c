#include <stdio.h>
#include <string.h>
#include "io.c"

void ones_matrix(int size, int matrix[size][size]);
void printf_matrix(int size, int matrix[size][size]);
void input_matrix(int size, int matrix[size][size]);

void ones_matrix(int size, int matrix[size][size])
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            matrix[i][j] = 1;
        }
    }
}

void printf_matrix(int size, int matrix[size][size])
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%5i", matrix[i][j]);
        }
        printf("\n");
    }
}

void input_matrix(int size, int matrix[size][size])
{
    int i, j;
    char input_message[100];

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sprintf(input_message, "Matrix[%i][%i]: ", i + 1, j + 1);
            matrix[i][j] = inputInt(input_message);
        }
        printf("\n");
    }
}
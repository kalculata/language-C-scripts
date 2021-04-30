#include <stdio.h>

void ones_matrix(int size, int matrix[size][size]);
void printf_matrix(int size, int matrix[size][size]);

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

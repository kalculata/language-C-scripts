#include <stdio.h>
#include <string.h>
#include "io.c"

void ones_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY]);
void printf_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *title);
void input_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *message);
int matrix_sum(int sizeX1, int sizeX2, int sizeY1, int sizeY2,
               int matrix1[sizeX1][sizeY1],
               int matrix2[sizeX2][sizeY2],
               int sum[sizeX1][sizeY1]);

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

    printf("\n%s: \n", title);
    for (i = 0; i < sizeX; i++)
    {
        for (j = 0; j < sizeY; j++)
        {
            printf("%i  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void input_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *message)
{
    int i, j;
    char input_message[100];

    printf("\n%s: \n\n", message);

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

int matrix_sum(int sizeX1, int sizeX2, int sizeY1, int sizeY2,
               int matrix1[sizeX1][sizeY1],
               int matrix2[sizeX2][sizeY2],
               int sum[sizeX1][sizeY1])
{
    int i, j;

    if (sizeX1 != sizeX2 || sizeY1 != sizeY2)
        return 0;

    for (i = 0; i < sizeX1; i++)
    {
        for (j = 0; j < sizeY1; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return 1;
}
#include <stdio.h>
#include <string.h>
#include "io.c"

// generate matrix fill with 1
void ones_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY]);
// display content of matrix
void printf_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *title);
// ask user to complete values of matrix
void input_matrix(int sizeX, int sizeY, int matrix[sizeX][sizeY], char *message);
// calculate sum of two matrix A and B
int matrix_sum(int sizeX1, int sizeX2, int sizeY1, int sizeY2,
               int matrix1[sizeX1][sizeY1],
               int matrix2[sizeX2][sizeY2],
               int sum[sizeX1][sizeY1]);
// calculate difference between two matrix A and B
int matrix_diff(int sizeX1, int sizeX2, int sizeY1, int sizeY2,
                int matrix1[sizeX1][sizeY1],
                int matrix2[sizeX2][sizeY2],
                int sum[sizeX1][sizeY1]);
// calculate product of two matrix A and B
int matrix_prod(int sizeX1, int sizeX2, int sizeY1, int sizeY2,
                int matrix1[sizeX1][sizeY1],
                int matrix2[sizeX2][sizeY2],
                int prod[sizeX1][sizeY2]);

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
            printf("%i      ", matrix[i][j]);
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

int matrix_diff(int sizeX1, int sizeX2, int sizeY1, int sizeY2,
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
            sum[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    return 1;
}

int matrix_prod(int sizeX1, int sizeX2, int sizeY1, int sizeY2,
                int matrix1[sizeX1][sizeY1],
                int matrix2[sizeX2][sizeY2],
                int prod[sizeX1][sizeY2])
{
    int i, j, k, t;

    if (sizeY1 != sizeX2)
        return 0;

    for (i = 0; i < sizeX1; i++)
    {
        for (j = 0; j < sizeY2; j++)
        {
            t = 0;
            for (k = 0; k < sizeX2; k++)
            {
                t = t + (matrix1[i][k] * matrix2[k][j]);
            }
            prod[i][j] = t;
        }
    }
    return 1;
}
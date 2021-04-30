#include <stdio.h>

int main()
{
    int n, i, j, k, t, A[][];

    printf("Entrer la taille des matrices: ");
    scanf("%i", &n);

    A[n][n], B[n][n], C[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nA[%i][%i] = ", i, j);
            scanf("%i", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nB[%i][%i] = ", i, j);
            scanf("%i", &B[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            t = 0;
            for (k = 0; k < n; k++)
            {
                t = t + (A[i][k] * B[k][j]);
            }
            C[i][j] = t;
        }
    }
    printf("Matrice A: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3i", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrice C: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3i", B[i][j]);
        }
        printf("\n");
    }
    printf("Matrice C: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3i", C[i][j]);
        }
        printf("\n");
    }
}

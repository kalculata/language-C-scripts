#include <stdlib.h>
#include <stdio.h>
#include "lib/list.c"
#include "lib/matrix.c"

int main()
{

    // -------------------------------------------------------------------------------------------------------
    // Example for matrix
    // -------------------------------------------------------------------------------------------------------
    int sizeX1 = inputInt("Enter the number of rows of matrix A: ");
    int sizeY1 = inputInt("Enter the number of column of matrix A: ");
    int sizeX2 = inputInt("Enter the number of rows of matrix B: ");
    int sizeY2 = inputInt("Enter the number of column of matrix B: ");

    int A[sizeX1][sizeY1],
        B[sizeX2][sizeY2],
        prod[sizeX1][sizeY2],
        sum[sizeX1][sizeY1],
        result;

    // input matrix A and B
    input_matrix(sizeX1, sizeY1, A, "Enter matrix A");
    input_matrix(sizeX2, sizeY2, B, "Enter matrix B");

    // display matrix A and B
    printf_matrix(sizeX1, sizeY1, A, "Matrix A");
    printf_matrix(sizeX2, sizeY2, B, "Matrix B");

    // calculate and display matrix(A+B)
    result = matrix_sum(sizeX1, sizeY1, sizeX2, sizeY2, A, B, sum);
    if (result == 1)
        printf_matrix(sizeX1, sizeY1, sum, "Matrix(A+B)");
    else
        printf("Impossible: for matrix(A+B) number of rows and columns of matrix A and B must be equal (%i != %i).\n\n", sizeY1, sizeX2);

    // calculate and display matrix(A-B)
    result = matrix_diff(sizeX1, sizeY1, sizeX2, sizeY2, A, B, sum);
    if (result == 1)
        printf_matrix(sizeX1, sizeY1, sum, "Matrix(A-B)");
    else
        printf("Impossible: for matrix(A+B) number of rows and columns of matrix A and B must be equal (%i != %i).\n\n", sizeY1, sizeX2);

    // calculate and display matrix(A*B)
    result = matrix_prod(sizeX1, sizeY1, sizeX2, sizeY2, A, B, prod);
    if (result == 1)
        printf_matrix(sizeX1, sizeY2, prod, "Matrix(A*B)");
    else
        printf("Impossible : for matrix(A*B) number of columns of matrix A and number rows of matrix B must be equal (%i != %i).\n\n", sizeY1, sizeX2);

    // -------------------------------------------------------------------------------------------------------
    // Example about list
    // -------------------------------------------------------------------------------------------------------
    /*int i, t;

    int taille;
    List *vecteur = list();

    printf("Entrer la taille du vectuer:");
    scanf("%i", &taille);

    for (i = 0; i < taille; i++)
    {
        printf("Entrer la valeur du vecteur numero %i: ", i);
        scanf("%i", &t);
        append(vecteur, t);
    }
    printf("vecteur : ");

    printf_list(vecteur);*/
}

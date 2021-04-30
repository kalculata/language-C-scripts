#include <stdlib.h>
#include <stdio.h>
#include "lib/list.c"
#include "lib/matrix.c"

int main()
{

    // Example for matrix
    int size = inputInt("Enter the number of rows and column for your matrix A and B: ");

    int A[size][size], B[size][size], C[size][size];
    input_matrix(size, size, A, "Enter matrix A");
    input_matrix(size, size, B, "Enter matrix B");

    printf_matrix(size, size, A, "Matrix A");
    printf_matrix(size, size, B, "Matrix B");

    // Example about list
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

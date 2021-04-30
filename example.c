#include <stdlib.h>
#include <stdio.h>
#include "lib/list.c"
#include "lib/io.c"
#include "lib/matrix.c"

int main()
{

    int matrix[3][3] = {{0}};
    ones_matrix(3, matrix);
    printf_matrix(3, matrix);

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

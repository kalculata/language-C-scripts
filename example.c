#include <stdlib.h>
#include <stdio.h>
#include "list.c"

int main()
{
    // Example
    int i, t;

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
    printf("vecteur = ");

    printf_list(vecteur);
}

#include <stdlib.h>
#include <stdio.h>
#include "list.c"
#include "string.h"
#include "io.c"

int main()
{
    //Example about input and output
    int a = inputInt("Enter la valeur de a: ");
    printf("\na = %i", a);

    float b = inputFloat("Enter la valeur de b: ");
    printf("b = %f", b);

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
    printf("vecteur = ");

    printf_list(vecteur);*/
}

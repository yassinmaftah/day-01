#include <stdio.h>

int     main()
{
    float   Surface;
    float   longueur;
    float   largeur;

    printf("Entre la valeur de largeur: ");
    scanf("%f", &largeur);
    printf("Entre la valeur de longueur: ");
    scanf("%f", &longueur);

    Surface = longueur * largeur;

    printf("la valeur de Surface est: %.2f", Surface);
}
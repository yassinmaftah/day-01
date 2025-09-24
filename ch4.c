#include <stdio.h>

int     main()
{
    float   KM_H;
    float   M_S;

    printf("Entre la valeur de la vitessz zn KM/H: ");
    scanf("%f", &KM_H);

    M_S = KM_H * 0.27778;

    printf("la valeur de la vitesse en M/S est: %.2f", M_S);
}
#include <stdio.h>
#include <math.h>

int     main()
{
    float   x1;
    float   x2;
    float   y1;
    float   y2;
    float   z1;
    float   z2;

    float   Distance;

    printf("entre valeur de x1 et x2: ");
    scanf("%f %f", &x1, &x2);
    
    printf("entre valeur de y1 et y2: ");
    scanf("%f %f", &y1, &y2);

    printf("entre valeur de z1 et z2: ");
    scanf("%f %f", &z1, &z2);

    Distance = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2) + pow(z2 - z1 , 2));

    printf("la valeur de la Distance est: %.2f", Distance);
}
#include <stdio.h>

int main()
{
    float   K;
    float   C;

    printf("Entre la valeur de la temp�rature en Celsius: ");
    scanf("%f", &C);

    K = C + 273.15;

    printf("la valeur de la temp�rature en Kelvin est: %.2f\n", K);

}

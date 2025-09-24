#include <stdio.h>

int main()
{
    float   D_KM;
    float   D_YR;

    printf("Entre la valeur de distance en KM: ");
    scanf("%f", &D_KM);

    D_YR = D_KM * 1093.61;

    printf("la valuer de la distans en yards est: %.2f", D_YR)
}
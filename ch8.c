#include <stdio.h>
#include <math.h>


int main()
{
    float   a;
    float   b;
    float   c;

    float   moyenne_g;

    printf("Entre la valeur de n1: ");
    scanf("%f", &a);
    printf("Entre la valeur de n2: ");
    scanf("%f", &b);
    printf("Entre la valeur de n3: ");
    scanf("%f", &c);

    moyenne_g = pow(a * b * c , 1 / 3);

    printf("la valeur de la moyenne géométrique est: %.2f", moyenne_g);
    
}
#include <stdio.h>

int main()
{
    float     n1;
    float     n2;
    float     n3;
    float      moyenne;

    printf("Entre la valeur n1: ");
    scanf("%f", &n1);
    printf("Entre la valeur n2: ");
    scanf("%f", &n2);
    printf("Entre la valeur n3: ");
    scanf("%f", &n3);

    moyenne = ((n1 * 2)  + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5);

    printf("la valeur de la moyenne est: %.2f", moyenne);
}

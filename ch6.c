#include <stdio.h>

int main()
{
    float   a;
    float   b;

    printf("Entre la valeur de a: ");
    scanf("%f", &a);
    printf("Entre la valeur de b: ");
    scanf("%f", &b);

    if (b == 0)
    {
        printf("Non divisible par 0.\n");
    }
    else
    {
        printf("a / b = %f\n", a / b);
    }
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
}
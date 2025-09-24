#include <stdio.h>

int main()
{
    float   T;

    printf("entre la valeur de température: ");
    scanf("%f", &T);

    if (T < 0)
    {
        printf("Solid\n");
    }
    else if (T >= 100)
    {
        printf("Gaz\n");
    }
    else
    {
        printf("Liquide\n");
    }
}
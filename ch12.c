#include <stdio.h>

int main()
{
    int     number;
    int     invers;

    invers = 0;
    printf("Entre la valeur de number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        invers = invers * 10 + (number % 10);
        number /= 10;
    }

    printf("number invers est: %d", invers);
}
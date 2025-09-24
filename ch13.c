#include <stdio.h>

void to_hex(int n)
{
    char hex[] = "0123456789ABCDEF";

    if (n >= 16)
        to_hex(n / 16);
    printf("%c", hex[n % 16]);
}

void to_bin(int n)
{
    char bin[] = "01";

    if (n >= 2)
        to_bin(n / 2);
    printf("%c", bin[n % 2]);
}

int main()
{
    int number;

    printf("Entre la valeur de number: ");
    scanf("%d", &number);

    printf("number en fonction hexadécimal: ");
    to_hex(number);
    printf("\n");

    printf("number en fonction binaire: ");
    to_bin(number);
    printf("\n");

    return 0;
}
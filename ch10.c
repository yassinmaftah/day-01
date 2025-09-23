#include <stdio.h>
#include <math.h>

int main()
{
    float   r;
    float   volume;
    const float   P = 3.14;

    printf("Entre valeur de r: ");
    scanf("%f", &r);

    volume = (4 / 3)  * P * pow(r , 3);

    printf("la valeur de le volume d'une sphère: %.2f", volume);
    
}
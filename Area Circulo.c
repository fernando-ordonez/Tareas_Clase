#include <stdio.h>
#define pi 3.1416

int main()
{
    float radio,area=0;
    printf("Ingrese el radio");
    scanf("%f",&radio);
    area=pi*radio*radio;
    printf("El area es %f.", area);
    return 0;
}

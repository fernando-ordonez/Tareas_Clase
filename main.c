/******************************************************************************

Realizar un programa que permita convertir de grados centigrados a fahrenheit o viceversa

*******************************************************************************/
#include <stdio.h>

void main()
{
    float cent,fahr,gradosCent=0,gradosfahr=0;
    int op;
    printf("Menu Principal\n1.Grados centigrados a fahrenheit\n2.Grados fahrenheit a centigrados\n");
    printf("Escoja una opcion:");
    scanf("%d",&op);
    if(op==1)
    {
        printf("Ingrese los grados centigrados:");
        scanf("%f",&cent);
        gradosfahr=((cent*9)/5)+32;
        printf("Grados fahrenheit:%.2f",gradosfahr);
    }
    else
    {
        printf("Ingrese los grados fahrenheit:");
    scanf("%f",&fahr);
    gradosCent=((fahr-32)*5)/9;
    printf("Grados centigrados:%.2f\n",gradosCent);
    }

}

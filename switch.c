/******************************************************************************

Realizar un programa que contenga un menu con los siguientes opciones
*******************************************************************************/
#include<stdio.h>
#include<math.h>

void main()
{
    int opcion;
    float a,b,c,x1=0,x2=0,base,alt,area=0;

printf("Menu principal\n1.Ecuacion Cuadratica\n2.Area del Triangulo\n");
printf("Escoja la opcion:");
scanf("%d",&opcion);
switch(opcion)
{
    case 1:
        printf("Ingrese el coeficiente a:");
        scanf("%f",&a);
        printf("Ingrese el coeficiente b:");
        scanf("%f",&b);
        printf("Ingrese el coeficiente c:");
        scanf("%f",&c);
        x1=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
        x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
        printf("El resultado de x1 es %.2f\n",x1);
        printf("El resultado de x2 es %.2f\n",x2);
    break;
    case 2:
        printf("Ingrese la base:");
        scanf("%f",&base);
        printf("Ingrese la altura:");
        scanf("%f",&alt);
        area=(base*alt)/2;
        printf("El area del triangulo es:%.2f",area);
    break;
        case 3:
        printf("Ingrese ano de nacimiento:");
        scanf("%d",&ano);
        printf("Ingrese mes de nacimiento:");
        scanf("%d",&mes);
        printf("Ingrese dia de nacimiento:");
        scanf("%d",&dia);
        printf("Ingrese ano actual:");
        scanf("%d",&anoac);
        printf("Ingrese mes actual:");
        scanf("%d",&mesac);
        printf("Ingrese dia actual:");
        scanf("%d",&diaac);
        edad=anoac-ano;
        meses=mesac-mes;
        dias=diaac-dia;
        if(dias<0)
        {
            meses=meses-1;
            dias=dias+30;
    
        }else {
            if(meses<0)
                edad=edad-1;
                meses=meses+12;
        printf("Usted tiene:%d",edad,meses,dias);
        }
    }
}

    }
}

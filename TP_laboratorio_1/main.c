#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"



int main()
{
    int num1=0;
    int num2=0;
    int a,b,d,e,f;
    float c;
    int flag1=0;
    int flag2=0;
    int flag3=0;
    int opcion;
    do
    {
        system("cls");
         printf("CALCULADORA.\n\n");
        printf("-----MENU-----\n");

        printf("1.- Ingrese el primer operando(A=%.2d)\n",num1);
        printf("2.- Ingrese el segundo operando(B=%.2d)\n",num2);
        printf("3.- Calcular todas las funciones\n");
        printf("4.- Informar resultados.\n");
        printf("5.- Salir\n");
        printf("--------------\n");
        printf("Elija una de las opciones = (1-5)\n");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            printf("\nIngrese el primer operando: (A):");
            scanf("%d",&num1);
            flag1=1;

            break;
        case 2:
            system("cls");
            printf("\nIngrese el segundo operando:(B):");
            scanf("%d",&num2);
            flag2=1;

            break;
        case 3:
            system("cls");
            if(flag1==1 && flag2==1)
            {
                printf("Calculando la suma (A+B)\n");
                printf("Calculando la resta (A-B)\n");
                printf("Calculando la division (A/B)\n ");
                printf("Calculando la multiplicacion (A*B)\n");
                printf("Calculando el factorial (A!)\n");
                flag3=1;


            }
            else
            {
                system("cls");
                printf("ERROR: Primero debe ingresar los valores.\n");

            }
            break;

        case 4:
            system("cls");
            if(flag3==1)
            {
                a=suma(num1,num2);
                printf("El resultado de (A+B) es:%d\n",a);

                b=resta(num1,num2);
                printf("El resultado de (A-B)es: %d\n",b);
                if(num2==0 || num1==0)
                {
                    printf("!ERROR! no se puede dividir por 0\n");

                }
                else
                {
                    c=division(num1,num2);
                    printf("El resultado de (A/B)es:%.2f\n",c);
                }
                d=multiplicacion(num1,num2);
                printf("El resultado de (A*B)es:%d\n",d);

                e=factorialA(num1);
                if(e!=-1)
                {
                    printf("El resultado de A! es= %d\n",e);
                }
                else
                {
                    printf("e.-No se puede sacar el factorial de A! por el valor de 0\n");
                }

                f=factorialB(num2);
                if(f!=-1)
                {

                    printf("El resultado de B! es= %d\n",f);
                }
                else
                {
                    printf("!No se puede sacar el factorial B! por el valor de 0!\n");

                }

            }
            else
            {
                system("cls");

                printf("ERROR: Primero debe calcular los Operadores\n");

            }
            break;
        case 5:
            printf("Ustede acaba de abandonar la calculadora.\n");


            break;
        default:
            printf("!Opcion invalida ingrese una opcion valida!\n");



        }
        system("pause");
    }
    while(opcion!=5);
    return 0;
}

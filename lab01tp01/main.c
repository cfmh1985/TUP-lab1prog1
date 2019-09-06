#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "math.h"
#include "validar.h"


float suma(float, float);
float resta(float, float);
float division(float, float);
float multiplicacion(float, float);
float factorial(float, float);
int validaOperando(float, float);
int validaOperaciones(int);

int main()
{
    int op01=00;
    int flagA=0;
    int op02=00;
    int flagB=0;
    int opcion;
    int flagOps;

    float resSuma;
    float resResta;
    float resDiv;
    float resMult;
    float resFactOp01;
    float resFactOp02;

    char seguir;

    do
    {
        system("cls");
        printf("*** Calculadora - Lab01/TP01 ***\n\n");

        printf("1- Ingresar primer operando (A=%d)\n", op01);
        printf("2- Ingresar segundo operando (B=%d)\n", op02);
        printf("3- Calcular todas las operaciones (suma, resta, division, multiplicacion, factorial)\n");
        printf("4- Resultado de las operaciones anteriores\n");
        printf("5 - Salir del programa\n");

        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        while(opcion<1 || opcion>5)
                    {
                    printf("\n\nERROR! Debe seleccionar una opcion entre 1 y 5: ");
                    scanf("%d", &opcion);
                    }

        switch(opcion)
        {
            case 1:
            printf("\nIngrese primer operando: ");
            scanf("%d", &op01);
            flagA++;
            break;

            case 2:
            printf("\nIngrese segundo operando: ");
            scanf("%d", &op02);
            flagB++;
            break;

            case 3:
            if(validaOperando(op01, op02)==1)
            {
                printf("\nERROR! Debe ingresar los operandos antes de calcular!");
                break;
            }else
            {
            suma(op01, op02);
            resta(op01, op02);
            division(op01, op02);
            multiplicacion(op01, op02);
            }

            break;

            case 4:
                if (flagA<1 || flagB<1)
                {
                    printf("\nERROR! Debe calcular las operaciones primero (opcion 3).");

                    printf("\n\n");
                    system("pause");
                    break;
                }else
                    {
                        printf("Suma: %.2f \n", suma(op01, op02));
                        printf("Resta: %.2f \n", resta(op01, op02));
                        printf("Division: %.2f \n", division(op01, op02));
                        printf("Multiplicacion: %.2f \n", multiplicacion(op01, op02));
                        printf("Factorial: %.2f \n", factorial(op01, op02));
                    }

            case 5:

            printf("\n\n*SALIENDO DEL PROGRAMA*\n\nRealmente desea salir?");
            scanf("%c", &seguir);

            while (seguir != 's' || seguir != 'n')
                {
                printf("\n*ERROR* Debe seleccionar 's' o 'n' para salir del programa: ");
                scanf("%c", &seguir);
                seguir=getche();
                }
                system("pause");
                break;
        }

    }while(seguir='n');

    system("pause");
    printf("Hello world!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "validar.h"

int validaOperando(int a, int b)
{
            if(a<1 && b<1)
                {
                    printf("\nERROR! Debe ingresar ambos operandos (opciones 1 y 2).");
                    printf("\n\n");
                    system("pause");
                    a=0;
                    a=0;
                    return 1;
                }else if(a<1)
                    {
                        printf("\nERROR! Debe ingresar el primer operando (opcion 1).");
                        printf("\n\n");
                        system("pause");
                        a=0;
                        return 1;
                    }else if(b<1)
                        {
                            printf("\nERROR! Debe ingresar el segundo operando (opcion 2).");
                            printf("\n\n");
                            system("pause");
                            b=0;
                            return 1;
                        }else
                        {
                            return 0;
                        }
}

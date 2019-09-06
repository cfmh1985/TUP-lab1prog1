#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "validar.h"


/** \brief Recibe 2 floats pasados por valor desde la funcion Main
 *
 * \param Recibe el primer operando
 * \param Recibe el segundo operando
 * \return el valor de la suma de ambos operandos
 *
 */


float suma(float a, float b)
{
    float resSuma;
    resSuma=a+b;
    return resSuma;
}


/** \brief Recibe 2 enteros pasados por valor desde la funcion Main
 *
 * \param Recibe el primer operando
 * \param Recibe el segundo operando
 * \return el valor de la resta de ambos operandos
 *
 */

float resta(float a, float b)
{
    float resResta;
    resResta=a-b;
    return resResta;
}

/** \brief Recibe 2 enteros pasados por valor desde la funcion Main
 *
 * \param Recibe el primer operando
 * \param Recibe el segundo operando
 * \return el valor de la division de ambos operandos
 *
 */

float division(float a, float b)
{
    float resDiv;
    resDiv=a/b;
    return resDiv;
}


/** \brief Recibe 2 enteros pasados por valor desde la funcion Main
 *
 * \param Recibe el primer operando
 * \param Recibe el segundo operando
 * \return el valor de la multiplicacion de ambos operandos
 *
 */

float multiplicacion(float a, float b)

{
    float resMult;
    resMult=a*b;
    return resMult;
}

/** \brief Recibe 2 enteros pasados por valor desde la funcion Main
 *
 * \param Recibe el primer operando
 * \param Recibe el segundo operando
 * \return el valor factorial de ambos enteros recibidos
 *
 */

float factorial(float a, float b)
{
    float resFactOp01;
    float resFactOp02;
    int auxA=a-1;
    int auxB=b-1;

    while(auxA>=1)
         {
          resFactOp01=resFactOp01*auxA;
          auxA--;
         }
    while(auxB>=1)
         {
          resFactOp02=resFactOp02*auxB;
          auxB--;
         }

         return resFactOp01, resFactOp02;

}

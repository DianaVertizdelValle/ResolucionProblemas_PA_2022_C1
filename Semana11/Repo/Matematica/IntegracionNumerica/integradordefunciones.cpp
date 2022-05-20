#include "integradordefunciones.h"

IntegradorDeFunciones::IntegradorDeFunciones()
{

}

void IntegradorDeFunciones::setParametros(int pN, float pXi, float pXf)
{
    NroIntervalos = pN;
    xi = pXi;
    xf = pXf;
}

void IntegradorDeFunciones::setFuncion(const Funcion &value)
{
    funcion = value;
}

float IntegradorDeFunciones::evalIntegral()
{
    //Implementar la evaluación de la integral
}


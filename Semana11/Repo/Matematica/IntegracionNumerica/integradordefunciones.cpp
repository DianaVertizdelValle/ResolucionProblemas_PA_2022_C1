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

    float integral = 0.0f;
    int& N = NroIntervalos;
    float h = (xf - xi) / N;
    float suma = 0.0f;
    for(int j=1; j<=N-1 ; j++)
    {
        suma += funcion(xi+j*h);
    }
    integral = (h/2)*(funcion(xi) + 2*suma + funcion(xf));
    return integral;
}


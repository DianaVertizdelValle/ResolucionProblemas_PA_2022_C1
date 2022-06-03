#ifndef INTEGRADORDEFUNCIONES_H
#define INTEGRADORDEFUNCIONES_H

#include "funcion.h"

class IntegradorDeFunciones
{
    public:
        IntegradorDeFunciones();
        void setParametros(int pN, float pXi, float pXf);
        void setFuncion(const Funcion &value);
        float evalIntegral();

    protected:
        int NroIntervalos;
        float xi, xf;
        Funcion funcion;

};

#endif // INTEGRADORDEFUNCIONES_H

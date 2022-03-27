#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <math.h>
#include <iostream>

using namespace std;

class Complejo
{
    public:
        Complejo(float preal = 0.0, float pimaginario = 0.0);
        Complejo sumar(const Complejo &otroComplejo) const;
        Complejo restar(const Complejo &otroComplejo) const;
        Complejo obtenerConjugado() const;
        bool esMenor(const Complejo &otroComplejo) const;
        Complejo& preincremento();
        Complejo postincremento();
        void mostrarComplejo() const;

    private:
        float real;
        float imaginaria;
        float calcModulo()const;
        void incremento();
};

#endif // COMPLEJO_H

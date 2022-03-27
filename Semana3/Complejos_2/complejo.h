#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <math.h>
#include <iostream>

using namespace std;

class Complejo
{
    //friend ostream& operator<<(ostream& salida, Complejo & complex);

    public:
        Complejo(float preal = 0.0, float pimaginario = 0.0);
        Complejo sumar(const Complejo &otroComplejo) const;        
        Complejo restar(const Complejo &otroComplejo) const;
        Complejo obtenerConjugado() const;
        bool esMenor(const Complejo &otroComplejo) const;        
        Complejo& preincremento();
        Complejo postincremento();
        void mostrarComplejo(ostream &salida) const;
        float getReal() const;
        float getImaginaria() const;

        Complejo operator+(const Complejo &otroComplejo) const;
        Complejo operator-(const Complejo &otroComplejo) const;
        bool operator<(const Complejo &otroComplejo) const;
        Complejo &operator++();
        Complejo operator++(int);
        Complejo operator!() const;

    private:

        float real;
        float imaginaria;
        float calcModulo()const;
        void incremento();
};

ostream& operator<<(ostream& salida, Complejo & complex);


#endif // COMPLEJO_H

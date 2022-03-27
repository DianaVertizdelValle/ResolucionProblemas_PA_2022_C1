#include "complejo.h"


Complejo::Complejo(float preal, float pimaginario)
{
    real = preal;
    imaginaria = pimaginario;
}

Complejo Complejo::sumar(const Complejo &otroComplejo) const
{
    Complejo auxiliar;
    auxiliar.real = real + otroComplejo.real;
    auxiliar.imaginaria = imaginaria + otroComplejo.imaginaria;
    return auxiliar;
    //return Complejo(real + otroComplejo.real, imaginaria + otroComplejo.imaginaria);
}

Complejo Complejo::restar(const Complejo &otroComplejo) const
{
    Complejo auxiliar;
    auxiliar.real = real - otroComplejo.real;
    auxiliar.imaginaria = imaginaria - otroComplejo.imaginaria;
    return auxiliar;
    //return Complejo(real - otroComplejo.real, imaginaria - otroComplejo.imaginaria);
}

Complejo Complejo::obtenerConjugado() const
{
    return Complejo(real, -imaginaria);
}

bool Complejo::esMenor(const Complejo &otroComplejo) const
{
    return this->calcModulo()< otroComplejo.calcModulo();
}

float Complejo::getReal() const
{
    return real;
}

float Complejo::getImaginaria() const
{
    return imaginaria;
}

void Complejo::mostrarComplejo(ostream &salida) const
{
    salida<<"("<<real<<", "<<imaginaria<<")";
}

Complejo &Complejo::preincremento()
{
    incremento();
    return *this;
}

Complejo Complejo::postincremento()
{
    Complejo auxiliar = *this;
    incremento();
    return auxiliar;
}

float Complejo::calcModulo() const
{
    return sqrt(real*real + imaginaria*imaginaria);
}

void Complejo::incremento()
{
    real++;
    imaginaria++;
}

/********************* Operadores sobrecargados  *************************/

Complejo Complejo::operator+(const Complejo &otroComplejo) const
{
    return sumar(otroComplejo);
}

Complejo Complejo::operator-(const Complejo &otroComplejo) const
{
    return restar(otroComplejo);
}

Complejo Complejo::operator!() const
{
    return obtenerConjugado();
}

bool Complejo::operator<(const Complejo &otroComplejo) const
{
    return esMenor(otroComplejo);
}

Complejo &Complejo::operator++()
{
    return preincremento();
}

Complejo Complejo::operator++(int)
{
    return postincremento();
}

/*********** Sobrecarga como método global  **********/

ostream& operator<<(ostream& salida, Complejo & complex)
{
    complex.mostrarComplejo(salida);
    return salida;
}

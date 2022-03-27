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
    return calcModulo()< otroComplejo.calcModulo();
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

void Complejo::mostrarComplejo() const
{
    cout<<"("<<real<<", "<<imaginaria<<")";
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

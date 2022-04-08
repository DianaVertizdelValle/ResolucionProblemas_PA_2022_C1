#include "cuadrilatero.h"

Cuadrilatero::Cuadrilatero(int plado1, int plado2, int protacion)
{
    setLado1(plado1);
    setLado2(plado2);
    setRotacion(protacion);
}

int Cuadrilatero::getLado1() const
{
    return lado1;
}

void Cuadrilatero::setLado1(int value)
{
    lado1 = (value > 0) ? value : 1;
}

int Cuadrilatero::getLado2() const
{
    return lado2;
}

void Cuadrilatero::setLado2(int value)
{
    lado2 = (value > 0) ? value : 1;
}

int Cuadrilatero::getRotacion() const
{
    return rotacion;
}

void Cuadrilatero::setRotacion(int value)
{
    rotacion = (value >= 0 && value < 180) ? value : 0;
}

#include "funcion.h"

Funcion::Funcion()
{
    ptrFun = nullptr;
}

void Funcion::setPtrFun(float (*pPtrFun)(float))
{
    ptrFun = pPtrFun;
}

float Funcion::operator()(float x)
{
    float res = 0.0f;
    if(ptrFun != nullptr)
    {
        res = ptrFun(x);
    }
    return res;
}

Funcion Funcion::getFuncion()
{
    return *this;
}

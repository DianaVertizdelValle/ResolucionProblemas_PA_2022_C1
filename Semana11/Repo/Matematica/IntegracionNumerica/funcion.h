#ifndef FUNCION_H
#define FUNCION_H


class Funcion
{
    public:
        Funcion();
        void setPtrFun(float (*pPtrFun)(float)); // puntero a función: float (*pPtrFun)(float)
        float operator()(float x);

        Funcion getFuncion();

    protected:
        float (*ptrFun)(float);

};

#endif // FUNCION_H

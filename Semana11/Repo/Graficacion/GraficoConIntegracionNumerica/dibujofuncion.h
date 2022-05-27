#ifndef DIBUJOFUNCION_H
#define DIBUJOFUNCION_H

#include "../Graficador2D/dibujo.h"
#include "../../Matematica/IntegracionNumerica/funcion.h"

class DibujoFuncion : public Funcion, public Dibujo
{
    public:
        DibujoFuncion();
        void dibujar() override;
        void ajustarRangosXY() override;
        void setParametros(unsigned int pN, float pXini, float pXfin);

    private:
        unsigned int N; // cantidad de intervalos
        float x_ini, x_fin;

};

#endif // DIBUJOFUNCION_H

#ifndef DIBUJOINTEGRAL_H
#define DIBUJOINTEGRAL_H

#include "../Graficador2D/dibujo.h"
#include "../Graficador2D/actualizable.h"
#include "../../Matematica/IntegracionNumerica/integradordefunciones.h"
#include "dibujofuncion.h"

class DibujoIntegral : public IntegradorDeFunciones, public Dibujo, public Actualizable
{
public:
    DibujoIntegral();
    void dibujar() override;
    void actualizar() override;
    void ajustarRangosXY() override;
    void setParametros(unsigned int pN, float pXini, float pXfin);
    void setFuncion(DibujoFuncion &value);
};


#endif // DIBUJOINTEGRAL_H

#ifndef CAMPOVECTORIAL_H
#define CAMPOVECTORIAL_H

#include "../Repo/Graficacion/Graficador2D/dibujo.h"
#include "../Repo/Graficacion/Graficador2D/actualizable.h"
#include "../Repo/Matematica/Vector3D/vector3d.h"

#include <vector>

class CampoVectorial : public Actualizable, public Dibujo
{
    public:
        CampoVectorial(int pcantidad = 16);
        void actualizar() override;
        void dibujar() override;
        void ajustarRangosXY() override;

    private:
        int cantidad;
        float alfa;
        vector<vector<Vector3D>> matriz;


};

#endif // CAMPOVECTORIAL_H

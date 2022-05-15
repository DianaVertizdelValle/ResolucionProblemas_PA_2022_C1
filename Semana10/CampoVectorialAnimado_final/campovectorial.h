#ifndef CAMPOVECTORIAL_H
#define CAMPOVECTORIAL_H

#include "dibujo.h"
#include "actualizable.h"
#include "../Repo/Matematica/Vector3D/vector3d.h"

#include <vector>

class CampoVectorial : public Actualizable, public Dibujo
{
    public:
        CampoVectorial(int pcantidad = 16);

        void actualizar();
        void dibujar();

    private:
        int cantidad;
        float alfa;

        vector<vector<Vector3D>> matriz;



};

#endif // CAMPOVECTORIAL_H

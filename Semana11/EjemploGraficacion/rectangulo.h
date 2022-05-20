#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "../Repo/Graficacion/Graficador2D/dibujo.h"
#include "../Repo/Graficacion/Graficador2D/actualizable.h"

class Rectangulo : public Dibujo, public Actualizable
{
    public:
        Rectangulo(){}
        Rectangulo(float pCx, float pCy,
                   float pBase, float pAltura,
                   float pAng);

        float getCx() const;
        void setCx(float value);

        float getCy() const;
        void setCy(float value);

        float getBase() const;
        void setBase(float value);

        float getAltura() const;
        void setAltura(float value);

        float getAng() const;
        void setAng(float value);

        // Métodos virtuales heredados de Dibujo
        void dibujar() override;
        void actualizar() override;
        void ajustarRangosXY() override;

    private:
        float cx, cy, base, altura, ang;
        void dibujarEjes();
        void dibujarRectangulo();

};

#endif // RECTANGULO_H

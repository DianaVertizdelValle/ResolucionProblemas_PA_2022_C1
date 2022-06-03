#ifndef DIBUJO_H
#define DIBUJO_H

#include <QOpenGLFunctions>

class Dibujo
{
    public:
        Dibujo();
        virtual ~Dibujo();
        virtual void dibujar() = 0;
        virtual void ajustarRangosXY() = 0;
        float getXmin();
        float getXmax();
        float getYmin();
        float getYmax();

    protected:
        float xmin, xmax, ymin, ymax;
};

#endif // DIBUJO_H

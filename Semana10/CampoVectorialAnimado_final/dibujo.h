#ifndef DIBUJO_H
#define DIBUJO_H

class Dibujo
{
    public:
        Dibujo();
        virtual void dibujar() = 0;
        virtual ~Dibujo();
};

#endif // DIBUJO_H

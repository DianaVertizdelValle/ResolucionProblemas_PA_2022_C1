#ifndef ACTUALIZABLE_H
#define ACTUALIZABLE_H

class Actualizable
{
    public:
        Actualizable();
        virtual void actualizar()=0;
        ~Actualizable();
};

#endif // ACTUALIZABLE_H

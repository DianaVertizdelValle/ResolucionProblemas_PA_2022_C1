#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include "cuentabancaria.h"

class CuentaAhorro : public CuentaBancaria
{
    public:
        CuentaAhorro(string nombre="", float saldo=0.0, int numero=0, float tasaInteres=5.0);
        float getTasaInteres() const;
        void setTasaInteres(float value);
        void mostrarDatos();
        float devolverInteres();

    private:
        float tasaInteres;
};

#endif // CUENTAAHORRO_H

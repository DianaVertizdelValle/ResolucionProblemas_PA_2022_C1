#ifndef CUENTACHEQUES_H
#define CUENTACHEQUES_H

#include "cuentabancaria.h"

class CuentaCheques : public CuentaBancaria
{
    public:
        CuentaCheques(string nombre="", float saldo=0.0, int numero=0, float cuota= 0.0);

        float getCuotaTransaccion() const;
        void setCuotaTransaccion(float value);

        void mostrarDatos();
        void cargarSaldo(float saldo);
        void retirarMonto(float monto);

    private:
        float cuotaTransaccion;
};

#endif // CUENTACHEQUES_H

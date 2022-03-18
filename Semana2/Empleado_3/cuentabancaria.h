#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string>
#include <iostream>

using namespace std;


class CuentaBancaria
{
    public:
        //CuentaBancaria();
        CuentaBancaria(string nombre="", float saldo=0.0, int numero=0);
        string getNombreUsuario() const;
        float getSaldoDisponible() const;
        int getNumeroCuenta() const;
        void mostrar_datos() const;
        void cargar_saldo(float saldo);
        void retirar_monto(float monto);
        ~CuentaBancaria();
    private:
        string nombreUsuario;
        float saldoDisponible;
        int numeroCuenta;
};

#endif // CUENTABANCARIA_H

#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H
#include <string>
#include <iostream>

using namespace std;

class CuentaBancaria
{
    public:
        CuentaBancaria(string nombre="", float saldo=0.0, int numero=0);

        //getters
        string getNombreUsuario() const;
        float getSaldoDisponible() const;
        int getNumeroCuenta() const;

        //setters
        void setNombreUsuario(const string &value);
        void setSaldoDisponible(float value);
        void setNumeroCuenta(int value);

        void mostrarDatos() const;
        void cargarSaldo(float saldo);
        void retirarMonto(float monto);

        ~CuentaBancaria();

    private:
        string nombreUsuario;
        float saldoDisponible;
        int numeroCuenta;
};

#endif // CUENTABANCARIA_H

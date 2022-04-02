#include "cuentaahorro.h"

CuentaAhorro::CuentaAhorro(string nombre, float saldo, int numero, float tasaInteres):
                            CuentaBancaria(nombre, saldo, numero)
{
    setTasaInteres(tasaInteres);
}

float CuentaAhorro::getTasaInteres() const
{
    return tasaInteres;
}

void CuentaAhorro::setTasaInteres(float value)
{
    tasaInteres = (value > 0.0)? value: 0.0;
}

void CuentaAhorro::mostrarDatos()
{
    CuentaBancaria::mostrarDatos();
    cout<<"tasa de Interes de cuenta: "<<getTasaInteres()<<endl;
}

float CuentaAhorro::devolverInteres()
{
    return getSaldoDisponible()*(getTasaInteres()/100);
}

#include "cuentacheques.h"

CuentaCheques::CuentaCheques(string nombre, float saldo, int numero, float cuota):
                           CuentaBancaria(nombre, saldo, numero)
{
    setCuotaTransaccion(cuota);
}

float CuentaCheques::getCuotaTransaccion() const
{
    return cuotaTransaccion;
}

void CuentaCheques::setCuotaTransaccion(float value)
{
    cuotaTransaccion = (value > 0.0) ? value : 0.0;
}

void CuentaCheques::mostrarDatos()
{
    CuentaBancaria::mostrarDatos();
    cout<<"La cuota por transacción es: "<<getCuotaTransaccion()<<endl;
}

void CuentaCheques::cargarSaldo(float saldo)
{
    if(getSaldoDisponible() + saldo > cuotaTransaccion)
        setSaldoDisponible(getSaldoDisponible() + saldo - cuotaTransaccion);
}

void CuentaCheques::retirarMonto(float monto)
{
    if(getCuotaTransaccion() + monto < getSaldoDisponible())
        setSaldoDisponible(getSaldoDisponible() - getCuotaTransaccion() - monto);
}

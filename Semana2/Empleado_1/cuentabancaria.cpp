#include "cuentabancaria.h"

CuentaBancaria::CuentaBancaria(string nombre, float saldo, int numero)
{
    nombreUsuario = nombre;
    saldoDisponible = saldo;
    numeroCuenta = numero;
    cout<<"Constructor de la clase cuenta bancaria"<<endl;
}

string CuentaBancaria::getNombreUsuario() const
{
    return nombreUsuario;
}

float CuentaBancaria::getSaldoDisponible() const
{
    return saldoDisponible;
}

int CuentaBancaria::getNumeroCuenta() const
{
    return numeroCuenta;
}

void CuentaBancaria::mostrar_datos() const
{
    cout<<"Cuenta perteneciente a: "<<nombreUsuario<<endl;
    cout<<"Número de cuenta: "<<numeroCuenta<<endl;
    cout<<"Saldo Disponible: "<<saldoDisponible<<endl;
}

void CuentaBancaria::cargar_saldo(float saldo)
{
    saldoDisponible +=saldo;
}

void CuentaBancaria::retirar_monto(float monto)
{
    saldoDisponible -= monto;
}

CuentaBancaria::~CuentaBancaria()
{
    cout<<"Destructor cuenta bancaria"<<endl;
}


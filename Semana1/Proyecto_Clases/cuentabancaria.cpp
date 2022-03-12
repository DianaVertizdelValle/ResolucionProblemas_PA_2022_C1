#include "cuentabancaria.h"



//CuentaBancaria::CuentaBancaria()
//{

//}
CuentaBancaria::CuentaBancaria(float saldo, int numero, string nombre)
{
    saldo_disponible = saldo;
    numero_cuenta = numero;
    nombre_usuario = nombre;
}

void CuentaBancaria::mostrar_mensaje()
{
    cout<<"Bienvenido a la cuenta bancaria"<<endl;
}

int CuentaBancaria::getNumero_cuenta() const
{
    return numero_cuenta;
}

string CuentaBancaria::getNombre_usuario() const
{
    return nombre_usuario;
}

void CuentaBancaria::setSaldo_disponible(float value)
{
    saldo_disponible = value;
}

void CuentaBancaria::setNumero_cuenta(int value)
{
    numero_cuenta = value;
}

void CuentaBancaria::setNombre_usuario(const string &value)
{
    nombre_usuario = value;
}

float CuentaBancaria::getSaldo_disponible() const
{
    return saldo_disponible;
}

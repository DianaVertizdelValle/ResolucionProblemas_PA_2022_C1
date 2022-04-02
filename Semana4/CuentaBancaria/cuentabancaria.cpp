#include "cuentabancaria.h"

CuentaBancaria::CuentaBancaria(string nombre, float saldo, int numero)
{
    setNombreUsuario(nombre);
    setSaldoDisponible(saldo);
    setNumeroCuenta(numero);
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

void CuentaBancaria::mostrarDatos() const
{
    cout<<"Cuenta perteneciente a: "<<getNombreUsuario()<<endl;
    cout<<"Número de cuenta: "<<getNumeroCuenta()<<endl;
    cout<<"Saldo Disponible: "<<getSaldoDisponible()<<endl;
}

void CuentaBancaria::cargarSaldo(float saldo)
{
    setSaldoDisponible(getSaldoDisponible()+saldo);
}

void CuentaBancaria::retirarMonto(float monto)
{
    if(saldoDisponible - monto < 0.0)
        cout<<"El monto de retiro excede el saldo en la cuenta";
    else
        setSaldoDisponible(getSaldoDisponible() - monto);
}

void CuentaBancaria::setNombreUsuario(const string &value)
{
    nombreUsuario = value;
}

void CuentaBancaria::setSaldoDisponible(float value)
{
    saldoDisponible = 0.0;
    if(value < 0.0)
        cout<<"No puede fijar un valor de saldo negativo";
    else
        saldoDisponible = value;
}

void CuentaBancaria::setNumeroCuenta(int value)
{
    numeroCuenta = value;
}

CuentaBancaria::~CuentaBancaria()
{
    cout<<"Destructor cuenta bancaria"<<endl;
}

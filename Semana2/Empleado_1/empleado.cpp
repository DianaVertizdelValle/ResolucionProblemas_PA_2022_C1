#include "empleado.h"

Empleado::Empleado(string nombre, string cargo, int numero_cuenta):cuentaEmpleado(nombre, 0, numero_cuenta)
{
    nombre_completo = nombre;
    cargo_asignado = cargo;
    //cuentaEmpleado = CuentaBancaria(nombre,0, numero_cuenta);
    cout<<"Constructor de la clase empleado"<<endl;
}

void Empleado::mostrar_informacion() const
{
    cout<<"Información del empleado: "<<endl;
    cout<<"Cargo a desempeñar: "<<cargo_asignado<<endl;
    cuentaEmpleado.mostrar_datos();
}

void Empleado::abonar_sueldo(float sueldo)
{
    cuentaEmpleado.cargar_saldo(sueldo);
}

Empleado::~Empleado()
{
    cout<<"Destructor clase empleado"<<endl;
}

float Empleado::getSalario() const
{
    return salario;
}

void Empleado::setSalario(float value)
{
    salario = value;
}

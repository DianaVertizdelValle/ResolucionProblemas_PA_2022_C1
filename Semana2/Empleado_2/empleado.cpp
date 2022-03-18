#include "empleado.h"


int Empleado::numero_empleados = 0;

Empleado::Empleado(string nombre, string cargo, int numero_cuenta):cuentaEmpleado(nombre, 0, numero_cuenta)
{
    nombre_completo = nombre;
    cargo_asignado = cargo;
    numero_empleados++;
    cout<<"Constructor de la clase empleado"<<to_string(numero_empleados)<<endl;
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
    cout<<"Destructor clase empleado"<<to_string(numero_empleados)<<endl;
    numero_empleados--;
}

float Empleado::getSalario() const
{
    return salario;
}

void Empleado::setSalario(float value)
{
    salario = value;
}

int Empleado::getNumero_empleados()
{
    return numero_empleados;
}

#include "empleadoasalariado.h"

EmpleadoAsalariado::EmpleadoAsalariado(const string &nombre, float salario):Empleado(nombre)
{
    setSalarioSemanal(salario);
}


float EmpleadoAsalariado::calcularIngresos() const
{
    return getSalarioSemanal();
}

void EmpleadoAsalariado::mostrarInformacion() const
{
    cout << "empleado asalariado: "<<endl;
    Empleado::mostrarInformacion();
    cout << "salario semanal: " << getSalarioSemanal()<<endl;
}

float EmpleadoAsalariado::getSalarioSemanal() const
{
    return salarioSemanal;
}

void EmpleadoAsalariado::setSalarioSemanal(float salario)
{
    salarioSemanal = ( salario < 0.0 ) ? 0.0 : salario;
}

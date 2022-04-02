#include "empleadobasemascomision.h"

EmpleadoBaseMasComision::EmpleadoBaseMasComision(const string &nombre, float ventas,
                         float tarifa, float salario):EmpleadoPorComision(nombre, ventas, tarifa)
{
    setSalarioBase(salario);
}

float EmpleadoBaseMasComision::getSalarioBase() const
{
    return salarioBase;
}

void EmpleadoBaseMasComision::setSalarioBase(float value)
{
    salarioBase = (value < 0.0) ? 0.0 : value;
}

float EmpleadoBaseMasComision::calcularIngresos() const
{
    return getSalarioBase() + EmpleadoPorComision::calcularIngresos();
}

void EmpleadoBaseMasComision::mostrarInformacion() const
{
    cout<<"con salario base ";
    EmpleadoPorComision::mostrarInformacion();
    cout<<"Salario base: "<< getSalarioBase() <<endl;
}

#include "empleadobasemascomision.h"

EmpleadoBaseMasComision::EmpleadoBaseMasComision(const string& nombre,
                         float ventas,float tarifa, float salario)
                         : EmpleadoPorComision(nombre, ventas, tarifa)
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
    return salarioBase + (tarifaComision * ventasBrutas);
}

void EmpleadoBaseMasComision::mostrarInformacion() const
{
    cout<<"Empleado base más comisión: "<< nombreCompleto <<endl;
    cout<<"Ventas brutas: "<< ventasBrutas <<endl;
    cout<<"Tarifa de comisión: "<< tarifaComision <<endl;
    cout<<"Salario base: "<< salarioBase <<endl;
}

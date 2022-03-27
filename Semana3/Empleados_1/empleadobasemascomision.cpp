#include "empleadobasemascomision.h"


EmpleadoBaseMasComision::EmpleadoBaseMasComision(const string& nombre, float ventas,
                                             float tarifa, float salario)
{
    nombreCompleto = nombre;
    //ventasBrutas = ventas;
    setVentasBrutas(ventas);
    setTarifaComision(tarifa);
    setSalarioBase(salario);
}

string EmpleadoBaseMasComision::getNombreCompleto() const
{
    return nombreCompleto;
}

void EmpleadoBaseMasComision::setNombreCompleto(const string &value)
{
    nombreCompleto = value;
}

float EmpleadoBaseMasComision::getVentasBrutas() const
{
    return ventasBrutas;
}

void EmpleadoBaseMasComision::setVentasBrutas(float value)
{
    if(value < 0.0)
    {
        ventasBrutas = 0.0;
    }
    else
    {
        ventasBrutas = value;
    }
    // ventasBrutas = (value < 0.0) ? 0.0 : value;
}

float EmpleadoBaseMasComision::getTarifaComision() const
{
    return tarifaComision;
}

void EmpleadoBaseMasComision::setTarifaComision(float value)
{
    tarifaComision = (value > 0.0 && value < 1.0) ? value : 0.0;
    //tarifaComision = value;
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

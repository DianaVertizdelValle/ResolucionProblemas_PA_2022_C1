#include "empleadoporcomision.h"

EmpleadoPorComision::EmpleadoPorComision(const string& nombre, float ventas, float tarifa)
{
    nombreCompleto = nombre;
    //ventasBrutas = ventas;
    setVentasBrutas(ventas);
    setTarifaComision(tarifa);
}

string EmpleadoPorComision::getNombreCompleto() const
{
    return nombreCompleto;
}

void EmpleadoPorComision::setNombreCompleto(const string &value)
{
    nombreCompleto = value;
}

float EmpleadoPorComision::getVentasBrutas() const
{
    return ventasBrutas;
}

void EmpleadoPorComision::setVentasBrutas(float value)
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

float EmpleadoPorComision::getTarifaComision() const
{
    return tarifaComision;
}

void EmpleadoPorComision::setTarifaComision(float value)
{
    tarifaComision = (value > 0.0 && value < 1.0) ? value : 0.0;
    //tarifaComision = value;
}

float EmpleadoPorComision::calcularIngresos() const
{
    return tarifaComision * ventasBrutas;
}

void EmpleadoPorComision::mostrarInformacion() const
{
    cout<<"Empleado por comisión: "<< nombreCompleto <<endl;
    cout<<"Ventas brutas: "<< ventasBrutas <<endl;
    cout<<"Tarifa de comisión: "<< tarifaComision <<endl;
}

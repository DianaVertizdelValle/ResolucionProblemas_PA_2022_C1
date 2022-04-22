#include "empleadoporcomision.h"

EmpleadoPorComision::EmpleadoPorComision(const string& nombre, float ventas, float tarifa):
                     Empleado(nombre)
{
    setVentasBrutas(ventas);
    setTarifaComision(tarifa);
}

float EmpleadoPorComision::getVentasBrutas() const
{
    return ventasBrutas;
}

void EmpleadoPorComision::setVentasBrutas(float value)
{
    ventasBrutas = (value < 0.0) ? 0.0 : value;
}

float EmpleadoPorComision::getTarifaComision() const
{
    return tarifaComision;
}

void EmpleadoPorComision::setTarifaComision(float value)
{
    tarifaComision = (value > 0.0 && value < 1.0) ? value : 0.0;
}

float EmpleadoPorComision::calcularIngresos() const
{
    return getTarifaComision() * getVentasBrutas();
}

void EmpleadoPorComision::mostrarInformacion() const
{
    cout << "empleado por comision: "<<endl;;
    Empleado::mostrarInformacion();
    cout << "ventas brutas: " << getVentasBrutas()
    << "; tarifa de comision: " << getTarifaComision()<<endl;
}

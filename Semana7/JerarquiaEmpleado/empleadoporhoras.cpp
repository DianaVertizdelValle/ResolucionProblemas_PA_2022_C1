#include "empleadoporhoras.h"

EmpleadoPorHoras::EmpleadoPorHoras(const string &nombre, float sueldo, float horas):
                  Empleado(nombre)
{
    setSueldo_por_horas(sueldo);
    setHoras_trabajadas(horas);
}

float EmpleadoPorHoras::getSueldo_por_horas() const
{
    return sueldo_por_horas;
}

void EmpleadoPorHoras::setSueldo_por_horas(float sueldo)
{
    sueldo_por_horas = ( sueldo < 0.0 ? 0.0 : sueldo );
}

float EmpleadoPorHoras::getHoras_trabajadas() const
{
    return horas_trabajadas;
}

void EmpleadoPorHoras::setHoras_trabajadas(float horas)
{
    horas_trabajadas = ( ( ( horas >= 0.0 ) && ( horas <= 168.0 ) ) ? horas : 0.0 );
}

float EmpleadoPorHoras::calcularIngresos() const
{
    float ingreso = 0;
    if ( getHoras_trabajadas() <= 40 )
        ingreso = getSueldo_por_horas() * getHoras_trabajadas();
    else
        ingreso = 40 * getSueldo_por_horas() + ( ( getHoras_trabajadas() - 40 ) * getSueldo_por_horas() * 1.5 );

    return ingreso;
}

void EmpleadoPorHoras::mostrarInformacion() const
{
    cout<<"Empleado por horas: "<<endl;
    Empleado::mostrarInformacion();
    cout<<"sueldo por hora: "<<getSueldo_por_horas()<<"; horas trabajadas: "
        <<getHoras_trabajadas()<<endl;
}

#include "empleado.h"


Empleado::Empleado(const string &nombre)
{
    nombre_completo = nombre;
}

Empleado::~Empleado()
{

}

// imprime la información del Empleado (virtual, pero no virtual pura)
void Empleado::mostrarInformacion() const
{
    cout << "Nombre del empleado: "<<getNombre() <<endl;
}

string Empleado::getNombre() const
{
    return nombre_completo;
}

void Empleado::setNombre(const string &value)
{
    nombre_completo = value;
}


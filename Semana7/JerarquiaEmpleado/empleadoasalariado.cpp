#include "empleadoasalariado.h"

ostream &operator<<(ostream &salida, EmpleadoAsalariado emp)
{
    emp.mostrarInformacion(salida);
    return salida;
}

EmpleadoAsalariado::EmpleadoAsalariado()
{

}

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

void EmpleadoAsalariado::mostrarInformacion(ostream &salida) const
{
    salida << "empleado asalariado: "<<endl;
    salida << "Nombre: "<<getNombre()<<endl;
    salida << "salario semanal: " << getSalarioSemanal()<<endl;
    salida << endl;
}

float EmpleadoAsalariado::getSalarioSemanal() const
{
    return salarioSemanal;
}

void EmpleadoAsalariado::setSalarioSemanal(float salario)
{
    salarioSemanal = ( salario < 0.0 ) ? 0.0 : salario;
}

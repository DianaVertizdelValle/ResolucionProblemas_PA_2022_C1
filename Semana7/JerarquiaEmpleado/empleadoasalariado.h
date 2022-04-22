#ifndef EMPLEADOASALARIADO_H
#define EMPLEADOASALARIADO_H

#include "empleado.h"

class EmpleadoAsalariado : public Empleado
{
    public:
        EmpleadoAsalariado();
        EmpleadoAsalariado(const string& nombre, float salario);
        float getSalarioSemanal() const;
        void setSalarioSemanal(float salario);

        float calcularIngresos() const override;
        void mostrarInformacion() const ;
        void mostrarInformacion(ostream & salida) const ;

    private:
        float salarioSemanal;
};

ostream &operator<<(ostream &salida, EmpleadoAsalariado emp);

#endif // EMPLEADOASALARIADO_H

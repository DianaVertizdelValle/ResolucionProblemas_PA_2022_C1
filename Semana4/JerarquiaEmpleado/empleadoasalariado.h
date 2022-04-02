#ifndef EMPLEADOASALARIADO_H
#define EMPLEADOASALARIADO_H

#include "empleado.h"

class EmpleadoAsalariado : public Empleado
{
    public:
        EmpleadoAsalariado(const string& nombre, float salario);
        float getSalarioSemanal() const;
        void setSalarioSemanal(float salario);

        float calcularIngresos() const override;
        void mostrarInformacion() const ;

    private:
        float salarioSemanal;
};

#endif // EMPLEADOASALARIADO_H

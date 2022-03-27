#ifndef EMPLEADOBASEMASCOMISION_H
#define EMPLEADOBASEMASCOMISION_H

#include "empleadoporcomision.h"

class EmpleadoBaseMasComision: public EmpleadoPorComision
{
    public:
        EmpleadoBaseMasComision(const string& nombre, float ventas = 0.0,
                                float tarifa = 0.0, float salario = 0.0 );
        float calcularIngresos() const;
        void mostrarInformacion() const;

        float getSalarioBase() const;
        void setSalarioBase(float value);

    private:
        float salarioBase;
};

#endif // EMPLEADOBASEMASCOMISION_H

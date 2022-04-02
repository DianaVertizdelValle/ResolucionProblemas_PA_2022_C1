#ifndef EMPLEADOBASEMASCOMISION_H
#define EMPLEADOBASEMASCOMISION_H

#include "empleadoporcomision.h"

class EmpleadoBaseMasComision : public EmpleadoPorComision
{
    public:
        EmpleadoBaseMasComision(const string& nombre, float ventas = 0.0,
                                float tarifa = 0.0, float salario = 0.0);

        float getSalarioBase() const;
        void setSalarioBase(float value);

        float calcularIngresos() const override;
        void mostrarInformacion() const ;

    private:
        float salarioBase;
};

#endif // EMPLEADOBASEMASCOMISION_H

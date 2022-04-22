#ifndef EMPLEADOPORCOMISION_H
#define EMPLEADOPORCOMISION_H

#include "empleado.h"

class EmpleadoPorComision : public Empleado
{
    public:
        EmpleadoPorComision(const string& nombre, float ventas = 0.0, float tarifa = 0.0 );

        float getVentasBrutas() const;
        void setVentasBrutas(float value);

        float getTarifaComision() const;
        void setTarifaComision(float value);

        float calcularIngresos() const override;
        void mostrarInformacion() const ;

    private:
        float ventasBrutas;
        float tarifaComision;
};

#endif // EMPLEADOPORCOMISION_H

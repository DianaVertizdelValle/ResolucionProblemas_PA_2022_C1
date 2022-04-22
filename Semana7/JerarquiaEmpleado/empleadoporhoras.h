#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include "empleado.h"

class EmpleadoPorHoras : public Empleado
{
    public:
        EmpleadoPorHoras(const string& nombre, float sueldo, float horas);

        float getSueldo_por_horas() const;
        void setSueldo_por_horas(float sueldo);

        float getHoras_trabajadas() const;
        void setHoras_trabajadas(float horas);

        float calcularIngresos() const override;
        void mostrarInformacion() const ;

    private:
        float sueldo_por_horas;
        float horas_trabajadas;
};

#endif // EMPLEADOPORHORAS_H

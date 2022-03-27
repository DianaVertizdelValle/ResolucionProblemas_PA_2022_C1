#ifndef EMPLEADOPORCOMISION_H
#define EMPLEADOPORCOMISION_H

#include <string>
#include <iostream>

using namespace std;

class EmpleadoPorComision
{
    public:
        EmpleadoPorComision(const string& nombre, float ventas = 0.0, float tarifa = 0.0 );

        void setNombreCompleto(const string &value);

        void setVentasBrutas(float value);

        void setTarifaComision(float value);

        float calcularIngresos() const;
        void mostrarInformacion() const;

    private:
        string nombreCompleto;
        float ventasBrutas;
        float tarifaComision;
};

#endif // EMPLEADOPORCOMISION_H

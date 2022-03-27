#ifndef EMPLEADOBASEMASCOMISION_H
#define EMPLEADOBASEMASCOMISION_H

#include <string>
#include <iostream>

using namespace std;

class EmpleadoBaseMasComision
{
    public:
        EmpleadoBaseMasComision(const string& nombre, float ventas = 0.0,
                                float tarifa = 0.0, float salario = 0.0 );

        string getNombreCompleto() const;
        void setNombreCompleto(const string &value);

        float getVentasBrutas() const;
        void setVentasBrutas(float value);

        float getTarifaComision() const;
        void setTarifaComision(float value);

        float calcularIngresos() const;
        void mostrarInformacion() const;

        float getSalarioBase() const;
        void setSalarioBase(float value);

    private:
        string nombreCompleto;
        float ventasBrutas;
        float tarifaComision;
        float salarioBase;
};

#endif // EMPLEADOBASEMASCOMISION_H

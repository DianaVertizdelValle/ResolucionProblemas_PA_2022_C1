#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include "cuentabancaria.h"

using namespace std;

class Empleado
{
    public:
        Empleado(string nombre, string cargo, int numero_cuenta);
        void mostrar_informacion() const;
        void abonar_sueldo(float sueldo);
        float getSalario() const;
        void setSalario(float value);
        ~Empleado();

    private:

        string nombre_completo;
        string cargo_asignado;
        float salario;
        CuentaBancaria cuentaEmpleado;

};


#endif // EMPLEADO_H

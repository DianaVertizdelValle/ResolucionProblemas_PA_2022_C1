#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "cuentabancaria.h"
#include "cliente.h"
#include <vector>

class Empleado
{
    public:
        Empleado(string nombre, string cargo, int numero_cuenta);
        void mostrar_informacion() const;
        void abonar_sueldo(float sueldo);
        static int getNumero_empleados();
        void vincularCliente(Cliente* cliente);
        void desvincularCliente();
        float getSalario() const;
        void setSalario(float value);
        ~Empleado();

    private:

        string nombre_completo;
        string cargo_asignado;
        float salario;
        CuentaBancaria cuentaEmpleado;
        static int numero_empleados;
        Cliente* cliente_asociado;

};

#endif // EMPLEADO_H

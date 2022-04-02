#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string> // clase string estándar de C++

using namespace std;

class Empleado
{
    public:
        Empleado(const string& nombre);
        virtual ~Empleado();
        string getNombre() const;
        void setNombre(const string &value);

        // la función virtual pura hace de Empleado una clase base abstracta
        virtual float calcularIngresos() const = 0; // virtual pura
        void mostrarInformacion() const; // virtual

    private:
        string nombre_completo;

}; // fin de la clase Empleado


#endif // EMPLEADO_H

#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <iostream>

using namespace std;

// Modelar mediante una clase un Cuenta Bancaria. Esta debe tener
// funcionalidades para modificar nombre de usuario, saldo disponible
// y el número de cuenta. Además, la cuenta debe poder inicializarse
// con esos parámetros o sin ellos.


class CuentaBancaria
{
    public:
        //CuentaBancaria(); //no es necesaria si utilizamos parámetros por defecto

        //constructor con parámetros por defecto, permite inicializar
        //un objeto sin parámetros
        CuentaBancaria(float saldo=0, int numero=100, string nombre = "");

        void mostrar_mensaje();        

        int getNumero_cuenta() const;

        string getNombre_usuario() const;        

        float getSaldo_disponible() const;

        void setSaldo_disponible(float value);

        void setNumero_cuenta(int value);

        void setNombre_usuario(const string &value);

    private:

        float saldo_disponible;
        int numero_cuenta;
        string nombre_usuario;

};

#endif // CUENTABANCARIA_H

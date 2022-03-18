#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

using namespace std;

class Cliente
{
    public:
        Cliente(string pnombre);
        void mostrar_informacion();
        ~Cliente();
    private:
        string nombre;

};

#endif // CLIENTE_H

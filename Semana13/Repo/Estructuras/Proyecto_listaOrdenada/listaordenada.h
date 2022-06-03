#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H

#include <vector>
#include <iostream>

using namespace std;


class ListaOrdenada
{
    public:
        ListaOrdenada();
        void agregar(float elemento);
        void eliminar(unsigned indice);
        void mostrarEnConsola();
        unsigned getTamanio();

    private:
        vector<float>elementos;
        void ordenarElementos();
};

#endif // LISTAORDENADA_H

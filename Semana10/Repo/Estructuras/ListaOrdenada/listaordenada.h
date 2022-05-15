#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H

#include <vector>

#include "../Lista/lista.h"

using namespace std;

enum ORDEN { MENOR_A_MAYOR, MAYOR_A_MENOR };

// enum COLOR { VERDE, ROJO, AZUL };

class ListaOrdenada : public Lista
{
public:
    ListaOrdenada();    // <-- Acá van las inicializaciones!

    ORDEN getOrdenamiento() const;  // devolver un valor
    void setOrdenamiento(const ORDEN &value); // establecer un valor

    void agregar(float valor); // redefinición de método heredado

private:
    void ordenarElementos();
    ORDEN ordenamiento;

};

#endif // LISTAORDENADA_H

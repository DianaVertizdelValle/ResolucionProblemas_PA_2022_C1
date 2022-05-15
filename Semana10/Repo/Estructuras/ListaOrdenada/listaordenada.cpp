#include "listaordenada.h"

#include <iostream>

ListaOrdenada::ListaOrdenada()
{
    ordenamiento = MENOR_A_MAYOR;  // una inicialización
}

ORDEN ListaOrdenada::getOrdenamiento() const
{
    return ordenamiento;
}

void ListaOrdenada::setOrdenamiento(const ORDEN &value)
{
    ordenamiento = value;
}

void ListaOrdenada::agregar(float valor)
{
    Lista::agregar(valor);
    ordenarElementos();
}

void ListaOrdenada::ordenarElementos()
{
    // Programar el ordenamiento de los valores
    unsigned int i, j;
    float aux;

    if( ordenamiento == MENOR_A_MAYOR ){
        for(i=0; i<valores.size()-1; ++i){
            for(j=i+1; j<valores.size(); ++j){
                if(valores[i]>valores[j]){
                    aux = valores[i];
                    valores[i] = valores[j];
                    valores[j] = aux;
                }
            }
        }
    }
}

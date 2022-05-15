#include "listaordenada.h"

ListaOrdenada::ListaOrdenada()
{

}

void ListaOrdenada::agregar(float elemento)
{
    elementos.push_back(elemento);
    //hacemos el ordenamiento cada vez que ingresamos un nuevo elemento
    ordenarElementos();
}

void ListaOrdenada::eliminar(unsigned indice)
{
    vector<float> elementos_auxiliares;
    elementos_auxiliares = elementos;
    elementos_auxiliares.pop_back();
    for(unsigned i=indice; i<elementos_auxiliares.size(); ++i)
    {
        elementos_auxiliares[i] = elementos[i+1];
    }

    elementos = elementos_auxiliares;
}

void ListaOrdenada::mostrarEnConsola()
{
    for(unsigned i=0; i<elementos.size(); ++i)
    {
        cout<<elementos[i]<<' ';
    }
    cout<<endl;
}

unsigned ListaOrdenada::getTamanio()
{
    return elementos.size();
}

void ListaOrdenada::ordenarElementos()
{
    unsigned int i,j;
    float aux;

    for(i=0; i<elementos.size()-1; ++i)
    {
        for(j=0; j<elementos.size()-1; ++j)
        {
            if(elementos[j] > elementos[j+1])
            {
                aux = elementos[j];
                elementos[j] = elementos[j+1];
                elementos[j+1] = aux;
            }
        }
    }


}

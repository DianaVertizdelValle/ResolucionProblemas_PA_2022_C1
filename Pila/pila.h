#ifndef PILA_H
#define PILA_H

#include <iostream>

using namespace std;

//Lista de parámetros o tipos, se puede usar typename o class
template<typename T>
class Pila
{
    public:
        Pila(int value=10);
        ~Pila();
        void push(const T &valor);
        T pop();
        bool estaVacia() const;
        bool estaLlena() const;
        int getTamanio() const;
        void setTamanio(int value);
        void mostrarPila(ostream &salida);

    private:
        int tamanio;
        int cima; //posición del elemento superior de la pila
        T *pilaPtr; //puntero a la representación interna de la pila
};

template<typename T>
ostream & operator<<(ostream &salida, Pila<T> pila);

//Notar que las declaraciones y definiciones de las funciones se
//escriben en el .h porque estamos escribiendo una plantilla a partir
//de la cual, el compilador genera especializaciones de mi clase
//según el tipo de dato que infiere en la llamada al momento de instanciar
//una Pila (Debo especificar un tipo de dato)
template<typename T>
Pila<T>::Pila(int value)
{
    cima = -1;
    setTamanio(value);
    //asigno memoria para los elementos
    pilaPtr = new T[tamanio]; // pilaPtr = new int[tamanio]
}

template<typename T>
Pila<T>::~Pila()
{
    delete [] pilaPtr;
}

template<typename T>
void Pila<T>::push(const T &valor)
{
    if(!estaLlena())
    {
        pilaPtr[++cima] = valor;
    }
}

template<typename T>
T Pila<T>::pop()
{
    T valor;
    if(!estaVacia())
    {
        valor = pilaPtr[cima--];
    }
    return valor;
}

template<typename T>
bool Pila<T>::estaVacia() const
{
    return cima == -1;
}

template<typename T>
bool Pila<T>::estaLlena() const
{
    return cima == tamanio - 1;
}

template<typename T>
int Pila<T>::getTamanio() const
{
    return tamanio;
}

template<typename T>
void Pila<T>::setTamanio(int value)
{
    tamanio = (value > 0)? value: 0;
}

template<typename T>
void Pila<T>::mostrarPila(ostream &salida)
{
    for(unsigned i=0; i<tamanio; ++i)
        salida<<pilaPtr[i]<<' ';
}

template<typename T>
ostream &operator<<(ostream &salida, Pila<T> pila)
{
    pila.mostrarPila(salida);
    return salida;
}


#endif // PILA_H

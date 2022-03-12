#include <QCoreApplication>
#include <iostream>
#include <vector>

// Ejemplo con namespace
//namespace Auto
//{
//    int numero_ruedas;
//}

//namespace Moto
//{
//    int numero_ruedas;
//}

//Escriba una aplicación de consola simple para poner a prueba los métodos que provee
//la clase vector de la STL para instanciar objetos de este tipo, inicializarlos al momento
//de crearlos, agregarles valores, reservar memoria, asignar y devolver valores,
//borrar su contenido, y conocer la cantidad de valores almacenados.

using namespace std;

void imprimir_vector(vector<int> mi_vector);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");
    cout<<"Hola Mundo"<<endl;

    // Instanciar un vector
    vector<int> vector_enteros;
    cout<<"Tamaño del vector_enteros: "<<vector_enteros.size();
    cout<<endl;

    // Instanciar un vector con tamaño 10
    vector<int> vector_enteros1(10,4);
    cout<<"Número de elementos del vector_enteros1: "<<vector_enteros1.size();
    cout<<endl;
    cout<<"vector_enteros1: ";
    imprimir_vector(vector_enteros1);
    cout<<endl;

    //Cambiar tamaño del vector
    vector_enteros1.resize(20,7);
    cout<<"Número de elementos del vector_enteros1: "<<vector_enteros1.size();
    cout<<endl;
    cout<<"vector_enteros1: ";
    imprimir_vector(vector_enteros1);
    cout<<endl;

    //Agregar valores
    vector_enteros.push_back(2);
    vector_enteros.push_back(3);
    vector_enteros.push_back(7);
    vector_enteros.push_back(8);
    vector_enteros.push_back(1);

    cout<<"Número de elementos del vector_enteros: "<<vector_enteros.size();
    cout<<endl;
    cout<<"vector_enteros: ";
    imprimir_vector(vector_enteros);
    cout<<endl;

    //Eliminar elementos
    vector_enteros1.pop_back();
    vector_enteros1.pop_back();
    cout<<"Número de elementos del vector_enteros1: "<<vector_enteros1.size();
    cout<<endl;
    cout<<"vector_enteros1: ";
    imprimir_vector(vector_enteros1);
    cout<<endl;

    //Acceder a elementos del vector
    cout<<endl;
    cout<<"elemento en indice 2 :"<<vector_enteros[2]<<endl;
    cout<<"elemento en indice 4 :"<<vector_enteros.at(4)<<endl;

    //Eliminar elementos del vector
    cout<<endl;
    vector_enteros1.clear();
    cout<<"Número de elementos del vector_enteros1: "<<vector_enteros1.size();
    cout<<endl;

// Ejemplo con namespace
//    int numero_ruedas = 3;
//    Moto::numero_ruedas = 2;
//    Auto::numero_ruedas = 4;

    cout<<"Final del programa"<<endl;
    return a.exec();
}

void imprimir_vector(vector<int> mi_vector)
{
    for(unsigned int i = 0; i<mi_vector.size(); ++i)
    {
        cout<<mi_vector[i]<<" ";
    }
    cout<<endl;
}

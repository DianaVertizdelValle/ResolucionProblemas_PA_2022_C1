#include <QCoreApplication>
#include <iostream>
#include "listaordenada.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ListaOrdenada lo1, lo2; // La ListaOrdenada "tiene un" vector de flotantes en su interior.

    //lo1.setOrdenamiento(MAYOR_A_MENOR);

    lo1.agregar(1.5);
    lo1.agregar(-2.5);
    lo1.agregar(3.14);
    lo1.agregar(2.7);
    lo1.agregar(1.123);
    lo1.agregar(9);

    cout << "La lista ordenada lo1 contiene: ";
    //imprimirListaOrdenada(lo1);
    lo1.imprimirEnConsola();
    cout << endl;

    lo1.eliminar(3); // Elimina el valor de la posición 3, comenzando desde 0.
    // lo1.eliminar(4); // Elimina el valor de la posición 4, comenzando desde 0.

    cout << "La lista ordenada lo1 contiene: ";
    //imprimirListaOrdenada(lo1);
    lo1.imprimirEnConsola();
    cout << endl;

    cout << endl << endl << "Fin del programa..." << endl;

    return a.exec();
}

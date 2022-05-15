#include <QCoreApplication>
#include "listaordenada.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ListaOrdenada mi_lista;
    cout<<"Creo una lista ordenada de elementos: "<<endl;
    mi_lista.agregar(1.7);
    mi_lista.agregar(1.9);
    mi_lista.agregar(1.0);
    mi_lista.agregar(-2.4);
    mi_lista.agregar(-0.5);
    mi_lista.mostrarEnConsola();
    cout<<endl;
    cout<<"Eliminamos el elemento en la posición 2: "<<endl;
    mi_lista.eliminar(2);
    mi_lista.mostrarEnConsola();
    return a.exec();
}

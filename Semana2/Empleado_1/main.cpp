#include <QCoreApplication>
#include "empleado.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");

    //Creo un empleado
    Empleado empleado1("Diana Vertiz", "Gerente Ejecutivo", 1025);
    empleado1.abonar_sueldo(20000);
    empleado1.mostrar_informacion();
    cout<<endl;

    //Creo segundo empleado
    Empleado empleado2("Dario Molina", "Gerente de Ventas", 1026);
    empleado2.abonar_sueldo(20000);
    empleado2.mostrar_informacion();
    cout<<endl;

    //Creo tercer empleado
    Empleado empleado3("Dario Molina", "Gerente de Ventas", 1026);
    cout<<endl;

    cout<<"Final del programa"<<endl;
    //return a.exec();
    return 0;
}

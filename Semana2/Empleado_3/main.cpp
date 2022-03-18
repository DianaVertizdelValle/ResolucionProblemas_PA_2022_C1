#include <QCoreApplication>
#include "empleado.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");

    Cliente cliente1("Nilda Jimenez");

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
    Empleado* empleado3;
    empleado3 = new Empleado("Dario Molina", "Gerente de Ventas", 1026);
    cout<<endl;

    cout<<"asigno cliente1 a empleado3"<<endl;
    empleado3->vincularCliente(&cliente1);

    cout<<"Destruyo al empleado3"<<endl;
    delete empleado3;

    cout<<"El cliente sigue existiendo:"<<endl;
    cliente1.mostrar_informacion();

    cout<<"Final del programa"<<endl;
    return 0;

}

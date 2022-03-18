#include <QCoreApplication>
#include "empleado.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");

    cout<<"Número de empleados al inicio:"<<endl;
    cout<<Empleado::getNumero_empleados()<<endl;

    //Creo un empleado
    Empleado empleado1("Diana Vertiz", "Gerente Ejecutivo", 1025);
    empleado1.abonar_sueldo(20000);
    empleado1.mostrar_informacion();
    cout<<"Número de empleados:"<<endl;
    cout<<empleado1.getNumero_empleados()<<endl;
    cout<<endl;

    //Creo segundo empleado
    Empleado empleado2("Dario Molina", "Gerente de Ventas", 1026);
    empleado2.abonar_sueldo(20000);
    empleado2.mostrar_informacion();
    cout<<"Número de empleados:"<<endl;
    cout<<empleado2.getNumero_empleados()<<endl;
    cout<<endl;

    //Creo tercer empleado
    Empleado empleado3("Dario Molina", "Gerente de Ventas", 1026);
    cout<<endl;
    cout<<"Número de empleados:"<<endl;
    cout<<empleado3.getNumero_empleados()<<endl;

    cout<<"Final del programa"<<endl;
    return 0;
}

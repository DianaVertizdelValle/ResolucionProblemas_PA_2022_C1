#include <QCoreApplication>
#include "pila.h"
#include "../JerarquiaEmpleado/empleadoasalariado.h"
#include <vector>


//template <typename T>
//void funcionPrueba(Pila<T> &pila, T valorInicial, T incremento, const string nombre)
//{
//    cout<<"Pila de "<<nombre<<":"<<endl;
//    while (!pila.estaLlena())
//    {
//        pila.push(valorInicial);
//        valorInicial += incremento;
//    }
//    cout<<pila;
//    cout<<endl;

//}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");

//******Creo pila con valores enteros*****

    cout<<"Pila de enteros:"<<endl;
    Pila<int> pilaEnteros(8);
    int valorEntero = 1;

    while (!pilaEnteros.estaLlena())
    {
        pilaEnteros.push(valorEntero);
        valorEntero ++;
    }
    cout<<pilaEnteros;
    cout<<endl;

//******Creo pila con valores flotantes******

    cout<<"Pila de flotantes:"<<endl;
    Pila<float> pilaFloat;
    float valorFlotante = 1.5;
    while (!pilaFloat.estaLlena())
    {
        pilaFloat.push(valorFlotante);
        valorFlotante += 1.1;
    }
    cout<<pilaFloat;
    cout<<endl;

////******Lo mismo con función genérica********

//    Pila<int> pilaEnteros(8);
//    Pila<float> pilaFloat;

//    funcionPrueba(pilaEnteros, 1, 1, "enteros");
//    funcionPrueba(pilaFloat, float(1.5), float(1.1), "flotantes");

////******Tipo de dato creado por usuario**********

//    cout<<"Pila de empleados: "<<endl;
//    cout<<endl;
//    EmpleadoAsalariado emp1("Jaime", 4000 );
//    EmpleadoAsalariado emp2("Elena", 5000 );
//    EmpleadoAsalariado emp3("Brian", 7000 );

//    Pila<EmpleadoAsalariado> empleados(3);

//    empleados.push(emp1);
//    empleados.push(emp2);
//    empleados.push(emp3);

//    cout<<empleados.pop();
//    cout<<empleados.pop();
//    cout<<empleados.pop();

    return a.exec();
}

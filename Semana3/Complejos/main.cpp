#include <QCoreApplication>
#include "complejo.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system( "chcp 65001" );
    Complejo c1;
    Complejo c2(4.3, 8.2);
    Complejo c3(3.3, 1.1);

    cout<<"c1: ";
    c1.mostrarComplejo();
    cout<<"\nc2: ";
    c2.mostrarComplejo();
    cout<<"\nc3: ";
    c3.mostrarComplejo();

    cout<<endl;
    c1 = c2.sumar(c3);
    cout<<"\nsuma de c2 y c3: "<<endl;
    c1.mostrarComplejo();
    cout<<" = ";
    c2.mostrarComplejo();
    cout<<" + ";
    c3.mostrarComplejo();

    Complejo c2_c;
    cout<<endl;
    cout<<"\nConjugado de c2: "<<endl;
    c2_c = c2.obtenerConjugado();
    c2_c.mostrarComplejo();

    cout<<endl;
    cout<<"\nComparamos Complejos: "<<endl;
    if(c2.esMenor(c3))
    {
        cout<<"El complejo:";
        c2.mostrarComplejo();
        cout<<" < ";
        c3.mostrarComplejo();
    }
    else
    {
        cout<<"El complejo:";
        c3.mostrarComplejo();
        cout<<" < ";
        c2.mostrarComplejo();
    }

    Complejo c4, c5;
    cout<<endl;
    cout<<"\n***** pre y postincremento ****"<<endl;
    cout<<"\nc2 antes de Preincremento:";
    cout<<"\nc2: ";
    c2.mostrarComplejo();
    cout<<"\npreincremento c2 y asigno a c4"<<endl;
    cout<<"c4: ";
    c4 = c2.preincremento();
    c4.mostrarComplejo();
    cout<<"\nc2 después de Preincremento:";
    cout<<"\nc2: ";
    c2.mostrarComplejo();

    cout<<endl;
    cout<<"\nc2 antes de Postincremento:";
    cout<<"\nc2: ";
    c2.mostrarComplejo();
    cout<<"\nasigno a c5 y postincremento :"<<endl;
    cout<<"c5: ";
    c5 = c2.postincremento();
    c5.mostrarComplejo();
    cout<<"\nc2 después de Postincremento:";
    cout<<"\nc2: ";
    c2.mostrarComplejo();

    return a.exec();
}

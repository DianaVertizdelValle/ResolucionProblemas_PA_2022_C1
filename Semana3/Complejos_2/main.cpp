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
    cout<< c1;
    cout<<"\nc2: ";
    cout<< c2;
    cout<<"\nc3: ";
    cout<< c3;

    cout<<endl;
    c1 = c2 + c3; // c2.operator+(c3)
    cout<<"\nsuma de c2 y c3: "<<endl;
    cout<< c1 <<" = " << c2 << " + " << c3 ;

    Complejo c2_c;
    cout<<endl;
    cout<<"\nConjugado de c2: "<<endl;
    c2_c = !c2; //c2.operator!()
    cout<<c2_c;

    cout<<endl;
    cout<<"\nComparamos Complejos: "<<endl;
    if(c2 < c3)
    {
        cout<<"El complejo: "<<c2<< " < " <<c3;
    }
    else
    {
        cout<<"El complejo: "<<c3<< " < " <<c2;
    }

    Complejo c4, c5;
    cout<<endl;
    cout<<"\n***** pre y postincremento ****"<<endl;
    cout<<"\nc2 antes de Preincremento:";
    cout<<"\nc2: ";
    cout<<c2;
    cout<<"\npreincremento c2 y asigno a c4"<<endl;
    cout<<"c4: ";
    c4 = ++c2;
    cout<< c4;
    cout<<"\nc2 después de Preincremento:";
    cout<<"\nc2: ";
    cout<< c2;

    cout<<endl;
    cout<<"\nc2 antes de Postincremento:";
    cout<<"\nc2: ";
    cout<< c2;
    cout<<"\nasigno a c5 y postincremento :"<<endl;
    cout<<"c5: ";
    c5 = c2++;
    cout<< c5;
    cout<<"\nc2 después de Postincremento:";
    cout<<"\nc2: ";
    cout<< c2;

    return a.exec();
}


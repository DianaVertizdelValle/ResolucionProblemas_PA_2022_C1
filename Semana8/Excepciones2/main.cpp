#include <QCoreApplication>
#include <iostream>
#include "excepcionDivisionEntreCero.h"
using namespace std;

/*
 * La función lanza una excepción cuando
 *  el divisor es 0
*/
 float dividir( float par_a , float par_b)
 {
     if(par_b == 0)
         //throw ExcepcionDivisionEntreCero();
         throw "Division por cero";

     float result = par_a / par_b;

     return result;
 }

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");
    float dividendo, divisor;
    float res = 0;

    cout<<"\ningrese dos números para dividir: ";

    while(cin>>dividendo>>divisor)
    {
        try
        {
            res = dividir(dividendo, divisor);
            cout<<"\nEl resultado de la división es: "<<res<<endl;
        }
        catch (ExcepcionDivisionEntreCero &divisionPorCero)
        {
            cout<<divisionPorCero.what()<<endl;
        }
        catch (const char* divisionPorCero)
        {
            cout<<divisionPorCero<<endl;
        }
        cout<<"\ningrese dos números para dividir: ";
    }

    cout<<"Fin del programa"<<endl;
    return a.exec();
}






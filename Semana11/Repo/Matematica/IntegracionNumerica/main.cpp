#include <QCoreApplication>
#include <iostream>

#include "funcion.h"
#include "integradordefunciones.h"

using namespace std;

float funcion_1(float x)
{
    return x*x; // para x=0 hasta x=10 -> y=0 hasta 100
}
// integral_0^10(x^2.dx) = [(x^3)/3]_0^10 = (10^3)/3 - (0^3)/3 = 1000/3 = 333,3..

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    try
    {
        Funcion funcion;
        funcion.setPtrFun(funcion_1);

        cout << "funcion(0) = " << funcion(0) << endl;
        cout << "funcion(10) = " << funcion(10) << endl;

        int N    = 200;
        float xi = 0;
        float xf = 10;

        IntegradorDeFunciones integrador;
        integrador.setParametros(N, xi, xf);
        integrador.setFuncion(funcion);

        cout << "La integral es: " << integrador.evalIntegral() << endl;
    }
    catch (...)
    {
        cout << "Error indeterminado..." << endl;
    }

    return a.exec();
}

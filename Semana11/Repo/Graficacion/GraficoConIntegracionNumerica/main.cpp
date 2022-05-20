#include <QApplication>
#include <cmath>
#include "dibujofuncion.h"
#include "dibujointegral.h"
#include "../Graficador2D/graficador.h"

float funcion_1(float x)
{
    return x*x;// + 200*sin(2*3.1416*x/10); // para x=0 hasta x=10 -> y=0 hasta 100
}
// integral_0^10(x^2.dx) = [(x^3)/3]_0^10 = (10^3)/3 - (0^3)/3 = 1000/3 = 333,3..

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    unsigned N = 100;
    float xi = 0.0f;
    float xf = 100.0f;

    DibujoFuncion dib_fun;
    dib_fun.setPtrFun(funcion_1);
    dib_fun.setParametros(20*N, xi, xf);

    DibujoIntegral dib_integral;
    dib_integral.setFuncion(dib_fun);
    dib_integral.setParametros(N, xi, xf);

    int delta_t = 1000;
    Graficador g(delta_t);
    g.setDibujo(&dib_fun);
    g.setDibujo(&dib_integral);
    //g.setActualizable(&dib_integral);
    g.mostrar(600, 400, &a);

    return a.exec();
}

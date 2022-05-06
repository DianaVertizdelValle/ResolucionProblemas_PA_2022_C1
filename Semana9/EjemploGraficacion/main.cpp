//#include <QCoreApplication>

#include "graficador.h"

int main(int argc, char *argv[])
{
//    QCoreApplication app(argc, argv);
    QApplication app(argc, argv);

    int ancho = 600; int alto= 600;
    Graficador miGraficador;
    miGraficador.mostrar(ancho, alto, &app);

    //return app.exec();
}

#include <QCoreApplication>
#include <QApplication>


#include "campovectorial.h"
#include "graficador.h"

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    QApplication app(argc, argv);

    Graficador graf(10);
    CampoVectorial campo;

    graf.setDibujo(&campo);
    graf.setActualizable(&campo);

    graf.mostrar(400, 400, &app);

    return app.exec();
}

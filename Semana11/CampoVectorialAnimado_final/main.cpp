#include <QCoreApplication>
#include <QApplication>


#include "campovectorial.h"
#include "../Repo/Graficacion/Graficador2D/graficador.h"

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    QApplication app(argc, argv);

    Graficador graf(10);
    CampoVectorial campo;

    graf.setDibujo(&campo);
    graf.setActualizable(&campo);
    graf.iniciarAnimacion();
    graf.mostrar(600, 600, &app);

    return app.exec();
}

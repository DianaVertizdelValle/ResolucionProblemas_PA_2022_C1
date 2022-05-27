//#include <QCoreApplication>

#include "../Repo/Graficacion/Graficador2D/graficador.h"
#include "rectangulo.h"

int main(int argc, char *argv[])
{
//    QCoreApplication app(argc, argv);
    QApplication app(argc, argv);
    system("chcp 65001");
    float cx = 0, cy = 0, b = 1, a = 1, ang = 0;
    Rectangulo rect(cx, cy, b, a, ang);
    int ancho = 600; int alto= 600;
    Graficador miGraficador(1000);    
    miGraficador.setDibujo(&rect);
    miGraficador.setActualizable(&rect);
    miGraficador.iniciarAnimacion();
    miGraficador.mostrar(ancho, alto, &app);

    //return app.exec();
}

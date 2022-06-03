#include <QApplication>

#include "graficador.h"

class Rectangulo : public Dibujo//, public Actualizable
{
public:
    Rectangulo()
    {
        // parámetros de un dibujo en general
        xmin = -5;
        xmax = 5;
        ymin = -5;
        ymax = 5;
    }
private:
    void dibujar()
    {
        glColor3f(1,0,0);
        glScalef(2,1,1);
        glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(1,0);
        glVertex2f(1,1);
        glVertex2f(0,1);
        glEnd();
    }
    //    void actualizar()
    //    {

    //    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Rectangulo rect;
    Graficador g(nullptr);
    g.setDibujo(&rect);
    //g.setActualizable(&rect);
    g.mostrar(600, 400, &a);

    return a.exec();
}

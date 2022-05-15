#ifndef GRAFICADOR_H
#define GRAFICADOR_H

#include <QApplication>
#include <QOpenGLWidget> //para GUI con formularios que tenga gráfico adentro
#include <QKeyEvent>
#include <QWheelEvent>
#include <math.h>
#include <QTimer>

//#include <QOpenGLWindow>

class Graficador: public QOpenGLWidget
{
        Q_OBJECT
    public:
        Graficador(int pdelta_t = 1);
        void mostrar(int pAncho, int pAlto, QApplication* pPtrApp);
        ~Graficador();

    protected:

        void keyPressEvent(QKeyEvent *event) override;
        void wheelEvent(QWheelEvent *event) override;

        void initializeGL() override;
        void resizeGL(int w, int h) override;
        void paintGL() override;

    private:
        int delta_t;
        QTimer cronometro;
        void dibujarEjes();
        void dibujarCuadrado();
        void dibujoSimple();
        void dibujarCirculo(float x_centro, float y_centro, float radio);
        float alfa;
        float dx, dy;
        float sx, sy;

    private slots:
        void animar();
};

#endif // GRAFICADOR_H

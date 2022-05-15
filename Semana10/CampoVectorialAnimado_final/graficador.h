#ifndef GRAFICADOR_H
#define GRAFICADOR_H

#include <QApplication>
#include <QOpenGLWidget>
#include <QOpenGLContext>
#include <QTimer>

#include "actualizable.h"
#include "dibujo.h"


class Graficador  : public QOpenGLWidget
{
        Q_OBJECT //to use signals and slots
    public:
        Graficador(int pdelta_t = 1);
        void mostrar(int pancho, int palto, QApplication* ptr_app);
        void setDibujo(Dibujo* pptr_dib);
        void setActualizable(Actualizable* pptr_act);
        ~Graficador();

    protected:
        virtual void initializeGL();
        virtual void paintGL();
        virtual void resizeGL(int pw, int ph);

    private:
        int delta_t;
        QTimer cronometro;
        Actualizable* ptr_act;
        Dibujo* ptr_dib;


    private slots:
        void animar();

};

#endif // GRAFICADOR_H

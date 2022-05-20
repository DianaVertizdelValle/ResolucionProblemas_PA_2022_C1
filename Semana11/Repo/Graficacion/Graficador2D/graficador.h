#ifndef GRAFICADOR_H
#define GRAFICADOR_H

#include <deque>

#include <QApplication>
#include <QOpenGLWidget>
#include <QOpenGLContext>
#include <QTimer>

#include "actualizable.h"
#include "dibujo.h"

using namespace std;

class Graficador : public QOpenGLWidget
{
        Q_OBJECT
    public:
        Graficador(QWidget *parent = nullptr);
        Graficador(int pdelta_t = 1);
        void mostrar(int pancho, int palto, QApplication* ptr_app);
        void setDibujo(Dibujo* pptr_dib);
        void setActualizable(Actualizable* pptr_act);

        void setDeltaTiempo(int pDeltaTiempo); // milisegundos
        void iniciarAnimacion();
        void detenerAnimacion();
        bool estadoAnimacion();
        ~Graficador();

    protected:
        virtual void initializeGL();
        virtual void paintGL();
        virtual void resizeGL(int pw, int ph);

    private:
        bool flag_animar;
        int delta_t;
        QTimer cronometro;
        Actualizable* ptr_act;
        deque<Dibujo*> dibujos;

        // métodos auxiliares
        void inicializar(int pdelta_t = 1);

    private slots:
        void animar();
};

#endif // GRAFICADOR_H

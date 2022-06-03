#include "graficador.h"

#include<iostream>

using namespace std;

Graficador::Graficador(QWidget *parent) : QOpenGLWidget(parent)
{
    inicializar(1); // delta_1 = 1 [ms]
}

Graficador::Graficador(int pdelta_t)
{
    inicializar(pdelta_t);
}

void Graficador::mostrar(int pancho, int palto, QApplication *ptr_app)
{
    resize(pancho, palto);
    show();
    ptr_app->exec();
}

void Graficador::setDibujo(Dibujo *pptr_dib)
{
    if(pptr_dib != nullptr)
    {
        dibujos.push_back(pptr_dib);
    }
}

void Graficador::setActualizable(Actualizable *pptr_act)
{
    ptr_act = pptr_act;
}

void Graficador::setDeltaTiempo(int pDeltaTiempo)
{
    delta_t = pDeltaTiempo;
    cronometro.start(delta_t);
}

void Graficador::iniciarAnimacion()
{
    flag_animar = true;
}

void Graficador::detenerAnimacion()
{
    flag_animar = false;
}

bool Graficador::estadoAnimacion()
{
    return flag_animar;
}

Graficador::~Graficador()
{

}

void Graficador::initializeGL()
{
    glClearColor(0.5,0.5,0.5,0);
}

void Graficador::paintGL()
{
    resize(width(), height()); // se fuerza llamada a resizeGL

    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    {
        //for(auto dibujo : dibujos)
        for(Dibujo* dibujo : dibujos)
        {
            dibujo->dibujar();
        }
    }
    glPopMatrix();
}

void Graficador::resizeGL(int pw, int ph)
{
    glViewport(0,0,pw,ph);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float b = 5;
    float xmin = -b;
    float xmax = b;
    float ymin = -b;
    float ymax = b;

    // actualizarRangosXY();
    if(dibujos.size() > 0)
    {
        xmin = dibujos[0]->getXmin();
        xmax = dibujos[0]->getXmax();
        ymin = dibujos[0]->getYmin();
        ymax = dibujos[0]->getYmax();
        for(auto dibujo : dibujos)
        {
            if(xmin > dibujo->getXmin())
            {
                xmin = dibujo->getXmin();
            }
            if(xmax < dibujo->getXmax())
            {
                xmax = dibujo->getXmax();
            }
            if(ymin > dibujo->getYmin())
            {
                ymin = dibujo->getYmin();
            }
            if(ymax < dibujo->getYmax())
            {
                ymax = dibujo->getYmax();
            }
        }
    }

    glOrtho(xmin, xmax, ymin, ymax, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void Graficador::inicializar(int pdelta_t)
{
    flag_animar = false;
    ptr_act=NULL;
    delta_t = pdelta_t; // milisegundos
    connect(&cronometro,SIGNAL(timeout()), this, SLOT(animar()));
    cronometro.start(delta_t);
}

void Graficador::animar()
{
    if( ptr_act != NULL and flag_animar )
    {
        ptr_act->actualizar();
        repaint();
    }
}

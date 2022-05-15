#include "graficador.h"

#include<iostream>

using namespace std;

Graficador::Graficador(int pdelta_t)
{
    ptr_act=NULL;
    ptr_dib=NULL;
    delta_t= pdelta_t;
    connect(&cronometro,SIGNAL(timeout()), this, SLOT(animar()));
    cronometro.start(delta_t);
}

void Graficador::mostrar(int pancho, int palto, QApplication *ptr_app)
{
    resize(pancho, palto);
    show();
    ptr_app->exec();
}

void Graficador::setDibujo(Dibujo *pptr_dib)
{
    ptr_dib = pptr_dib;
}

void Graficador::setActualizable(Actualizable *pptr_act)
{
    ptr_act = pptr_act;
}

Graficador::~Graficador()
{

}

void Graficador::initializeGL()
{
    glClearColor(1,1,1,0);
}

void Graficador::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    {
        if(ptr_dib != NULL)
            ptr_dib->dibujar();
    }
    glPopMatrix();
}

void Graficador::resizeGL(int pw, int ph)
{
    glViewport(0,0,pw,ph);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float b = 5;
    glOrtho(-b, b, -b, b, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void Graficador::animar()
{
    //cout<<" animacion";
    if( ptr_act != NULL )
        ptr_act->actualizar();
    repaint();
}

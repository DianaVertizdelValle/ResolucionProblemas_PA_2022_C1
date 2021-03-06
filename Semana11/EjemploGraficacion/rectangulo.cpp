#include "rectangulo.h"
#include <cmath>
using namespace std;

Rectangulo::Rectangulo(float pCx, float pCy, float pBase, float pAltura, float pAng)
{
    cx = pCx;
    cy = pCy;
    // base = pBase;
    setBase(pBase);
    altura = pAltura;
    ang = pAng;

    ajustarRangosXY();
}

float Rectangulo::getCx() const
{
    return cx;
}

void Rectangulo::setCx(float value)
{
    cx = value;
}

float Rectangulo::getCy() const
{
    return cy;
}

void Rectangulo::setCy(float value)
{
    cy = value;
}

float Rectangulo::getBase() const
{
    return base;
}

void Rectangulo::setBase(float value)
{
    if(value > 0){
        base = value;
    }else{
        string mensajeLanzado = "La base de un rectángulo debe ser positiva";
        throw mensajeLanzado;
        //throw string("La base de un rectángulo debe ser positiva");
    }
}

float Rectangulo::getAltura() const
{
    return altura;
}

void Rectangulo::setAltura(float value)
{
    altura = value;
}

float Rectangulo::getAng() const
{
    return ang;
}

void Rectangulo::setAng(float value)
{
    ang = value;
}

void Rectangulo::dibujar()
{
    dibujarEjes();
    dibujarRectangulo();
}

void Rectangulo::actualizar()
{
    ang -= 10;
}

void Rectangulo::ajustarRangosXY()
{

    xmin = -2;   xmax = 2;
    ymin = -2;   ymax = 2;

}

void Rectangulo::dibujarEjes()
{
    glColor3f(0,0,0);
    glPushMatrix();
        glLineWidth(3);
        glBegin(GL_LINES);
            glVertex3f(-2,0,0);//orden de los vértices importa
            glVertex3f(2,0,0);
            glVertex3f(0,-2,0);
            glVertex3f(0,2,0);
        glEnd();
    glPopMatrix();
}

void Rectangulo::dibujarRectangulo()
{
    glPushMatrix();
        glTranslatef(cx, cy, 0);
        glRotatef(ang,0,0,1);
        glScalef(base,altura,1);
        glBegin(GL_QUADS);
            glColor3f(1,0,0);
            glVertex3f(-0.5,-0.5,0);
            glColor3f(0,1,0);
            glVertex3f(-0.5,0.5,0);
            glColor3f(0,0,1);
            glVertex3f(0.5,0.5,0);
            glColor3f(1,1,1);
            glVertex3f(0.5,-0.5,0);
        glEnd();
    glPopMatrix();
}

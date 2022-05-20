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
//    float hip = sqrt(base*base +altura*altura);
//    xmin = -hip/2 -1 + cx;
//    ymin = -hip/2 -1 + cy;
//    xmax =  hip/2 + 1 + cx;
//    ymax =  hip/2 + 1 + cy;
    xmin = -1;   xmax = 1; //cuando modifico estos parámetros cambio lo que se proyecta
    ymin = -1;   ymax = 1; //en el tamaño de la ventana(no cambio la cantidad de pixeles)

}

void Rectangulo::dibujarEjes()
{
    glColor3f(0,0,0);
    glPushMatrix();
        glLineWidth(3);
        glBegin(GL_LINES);
            glVertex3f(-1,0,0);//orden de los vértices importa
            glVertex3f(1,0,0);
            glVertex3f(0,-1,0);
            glVertex3f(0,1,0);
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
            glVertex3f(-0.25,-0.25,0);
            glColor3f(0,1,0);
            glVertex3f(-0.25,0.25,0);
            glColor3f(0,0,1);
            glVertex3f(0.25,0.25,0);
            glColor3f(1,1,1);
            glVertex3f(0.25,-0.25,0);
        glEnd();
    glPopMatrix();
}

#include "dibujofuncion.h"

DibujoFuncion::DibujoFuncion()
{

}

void DibujoFuncion::dibujar()
{
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(4);
    float x, y, h;
    h = (x_fin - x_ini)/N;
    glBegin(GL_LINE_STRIP);
    {
        for(unsigned int i=0; i<N+1; ++i)
        {
            x = h*i;
            y = ptrFun(x);
            glVertex3f(x, y, 0);
        }
    }
    glEnd();
}

void DibujoFuncion::ajustarRangosXY()
{
    if(ptrFun != nullptr)
    {
        xmin = x_ini;
        xmax = x_fin;
        ymin = 0;
        ymax = ptrFun(xmax);
    }

}

void DibujoFuncion::setParametros(unsigned int pN, float pXini, float pXfin)
{
    N = pN;
    x_ini = pXini;
    x_fin = pXfin;
}

#include "dibujointegral.h"

DibujoIntegral::DibujoIntegral()
{

}

void DibujoIntegral::setFuncion(DibujoFuncion &value)
{
    // Ok, se asigna objeto de función Función a un objeto de la misma clase.
    funcion = value.getFuncion();
}


void DibujoIntegral::dibujar()
{

    float x;
    float deltaX = (xf-xi)/NroIntervalos;
    for(int i=0; i<NroIntervalos; ++i){
        x = xi + i*deltaX;
        glColor3f(0.f,0.f,0.6f*(i%2+1)/2);
        glBegin(GL_QUADS);
        {
            glVertex3f(x,        0.0f,   0.0f);
            glVertex3f(x+deltaX, 0.0f,   0.0f);
            //glVertex3f(x+deltaX, funcion(x), 0.0f);
            glVertex3f(x+deltaX, funcion(x+deltaX), 0.0f);
            glVertex3f(x,        funcion(x), 0.0f);
        }
        glEnd();
    }
}

void DibujoIntegral::actualizar()
{

}

void DibujoIntegral::setParametros(unsigned int pN, float pXini, float pXfin)
{
    NroIntervalos = pN;
    xi = pXini;
    xf = pXfin;
    ajustarRangosXY();
}

void DibujoIntegral::ajustarRangosXY()
{
    xmin = xi;
    xmax = xf;
    ymin = 0;
    ymax = funcion(xmax);
}

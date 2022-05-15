#include "campovectorial.h"

#include<QOpenGLContext>

CampoVectorial::CampoVectorial(int pcantidad)
{
    cantidad = pcantidad;
    alfa = 0;
    float n = pcantidad;

    matriz.resize(cantidad);
    for(vector<Vector3D> &fila : matriz)
    {
        fila.resize(cantidad);
    }

    float w = 0.2f;

    for(unsigned int i=0; i<matriz.size(); ++i)
    {
        for(unsigned int j=0; j<matriz[i].size(); ++j)
        {
            matriz[i][j].set(-w*(j-n/2), w*(i-n/2), 0);
        }
    }
}

void CampoVectorial::actualizar()
{
    alfa += 0.1;
}

void CampoVectorial::dibujar()
{
    unsigned X = 0;
    unsigned Y = 1;
    //unsigned Z = 2;

    float rx, ry;
    float vx, vy;

    float beta = 0;
    float n = cantidad;

    glRotatef(alfa, 0, 0, 1);

    for(unsigned int i=0; i<matriz.size(); ++i)
    {
        for(unsigned int j=0; j<matriz[i].size(); ++j)
        {
            rx = i-(n/2);
            ry = j-(n/2);

            vx = matriz[i][j][X];
            vy = matriz[i][j][Y];

            glBegin(GL_LINES);
            {
                glColor3f(0,0,1);
                glVertex3f(rx+vx, ry+vy, 0);
                glColor3f(1,0,0);
                glVertex3f(rx,ry,0);
            }
            glEnd();

            beta = atan2(vy,vx);
            beta *= 180/3.1416;
            beta -= 90;

            if(abs(vx)>0.001 or abs(vy)>0.001)
            {
                glPushMatrix();
                {
                    glTranslatef(rx+vx, ry+vy, 0);
                    glRotatef(beta, 0,0,1);
                    glScalef(0.1f, 0.2f, 1);
                    glBegin(GL_POLYGON);
                    {
                        glVertex3f(-1,0,0);
                        glVertex3f(1,0,0);
                        glVertex3f(0,1,0);
                    }
                    glEnd();
                }
                glPopMatrix();
            }
        }
    }
}

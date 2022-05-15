#include "graficador.h"
#include <iostream>
#define PI 3.14159265

using namespace std;

Graficador::Graficador(int pdelta_t)
{
    dx = dy = alfa = 0;
    sx = sy = 1;
    delta_t = pdelta_t;
    connect(&cronometro, SIGNAL(timeout()), this, SLOT(animar()));
    cronometro.start(delta_t);

}

void Graficador::mostrar(int pAncho, int pAlto, QApplication *pPtrApp)
{
    //modifico tamaño de la ventana
    resize(pAncho, pAlto);
    show();
    pPtrApp->exec();

}

void Graficador::dibujarEjes()
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

void Graficador::dibujarCuadrado()
{
    glPushMatrix();
        glTranslatef(dx, dy, 0);
        glRotatef(alfa,0,0,1);
        glScalef(sx,sy,1);
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

void Graficador::dibujoSimple()
{
    glColor3f(1,0,0);
    glPushMatrix();
        glTranslatef(1,0,0);
        glRotatef(45,0,0,1);
        glScalef(2,2,1);
        glBegin(GL_QUADS);
            glVertex3f(0,0,0);
            glVertex3f(0.5,0,0);
            glVertex3f(0.5,0.5,0);
            glVertex3f(0,0.5,0);
        glEnd();
    glPopMatrix();

}

void Graficador::dibujarCirculo(float x_centro, float y_centro, float radio)
{
    float alfa = 0;
    float d_alfa = 0.5;
    glColor3f(1,0,0);
        glBegin(GL_POLYGON); //GL_LINES para tener solo borde
            for(alfa=0; alfa<360; alfa+=d_alfa)
            {
                float x = radio*cos(alfa*PI/180);
                float y = radio*sin(alfa*PI/180);
                glVertex3f(x_centro + x,y_centro + y,0);
            }
        glEnd();
}

Graficador::~Graficador()
{

}

void Graficador::keyPressEvent(QKeyEvent *event)
{
    bool left_or_a = event->key() == Qt::Key_Left or event->key() == Qt::Key_A;
    bool right_or_d = event->key() == Qt::Key_Right or event->key() == Qt::Key_D;
    bool down_or_s = event->key() == Qt::Key_Down or event->key() == Qt::Key_S;
    bool up_or_w = event->key() == Qt::Key_Up or event->key() == Qt::Key_W;
    bool ctrl_plus = event->modifiers() & Qt::ControlModifier and (event->key() == Qt::Key_Asterisk);
    bool ctrl_minus = event->modifiers() & Qt::ControlModifier and (event->key() == Qt::Key_Minus);

    float dxy_aux = 0.5f;
    float d_alfa = 5;
    if(left_or_a)
    {
        cout<<"Tecla: flecha izquierda"<<endl;
        dx -= dxy_aux;
    }

    else if(right_or_d)
    {
        cout<<"Tecla: flecha derecha"<<endl;
        dx += dxy_aux;
    }

    else if(down_or_s)
    {
        cout<<"Tecla: flecha abajo"<<endl;
        dy -= dxy_aux;
    }

    else if(up_or_w)
    {
        cout<<"Tecla: flecha arriba"<<endl;
        dy += dxy_aux;
    }

    else if(ctrl_plus)
    {
        cout<<"Combinación: Ctrl y '+' "<<endl;
        alfa += d_alfa;
    }

    else if(ctrl_minus)
    {
        cout<<"Combinación: Ctrl y '-' "<<endl;
        alfa -= d_alfa;
    }

    repaint(); //vuelve a llamar a paintGl
}

void Graficador::wheelEvent(QWheelEvent *event)
{
    bool scroll_up = event->angleDelta().y() > 0;
    bool scroll_down = event->angleDelta().y() < 0;
    float d_sc = 0.5;
    if(scroll_up)
    {
        cout<<"Scroll up"<<endl;
        sx -= d_sc;
        sy -= d_sc*0.5;

    }
    else if(scroll_down)
    {
        cout<<"Scroll down"<<endl;
        sx += d_sc;
        sy += d_sc*0.5;
    }
    repaint(); //vuelve a llamar a paintGl
}

void Graficador::initializeGL()
{
    //Se establece el color de fondo de la ventana
    glClearColor(0.5, 0.5, 0.5, 0); //la mitad de cada color para obtener gris

}

void Graficador::resizeGL(int w, int h)
{
    glViewport(0,0,w,h ); //área de dibujo dentro de la ventana
    //Establecemos la matriz que se va a usar
    //En este caso se activa la matriz de proyección
    //Los comandos que se usen después van a afectar a esta matriz
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity(); //limpio cualquier transformación previa

    float xmin, xmax, ymin, ymax, zmin, zmax;
    xmin = -1;   xmax = 1; //cuando modifico estos parámetros cambio lo que se proyecta
    ymin = -1;   ymax = 1; //en el tamaño de la ventana(no cambio la cantidad de pixeles)
    zmin = -1;   zmax = 1;

    glOrtho(xmin, xmax, ymin, ymax, zmin, zmax);

    //Establezco matriz de modelo-vista y limpio las transformaciones
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void Graficador::paintGL()
{
    resizeGL(width(),height());
    //Dibujo
    //Se limpia el fondo de la ventana con el color de initialize
    glClear(GL_COLOR_BUFFER_BIT);
    dibujarEjes();
    //dibujarCirculo(0,0,0.5);
    dibujarCuadrado();
}

void Graficador::animar()
{
    alfa -= 10;
    repaint();
}

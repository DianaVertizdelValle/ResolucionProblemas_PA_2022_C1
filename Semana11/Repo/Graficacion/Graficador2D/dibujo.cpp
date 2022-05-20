#include "dibujo.h"

Dibujo::Dibujo()
{
    xmin = 0;
    xmax = 1;
    ymin = 0;
    ymax = 1;
}

Dibujo::~Dibujo()
{

}

float Dibujo::getXmin()
{
    return xmin;
}

float Dibujo::getXmax()
{
    return xmax;
}

float Dibujo::getYmin()
{
    return ymin;
}

float Dibujo::getYmax()
{
    return ymax;
}

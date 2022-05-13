#include "vector3d.h"

Vector3D::Vector3D(float comp_x, float comp_y, float comp_z) :
    coord{comp_x, comp_y, comp_z} // Asignacion de valores a los coponentes del vector
{

}

string Vector3D::mostrar() const
{
    stringstream output;
    output << "<" << coord[X] << "," << coord[Y] << "," << coord[Z] << ">";
    return output.str();
}

void Vector3D::set(float comp_x, float comp_y, float comp_z)
{
    coord[X] = comp_x;
    coord[Y] = comp_y;
    coord[Z] = comp_z;
}

void Vector3D::normalizar()
{
    float mod = modulo();
    for (float &elemento : coord)
        elemento /= mod;
}

bool Vector3D::esNulo() const
{
    return modulo() == 0.0f;
}

float Vector3D::modulo() const
{
    float aux = 0;
    for (float elemento : coord)
        aux += elemento*elemento;
    return sqrt(aux);
}

Vector3D Vector3D::operator+(const Vector3D &vec) const
{
    float nuevo_x = this->coord[X] + vec.coord[X];
    float nuevo_y = this->coord[Y] + vec.coord[Y];
    float nuevo_z = this->coord[Z] + vec.coord[Z];
    return Vector3D(nuevo_x, nuevo_y, nuevo_z);
}

Vector3D Vector3D::operator*(float escalar) const
{
    Vector3D vec = *this;
    for (float &elemento : vec.coord)
        elemento *= escalar;
    return vec;
}

Vector3D Vector3D::operator-() const
{
    return (*this)*(-1);
}

Vector3D Vector3D::operator++()
{
    (*this) = (*this) + ~(*this);
    return *this;
}

Vector3D Vector3D::operator++(int)
{
    Vector3D *ptr = this;
    ++(*this);
    return *ptr;
}

Vector3D Vector3D::operator-(const Vector3D &vec) const
{
    return (*this) + (-vec);
}

float Vector3D::operator*(const Vector3D &vec) const
{
    float producto = 0;
    for (unsigned int i=0; i<3; ++i)
        producto += this->coord[i] * vec.coord[i];
    return producto;
}

Vector3D Vector3D::operator%(const Vector3D &vec) const
{
    float nuevo_x = this->coord[Y]*vec.coord[Z] - this->coord[Z]*vec.coord[Y];
    float nuevo_y = this->coord[Z]*vec.coord[X] - this->coord[X]*vec.coord[Z];
    float nuevo_z = this->coord[X]*vec.coord[Y] - this->coord[Y]*vec.coord[X];
    return Vector3D(nuevo_x, nuevo_y, nuevo_z);
}

float &Vector3D::operator[](unsigned short i)
{
    return coord[i];
}

Vector3D Vector3D::operator~() const
{
    Vector3D normalizado = (*this) * (1/modulo());
    return normalizado;
}

Vector3D operator*(float escalar, const Vector3D &vec)
{
    return vec * escalar;
}

ostream &operator<<(ostream &output, const Vector3D &vec)
{
    return output << vec.mostrar();
}

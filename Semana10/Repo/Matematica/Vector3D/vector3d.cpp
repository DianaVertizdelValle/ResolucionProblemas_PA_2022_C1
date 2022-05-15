#include "vector3d.h"

Vector3D::Vector3D(T comp_x, T comp_y, T comp_z) :
    coord{comp_x, comp_y, comp_z} // Asignacion de valores a los coponentes del vector
{

}

T Vector3D::x() const
{
    return coord[X];
}

T Vector3D::y() const
{
    return coord[Y];
}

T Vector3D::z() const
{
    return coord[Z];
}

void Vector3D::set_x(T comp_x)
{
    coord[X] = comp_x;
}

void Vector3D::set_y(T comp_y)
{
    coord[Y] = comp_y;
}

void Vector3D::set_z(T comp_z)
{
    coord[Z] = comp_z;
}

void Vector3D::mostrar() const
{
    cout << "<" << coord[X] << "," << coord[Y] << "," << coord[Z] << ">";
    // ¡No deberia usarse cout en la implementacion de la clase!
}

void Vector3D::set(T comp_x, T comp_y, T comp_z)
{
    coord[X] = comp_x;
    coord[Y] = comp_y;
    coord[Z] = comp_z;
}

Vector3D Vector3D::operator+(const Vector3D vec) const
{
    T nuevo_x = this->coord[X] + vec.coord[X];
    T nuevo_y = this->coord[Y] + vec.coord[Y];
    T nuevo_z = this->coord[Z] + vec.coord[Z];
    return Vector3D(nuevo_x, nuevo_y, nuevo_z);
}

Vector3D Vector3D::operator-(const Vector3D vec) const
{
    Vector3D res = (*this) + vec.opuesto();
    return res;
}

Vector3D Vector3D::operator-()
{
    return (*this)*(-1);
}

Vector3D Vector3D::operator~()
{
    Vector3D resp = *this;
    resp.normalizar();
    return resp;
}

Vector3D Vector3D::operator*(const T escalar) const
{
    Vector3D vec = *this;
    for (T &elemento : vec.coord)
        elemento *= escalar;
    return vec;
}

T Vector3D::operator*(const Vector3D vec) const
{
    return producto_punto(vec);
}

T& Vector3D::operator[](unsigned char pCoord)
{
    return coord[pCoord];
}

Vector3D Vector3D::operator++() // pre-incremento
{
    // se incrementa en 1 cada coordenada (diferente de lo que indica el enunciado)
    for (T &elemento : coord)
        elemento += 1;
    return *this;
}

Vector3D Vector3D::operator++(int)
{
    Vector3D& vector3D_actual = *this;
    Vector3D resultado = vector3D_actual; // variable auxiliar con igual contenido que el Vector3D ANTES de ser modificado.
    ++vector3D_actual;
    return resultado;
}

Vector3D Vector3D::multiplicacion_escalar(T escalar) const
{
    Vector3D vec = *this;
    for (T &elemento : vec.coord)
        elemento *= escalar;
    return vec;
}

Vector3D Vector3D::opuesto() const
{
     return multiplicacion_escalar(-1); // Llama a su propio metodo
}

Vector3D Vector3D::suma(const Vector3D vec) const
{
    T nuevo_x = this->coord[X] + vec.coord[X];
    T nuevo_y = this->coord[Y] + vec.coord[Y];
    T nuevo_z = this->coord[Z] + vec.coord[Z];
    return Vector3D(nuevo_x, nuevo_y, nuevo_z);
}

T Vector3D::producto_punto(const Vector3D vec) const
{
    T producto = 0;
    for (unsigned int i=0; i<3; ++i)
        producto += this->coord[i] * vec.coord[i];
    return producto;
}

Vector3D Vector3D::producto_cruz(const Vector3D vec) const
{
    T nuevo_x = this->coord[Y]*vec.coord[Z] - this->coord[Z]*vec.coord[Y];
    T nuevo_y = this->coord[Z]*vec.coord[X] - this->coord[X]*vec.coord[Z];
    T nuevo_z = this->coord[X]*vec.coord[Y] - this->coord[Y]*vec.coord[X];
    return Vector3D(nuevo_x, nuevo_y, nuevo_z);
}

void Vector3D::normalizar()
{
    T mod = modulo();
    for (T &elemento : coord) // bucle for each
        elemento /= mod;
}

bool Vector3D::esNulo() const
{
    return modulo() < TOLERANCIA;
}

T Vector3D::modulo() const
{
    T aux = 0;
    for (T elemento : coord)
        aux += elemento*elemento;
    return sqrt(aux);
}

void Vector3D::volcarEnFlujo(ostream &pOut)
{
    pOut << "<" << coord[X] << "," << coord[Y] << "," << coord[Z] << ">";
}

Vector3D operator* ( T escalar, Vector3D vec ) {
    // permite operaciones del tipo 2.0f * vec4;
    return vec * escalar;
}

ostream &operator<<(ostream & pOut, Vector3D pVec)
{
    pVec.volcarEnFlujo(pOut);
}

/*!
 *  \class      Vector3D
 *  \brief      Vectores matemáticos en R^3
 *  \details    Permite realizar operaciones algebraicas entre vectores,
 *              así como leerlos desde distintos flujos de entrada y pasarlos
 *              a distintos flujos de salida.
 *  \author     Breggia, Bruno M.
 *  \version    1.0.0
 *  \date       Fecha de creación: 21-03-2021
 *  \date       Fechca de última modificación: 24-03-2021
 *  \warning    Esta clase debe usarse como punto de partida para la introducción
 *              a la sobrecarga de operadores. Por lo tanto, su aplicabilidad será
 *              limitada hasta sobrecargarse los operadores pertinentes.
 *  \copyright  Todos los derechos reservados.
*/
#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
#include <cmath>
#define TOLERANCIA 0.005f

using namespace std;
typedef float T ; // creo un alias para float

class Vector3D
{
public:
    Vector3D(T comp_x=0, T comp_y=0, T comp_z=0);
    T modulo() const;
    void normalizar();
    bool esNulo() const;

    // Getters
    T x() const;
    T y() const;
    T z() const;

    // Setters
    void set_x(T comp_x);
    void set_y(T comp_y);
    void set_z(T comp_z);

    // Operaciones unarias
    Vector3D opuesto() const;

    // Operaciones binarias
    Vector3D suma(const Vector3D vec) const;

    T producto_punto(const Vector3D vec) const;       // implementar con operador *
    Vector3D producto_cruz(const Vector3D vec) const; // implementar con operador %
    Vector3D multiplicacion_escalar(T escalar) const;

    // Flujo de entrada/salida
    void mostrar() const;
    void volcarEnFlujo(ostream&);
    void set(T comp_x, T comp_y, T comp_z);


    // Firma de una sobrecarga de operador:
    // datoRetorno operator "simbolo" (parametro);

    // Sobrecarga (local) de operadores
    Vector3D operator+ (const Vector3D vec) const;
    Vector3D operator- (const Vector3D vec) const;
    Vector3D operator- (void);
    Vector3D operator~ (void);
    Vector3D operator* (const T escalar) const;
    T operator* (const Vector3D vec) const;
    T& operator[](unsigned char pCoord);

    Vector3D operator++(); // pre-incremento
    Vector3D operator++(int); // pos-incremento

private:
    T coord[3];
    static const unsigned short X=0,Y=1,Z=2;
};


// Sobrecargas globales (funciones fuera del ambito de la clase)
Vector3D operator* ( T escalar, Vector3D vec );
ostream& operator<<(ostream&, Vector3D);

#endif // VECTOR3D_H

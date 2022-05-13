#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

class Vector3D;
Vector3D operator* (float escalar, const Vector3D &vec);
ostream &operator<< (ostream& output, const Vector3D &vec);

class Vector3D
{
public:
    Vector3D(float comp_x=0, float comp_y=0, float comp_z=0);
    float modulo() const;
    void normalizar();
    bool esNulo() const;

    // Flujo de entrada/salida
    string mostrar() const;
    void set(float comp_x, float comp_y, float comp_z);

    // Sobrecarga de operadores unarios
    Vector3D operator~ () const; // Devuelve un vector normalizado
    Vector3D operator- () const; // vector opuesto
    Vector3D operator++ ();      // incremento unitario
    Vector3D operator++ (int);

    // Sobrecarga de operadores binarios
    Vector3D operator+ (const Vector3D &vec) const;
    Vector3D operator- (const Vector3D &vec) const;
    float    operator* (const Vector3D &vec) const; // producto punto
    Vector3D operator% (const Vector3D &vec) const; // producto cruz
    Vector3D operator* (float escalar) const;       // multiplicacion con escalar

    // Sobrecarga de indexado
    float &operator[] (unsigned short i);

private:
    float coord[3];
    static const unsigned short X=0,Y=1,Z=2;

};

#endif // VECTOR3D_H

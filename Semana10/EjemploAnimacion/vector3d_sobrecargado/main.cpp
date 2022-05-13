#include <QCoreApplication>
#include <iostream>
#include <vector3d.h>
#include <fstream>

using namespace std;

const unsigned short X=0,Y=1,Z=2;

int main()
{
    Vector3D vec1, vec2(1,1,1), vec3(3,4,0);

    // ¿Es nulo el vector 1?
    cout << "Es nulo el vector 1: " << (vec1.esNulo()? "Si":"No" ) << endl;
    cout << vec1.mostrar() << endl;

    // Modulo de los vectores 2 y 3
    cout << "|vec2| = " << vec2 << endl;
    cout << "|vec3| = " << vec3 << endl;

    // Si el vector 2 no es nulo, lo normalizo
    if ( !vec2.esNulo() )
        vec2 = ~vec2;
    cout << "El vector 2 ahora es: " << vec2.mostrar() << endl;

    // Operaciones con vectores
    Vector3D vec4 = vec2 + vec3; // vec2 + vec3
    cout << "El vector 4 es: " << vec4 << endl;

    Vector3D vec5 = vec2 - vec3 + vec1; // vec2 - vec3 + vec1
    cout << "El vector 5 es: " << vec5 << endl;

    Vector3D vec6 = vec3 % vec4; // vec3 x vec4
    cout << "El vector 6 es: " << vec6 << endl;

    if ( vec3 * Vector3D(-4,3,0) == 0 )
        cout << "Los vectores son perpendiculares" << endl;

    vec4 = 2 * vec4; // vec4 * 2
    cout << "El vector 4 es: " << vec4 << endl;

    vec4 = -vec4; // -vec4
    cout << "El vector 4 es: " << vec4 << endl;

    ofstream archi_out("vector.txt");
    archi_out << "Vector 4:\n" << vec4 << endl;


    return 0;
}

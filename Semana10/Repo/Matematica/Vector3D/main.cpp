#include <QCoreApplication>
#include <iostream>
#include <vector3d.h>
#include <fstream>

using namespace std;

int main()
{
    Vector3D vec1, vec2(1,1,1), vec3(3,4,0);

    // ¿Es nulo el vector 1?
    cout << "Es nulo el vector 1: " << (vec1.esNulo()? "Si":"No" ) << endl;
    vec1.mostrar();
    cout << endl;

    // Modulo de los vectores 2 y 3
    cout << "|vec2| = " << vec2.modulo() << endl;
    cout << "|vec3| = " << vec3.modulo() << endl;

    // Si el vector 2 no es nulo, lo normalizo
    cout << "vec2: " << vec2 << endl;
    if ( !vec2.esNulo() )
        vec2 = ~vec2;  // vec2.normalizar();
    cout << "El vector 2 ahora es: " << vec2 << endl;
    cout << "|vec2| = " << vec2.modulo() << endl << endl;

    // Operaciones con vectores
    Vector3D vec4 = vec2.suma(vec3); // vec2 + vec3

    // Con sobrecarag de operadores (más elegante...)
    vec4 = vec2 + vec3; // operando izquierdo -> invocante
    // operando derecho   -> argumento

    // Sintaxis equivalente (pero menos elegante...)
    vec4 = vec2.operator+(vec3);

    Vector3D vec5 = vec2.suma( vec3.suma(vec1).opuesto() );
    vec5 = vec2 - (vec3 + vec1); // Lo mismo que la linea anterior, pero mas legible
    vec5.mostrar();
    cout << endl;

    vec4.set(1,1,1);
    vec4 = vec4.multiplicacion_escalar(2); // vec4 * 2
    vec4 = vec4 * 2.0f; // vector * escalar (usa sobrecarga miembro/local)
    vec4.mostrar();

    vec4.set(1,1,1);
    vec4 = 2.0f * vec4; // escalar * vector (necesita sobrecarga global)
    vec4.mostrar();
    cout << endl;

    Vector3D vec6 = vec3.producto_cruz(vec4); // vec3 x vec4
    //    vec6 = vec3 % vec4; // Que funcione esto
    vec6.mostrar();
    cout << endl;

    cout << endl << "Producto punto: " << endl;
    cout << "\tvec3: " << vec3 << endl;
    cout << "\tVector3D(-4,3,0): " << Vector3D(-4,3,0) << endl;
    cout << "\tvec3 * Vector3D(-4,3,0): " << vec3 * Vector3D(-4,3,0)
         << endl;
    //    if ( vec3.producto_punto(Vector3D(-4,3,0)) == 0.0 ) // vec3 * vec
    if ( vec3 * Vector3D(-4,3,0) == 0.0 ) // Que funcione esto
        cout << "Los vectores son perpendiculares" << endl;
    cout << endl;

    //cout << vec4;  // operator<<(cout, vec4);
    //cout << vec3 << vec4; // operator<<(operator<<(cout, vec3), vec4);

    cout << "vec4: " << vec4 << endl;
    //operator<<(operator<<(operator<<(cout, "vec4: "), vec4), endl);

    // Sobrecarga unaria (no recibe argumentos)
    vec5 = -vec4; // Que funcione esto // vec4 = vec4.operator-();
    cout << "Opuesto de vec4: " << vec5 << endl;
    cout << endl;

    cout << endl << "Las componentes de vec5 son:" << endl
         << "\tvec5[0] = " << vec5[0] << endl
         << "\tvec5[1] = " << vec5[1] << endl
         << "\tvec5[2] = " << vec5[2] << endl << endl;

    float comp_x;
    comp_x = vec5[0];   // comp_x = vec5.operator[](0);
    vec5[1] = 9.0;      // vec5.operator[](1) = 9.0;

    cout << endl << "Las componentes de vec5 son:" << endl
         << "\tvec5[0] = " << vec5[0] << endl
         << "\tvec5[1] = " << vec5[1] << endl
         << "\tvec5[2] = " << vec5[2] << endl;

    Vector3D vec7(0,0,0), vec8(1,1,1), vec9;
    cout << "vec7: " << vec7 << endl;
    //    cout << "vec8: " << vec8 << endl;
    //    cout << "vec9: " << vec9 << endl;
    ++vec7; // preincremento
    cout << "vec7 preincrementado: " << vec7 << endl;
    cout << "++vec7: " << ++vec7 << endl;

    cout << "vec7: " << vec7 << endl;
    vec7++;// posincremento
    cout << "vec7 posincrementado: " << vec7 << endl;
    cout << "vec7++: " << vec7++ << endl;
    cout << "vec7: " << vec7 << endl;

    return 0;
}

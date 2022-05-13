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
    if ( !vec2.esNulo() )
        ~vec2.normalizar();
    cout << "El vector 2 ahora es: " << vec2 << endl;

    Vector3D vec4 = vec2 + vec3;
    cout << "Vector 4: " << vec4 << endl;
    Vector3D vec5 = vec2 - vec3 + vec1;
    cout << "Vector 5: " << vec5 << endl;
    Vector3D vec6 = vec3 % vec4;
    cout << "Vector 6: " << vec6 << endl;

    if ( vec3 * Vector3D(-4,3,0) == 0 )
        cout << "Los vectores son perpendiculares" << endl;

    cout << "Vector 4 normalizado: " << (~vec4) << endl;
    cout << "Vector 4 sin normalizar: " << vec4 << endl;

    cout << "Vector 4 pre-incrementado en una unidad: " << ++vec4 << endl;
    cout << "Modulo de Vector 4 ahora vale: " << vec4.modulo() << endl;
    cout << "Vector 4 post-incrementado en una unidad: " << vec4++ << endl;
    cout << "Modulo de Vector 4 ahora vale: " << vec4.modulo() << endl;

    const unsigned X=0, Y=1, Z=3;
    vec5[X] = 3;             // Modifico componente x
    vec5[Y] = vec4[X];       // Modifico componente y
    vec5[Z] = vec5.modulo(); // Modifico componente z
    cout << "Vector 5: ";
    for (unsigned i=0; i<3; ++i)
        cout << vec5[i] << " ";  // Muestro componentes del vector con bucle for
    cout << endl;

    vec4 *= 2;    // producto por escalar
    vec4 *= vec5; // producto punto (¿debería funcionar?)
    vec4 %= vec5; // producto cruz

    if (vec6*2 == 2*vec6)
        cout << "Excelente, el producto es conmutativo";

    if (vec4 == ++vec4)
        cout << "Deberia entrar aqui?";

    if (vec4 == vec4++)
        cout << "Deberia entrar aqui?";

    if (vec4 < vec6)
        cout << "El modulo de Vector 4 es menor que el de Vector 6" << endl;

    if (vec4%vec6 != -(vec6%vec4)) // El producto cruz debe ser anticonmutativo
        cout << "Algo anda mal..." << endl;

    ofstream archiOut("vector.txt");
    archiOut << vec6;                // Guardar vector en archivo;

    cin >> vec6;                     // Leer valores por consola
    cout << "Vector 6 (consola): " << vec6 << endl;

    ifstream archiIn("vector.txt");  // Leer valores de archivo
    archi >> vec6;
    cout << "Vector 6 (archivo): " << vec6 << endl;


    return 0;
}

#include <QCoreApplication>
#include <vector>
#include <iostream>

using namespace std;

template < typename T >
void imprimirVector( const vector<T> &miVector )
{
    typename vector<T>::const_iterator iteradorConst;

    // muestra los elementos del vector usando const_iterator
    for ( iteradorConst = miVector.begin();
          iteradorConst != miVector.end(); ++iteradorConst )
        cout << *iteradorConst << ' ';
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<int> enteros;

    enteros.push_back( 2 );
    enteros.push_back( 3 );
    enteros.push_back( 4 );
    enteros.push_back( 6 );
    enteros.push_back( 2 );
    enteros.push_back( 9 );

    cout << "\nMuestro el vector usando iteradores: ";
    imprimirVector( enteros );
    cout << "\nMuestro el contenido invertido del vector enteros: ";

    // dos iteradores const_reverse
    vector< int >::const_reverse_iterator iteradorInverso;
    vector< int >::const_reverse_iterator iteradorTemp = enteros.rend();

    // muestra el vector en orden inverso usando reverse_iterator
    // enteros.rbegin() devuelve un iterador al último elemento
    for ( iteradorInverso = enteros.rbegin();
    iteradorInverso!= iteradorTemp; ++iteradorInverso )
    cout << *iteradorInverso << ' ';


    return a.exec();
}

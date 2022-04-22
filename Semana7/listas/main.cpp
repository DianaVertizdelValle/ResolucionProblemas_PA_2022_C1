#include <QCoreApplication>
#include <list>
#include <iostream>

using namespace std;

template < typename T >
void imprimirLista( const list< T > &refLista )
{
    if ( refLista.empty() ) // lista está vacía
        cout << "Lista esta vacia";
    else
    {
        ostream_iterator< T > output( cout, " " );
        copy( refLista.begin(), refLista.end(), output );
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::list< int > valores;
    std::list< int > otrosValores;

    //inserta elementos en valores
    //push_front es específica de las clases
    //list y deque no vector
    valores.push_front( 1 );
    valores.push_front( 8 );
    valores.push_back( 7 );
    valores.push_back( 4 );
    valores.push_back( 6 );

    otrosValores.push_front( 11 );
    otrosValores.push_front( 8 );
    otrosValores.push_back( 4);
    otrosValores.push_back( 7 );
    otrosValores.push_back( 0 );

    cout << "valores contiene: ";
    imprimirLista( valores );

    valores.sort();
    cout << "\nvalores despues de ordenar contiene: ";
    imprimirLista( valores );

    cout << "\notrosValores contiene: ";
    imprimirLista( otrosValores );

    // elimina los elementos de otrosValores y los inserta en valores por orden
    valores.merge( otrosValores );
    cout << "\nDespues de merge:\n valores contiene: ";
    imprimirLista( valores );
    cout << "\n otrosValores contiene: ";
    imprimirLista( otrosValores );

    valores.pop_front(); // elimina elemento de la parte inicial
    valores.pop_back(); // elimina elemento de la parte final
    cout << "\nDespues de pop_front y pop_back:\n valores contiene: ";
    imprimirLista( valores );

    valores.unique(); // elimina elementos duplicados
    cout << "\nDespues de unique, valores contiene: ";
    imprimirLista( valores );

    // intercambia los elementos de valores y otrosValores
    valores.swap( otrosValores );
    cout << "\nDespues de swap:\n valores contiene: ";
    imprimirLista( valores );
    cout << "\n otrosValores contiene: ";
    imprimirLista( otrosValores );

    otrosValores.remove( 4 );
    cout << "\nDespues de remove( 4 ), otrosValores contiene: ";
    imprimirLista( otrosValores );
    cout << endl;

    return a.exec();
}

#include <QCoreApplication>
#include <map>
#include <iostream>

using namespace std;

//define un nombre corto para el tipo map utilizado en este programa
typedef std::map< int, double, std::less< int > > Mid;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Mid pares;

    // inserta ocho objetos value_type en pares
    pares.insert( pair<int,double>( 15, 2.7 ) );
    pares.insert( pair<int,double>( 30, 111.11 ) );
    pares.insert( pair<int,double>( 5, 1010.1 ) );
    pares.insert( pair<int,double>( 10, 22.22 ) );
    pares.insert( pair<int,double>( 25, 33.333 ) );
    pares.insert( pair<int,double>( 5, 77.54 ) ); // se ignora el valor duplicado
    pares.insert( pair<int,double>( 20, 9.345 ) );
    pares.insert( pair<int,double>( 15, 99.3 ) ); // se ignora el valor duplicado

    cout << "pares contiene:\nClave\tValor\n";

    for ( Mid::const_iterator iter = pares.begin();
          iter != pares.end(); ++iter )
    {
        cout << iter->first << '\t' << iter->second << '\n';
    }

//    for(pair<int,double> par: pares)
//    {
//        cout<<par.first<<'\t'<<par.second<<'\n';
//    }

//    for (auto par: pares)
//    {
//        cout<<par.first<<'\t'<<par.second<<'\n';
//    }

    pares[ 25 ] = 9999.99;
    pares[ 40 ] = 8765.43;

    return a.exec();
}

